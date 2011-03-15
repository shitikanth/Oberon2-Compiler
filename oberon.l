%{ 
	#include "oberon.hh"
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	void parseComment(void);
	extern int yydebug;
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

/* DOSEOF      \x1A */

%%

"(*"  		{ parseComment(); }
[ \t]		{ ; }
[\r\n]		{ yylineno++; }

":="    	{ return(ASSIGN); }
"<="        { return(LE); } 
">="      	{ return(GE); }
".."      	{ return(DOTS); }

"ARRAY"		{ return(ARRAY); }
"BEGIN"		{ return(BBEGIN); } // Watch for clash with lex's macro!
"BY"		{ return(BY); }
"CASE"		{ return(CASE); }
"CONST"		{ return(CONST); }
"DIV"		{ return(DIV); }
"DO"		{ return(DO); }
"ELSE"		{ return(ELSE); }
"ELSIF"		{ return(ELSIF); }
"END"		{ return(END); }
"EXIT"		{ return(EXIT); }
"FOR"		{ return(FOR); }
"IF"		{ return(IF); }
"IMPORT"	{ return(IMPORT); }
"IN"		{ return(IN); }
"IS"		{ return(IS); }
"LOOP"		{ return(LOOP); }
"MOD"		{ return(MOD); }
"MODULE"	{ return(MODULE); }
"NIL"		{ return(NIL); }
"OF"		{ return(OF); }
"OR"		{ return(OR); }
"POINTER"	{ return(POINTER); }
"PROCEDURE"	{ return(PROCEDURE); }
"RECORD"	{ return(RECORD); }
"REPEAT"	{ return(REPEAT); }
"RETURN"	{ return(RETURN); }
"THEN"		{ return(THEN); }
"TO"		{ return(TO); }
"TYPE"		{ return(TYPE); }
"UNTIL"		{ return(UNTIL); }
"VAR"		{ return(VAR); }
"WHILE"		{ return(WHILE); }
"WITH"		{ return(WITH); }

{digit}+/".."   { return(CONSTnum); }
{INTEGER}		{ return(CONSTnum); }
{REAL}			{ return(CONSTnum); }

{CHAR}		{ return(CONSTchar); }
{STRING}	{ return(CONSTstring); }

{IDENT}		{ return(ident); }
.			{ return yytext[0]; }

%%

void parseComment(void)
{ 
  int nestlevel=1;   // Counter for level of nesting
  char c, n;
  while ((c=input())!= EOF) {
    if (c=='*') { // Might be an end of comment!
      if ((n=input())==')') { // is an end!
        nestlevel--;
        if (nestlevel==0)  // Finished this comment
          break;
      }
      else   // Not an end of comment - spit back character
        unput(n);
    }
    else if (c=='(') { // start of another comment?
      if ((n=input())=='*') // is a start!
        nestlevel++;
      else   // Not a start of comment - spit back character
        unput(n);
    }
    else if (c=='\n')
      yylineno++;
  }  
}