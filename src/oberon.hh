
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ARRAY = 258,
     IMPORT = 259,
     RETURN = 260,
     BBEGIN = 261,
     IN = 262,
     THEN = 263,
     BY = 264,
     IS = 265,
     TO = 266,
     CASE = 267,
     LOOP = 268,
     TYPE = 269,
     CONST = 270,
     MOD = 271,
     UNTIL = 272,
     DIV = 273,
     MODULE = 274,
     VAR = 275,
     DO = 276,
     NIL = 277,
     WHILE = 278,
     ELSE = 279,
     OF = 280,
     WITH = 281,
     ELSIF = 282,
     OR = 283,
     END = 284,
     POINTER = 285,
     EXIT = 286,
     PROCEDURE = 287,
     FOR = 288,
     RECORD = 289,
     IF = 290,
     REPEAT = 291,
     ASSIGN = 292,
     LE = 293,
     GE = 294,
     DOTS = 295,
     CONSTchar = 296,
     CONSTstring = 297,
     CONSTnum = 298,
     ident = 299,
     UMINUS = 300,
     UPLUS = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 32 "oberon.y"

  char * str;
  TypeSpecifier * typ;
  Ast * syn;



/* Line 1676 of yacc.c  */
#line 106 "oberon.hh"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

