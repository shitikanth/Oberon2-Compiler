%{
//Include files{{{
#include "type.hh"
#include "ast.hh"
#include <stdio.h>
#include <string>
#include <cstring>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
#include "scope.hh"
using namespace std;
//}}}

//Lex stuff{{{
extern "C"{
  int yylex(void);
  int yyparse(void);
  int yywrap() { return 1; }
}

extern char *yytext;
extern int yylineno;

extern int yyerror(char *msg);

int yyerror(const char *msg){
  yyerror((char *) msg);
}
//}}}

// Global variables{{{
Scope *env;                                                 // current environment
queue<char *> identList;                                    // global list of identifiers
queue<pair<string, TypeSpecifier *> > params;               // global list of parameters
queue< pair<queue<char *>, TypeSpecifier *> >fieldList;     // global list of fieldnames*type in records
int fieldSize=0;
stack <TypeSpecifier *> expectedType;                       // for procedure calls
stack <TypeSpecifier *> returnType;                         // for nested procedure declarations
string st;
//}}}
%}
/* Union {{{ */
%union{
  char * str;
  TypeSpecifier * typ;
  TypeList * typlist;                                       //For expression list
  }
/*}}}*/
/* List of tokens {{{*/
%token ARRAY
%token IMPORT
%token RETURN
%token BBEGIN
%token IN
%token THEN
%token BY
%token IS
%token TO
%token CASE
%token LOOP
%token TYPE
%token CONST
%token MOD
%token UNTIL
%token DIV
%token MODULE
%token VAR
%token DO
%token NIL
%token WHILE
%token ELSE
%token OF
%token WITH
%token ELSIF
%token OR
%token END
%token POINTER
%token EXIT
%token PROCEDURE
%token FOR
%token RECORD
%token IF
%token REPEAT
%token ASSIGN LE GE DOTS
%token CONSTchar CONSTstring CONSTnum CONSTreal
%token <str> ident
/*}}}*/
/* Associativity, precedence and type {{{ */
%nonassoc '='  '#'  '<'  LE  '>'  GE  IN  IS
%left '+'  '-'  OR
%left '*'  '/'  DIV  MOD  '&'
%nonassoc UPLUS UMINUS
%type <str> IdentDef Qualident
%type <typ> Type Expr Factor Designator
%type <typlist> ExprList
/*}}}*/
%%

Module:
  MODULE ident ';' ImportList DeclSeq StatBlock END ident '.'
;

ImportList:
  IMPORT ImportListTemp ';'
  |
;

ImportListTemp:
  ImportListTemp ',' Import
  | Import
;

Import:
  ident ASSIGN ident
  | ident
;

StatBlock:
  BBEGIN StatementSeq
  |
;

DeclSeq:
  DataList ProcList
;

DataList:
  CONST ConstList DataList
| TYPE  TypeList  DataList
| VAR   VarList DataList
|
;

ConstList :
  IdentDef '=' ConstExpr ';' ConstList
|
;

TypeList :
  IdentDef '=' Type ';'
  {
    printf("Add type %s\n",$1);
    if(!env->insertType(string($1),$3))
      fprintf(stderr,"error: Redeclaration of %s\n",$1);
  }
  TypeList
|
;

VarList :
  IdentDefList
  ':' Type ';'

  {
    char *st;
    while(!identList.empty()){
      st=identList.front();
      printf("Declare variable %s.\n",st);
      if(!env->declare(string(st),$3))
        fprintf(stderr,"error: Redeclaration of %s\n",st);
      identList.pop();
      free(st);
    }
  }

  VarList
|
;

ProcList :
  ProcDecl ';' ProcList
| ForwardDecl ';' ProcList
|
;


ProcDecl     :
  PROCEDURE
  Receiver IdentDef
  FormalPars ';'
  {
    Entry * e = env->lookup($3);
    env = new Scope(env);
    TypeSpecifier * t;

    if(e!=NULL){
      fprintf(stderr,"error %d: %s is declared already.\n",yylineno, $3);
      t=basicType[tERROR];
      returnType.push(basicType[tERROR]);
    }

    else{
      t=new TypeSpecifier(tPROCEDURE);
      t->n=params.size();
      t->child=new TypeSpecifier *[t->n];
      int i=1;
      while(i<t->n){
        t->child[i++]=params.front().second;
        env->declare(params.front().first,params.front().second);
        params.pop();
      }
      t->child[0]=params.front().second;
      returnType.push(t->child[0]);
      env->getPrev()->declare(string($3),t);
    }
    int i=1;
    printf("Start procedure declaration- %s().\n",$3);
    params.pop();
  }
  DeclSeq StatBlock
  END ident
  {
    returnType.pop();
    if(strcmp($3,$10)!=0)
      printf("error %d: Expected %s after END: found %s\n",yylineno,$3,$10);
    Scope * prev = env->getPrev();
    printf("Close procedure declaration- %s().\n",$3);
    delete env;
    env = prev;
  }
