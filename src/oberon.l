%{
  #include <stdlib.h>
  #include <stdio.h>
  #include <string.h>
  #include "type.hh"
  #include "ast.hh"
  #include "oberon.hh"
  void parseComment(void);
  extern int yydebug;
  extern "C"{
    int yylex(void);
  }
%}

letter      [A-Za-z]
digit       [0-9]
hexDigit    {digit}|[A-F]
ScaleFactor [DE][+-]?{digit}+

INTEGER     {digit}+|{digit}{hexDigit}*"H"
REAL        {digit}+"."{digit}*{ScaleFactor}?

IDENT       {letter}({letter}|{digit})*
CHAR        {digit}{hexDigit}*"X"
STRING      ['][^']*[']|["][^"]*["]

%%

"(*"        { parseComment(); }
[ \t]       { ; }
[\n]        { yylineno++; }

":="        { return(ASSIGN); }
"<="        { return(LE); }
">="        { return(GE); }
".."        { return(DOTS); }

"ARRAY"     { return(ARRAY); }
"BEGIN"     { return(BBEGIN); }
"BY"        { return(BY); }
"CASE"      { return(CASE); }
"CONST"     { return(CONST); }
"DIV"       { return(DIV); }
"DO"        { return(DO); }
"ELSE"      { return(ELSE); }
"ELSIF"     { return(ELSIF); }
"END"       { return(END); }
"EXIT"      { return(EXIT); }
"FOR"       { return(FOR); }
"IF"        { return(IF); }
"IMPORT"    { return(IMPORT); }
"IN"        { return(IN); }
"IS"        { return(IS); }
"LOOP"      { return(LOOP); }
"MOD"       { return(MOD); }
"MODULE"    { return(MODULE); }
"NIL"       { return(NIL); }
"OF"        { return(OF); }
"OR"        { return(OR); }
"POINTER"   { return(POINTER); }
"PROCEDURE" { return(PROCEDURE); }
"RECORD"    { return(RECORD); }
"REPEAT"    { return(REPEAT); }
"RETURN"    { return(RETURN); }
"THEN"      { return(THEN); }
"TO"        { return(TO); }
"TYPE"      { return(TYPE); }
"UNTIL"     { return(UNTIL); }
"VAR"       { return(VAR); }
"WHILE"     { return(WHILE); }
"WITH"      { return(WITH); }

{digit}+/".."   { /* This lexeme is made to counter the ambiguity
                    faced by the lexer when it tries to a..b . To
                    find the maximal match the lexer will match the a. with the "Real"
                    rule  and result in a syntax error. Hence we associate the dots with
                    the number which later can be removed to obtain the value of number */

                    return(CONSTnum);}

{INTEGER}   { return(CONSTnum); }
{REAL}      { return(CONSTreal); }

{CHAR}      { return(CONSTchar); }
{STRING}    { return(CONSTstring); }

{IDENT}     { yylval.str=(char *)malloc(1);
              strcpy(yylval.str,yytext);
              return(ident); }
.           { return yytext[0]; }

%%

void parseComment()
{
  int count=1;
  char x, y;
  while ((x=yyinput())!= EOF) {
    if (x=='*') {
      if ((y=yyinput())==')') {
        if (--count==0) break;
      }
      else unput(y);
    }
    else if (x=='(') {
      if ((y=yyinput())=='*') count++;
      else  unput(y);
    }
    else if (x=='\n')
      yylineno++;
  }
}

int yyerror(char * msg)
{
  printf("%s at line %d with [%s]\n",msg,yylineno,yytext);
}
