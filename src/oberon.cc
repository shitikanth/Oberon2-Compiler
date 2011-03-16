
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "oberon.y"

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
TypeSpecifier * basicType[9];

int fieldSize=0;


/* Line 189 of yacc.c  */
#line 113 "oberon.cc"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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
     CONSTreal = 299,
     ident = 300,
     UMINUS = 301,
     UPLUS = 302
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 40 "oberon.y"

  char * str;
  TypeSpecifier * typ;
  Ast * syn;



/* Line 214 of yacc.c  */
#line 204 "oberon.cc"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 216 "oberon.cc"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   640

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  141
/* YYNRULES -- Number of states.  */
#define YYNSTATES  299

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    47,     2,     2,    54,     2,
      62,    63,    52,    50,    59,    51,    58,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    60,    57,
      48,    46,    49,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,    69,    61,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,    64,    67,    65,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    13,    17,    18,    22,    24,    28,    30,
      33,    34,    37,    41,    45,    46,    51,    52,    58,    59,
      60,    67,    68,    69,    76,    77,    81,    85,    86,    87,
      98,   104,   110,   114,   117,   118,   122,   124,   128,   133,
     134,   139,   141,   147,   154,   155,   157,   162,   166,   173,
     177,   181,   184,   188,   190,   191,   198,   202,   203,   207,
     209,   213,   215,   223,   230,   236,   241,   253,   263,   267,
     272,   274,   277,   279,   280,   286,   287,   290,   291,   293,
     297,   301,   302,   304,   308,   310,   314,   320,   324,   328,
     330,   334,   338,   342,   346,   350,   354,   358,   362,   365,
     368,   372,   376,   380,   384,   388,   392,   396,   400,   402,
     404,   406,   408,   410,   412,   414,   416,   420,   423,   427,
     429,   430,   434,   436,   438,   442,   445,   449,   454,   457,
     462,   465,   466,   468,   472,   474,   475,   480,   482,   486,
     488,   491
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      71,     0,    -1,    19,    45,    57,    72,    76,    75,    29,
      45,    58,    -1,     4,    73,    57,    -1,    -1,    73,    59,
      74,    -1,    74,    -1,    45,    37,    45,    -1,    45,    -1,
       6,    98,    -1,    -1,    77,    84,    -1,    15,    79,    77,
      -1,    14,    80,    77,    -1,    -1,    20,    78,    82,    77,
      -1,    -1,   121,    46,   108,    57,    79,    -1,    -1,    -1,
     121,    46,    94,    57,    81,    80,    -1,    -1,    -1,   118,
      60,    94,    57,    83,    82,    -1,    -1,    85,    57,    84,
      -1,    87,    57,    84,    -1,    -1,    -1,    32,    93,   121,
      88,    57,    86,    76,    75,    29,    45,    -1,    32,    61,
      93,   121,    88,    -1,    62,    89,    63,    60,   120,    -1,
      62,    89,    63,    -1,    62,    63,    -1,    -1,    90,    57,
      89,    -1,    90,    -1,    91,    60,    94,    -1,    20,    91,
      60,    94,    -1,    -1,    45,    59,    92,    91,    -1,    45,
      -1,    62,    45,    60,    45,    63,    -1,    62,    20,    45,
      60,    45,    63,    -1,    -1,   120,    -1,     3,    95,    25,
      94,    -1,     3,    25,    94,    -1,    34,    62,   120,    63,
      96,    29,    -1,    34,    96,    29,    -1,    30,    11,    94,
      -1,    32,    88,    -1,   108,    59,    95,    -1,   108,    -1,
      -1,   118,    60,    94,    57,    97,    96,    -1,   118,    60,
      94,    -1,    -1,    99,    57,    98,    -1,    99,    -1,   115,
      37,   109,    -1,   115,    -1,    35,   109,     8,    98,   100,
     101,    29,    -1,    12,   109,    25,   102,   101,    29,    -1,
      23,   109,    21,    98,    29,    -1,    36,    98,    17,   109,
      -1,    33,    45,    37,   109,    11,   109,     9,   108,    21,
      98,    29,    -1,    33,    45,    37,   109,    11,   109,    21,
      98,    29,    -1,    13,    98,    29,    -1,    26,   106,   101,
      29,    -1,    31,    -1,     5,   109,    -1,     5,    -1,    -1,
      27,   109,     8,    98,   100,    -1,    -1,    24,    98,    -1,
      -1,   103,    -1,   103,    64,   102,    -1,   104,    60,    98,
      -1,    -1,   105,    -1,   105,    59,   104,    -1,   108,    -1,
     108,    40,   108,    -1,   107,    21,    98,    64,   106,    -1,
     107,    21,    98,    -1,   120,    60,   120,    -1,   109,    -1,
     109,    46,   109,    -1,   109,    47,   109,    -1,   109,    48,
     109,    -1,   109,    38,   109,    -1,   109,    49,   109,    -1,
     109,    39,   109,    -1,   109,     7,   109,    -1,   109,    10,
     109,    -1,    50,   109,    -1,    51,   109,    -1,   109,    50,
     109,    -1,   109,    51,   109,    -1,   109,    28,   109,    -1,
     109,    52,   109,    -1,   109,    53,   109,    -1,   109,    18,
     109,    -1,   109,    16,   109,    -1,   109,    54,   109,    -1,
     110,    -1,   115,    -1,    43,    -1,    44,    -1,    41,    -1,
      42,    -1,    22,    -1,   111,    -1,    62,   109,    63,    -1,
      65,   110,    -1,    66,   112,    67,    -1,   113,    -1,    -1,
     114,    59,   113,    -1,   114,    -1,   109,    -1,   109,    40,
     109,    -1,    45,   116,    -1,    58,    45,   116,    -1,    68,
     117,    69,   116,    -1,    61,   116,    -1,    62,   117,    63,
     116,    -1,    62,    63,    -1,    -1,   109,    -1,   109,    59,
     117,    -1,   121,    -1,    -1,   121,    59,   119,   118,    -1,
      45,    -1,    45,    58,    45,    -1,    45,    -1,    45,    52,
      -1,    45,    51,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    93,    93,    97,    98,   102,   103,   107,   108,   112,
     113,   117,   121,   122,   123,   123,   124,   128,   132,   137,
     136,   144,   149,   148,   162,   166,   167,   171,   179,   176,
     214,   219,   231,   235,   239,   243,   244,   248,   258,   270,
     270,   274,   280,   281,   282,   286,   301,   309,   317,   322,
     342,   349,   365,   366,   370,   369,   378,   384,   388,   389,
     393,   395,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   413,   414,   418,   419,   423,   424,
     428,   429,   433,   434,   438,   439,   443,   444,   448,   452,
     457,   458,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   482,
     483,   484,   485,   486,   491,   492,   493,   494,   498,   502,
     503,   507,   508,   512,   513,   517,   521,   522,   523,   524,
     525,   526,   530,   531,   535,   537,   537,   544,   545,   555,
     556,   557
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARRAY", "IMPORT", "RETURN", "BBEGIN",
  "IN", "THEN", "BY", "IS", "TO", "CASE", "LOOP", "TYPE", "CONST", "MOD",
  "UNTIL", "DIV", "MODULE", "VAR", "DO", "NIL", "WHILE", "ELSE", "OF",
  "WITH", "ELSIF", "OR", "END", "POINTER", "EXIT", "PROCEDURE", "FOR",
  "RECORD", "IF", "REPEAT", "ASSIGN", "LE", "GE", "DOTS", "CONSTchar",
  "CONSTstring", "CONSTnum", "CONSTreal", "ident", "'='", "'#'", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'&'", "UMINUS", "UPLUS", "';'",
  "'.'", "','", "':'", "'^'", "'('", "')'", "'|'", "'~'", "'{'", "'}'",
  "'['", "']'", "$accept", "Module", "ImportList", "ImportListTemp",
  "Import", "StatBlock", "DeclSeq", "DataList", "$@1", "ConstList",
  "TypeList", "$@2", "VarList", "$@3", "ProcList", "ProcDecl", "$@4",
  "ForwardDecl", "FormalPars", "FPsectionList", "FPsection", "IdentList",
  "$@5", "Receiver", "Type", "ConstExprList", "FieldList", "$@6",
  "StatementSeq", "Statement", "ElseIfBlock", "Else", "CaseList", "Case",
  "CaseLabelList", "CaseLabels", "GuardStatList", "Guard", "ConstExpr",
  "Expr", "Factor", "Set", "optElementList", "ElementList", "Element",
  "Designator", "optSuffix", "ExprList", "IdentDefList", "$@7",
  "Qualident", "IdentDef", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,    61,    35,    60,    62,
      43,    45,    42,    47,    38,   301,   302,    59,    46,    44,
      58,    94,    40,    41,   124,   126,   123,   125,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    72,    73,    73,    74,    74,    75,
      75,    76,    77,    77,    78,    77,    77,    79,    79,    81,
      80,    80,    83,    82,    82,    84,    84,    84,    86,    85,
      87,    88,    88,    88,    88,    89,    89,    90,    90,    92,
      91,    91,    93,    93,    93,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    97,    96,    96,    96,    98,    98,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   106,   106,   107,   108,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   111,   112,
     112,   113,   113,   114,   114,   115,   116,   116,   116,   116,
     116,   116,   117,   117,   118,   119,   118,   120,   120,   121,
     121,   121
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     9,     3,     0,     3,     1,     3,     1,     2,
       0,     2,     3,     3,     0,     4,     0,     5,     0,     0,
       6,     0,     0,     6,     0,     3,     3,     0,     0,    10,
       5,     5,     3,     2,     0,     3,     1,     3,     4,     0,
       4,     1,     5,     6,     0,     1,     4,     3,     6,     3,
       3,     2,     3,     1,     0,     6,     3,     0,     3,     1,
       3,     1,     7,     6,     5,     4,    11,     9,     3,     4,
       1,     2,     1,     0,     5,     0,     2,     0,     1,     3,
       3,     0,     1,     3,     1,     3,     5,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     3,     1,
       0,     3,     1,     1,     3,     2,     3,     4,     2,     4,
       2,     0,     1,     3,     1,     0,     4,     1,     3,     1,
       2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     4,     0,    16,     8,     0,
       6,    21,    18,    14,    10,    27,     0,     3,     0,   139,
      16,     0,    16,     0,    24,    73,     0,    44,    11,     0,
       0,     7,     5,   141,   140,    13,     0,    12,     0,    16,
       0,   134,    72,     0,    73,     0,     0,    70,     0,     0,
      73,   131,     9,    59,    61,     0,    44,     0,     0,    27,
      27,     0,     0,    34,    57,   137,     0,    45,   114,   112,
     113,   110,   111,     0,     0,     0,     0,   120,     0,    89,
     108,   115,   109,    15,     0,   135,    71,     0,     0,     0,
      77,     0,     0,     0,     0,     0,     0,   131,     0,     0,
     125,    73,     0,     0,     0,     0,     0,    34,    25,    26,
       0,     0,    53,     0,     0,    51,     0,     0,     0,     0,
      19,    98,    99,     0,   117,   123,     0,   119,   122,    18,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,    68,
      73,    73,     0,    73,     0,     0,    73,     0,   131,   128,
     130,   132,     0,     0,    58,    60,     2,    34,     0,     0,
       0,    47,     0,     0,    50,     0,    41,    33,     0,    36,
       0,     0,    49,     0,   138,    21,   116,     0,   118,     0,
      17,    96,    97,   106,   105,   102,    93,    95,    90,    91,
      92,    94,   100,   101,   103,   104,   107,    22,   136,    77,
      78,     0,    82,    84,     0,    76,    69,    87,    88,     0,
      75,    65,   126,     0,   131,   131,    30,     0,     0,    28,
      46,    52,     0,    39,    32,     0,     0,    57,    56,    20,
     124,   121,    24,     0,    81,    73,     0,     0,    64,     0,
       0,     0,    77,   133,   129,   127,     0,    42,    16,     0,
       0,     0,    35,    37,     0,    54,    23,    63,    79,    80,
      83,    85,    86,     0,     0,     0,    43,    10,    38,    40,
      31,    48,    57,     0,    73,    73,    62,     0,    55,     0,
       0,    75,     0,    73,    67,    74,    29,     0,    66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     9,    10,    26,    14,    15,    24,    22,
      20,   185,    39,   242,    28,    29,   258,    30,   115,   178,
     179,   180,   260,    58,    66,   111,   117,   282,    52,    53,
     252,   152,   209,   210,   211,   212,    90,    91,   213,    79,
      80,    81,   126,   127,   128,    82,   100,   162,   118,   147,
      67,    41
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -226
static const yytype_int16 yypact[] =
{
       4,   -16,    40,   -14,  -226,    44,     8,    59,    35,   -24,
    -226,    30,    30,  -226,    71,    53,    41,  -226,     8,   -15,
      59,    42,    59,    45,    30,   595,    63,   -11,  -226,    43,
      49,  -226,  -226,  -226,  -226,  -226,    15,  -226,   554,    59,
      36,    50,   554,   554,   595,   554,    54,  -226,    57,   554,
     595,   -34,  -226,    55,    74,    70,    58,    -3,    30,    53,
      53,    39,   106,    62,   -31,    72,    64,  -226,  -226,  -226,
    -226,  -226,  -226,   554,   554,   554,   127,   554,    75,   519,
    -226,  -226,  -226,  -226,    15,  -226,   519,   293,   100,   341,
     109,   114,    79,   103,   358,   124,    97,   -34,   376,   554,
    -226,   595,   554,    85,    30,    99,    86,    62,  -226,  -226,
      15,   120,    88,    15,    -7,  -226,    54,   119,   113,   121,
    -226,  -226,  -226,   228,  -226,   406,   107,  -226,   117,    30,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   123,    30,   554,  -226,
     595,   595,   149,   595,    54,   554,   595,   554,   -34,  -226,
    -226,   178,   118,   115,  -226,   519,  -226,    62,   122,   138,
     129,  -226,    15,   554,  -226,   142,   132,  -226,   134,   141,
     135,   136,  -226,    15,  -226,    30,  -226,   554,  -226,   554,
    -226,   536,   536,  -226,  -226,    14,   536,   536,   536,   536,
     536,   536,    14,    14,  -226,  -226,  -226,  -226,  -226,   109,
     137,   140,   144,   164,   176,  -226,  -226,   146,  -226,   454,
     181,   519,  -226,   554,   -34,   -34,  -226,   168,   151,  -226,
    -226,  -226,   155,  -226,   158,     1,    15,    30,   162,  -226,
     519,  -226,    30,   192,   554,   595,   554,   554,  -226,    54,
     554,   554,   109,  -226,  -226,  -226,   170,  -226,    59,    15,
     142,    54,  -226,  -226,   205,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,   276,   471,   207,  -226,    71,  -226,  -226,
    -226,  -226,    30,   554,   595,   595,  -226,   210,  -226,   219,
     216,   181,   202,   595,  -226,  -226,  -226,   220,  -226
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -226,  -226,  -226,  -226,   233,   -23,    -1,     0,  -226,   126,
      67,  -226,    11,  -226,    -5,  -226,  -226,  -226,   -96,    23,
    -226,  -173,  -226,   206,   -69,    90,  -225,  -226,   -43,  -226,
     -30,  -193,    21,  -226,    18,  -226,    24,  -226,   -35,    20,
     193,  -226,  -226,    83,  -226,   -25,   -88,   -89,   -20,  -226,
     -38,    -6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      54,    88,   232,    78,    40,    21,    23,    95,    92,   159,
     163,   170,   264,   175,    19,   146,   243,   105,    61,    54,
      35,   175,    37,     1,    96,    54,   112,    97,    98,     3,
     132,   116,   133,    17,    99,    18,    33,    34,   176,    83,
       4,   171,   106,     5,   174,    62,   176,    63,     6,    64,
      56,    57,   107,     8,   108,   109,   177,   288,   164,   275,
      65,    68,    86,    87,   110,    89,   143,   144,   145,    94,
     222,   226,    16,    11,    12,    19,    54,    25,   181,    13,
      69,    70,    71,    72,    51,    27,    31,   279,    36,    73,
      74,    38,    55,   121,   122,   123,    84,   125,   167,    65,
      59,    75,    93,   230,    76,    77,    60,   214,   215,    85,
     217,   102,   101,   220,   238,   103,   218,   113,   161,   161,
      57,   120,   165,    23,   114,    54,    54,   208,    54,   149,
     119,    54,   129,   151,   253,   153,   254,   255,   112,   154,
     155,   157,   158,   166,   168,   172,   169,   173,   182,    68,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   184,   263,    69,    70,
      71,    72,    51,   183,   188,   219,   189,   221,   216,    21,
     207,   224,   227,   228,   225,   130,   229,   176,   131,    75,
     278,   233,    76,    77,   132,   236,   133,   234,   235,   237,
     245,   244,   269,   246,   247,   248,   134,   240,   251,   125,
     249,    92,   271,   256,   257,   259,   135,   136,   261,   265,
      54,   267,    40,   280,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   276,   281,   130,   286,   223,   131,   292,
     293,   290,   291,   161,   132,   294,   133,   296,   289,   298,
     297,    32,   239,   266,   287,   190,   134,   277,   262,    54,
      54,   295,   104,   231,   270,   268,   135,   136,    54,   124,
     273,   274,   241,   272,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   130,     0,   283,   131,     0,     0,     0,
       0,   186,   132,     0,   133,     0,     0,   284,     0,     0,
     130,     0,     0,   131,   134,     0,     0,     0,     0,   132,
       0,   133,     0,     0,   135,   136,     0,     0,   148,     0,
       0,   134,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   135,   136,     0,     0,     0,     0,     0,     0,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   130,     0,
       0,   131,     0,     0,     0,     0,     0,   132,     0,   133,
       0,     0,   150,     0,     0,   130,   156,     0,   131,   134,
       0,     0,     0,     0,   132,     0,   133,     0,     0,   135,
     136,     0,     0,     0,     0,     0,   134,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   135,   136,    68,     0,
       0,     0,     0,     0,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   130,     0,     0,   131,    69,    70,    71,
      72,    51,   132,     0,   133,     0,    73,    74,     0,     0,
       0,     0,     0,     0,   134,     0,     0,     0,    75,   160,
       0,    76,    77,     0,   135,   136,   187,     0,     0,     0,
       0,     0,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   130,     0,     0,   131,   250,     0,     0,     0,     0,
     132,     0,   133,     0,     0,     0,     0,     0,   130,   285,
       0,   131,   134,     0,     0,     0,     0,   132,     0,   133,
       0,     0,   135,   136,     0,     0,     0,     0,     0,   134,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   135,
     136,     0,     0,     0,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   130,     0,     0,   131,
       0,     0,     0,     0,     0,   132,     0,   133,     0,     0,
       0,     0,     0,    -1,     0,     0,    -1,   134,     0,     0,
       0,     0,   132,     0,   133,     0,     0,   135,   136,     0,
       0,     0,     0,     0,   134,   137,   138,   139,   140,   141,
     142,   143,   144,   145,    -1,    -1,    68,     0,     0,     0,
       0,     0,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,     0,     0,     0,     0,    69,    70,    71,    72,    51,
      42,     0,     0,     0,    73,    74,     0,    43,    44,     0,
       0,     0,     0,     0,     0,     0,    75,     0,    45,    76,
      77,    46,     0,     0,     0,     0,    47,     0,    48,     0,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
      51
};