;

ForwardDecl :
  PROCEDURE '^' Receiver IdentDef FormalPars
;


FormalPars:
  '(' FPsectionList ')' ':' Qualident
  {
    Entry * e=env->lookup($5);
    if(e==NULL)
      fprintf(stderr,"error: %s is not declared.\n",$5);
    else if(e->type->node!=-1)
      fprintf(stderr,"error: %s is not a type.\n",$5);
      else{
        params.push(make_pair("",(TypeSpecifier *)e->type->child[0]));
      }
  }
| '(' ')' ':' Qualident
  {
    Entry * e=env->lookup($4);
    if(e==NULL)
      fprintf(stderr,"error: %s is not declared.\n",$4);
    else if(e->type->node!=-1)
      fprintf(stderr,"error: %s is not a type.\n",$4);
    else{
      params.push(make_pair("",(TypeSpecifier *)e->type->child[0]));
    }
  }
| '(' FPsectionList ')'
  {
    params.push(make_pair("",basicType[8]));
  }
|  '(' ')'
  {
    params.push(make_pair("",basicType[8]));
  }
|
;

FPsectionList:
  FPsection ';' FPsectionList
| FPsection
;

FPsection:
  IdentList ':' Type
  {
    string s;
    while(!identList.empty()){
      s=identList.front();
      identList.pop();
      params.push(make_pair(s,$3));
    }
  }

| VAR IdentList ':' Type
  {
    string s;
    while(!identList.empty()){
      s=identList.front();
      identList.pop();
      params.push(make_pair(s,$4));
    }
  }
;

IdentList:
  ident ','
  {
    identList.push($1);
  }
  IdentList
| ident
  {
    identList.push($1);
  }
;

Receiver:
  '(' ident ':' ident ')'
| '(' VAR ident ':' ident ')'
|
;

Type:
  Qualident
  {
    Entry * smt;
    $$ = NULL;
    smt = env->lookup(string($1));
    if(smt==NULL){
      fprintf(stderr,"error: %s not declared.\n",$1);
    }
    else if(smt->type->node==-1){
      $$ = (TypeSpecifier *) (smt->type->child[0]);
    }
    else{
      fprintf(stderr,"%s is not a declared Type.\n",$1);
    }
  }
| ARRAY ConstExprList OF Type
  {  //TODO during code generation
    $$ = new TypeSpecifier();
    $$->node = tARRAY;
    $$->n = 1;
    $$->child = new TypeSpecifier *[1];
    $$->child[0] = $4;
  }
| ARRAY               OF Type
  { //Dynamic Array implement if time permits
    $$ = new TypeSpecifier();
    $$->node = tARRAY;
    $$->n = 1;
    $$->child = new TypeSpecifier *[1];
    $$->child[0] = $3;
  }
| RECORD '('Qualident')' FieldList END
  {
    //Extension of Record if time permits
    $$=NULL;
  }
| RECORD                 FieldList END
  {
    $$= new TypeSpecifier();
    $$->node = tRECORD;
    $$->n=fieldSize;
    fieldSize=0;
    $$->child = new TypeSpecifier *[$$->n];
    $$->fields = new string [$$->n];
    int count=0;
    while(!fieldList.empty()){
      queue<char *> tmp = fieldList.front().first;
      while(!tmp.empty()){
        $$->fields[count]=tmp.front();
        tmp.pop();
        $$->child[count++]=fieldList.front().second;
      }
      fieldList.pop();
    }
  }
| POINTER TO Type
  {
    $$ = new TypeSpecifier(tPOINTER);
    $$->n = 1;
    $$->child = new TypeSpecifier *[1];
    $$->child[0] = $3;
  }
| PROCEDURE FormalPars
  {
    $$=new TypeSpecifier(tPROCEDURE);
    $$->n=params.size();
    $$->child=new TypeSpecifier *[$$->n];
    int i=1;
    while(i<$$->n){
      $$->child[i++]=params.front().second;
      params.pop();
    }
    $$->child[0]=params.front().second;
    params.pop();
  }
;

ConstExprList :
  ConstExpr ',' ConstExprList
