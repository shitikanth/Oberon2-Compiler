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
queue< pair<queue<char *>, TypeSpecifier *> >fieldList;
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
%type <typ> Type
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
|
;


ProcDecl     : 
  PROCEDURE Receiver IdentDef FormalPars ';' 
            DeclSeq StatBlock
  END ident
;

ForwardDecl :
  PROCEDURE '^' Receiver IdentDef FormalPars
;


FormalPars: 
  '(' FPsectionList ')' ':' Qualident
| '(' FPsectionList ')' 
|  '(' ')'
|
;

FPsectionList:
  FPsection ';' FPsectionList
| FPsection
;

FPsection:
  IdentList ':' Type 
| VAR IdentList ':' Type
;

IdentList:
  IdentList ',' ident
| ident
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
                            $$ = (TypeSpecifier *) (smt->value);
                          }
                          else{
                            fprintf(stderr,"%s is not a declared Type.\n",$1);
                          }
                        }
| ARRAY ConstExprList OF Type 
                        {
                          $$ = new TypeSpecifier();
                          $$->node = tARRAY;
                          $$->n = 1;
                          $$->child = new TypeSpecifier *[1];
                          $$->child[0] = $4;
                        }
| ARRAY               OF Type 
                        {
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
                          fieldSize=0;
                        }
| POINTER TO Type
                        {
                          $$ = new TypeSpecifier();
                          $$->node = tPOINTER;
                          $$->n = 1;
                          $$->child = new TypeSpecifier *[1];
                          $$->child[0] = $3;
                        }
| PROCEDURE FormalPars
                        {$$=NULL;}
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
                        }
  FieldList  {//HAHA
             }
| IdentDefList ':' Type
                        {
                          fieldList.push(make_pair(identList,$3));
                          fieldSize+=identList.size();
                        }
|
;

StatementSeq : 
  Statement ';' StatementSeq
| Statement
;

Statement    : 
  Designator ASSIGN Expr 
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
/* Relations */
  Expr '=' Expr
| Expr '#' Expr
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
  Designator
| CONSTnum 
| CONSTchar 
| CONSTstring 
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
  string temp[]={"BOOLEAN","CHAR","SHORTINT","INT","LONGINT","REAL","LONGREAL","SET"};
  for(int i=0; i<8; i++){
    env->insertType(temp[i],new TypeSpecifier(i));
  }
  printf("Checks\n");
  printf("finding INT: %d\n",(int)(env->lookup(string("INT"))));
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
  if (res==0)
    printf("Successful parse\n");
  else
    printf("Encountered errors\n");
  exit(res);
}