static const yytype_int16 yycheck[] =
{
      25,    44,   175,    38,    24,    11,    12,    50,    46,    97,
      99,   107,   237,    20,    45,    84,   209,    20,     3,    44,
      20,    20,    22,    19,    58,    50,    61,    61,    62,    45,
      16,    62,    18,    57,    68,    59,    51,    52,    45,    39,
       0,   110,    45,    57,   113,    30,    45,    32,     4,    34,
      61,    62,    58,    45,    59,    60,    63,   282,   101,   252,
      45,    22,    42,    43,    25,    45,    52,    53,    54,    49,
     158,   167,    37,    14,    15,    45,   101,     6,   116,    20,
      41,    42,    43,    44,    45,    32,    45,   260,    46,    50,
      51,    46,    29,    73,    74,    75,    60,    77,   104,    45,
      57,    62,    45,   172,    65,    66,    57,   150,   151,    59,
     153,    37,    57,   156,   183,    45,   154,    11,    98,    99,
      62,    57,   102,   129,    62,   150,   151,   147,   153,    29,
      58,   156,    57,    24,   223,    21,   224,   225,   173,    60,
      37,    17,    45,    58,    45,    25,    60,    59,    29,    22,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,    45,   236,    41,    42,
      43,    44,    45,    60,    67,   155,    59,   157,    29,   185,
      57,    63,    60,    45,    69,     7,    57,    45,    10,    62,
     259,    59,    65,    66,    16,    60,    18,    63,    57,    63,
      60,    64,   245,    59,    40,    29,    28,   187,    27,   189,
      64,   249,   247,    45,    63,    60,    38,    39,    60,    57,
     245,    29,   242,   261,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    63,    29,     7,    29,    59,    10,    29,
      21,   284,   285,   223,    16,    29,    18,    45,   283,    29,
     293,    18,   185,   242,   277,   129,    28,   258,   235,   284,
     285,   291,    56,   173,   246,   244,    38,    39,   293,    76,
     250,   251,   189,   249,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    63,    16,    -1,    18,    -1,    -1,    21,    -1,    -1,
       7,    -1,    -1,    10,    28,    -1,    -1,    -1,    -1,    16,
      -1,    18,    -1,    -1,    38,    39,    -1,    -1,    25,    -1,
      -1,    28,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     7,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    16,    -1,    18,
      -1,    -1,    21,    -1,    -1,     7,     8,    -1,    10,    28,
      -1,    -1,    -1,    -1,    16,    -1,    18,    -1,    -1,    38,
      39,    -1,    -1,    -1,    -1,    -1,    28,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    38,    39,    22,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     7,    -1,    -1,    10,    41,    42,    43,
      44,    45,    16,    -1,    18,    -1,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    62,    63,
      -1,    65,    66,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,
      16,    -1,    18,    -1,    -1,    -1,    -1,    -1,     7,     8,
      -1,    10,    28,    -1,    -1,    -1,    -1,    16,    -1,    18,
      -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    28,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     7,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    18,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    10,    28,    -1,    -1,
      -1,    -1,    16,    -1,    18,    -1,    -1,    38,    39,    -1,
      -1,    -1,    -1,    -1,    28,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    38,    39,    22,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,
       5,    -1,    -1,    -1,    50,    51,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    23,    65,
      66,    26,    -1,    -1,    -1,    -1,    31,    -1,    33,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    71,    45,     0,    57,     4,    72,    45,    73,
      74,    14,    15,    20,    76,    77,    37,    57,    59,    45,
      80,   121,    79,   121,    78,     6,    75,    32,    84,    85,
      87,    45,    74,    51,    52,    77,    46,    77,    46,    82,
     118,   121,     5,    12,    13,    23,    26,    31,    33,    35,
      36,    45,    98,    99,   115,    29,    61,    62,    93,    57,
      57,     3,    30,    32,    34,    45,    94,   120,    22,    41,
      42,    43,    44,    50,    51,    62,    65,    66,   108,   109,
     110,   111,   115,    77,    60,    59,   109,   109,    98,   109,
     106,   107,   120,    45,   109,    98,    58,    61,    62,    68,
     116,    57,    37,    45,    93,    20,    45,   121,    84,    84,
      25,    95,   108,    11,    62,    88,    62,    96,   118,    58,
      57,   109,   109,   109,   110,   109,   112,   113,   114,    57,
       7,    10,    16,    18,    28,    38,    39,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    94,   119,    25,    29,
      21,    24,   101,    21,    60,    37,     8,    17,    45,   116,
      63,   109,   117,   117,    98,   109,    58,   121,    45,    60,
      88,    94,    25,    59,    94,    20,    45,    63,    89,    90,
      91,   120,    29,    60,    45,    81,    63,    40,    67,    59,
      79,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,    57,   118,   102,
     103,   104,   105,   108,    98,    98,    29,    98,   120,   109,
      98,   109,   116,    59,    63,    69,    88,    60,    45,    57,
      94,    95,    91,    59,    63,    57,    60,    63,    94,    80,
     109,   113,    83,   101,    64,    60,    59,    40,    29,    64,
      11,    27,   100,   117,   116,   116,    45,    63,    86,    60,
      92,    60,    89,    94,    96,    57,    82,    29,   102,    98,
     104,   108,   106,   109,   109,   101,    63,    76,    94,    91,
     120,    29,    97,     9,    21,     8,    29,    75,    96,   108,
      98,    98,    29,    21,    29,   100,    45,    98,    29
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 14:

/* Line 1455 of yacc.c  */
#line 123 "oberon.y"
    {printf("Found declarations.\n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 129 "oberon.y"
    { ; //TODO next   
                    ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 137 "oberon.y"
    {
                      printf("Add type %s\n",(yyvsp[(1) - (4)].str));
                      (yyvsp[(3) - (4)].typ)->print();
                      if(!env->insertType(string((yyvsp[(1) - (4)].str)),(yyvsp[(3) - (4)].typ)))
                        fprintf(stderr,"error: Redeclaration of %s\n",(yyvsp[(1) - (4)].str));
                    ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 149 "oberon.y"
    { 
                      char *st;
                      while(!identList.empty()){
                        st=identList.front();
                        printf("Create symbol table entry for %s\n",st);
                        if(!env->declare(string(st),(yyvsp[(3) - (4)].typ)))
                          fprintf(stderr,"error: Redeclaration of %s\n",st);
                        identList.pop();
                        free(st);
                      }
                    ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 168 "oberon.y"
    {
                      ;//MAYBE
                    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 179 "oberon.y"
    { 
                       Entry * e = env->lookup((yyvsp[(3) - (5)].str));
                       if(e!=NULL)
                         fprintf(stderr,"error %d: %s is declared already.\n",yylineno, (yyvsp[(3) - (5)].str));
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
                         env->getPrev()->declare(string((yyvsp[(3) - (5)].str)),t);
                       }
                    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 202 "oberon.y"
    { 
                      if(strcmp((yyvsp[(3) - (10)].str),(yyvsp[(10) - (10)].str))!=0)
                        printf("error %d: Expected %s after END: found %s\n",yylineno,(yyvsp[(3) - (10)].str),(yyvsp[(10) - (10)].str));
                      Scope * prev = env->getPrev();
                      printf("%s\n",(yyvsp[(3) - (10)].str));
                      env->showAll();
                      delete env;
                      env = prev;
                    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 220 "oberon.y"
    {
                          Entry * e=env->lookup((yyvsp[(5) - (5)].str));
                          if(e==NULL)
                            fprintf(stderr,"error: %s is not declared.\n",(yyvsp[(5) - (5)].str));
                          else if(e->type->node!=-1)
                            fprintf(stderr,"error: %s is not a type.\n",(yyvsp[(5) - (5)].str));
                          else{
                           params.push(make_pair("",(TypeSpecifier *)e->type->child[0]));
                          }
                        ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 232 "oberon.y"
    {
                          params.push(make_pair("",basicType[8]));
                        ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 236 "oberon.y"
    {
                          params.push(make_pair("",basicType[8]));
                        ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 249 "oberon.y"
    {
                          string s;
                          while(!identList.empty()){
                            s=identList.front();
                            identList.pop();
                            params.push(make_pair(s,(yyvsp[(3) - (3)].typ)));
                          } 
                        ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 259 "oberon.y"
    { 
                          string s;
                          while(!identList.empty()){
                            s=identList.front();
                            identList.pop();
                            params.push(make_pair(s,(yyvsp[(4) - (4)].typ)));
                          } 
                        ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 270 "oberon.y"
    {
                          identList.push((yyvsp[(1) - (2)].str));
                        ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 274 "oberon.y"
    {
                          identList.push((yyvsp[(1) - (1)].str));
                        ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 287 "oberon.y"
    { 
                          Entry * smt; 
                          (yyval.typ) = NULL;
                          smt = env->lookup(string((yyvsp[(1) - (1)].str))); 
                          if(smt==NULL){
                            fprintf(stderr,"error: %s not declared.\n",(yyvsp[(1) - (1)].str));
                          }
                          else if(smt->type->node==-1){
                            (yyval.typ) = (TypeSpecifier *) (smt->type->child[0]);
                          }
                          else{
                            fprintf(stderr,"%s is not a declared Type.\n",(yyvsp[(1) - (1)].str));
                          }
                        ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 302 "oberon.y"
    {  //TODO NEXT
                          (yyval.typ) = new TypeSpecifier();
                          (yyval.typ)->node = tARRAY;
                          (yyval.typ)->n = 1;
                          (yyval.typ)->child = new TypeSpecifier *[1];
                          (yyval.typ)->child[0] = (yyvsp[(4) - (4)].typ);
                        ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 310 "oberon.y"
    { //TODO NEXT
                          (yyval.typ) = new TypeSpecifier();
                          (yyval.typ)->node = tARRAY;
                          (yyval.typ)->n = 1;
                          (yyval.typ)->child = new TypeSpecifier *[1];
                          (yyval.typ)->child[0] = (yyvsp[(3) - (3)].typ);
                        ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 318 "oberon.y"
    {
                          //Neglect for now
                          (yyval.typ)=NULL;
                        ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 323 "oberon.y"
    {
                          // TODO NEXT SCOPE
                          (yyval.typ)= new TypeSpecifier();
                          (yyval.typ)->node = tRECORD;
                          (yyval.typ)->n=fieldSize;
                          fieldSize=0;
                          (yyval.typ)->child = new TypeSpecifier *[(yyval.typ)->n];
                          (yyval.typ)->fields = new string [(yyval.typ)->n];
                          int count=0;
                          while(!fieldList.empty()){
                            queue<char *> tmp = fieldList.front().first;
                            while(!tmp.empty()){
                              (yyval.typ)->fields[count]=tmp.front();
                              tmp.pop();
                              (yyval.typ)->child[count++]=fieldList.front().second;
                            }
                            fieldList.pop();
                          } 
                        ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 343 "oberon.y"
    {
                          (yyval.typ) = new TypeSpecifier(tPOINTER);
                          (yyval.typ)->n = 1;
                          (yyval.typ)->child = new TypeSpecifier *[1];
                          (yyval.typ)->child[0] = (yyvsp[(3) - (3)].typ);
                        ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 350 "oberon.y"
    {
                          (yyval.typ)=new TypeSpecifier(tPROCEDURE);
                          (yyval.typ)->n=params.size();
                          (yyval.typ)->child=new TypeSpecifier *[(yyval.typ)->n];
                          int i=1;
                          while(i<(yyval.typ)->n){
                            (yyval.typ)->child[i++]=params.front().second;
                            params.pop();
                          }
                          (yyval.typ)->child[0]=params.front().second;
                          params.pop();
                        ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 370 "oberon.y"
    {
                          fieldList.push(make_pair(identList,(yyvsp[(3) - (4)].typ)));
                          fieldSize+=identList.size();
                          queue<char *> tmp = identList;
                          identList=queue<char *>();
                        ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 376 "oberon.y"
    {//HAHA
             ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 379 "oberon.y"
    {
                          fieldList.push(make_pair(identList,(yyvsp[(3) - (3)].typ)));
                          fieldSize+=identList.size();
                          identList=queue<char *>();
                        ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 393 "oberon.y"
    { //TODO NEXT HANDLE TYPE
                         ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 458 "oberon.y"
    {;
                //TODO
                //Type checking, type expansion, return type
                ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 482 "oberon.y"
    {  ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 485 "oberon.y"
    { (yyval.typ) = basicType[tCHAR];;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 486 "oberon.y"
    { (yyval.typ) = new TypeSpecifier();
		(yyval.typ)->node = 11;
		(yyval.typ)->n = 1;
        // TODO INLCUDE REAL INT SHORTINT LONGINT
		;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 535 "oberon.y"
    { identList.push((yyvsp[(1) - (1)].str)); 
                /*printf("push in list - %s size of list %d \n",$1,identList.size());*/ ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 537 "oberon.y"
    { identList.push((yyvsp[(1) - (2)].str)); 
                /*printf("push in list - %s size of list %d \n",$1,identList.size());*/ ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 544 "oberon.y"
    { strcpy((yyval.str),(yyvsp[(1) - (1)].str)); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 546 "oberon.y"
    { 
                  strcpy((yyval.str),(yyvsp[(1) - (3)].str));
                  strcat((yyval.str),".");
                  strcat((yyval.str),(yyvsp[(3) - (3)].str));
                ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 555 "oberon.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2151 "oberon.cc"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 561 "oberon.y"


void createBasicTypes(){
  string temp[]={"BOOLEAN","CHAR","SHORTINT","INTEGER","LONGINT","REAL","LONGREAL","SET","VOID"};
  TypeSpecifier * t;
  for(int i=0; i<9; i++){
    t=new TypeSpecifier(i);
    env->insertType(temp[i],t);
    basicType[i]=t;
  }
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




