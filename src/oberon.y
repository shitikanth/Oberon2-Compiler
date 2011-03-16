%{
#include "type.h"
#include "ast.h"
#include <stdio.h>
#include <string>
#include <cstring>
#include <queue>
#include <utility>
#include <algorithm>
#include "scope.h"
using namespace std;
//Lex stuff{{{
extern "C"{
  int yylex(void);
  int yyparse(void);
  int yywrap() { return 1; }
}
extern char *yytext;
extern int yylineno;
int yyerror(char *msg)
{
  printf("%s at line %d with [%s]\n",msg,yylineno,yytext);
}
int yyerror(const char *msg){
  yyerror((char *) msg);
}
//}}}

Scope *env;
Entry *entry;

queue<char *> identList;
queue<pair<string, TypeSpecifier *> > params;
queue< pair<queue<char *>, TypeSpecifier *> >fieldList;
TypeSpecifier * void_;

int fieldSize=0;
%}

%union{
  char * str;
  TypeSpecifier * typ;
  Ast * syn;
}

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
%token CONSTchar CONSTstring CONSTnum 
%token <str> ident
%nonassoc '='  '#'  '<'  LE  '>'  GE  IN  IS
%left '+'  '-'  OR
%left '*'  '/'  DIV  MOD  '&'
%nonassoc UPLUS UMINUS

%type <str> IdentDef Qualident
%type <typ> Type  Expr Factor 
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
| VAR   {printf("Found declarations.\n");} VarList DataList
|
;

ConstList :
  IdentDef '=' ConstExpr ';' ConstList
                    { ; //TODO next   
                    }

| 
;

TypeList : 
  IdentDef '=' Type ';'
                    {
                      printf("Add type %s\n",$1);
                      $3->print();
                      if(!env->insertType(string($1),$3))
                        fprintf(stderr,"error: Redeclaration of %s\n",$1);
                    }
  TypeList
|
;

VarList  : 
  IdentDefList 
  ':' Type ';'      { 
                      char *st;
                      while(!identList.empty()){
                        st=identList.front();
                        printf("Create symbol table entry for %s\n",st);
                        if(!env->declare(string(st),$3))
                          fprintf(stderr,"error: Redeclaration of %s\n",st);
                        identList.pop();
                        free(st);
                      }
                    }
                        
  VarList
| 
;

ProcList     :
  ProcDecl ';' ProcList
| ForwardDecl ';' ProcList
                    {
                      ;//MAYBE
                    }
|
;