| ConstExpr
;

FieldList    :
  IdentDefList ':' Type ';'
  {
    fieldList.push(make_pair(identList,$3));
    fieldSize+=identList.size();
    queue<char *> tmp = identList;
    identList=queue<char *>();
  }
  FieldList
| IdentDefList ':' Type
  {
    fieldList.push(make_pair(identList,$3));
    fieldSize+=identList.size();
    identList=queue<char *>();
  }
|
;

StatementSeq :
  Statement ';' StatementSeq
| Statement
;

Statement :
Designator ASSIGN Expr
  {
    if($3!=basicType[tERROR]){
      if (!CheckEquivalence($1,$3))
        if(!TypeExpandable($1,$3))
          typeError(0,$3,$1,yylineno);
    }
 }

| Designator
                        /* Note that we have made some changes from the original Oberon-2 grammar
                        to make it unambiguous and to allow designator expressions to include return values from
                        functions with more than one parameters. */

| IF Expr
                        {
                          if($2 != basicType[tERROR]){
                            if ($2 != basicType[tBOOLEAN]){
                              fprintf(stderr,"condition in IF should be boolean.\n");
                            }
                          }
                        }
  THEN StatementSeq ElseIfBlock Else END

| CASE Expr OF CaseList Else END
                        {
                          /*
                          Syntactic sugar. To be implemented if time permits.
                          */
                        }

| WHILE Expr
  {
    if($2 != basicType[tERROR]){
      if ($2 != basicType[tBOOLEAN]){
        //$$ = basicType[tERROR];
        fprintf(stderr,"condition in WHILE should be boolean.\n");
      }
    }
  }
  DO StatementSeq END

| REPEAT StatementSeq UNTIL Expr
  {
    if($4 != basicType[tERROR]){
      if ($4 != basicType[tBOOLEAN]){
        //$$ = basicType[tERROR];
        fprintf(stderr,"condition in WHILE should be boolean.\n");
      }
    }
  }

| FOR ident ASSIGN Expr TO Expr BY ConstExpr
  {
    Entry * smt;
    //$$ = NULL;
    smt = env->lookup(string($2));
    if(smt==NULL){
      fprintf(stderr,"error: %s not declared.\n",$2);
    }
    else if(smt->type->node==-1){
      fprintf(stderr,"%s is  a declared Type.\n",$2);
    }
    else{
      if (isArithComparable($4,$6) //&& isArithComparable($6,$8)
        && CheckEquivalence(smt->type,$4));
      //$$ = basicType[tVOID];
      else ;
      //$$ = basicType[tERROR];
    }
  }
  DO StatementSeq END
| FOR ident ASSIGN Expr TO Expr
  {
    Entry * smt;
    //$$ = NULL;
    smt = env->lookup(string($2));
    if(smt==NULL){
      fprintf(stderr,"error: %s not declared.\n",$2);
    }
    else if(smt->type->node==-1){
      fprintf(stderr,"%s is  a declared Type.\n",$2);
    }
    else{
      if (isArithComparable($4,$6) //&& isArithComparable($6,$8)
        && CheckEquivalence(smt->type,$4));
      //$$ = basicType[tVOID];
      else ;
      //$$ = basicType[tERROR];
    }
  }

  DO StatementSeq END

| LOOP StatementSeq END

| WITH GuardStatList Else END

| EXIT
| RETURN Expr
  {
    if(returnType.size()==0){
      fprintf(stderr,"error at line %d: Cant return here.\n",yylineno);
    }
    else if($2!=basicType[tERROR]&&returnType.top()!=basicType[tERROR]){
      if(!CheckEquivalence(returnType.top(),$2)){
        fprintf(stderr,"Invalid return type.\n");
        typeError(0,$2,returnType.top(),yylineno);
      }
    }
  }
| RETURN
|
;

ElseIfBlock:
  ELSIF Expr THEN StatementSeq ElseIfBlock
|
;

Else:
  ELSE StatementSeq
|
;

CaseList:
  Case
| Case '|' CaseList
;

Case:
  CaseLabelList ':' StatementSeq
|
;

CaseLabelList:
  CaseLabels
| CaseLabels ',' CaseLabelList
;

CaseLabels:
  ConstExpr
| ConstExpr DOTS ConstExpr
;

GuardStatList :
  Guard DO StatementSeq '|' GuardStatList
| Guard DO StatementSeq
;

Guard        :
  Qualident ':' Qualident
;

ConstExpr    :
  Expr
;

