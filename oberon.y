%{
#include<stdio.h>
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
%}
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
%token CONSTchar CONSTstring CONSTnum ident
%nonassoc '='  '#'  '<'  LE  '>'  GE  IN  IS
%left '+'  '-'  OR
%left '*'  '/'  DIV  MOD  '&'
%nonassoc UPLUS UMINUS

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
| VAR   VarList   DataList
|
;

ConstList :
  IdentDef '=' ConstExpr ';' ConstList
| 
;

TypeList : 
  IdentDef '=' Type ';' TypeList
|
;

VarList  : 
  IdentDefList ':' Type ';' VarList
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
| ARRAY ConstExprList OF Type 
| ARRAY               OF Type 
| RECORD '('Qualident')' FieldList END
| RECORD                 FieldList END
| POINTER TO Type
| PROCEDURE FormalPars
;

ConstExprList :
  ConstExpr ',' ConstExprList
| ConstExpr
;

FieldList    : 
  IdentDefList ':' Type ';' FieldList
| IdentDefList ':' Type
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
  IdentDef 
| IdentDef ',' IdentDefList
;

Qualident    : 
  ident
| ident '.' ident
;

IdentDef     : 
  ident 
| ident '*' 
| ident '-'
;


%%

int main()
{
  int res = yyparse();
  if (res==0)
    printf("Successful parse\n");
  else
    printf("Encountered errors\n");
  exit(res);
}