ProcDecl     : 
  PROCEDURE         
  Receiver IdentDef          
  FormalPars ';'    
                    { 
                       Entry * e = env->lookup($3);
                       if(e!=NULL)
                         fprintf(stderr,"error %d: %s is declared already.\n",yylineno, $3);
                       else{
                         TypeSpecifier * t;
                         t=new TypeSpecifier(tPROCEDURE);
                         t->n=params.size();
                         t->child=new TypeSpecifier *[t->n];
                         int i=1;
                         env = new Scope(env);
                         while(i<t->n){
                           t->child[i++]=params.front().second;
                           env->declare(params.front().first,params.front().second);
                           params.pop();
                         }
                         t->child[0]=params.front().second;
                         params.pop();
                         env->getPrev()->declare(string($3),t);
                       }
                    }
  DeclSeq StatBlock
  END ident         
                    { 
                      if(strcmp($3,$10)!=0)
                        printf("error %d: Expected %s after END: found %s\n",yylineno,$3,$10);
                      Scope * prev = env->getPrev();
                      printf("%s\n",$3);
                      env->showAll();
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

| '(' FPsectionList ')'
                        {
                          params.push(make_pair("",void_));
                        }
|  '(' ')'
                        {
                          params.push(make_pair("",void_));
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
  ident ','             {
                          identList.push($1);
                        }
  IdentList
| ident                 {
                          identList.push($1);
                        }
;

Receiver: 			/* Ignore for now */
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
                        {  //TODO NEXT
                          $$ = new TypeSpecifier();
                          $$->node = tARRAY;
                          $$->n = 1;
                          $$->child = new TypeSpecifier *[1];
                          $$->child[0] = $4;
                        }
| ARRAY               OF Type 
                        { //TODO NEXT
                          $$ = new TypeSpecifier();
                          $$->node = tARRAY;
                          $$->n = 1;
                          $$->child = new TypeSpecifier *[1];
                          $$->child[0] = $3;
                        }
| RECORD '('Qualident')' FieldList END
                        {
                          //Neglect for now
                          $$=NULL;
                        }
| RECORD                 FieldList END
                        {
                          // TODO NEXT SCOPE
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
  FieldList  {//HAHA
             }
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

Statement    : 
  Designator ASSIGN Expr { //TODO NEXT HANDLE TYPE
                         }
| Designator /* Note that we have made some changes from the original Oberon-2 grammar 
            to make it unambiguous and to allow designator expressions to include return values from 
            functions with more than one parameters. */
| IF Expr THEN StatementSeq ElseIfBlock Else END 
| CASE Expr OF CaseList Else END 
| WHILE Expr DO StatementSeq END 
| REPEAT StatementSeq UNTIL Expr 
| FOR ident ASSIGN Expr TO Expr BY ConstExpr DO StatementSeq END 
| FOR ident ASSIGN Expr TO Expr DO StatementSeq END 
| LOOP StatementSeq END
| WITH GuardStatList Else END
| EXIT 
| RETURN Expr
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
| ConstExpr DOTS ConstExpr
| Guard DO StatementSeq 
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
/* Relations */
  Expr '=' Expr
| Expr '#' Expr {;
                //TODO
                //Type checking, type expansion, return type
                }
| Expr '<' Expr
| Expr LE Expr
| Expr '>' Expr
| Expr GE Expr
| Expr IN Expr
| Expr IS Expr
| '+' Expr %prec UPLUS
| '-' Expr %prec UMINUS
| Expr '+' Expr
| Expr '-' Expr
| Expr OR Expr
| Expr '*' Expr
| Expr '/' Expr
| Expr DIV Expr
| Expr MOD Expr
| Expr '&' Expr
| Factor
;

Factor       : 
  Designator {  }
| CONSTnum 
| CONSTchar { $$ = new TypeSpecifier(tCHAR);}
| CONSTstring { $$ = new TypeSpecifier();
		$$->node = 11;
		$$->n = 1;
        // TODO INLCUDE REAL INT SHORTINT LONGINT
		}
| NIL 
| Set 
| '(' Expr ')' 
| '~' Factor
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
  ident optSuffix
;

optSuffix :
  '.' ident  optSuffix
| '[' ExprList ']'  optSuffix
| '^'  optSuffix
| '(' ExprList ')' optSuffix   /* Changes from original grammar */
| '(' ')'                      /* Changes from original grammar */
|
;

ExprList     : 
  Expr 
| Expr ',' ExprList
;

IdentDefList    : 
  IdentDef      { identList.push($1); 
                /*printf("push in list - %s size of list %d \n",$1,identList.size());*/ }
| IdentDef ','  { identList.push($1); 
                /*printf("push in list - %s size of list %d \n",$1,identList.size());*/ }
  IdentDefList
                
;

Qualident    : 
  ident         { strcpy($$,$1); }
| ident '.' ident 
                { 
                  strcpy($$,$1);
                  strcat($$,".");
                  strcat($$,$3);
                }

;

IdentDef     : 
  ident        { $$ = $1; }
| ident '*'    
| ident '-'
;


%%

void createBasicTypes(){
  string temp[]={"BOOLEAN","CHAR","SHORTINT","INTEGER","LONGINT","REAL","LONGREAL","SET","VOID"};
  TypeSpecifier * t;
  for(int i=0; i<9; i++){
    t=new TypeSpecifier(i);
    env->insertType(temp[i],t);
  }
  void_=t;
  printf("Checks\n");
  printf("finding INT: %d\n",(int)(env->lookup(string("INTEGER"))));
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
  env->showAll();
  //env->deleteStuff();
  delete env;
  if (res==0)
    printf("Successful parse\n");
  else
    printf("Encountered errors\n");
  exit(res);
}