Expr         :
  Expr '=' Expr { $$ = assign_rel_type($1,$3,yylineno);}
| Expr '#' Expr { $$ = assign_rel_type($1,$3,yylineno);}
| Expr '<' Expr { $$ = assign_rel_type($1,$3,yylineno);}
| Expr LE Expr  { $$ = assign_rel_type($1,$3,yylineno);}
| Expr '>' Expr { $$ = assign_rel_type($1,$3,yylineno);}
| Expr GE Expr  { $$ = assign_rel_type($1,$3,yylineno);}
| Expr IN Expr
| Expr IS Expr
  {
    if( $3->node==-1){
      //the second expression defines a type
      $$ = basicType[tBOOLEAN];
    }
    else  {
      $$ = basicType[tERROR];
      if ($3!=basicType[tERROR])
        fprintf(stderr,"Type error at %d: expression does not define a type\n",yylineno);
    }
  }
| '+' Expr %prec UPLUS 
  {
    if (isArithmetic($2))
      $$ = $2;
    else {
      $$ = basicType[tERROR];
      if ($2!=basicType[tERROR])
        fprintf(stderr,"Type error at %d: Not an arithmetic type\n",yylineno);
    }
 }
| '-' Expr %prec UMINUS
  {
    if (isArithmetic($2))
      $$ = $2;
    else {
      $$ = basicType[tERROR];
      if ($2!=basicType[tERROR])
        fprintf(stderr,"Type error at %d: Not an arithmetic type\n",yylineno);
    }
  }
| Expr '+' Expr {$$ = assign_add_type($1,$3,yylineno); }
| Expr '-' Expr {$$ = assign_add_type($1,$3,yylineno); }

| Expr OR Expr
  {
    if ( CheckEquivalence($1,basicType[tBOOLEAN]) && CheckEquivalence($3,basicType[tBOOLEAN]) )
      $$ = basicType[tBOOLEAN];
    else {
      $$ = basicType[tERROR];
      if ( $1!=basicType[tERROR] && $3!=basicType[tERROR])
        typeError(0,$1,basicType[tBOOLEAN],yylineno);
    }
  }
| Expr '*' Expr
  {
    //
    // if(isArithmetic($1->type,$3->type){
    //    $$ = typeExpansion($1,$3);
    // }
    // typeExpansion will automatically typecast the values
    // to be implemented in the next stage
    //
    $$ = assign_add_type($1,$3,yylineno);
  }

| Expr '/' Expr {$$ = assign_add_type($1,$3,yylineno); }

| Expr DIV Expr 
  {
    if (CheckEquivalence($1,basicType[tINTEGER]) && CheckEquivalence($3,basicType[tINTEGER]) )
      $$ = basicType[tINTEGER];
    else {
      $$ = basicType[tERROR];
      if ( $1!=basicType[tERROR] && $3!=basicType[tERROR])
        fprintf(stderr,"Type error in division DIV at line number %d",yylineno);
    }
  }
| Expr MOD Expr
  {
    if ( CheckEquivalence($1,basicType[tINTEGER]) && CheckEquivalence($3,basicType[tINTEGER]) )
      $$ = basicType[tINTEGER];
    else {
      $$ = basicType[tERROR];
      if ( $1!=basicType[tERROR] && $3!=basicType[tERROR])
        fprintf(stderr,"Type error in division DIV at line number %d",yylineno);
    }
  }
| Expr '&' Expr 
  {
    if ( CheckEquivalence($1,basicType[tBOOLEAN]) && CheckEquivalence($3,basicType[tBOOLEAN]) )
      $$ = basicType[tBOOLEAN];
    else {
      $$ = basicType[tERROR];
      if ( $1!=basicType[tERROR] && $3!=basicType[tERROR])
        fprintf(stderr,"Type error in division DIV at line number %d",yylineno);
    }
  }
| Factor        { $$ = $1;}
;

Factor       :
  Designator { $$ = $1; }
| CONSTnum  { $$ = basicType[tINTEGER];}
| CONSTreal { $$ = basicType[tREAL];}
| CONSTchar { $$ = basicType[tCHAR];}

| CONSTstring { $$ = new TypeSpecifier(tPOINTER);
                $$->n = 1;
                $$->child = new TypeSpecifier *[1];
                $$->child[0] = basicType[tCHAR];
              }

| NIL         { $$= basicType[tVOID];}
| Set         { $$= NULL;}
| '(' Expr ')'{ $$=$2;}
| '~' Factor  { $$=$2;}
;

Set          :
  '{' optElementList '}'
;

optElementList :
  ElementList
|
;

ElementList :
  Element ',' ElementList
| Element
;

Element      :
  Expr
| Expr DOTS Expr
;

Designator   :
  ident
                {
                  Entry *e = env->lookup(string($1));
                  if(e==NULL){
                     fprintf(stderr,"error at line %d: %s is not declared in this scope.\n",yylineno,$1);
                     expectedType.push(basicType[tERROR]);
                  }
                  else
                    expectedType.push(env->lookup(string($1))->type);
                }
  optSuffix     {
                    $$=expectedType.top();
                    expectedType.pop();
                }
;

optSuffix :        /*
                        optSuffix has an inherited attribute expectedType that gives it its expected type
                        (from the identifier or through of sequence of procedure / array calls / pointer)
                   */
  '.' ident  optSuffix
| '[' ExprList ']'
                 {
                      TypeSpecifier * tmp = expectedType.top();
                      if(tmp->node == tARRAY){
//                        if(validateFunctionCall(tmp,$2,yylineno))
//                        TODO
                          expectedType.pop();
                          expectedType.push(tmp->child[0]);
                      }
                      else{
                        fprintf(stderr,"error at line %d: invalid array call. not a array\n",yylineno);
                        expectedType.pop();
                        expectedType.push(basicType[tERROR]);
                      }
                      // TODO IMP: memory leak - need to delete the type list
                    }

    optSuffix
| '^'  optSuffix
| '(' ExprList ')'
                    {
                      TypeSpecifier * tmp = expectedType.top();
                      if(tmp!=basicType[tERROR]){
                        if(tmp->node == tPROCEDURE){
                          if(validateFunctionCall(tmp,$2,yylineno))
                            expectedType.pop();
                          expectedType.push(tmp->child[0]);
                        }
                        else{
                          fprintf(stderr,"error at line %d: Invalid procedure call. not a procedure\n",yylineno);
                          expectedType.pop();
                          expectedType.push(basicType[tERROR]);
                        }
                        // TODO IMP: memory leak - need to delete the type list
                      }
                    }
    optSuffix
| '(' ')'
  {
    TypeSpecifier * tmp = expectedType.top();
    if(tmp!=basicType[tERROR]){
      if(tmp->node == tPROCEDURE){
        if(tmp->n==1)
          expectedType.pop();
          expectedType.push(tmp->child[0]);
      }
      else{
        fprintf(stderr,"error at line %d: Invalid procedure call. not a procedure\n",yylineno);
        expectedType.pop();
        expectedType.push(basicType[tERROR]);
      }
      // TODO IMP: memory leak - need to delete the type list
    }
  }

   optSuffix
|
;

ExprList     :
  Expr
  {
    $$ = new TypeList;
    $$->head=$1;
    $$->size=1;
    $$->tail=NULL;
  }
| Expr ',' ExprList
  {
    $$ = new TypeList;
    $$->head=$1;
    $$->tail=$3;
    $$->size=$$->tail->size+1;
  }
;

IdentDefList    :
  IdentDef      { identList.push($1);
                /*printf("push in list - %s size of list %d \n",$1,identList.size());*/ }
| IdentDef ','  { identList.push($1);
                /*printf("push in list - %s size of list %d \n",$1,identList.size());*/ }
  IdentDefList

;

Qualident    :
  ident
  { 
    strcpy($$,$1);
  }
| ident '.' ident
  {
    strcpy($$,$1);
    strcat($$,".");
    strcat($$,$3);
  }
;

IdentDef     :
  ident
  {
    $$ = $1; 
  }
| ident '*'
| ident '-'
;


%%

/*
 *
 * Create the basic types and store them in the global array basicType.
 * Also create their symbol table entries.
 *
 */
void createBasicTypes(){
  string temp[]={"BOOLEAN","CHAR","SHORTINT","INTEGER","LONGINT","REAL","LONGREAL","SET","VOID","ERROR"};
  TypeSpecifier * t;
  for(int i=0; i<10; i++){
    t=new TypeSpecifier(i);
    env->insertType(temp[i],t);
    basicType[i]=t;
  }
}

int main(int argc, char* argv[]){
  FILE * out;
  char *name=(char *)"out.asm";
  if(argc>1)
    name=argv[1];
  out=fopen(name,"w");
  env = new Scope();
  createBasicTypes();
  int res = yyparse();
//  env->showAll();
//  env->deleteStuff();
  delete env;
  if (res==0)
    printf("Successful parse\n");
  else
    printf("Encountered errors\n");
  exit(res);
}



