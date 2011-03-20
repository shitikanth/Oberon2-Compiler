
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

//Include files{{{
#include "type.h"
#include "ast.h"
#include <stdio.h>
#include <string>
#include <cstring>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
#include "scope.h"
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

int yyerror(char *msg)
{
  printf("%s at line %d with [%s]\n",msg,yylineno,yytext);
}

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


/* Line 189 of yacc.c  */
#line 119 "oberon.cc"

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
#line 46 "oberon.y"

  char * str;
  TypeSpecifier * typ;
  TypeList * typlist;                                       //For expression list
  


/* Line 214 of yacc.c  */
#line 210 "oberon.cc"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 222 "oberon.cc"

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
#define YYLAST   601

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  149
/* YYNRULES -- Number of states.  */
#define YYNSTATES  309

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
      33,    34,    37,    41,    45,    49,    50,    56,    57,    58,
      65,    66,    67,    74,    75,    79,    83,    84,    85,    96,
     102,   108,   113,   117,   120,   121,   125,   127,   131,   136,
     137,   142,   144,   150,   157,   158,   160,   165,   169,   176,
     180,   184,   187,   191,   193,   194,   201,   205,   206,   210,
     212,   216,   218,   219,   228,   235,   236,   243,   248,   249,
     262,   263,   274,   278,   283,   285,   288,   290,   291,   297,
     298,   301,   302,   304,   308,   312,   313,   315,   319,   321,
     325,   331,   335,   339,   341,   345,   349,   353,   357,   361,
     365,   369,   373,   376,   379,   383,   387,   391,   395,   399,
     403,   407,   411,   413,   415,   417,   419,   421,   423,   425,
     427,   431,   434,   438,   440,   441,   445,   447,   449,   453,
     454,   458,   462,   463,   469,   472,   473,   479,   480,   485,
     486,   488,   492,   494,   495,   500,   502,   506,   508,   511
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      71,     0,    -1,    19,    45,    57,    72,    76,    75,    29,
      45,    58,    -1,     4,    73,    57,    -1,    -1,    73,    59,
      74,    -1,    74,    -1,    45,    37,    45,    -1,    45,    -1,
       6,    97,    -1,    -1,    77,    83,    -1,    15,    78,    77,
      -1,    14,    79,    77,    -1,    20,    81,    77,    -1,    -1,
     128,    46,   111,    57,    78,    -1,    -1,    -1,   128,    46,
      93,    57,    80,    79,    -1,    -1,    -1,   125,    60,    93,
      57,    82,    81,    -1,    -1,    84,    57,    83,    -1,    86,
      57,    83,    -1,    -1,    -1,    32,    92,   128,    87,    57,
      85,    76,    75,    29,    45,    -1,    32,    61,    92,   128,
      87,    -1,    62,    88,    63,    60,   127,    -1,    62,    63,
      60,   127,    -1,    62,    88,    63,    -1,    62,    63,    -1,
      -1,    89,    57,    88,    -1,    89,    -1,    90,    60,    93,
      -1,    20,    90,    60,    93,    -1,    -1,    45,    59,    91,
      90,    -1,    45,    -1,    62,    45,    60,    45,    63,    -1,
      62,    20,    45,    60,    45,    63,    -1,    -1,   127,    -1,
       3,    94,    25,    93,    -1,     3,    25,    93,    -1,    34,
      62,   127,    63,    95,    29,    -1,    34,    95,    29,    -1,
      30,    11,    93,    -1,    32,    87,    -1,   111,    59,    94,
      -1,   111,    -1,    -1,   125,    60,    93,    57,    96,    95,
      -1,   125,    60,    93,    -1,    -1,    98,    57,    97,    -1,
      98,    -1,   118,    37,   112,    -1,   118,    -1,    -1,    35,
     112,    99,     8,    97,   103,   104,    29,    -1,    12,   112,
      25,   105,   104,    29,    -1,    -1,    23,   112,   100,    21,
      97,    29,    -1,    36,    97,    17,   112,    -1,    -1,    33,
      45,    37,   112,    11,   112,     9,   111,   101,    21,    97,
      29,    -1,    -1,    33,    45,    37,   112,    11,   112,   102,
      21,    97,    29,    -1,    13,    97,    29,    -1,    26,   109,
     104,    29,    -1,    31,    -1,     5,   112,    -1,     5,    -1,
      -1,    27,   112,     8,    97,   103,    -1,    -1,    24,    97,
      -1,    -1,   106,    -1,   106,    64,   105,    -1,   107,    60,
      97,    -1,    -1,   108,    -1,   108,    59,   107,    -1,   111,
      -1,   111,    40,   111,    -1,   110,    21,    97,    64,   109,
      -1,   110,    21,    97,    -1,   127,    60,   127,    -1,   112,
      -1,   112,    46,   112,    -1,   112,    47,   112,    -1,   112,
      48,   112,    -1,   112,    38,   112,    -1,   112,    49,   112,
      -1,   112,    39,   112,    -1,   112,     7,   112,    -1,   112,
      10,   112,    -1,    50,   112,    -1,    51,   112,    -1,   112,
      50,   112,    -1,   112,    51,   112,    -1,   112,    28,   112,
      -1,   112,    52,   112,    -1,   112,    53,   112,    -1,   112,
      18,   112,    -1,   112,    16,   112,    -1,   112,    54,   112,
      -1,   113,    -1,   118,    -1,    43,    -1,    44,    -1,    41,
      -1,    42,    -1,    22,    -1,   114,    -1,    62,   112,    63,
      -1,    65,   113,    -1,    66,   115,    67,    -1,   116,    -1,
      -1,   117,    59,   116,    -1,   117,    -1,   112,    -1,   112,
      40,   112,    -1,    -1,    45,   119,   120,    -1,    58,    45,
     120,    -1,    -1,    68,   124,    69,   121,   120,    -1,    61,
     120,    -1,    -1,    62,   124,    63,   122,   120,    -1,    -1,
      62,    63,   123,   120,    -1,    -1,   112,    -1,   112,    59,
     124,    -1,   128,    -1,    -1,   128,    59,   126,   125,    -1,
      45,    -1,    45,    58,    45,    -1,    45,    -1,    45,    52,
      -1,    45,    51,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   103,   103,   107,   108,   112,   113,   117,   118,   122,
     123,   127,   131,   132,   133,   134,   138,   139,   144,   143,
     150,   155,   154,   168,   172,   173,   174,   182,   179,   224,
     229,   240,   251,   255,   259,   263,   264,   268,   278,   290,
     290,   294,   300,   301,   302,   306,   321,   329,   337,   342,
     361,   368,   384,   385,   390,   389,   397,   403,   407,   408,
     412,   421,   427,   426,   436,   444,   443,   454,   465,   464,
     486,   485,   507,   509,   511,   512,   524,   525,   529,   530,
     534,   535,   539,   540,   544,   545,   549,   550,   554,   555,
     559,   560,   564,   568,   572,   573,   574,   575,   576,   577,
     578,   579,   591,   599,   607,   608,   610,   618,   629,   631,
     640,   649,   658,   662,   663,   664,   665,   667,   673,   674,
     675,   676,   680,   684,   685,   689,   690,   694,   695,   700,
     699,   719,   721,   720,   738,   740,   739,   758,   757,   776,
     780,   786,   795,   797,   797,   804,   805,   815,   816,   817
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
  "Import", "StatBlock", "DeclSeq", "DataList", "ConstList", "TypeList",
  "$@1", "VarList", "$@2", "ProcList", "ProcDecl", "$@3", "ForwardDecl",
  "FormalPars", "FPsectionList", "FPsection", "IdentList", "$@4",
  "Receiver", "Type", "ConstExprList", "FieldList", "$@5", "StatementSeq",
  "Statement", "$@6", "$@7", "$@8", "$@9", "ElseIfBlock", "Else",
  "CaseList", "Case", "CaseLabelList", "CaseLabels", "GuardStatList",
  "Guard", "ConstExpr", "Expr", "Factor", "Set", "optElementList",
  "ElementList", "Element", "Designator", "$@10", "optSuffix", "$@11",
  "$@12", "$@13", "ExprList", "IdentDefList", "$@14", "Qualident",
  "IdentDef", 0
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
      75,    76,    77,    77,    77,    77,    78,    78,    80,    79,
      79,    82,    81,    81,    83,    83,    83,    85,    84,    86,
      87,    87,    87,    87,    87,    88,    88,    89,    89,    91,
      90,    90,    92,    92,    92,    93,    93,    93,    93,    93,
      93,    93,    94,    94,    96,    95,    95,    95,    97,    97,
      98,    98,    99,    98,    98,   100,    98,    98,   101,    98,
     102,    98,    98,    98,    98,    98,    98,    98,   103,   103,
     104,   104,   105,   105,   106,   106,   107,   107,   108,   108,
     109,   109,   110,   111,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   114,   115,   115,   116,   116,   117,   117,   119,
     118,   120,   121,   120,   120,   122,   120,   123,   120,   120,
     124,   124,   125,   126,   125,   127,   127,   128,   128,   128
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     9,     3,     0,     3,     1,     3,     1,     2,
       0,     2,     3,     3,     3,     0,     5,     0,     0,     6,
       0,     0,     6,     0,     3,     3,     0,     0,    10,     5,
       5,     4,     3,     2,     0,     3,     1,     3,     4,     0,
       4,     1,     5,     6,     0,     1,     4,     3,     6,     3,
       3,     2,     3,     1,     0,     6,     3,     0,     3,     1,
       3,     1,     0,     8,     6,     0,     6,     4,     0,    12,
       0,    10,     3,     4,     1,     2,     1,     0,     5,     0,
       2,     0,     1,     3,     3,     0,     1,     3,     1,     3,
       5,     3,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     3,     1,     0,     3,     1,     1,     3,     0,
       3,     3,     0,     5,     2,     0,     5,     0,     4,     0,
       1,     3,     1,     0,     4,     1,     3,     1,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     4,     0,    15,     8,     0,
       6,    20,    17,    23,    10,    26,     0,     3,     0,   147,
      15,     0,    15,     0,    15,     0,   142,    77,     0,    44,
      11,     0,     0,     7,     5,   149,   148,    13,     0,    12,
       0,    14,     0,   143,    76,     0,    77,     0,     0,    74,
       0,     0,    77,   129,     9,    59,    61,     0,    44,     0,
       0,    26,    26,     0,     0,    34,    57,   145,     0,    45,
     118,   116,   117,   114,   115,     0,     0,     0,     0,   124,
       0,    93,   112,   119,   113,     0,     0,    75,     0,     0,
      65,    81,     0,     0,     0,    62,     0,   139,    77,     0,
       0,     0,     0,     0,    34,    24,    25,     0,     0,    53,
       0,     0,    51,     0,     0,     0,     0,    18,   102,   103,
       0,   121,   127,     0,   123,   126,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,   144,    85,    72,     0,    77,     0,
      77,     0,     0,     0,     0,     0,   139,     0,     0,   130,
      58,    60,     2,    34,     0,     0,     0,    47,     0,     0,
      50,     0,    41,    33,     0,    36,     0,     0,    49,     0,
     146,    20,   120,     0,   122,     0,    16,   100,   101,   110,
     109,   106,    97,    99,    94,    95,    96,    98,   104,   105,
     107,   108,   111,    23,    81,    82,     0,    86,    88,    77,
      80,    73,    91,    92,     0,    77,    67,   139,   134,   137,
     140,     0,     0,    29,     0,     0,    27,    46,    52,     0,
      39,     0,    32,     0,     0,    57,    56,    19,   128,   125,
      22,     0,    85,    77,     0,     0,     0,     0,     0,    79,
     131,   139,     0,   135,   132,     0,    42,    15,     0,     0,
      31,     0,    35,    37,     0,    54,    64,    83,    84,    87,
      89,    66,    90,    70,     0,    81,   138,   141,   139,   139,
      43,    10,    38,    40,    30,    48,    57,     0,     0,     0,
       0,   136,   133,     0,    55,    68,    77,    77,    63,     0,
       0,     0,    79,    28,    77,    71,    78,     0,    69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     9,    10,    28,    14,    15,    22,    20,
     181,    24,   203,    30,    31,   257,    32,   112,   174,   175,
     176,   259,    60,    68,   108,   114,   286,    54,    55,   153,
     147,   300,   288,   275,   149,   204,   205,   206,   207,    91,
      92,   208,    81,    82,    83,   123,   124,   125,    84,    97,
     159,   279,   278,   251,   221,   115,    86,    69,    26
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -221
static const yytype_int16 yypact[] =
{
      25,   -23,    47,    -6,  -221,    53,    17,    15,    26,   -14,
    -221,    23,    23,    23,    66,    43,    31,  -221,    17,   -20,
      15,    33,    15,    37,    15,    24,    18,   556,    56,   -12,
    -221,    29,    30,  -221,  -221,  -221,  -221,  -221,     7,  -221,
     505,  -221,     7,  -221,   505,   505,   556,   505,    49,  -221,
      50,   505,   556,  -221,  -221,    35,    51,    52,    36,    -3,
      23,    43,    43,   282,    88,    40,   -29,    46,    54,  -221,
    -221,  -221,  -221,  -221,  -221,   505,   505,   505,   531,   505,
      55,   442,  -221,  -221,  -221,    57,    23,   442,   264,    77,
     442,    85,    89,    58,    78,   442,    99,   -34,   556,   505,
      59,    23,    74,    60,    40,  -221,  -221,     7,    97,    65,
       7,     1,  -221,    49,    96,    67,    84,  -221,  -221,  -221,
     173,  -221,   312,    63,  -221,    72,    23,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,  -221,  -221,   505,  -221,   112,   556,   105,
     556,    49,   505,   129,   505,    93,   -34,   460,   505,  -221,
    -221,   442,  -221,    40,    80,   113,   100,  -221,     7,   505,
    -221,   114,   101,   102,    98,   106,   107,   110,  -221,     7,
    -221,    23,  -221,   505,  -221,   505,  -221,   490,   490,  -221,
    -221,     2,   490,   490,   490,   490,   490,   490,     2,     2,
    -221,  -221,  -221,    23,    85,   111,   109,   115,   125,   556,
    -221,  -221,   120,  -221,   360,   556,   442,   -34,  -221,  -221,
     247,   116,   108,  -221,   131,   122,  -221,  -221,  -221,   118,
    -221,    49,   126,     3,     7,    23,   133,  -221,   442,  -221,
    -221,   163,   505,   556,   505,   505,   164,    49,   505,   169,
    -221,   -34,   505,  -221,  -221,   137,  -221,    15,     7,   114,
    -221,    49,  -221,  -221,   175,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,   377,   505,    85,  -221,  -221,   -34,   -34,
    -221,    66,  -221,  -221,  -221,  -221,    23,   505,   181,   425,
     176,  -221,  -221,   177,  -221,  -221,   556,   556,  -221,   162,
     188,   184,   169,  -221,   556,  -221,  -221,   185,  -221
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,  -221,  -221,   192,   -66,   -28,    16,   104,    61,
    -221,    28,  -221,    20,  -221,  -221,  -221,   -90,    -5,  -221,
    -163,  -221,   174,   -40,    64,  -220,  -221,   -45,  -221,  -221,
    -221,  -221,  -221,   -68,  -195,    -7,  -221,    -4,  -221,   -10,
    -221,   -37,    14,   160,  -221,  -221,    62,  -221,   -27,  -221,
    -143,  -221,  -221,  -221,  -152,    -8,  -221,   -44,     0
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      56,    89,    85,    80,    93,    25,   222,    96,   229,   241,
      63,    21,    23,   218,   166,   264,    19,   102,   129,    56,
     130,   171,     3,   171,   155,    56,   109,   156,   157,    11,
      12,    35,    36,   113,   158,    13,    37,    64,    39,    65,
      41,    66,   103,    17,     1,    18,   172,     4,   172,    58,
      59,     5,    67,   160,   140,   141,   142,     6,    87,    88,
     104,    90,     8,    16,   173,    95,   294,   167,    19,   177,
     170,    56,    27,   223,   250,    29,    33,    43,   144,    38,
     290,   105,   106,    40,    42,    57,    61,    62,    99,   118,
     119,   120,    98,   122,    67,    94,   283,   100,    59,   110,
     277,   163,   111,   210,   116,   212,   146,   213,   276,   148,
     150,   117,   126,   161,   143,   152,   154,   162,   151,   164,
     165,    56,   168,    56,   169,   178,    23,   179,   227,   180,
     184,   185,   109,   209,   211,   291,   292,   215,   217,   236,
     224,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   226,   225,   172,
     230,   232,   231,   233,   246,   245,   214,   234,   216,   243,
     249,   220,   220,   235,   244,   242,   255,   254,   258,   253,
     127,    21,    56,   128,   247,   256,   261,   260,    56,   129,
     265,   130,   266,   271,   263,    25,   274,   238,   268,   122,
     280,   131,   296,    93,   285,   298,   299,   303,   270,   304,
      34,   132,   133,   305,   308,   293,    56,   284,   282,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   262,   281,
     186,   240,   101,   228,   306,   267,   182,   272,   121,     0,
     269,     0,   237,     0,     0,     0,     0,   239,     0,     0,
     295,   301,   302,     0,   127,     0,     0,   128,     0,   307,
       0,     0,   273,   129,     0,   130,   220,     0,     0,    56,
      56,   127,     0,     0,   128,   131,     0,    56,     0,     0,
     129,     0,   130,     0,     0,   132,   133,     0,   289,   145,
       0,     0,   131,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   132,   133,    70,     0,   252,   107,     0,     0,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   127,
       0,     0,   128,    71,    72,    73,    74,    53,   129,     0,
     130,     0,    75,    76,     0,     0,     0,     0,     0,     0,
     131,     0,     0,     0,    77,     0,     0,    78,    79,     0,
     132,   133,   183,     0,     0,     0,     0,     0,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   127,     0,     0,
     128,   248,     0,     0,     0,     0,   129,     0,   130,     0,
       0,     0,     0,     0,   127,     0,   287,   128,   131,     0,
       0,     0,     0,   129,     0,   130,     0,     0,   132,   133,
       0,     0,     0,     0,     0,   131,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   132,   133,     0,     0,     0,
       0,     0,     0,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   127,   297,     0,   128,     0,     0,     0,     0,
       0,   129,     0,   130,     0,     0,     0,     0,     0,   127,
       0,     0,   128,   131,     0,     0,     0,     0,   129,     0,
     130,     0,     0,   132,   133,     0,     0,     0,     0,     0,
     131,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     132,   133,    70,     0,     0,     0,     0,     0,   134,   135,
     136,   137,   138,   139,   140,   141,   142,    -1,     0,     0,
      -1,    71,    72,    73,    74,    53,   129,     0,   130,     0,
      75,    76,     0,     0,     0,     0,     0,     0,   131,     0,
       0,     0,    77,   219,     0,    78,    79,    70,    -1,    -1,
       0,     0,     0,     0,     0,     0,    -1,    -1,    -1,    -1,
     138,   139,   140,   141,   142,     0,    71,    72,    73,    74,
      53,     0,     0,    70,     0,    75,    76,     0,     0,     0,
       0,    44,     0,     0,     0,     0,     0,    77,    45,    46,
      78,    79,    71,    72,    73,    74,    53,     0,     0,    47,
       0,     0,    48,     0,     0,     0,     0,    49,     0,    50,
       0,    51,    52,    77,     0,     0,    78,    79,     0,     0,
       0,    53
};

static const yytype_int16 yycheck[] =
{
      27,    46,    42,    40,    48,    13,   158,    52,   171,   204,
       3,    11,    12,   156,   104,   235,    45,    20,    16,    46,
      18,    20,    45,    20,    58,    52,    63,    61,    62,    14,
      15,    51,    52,    62,    68,    20,    20,    30,    22,    32,
      24,    34,    45,    57,    19,    59,    45,     0,    45,    61,
      62,    57,    45,    98,    52,    53,    54,     4,    44,    45,
      60,    47,    45,    37,    63,    51,   286,   107,    45,   113,
     110,    98,     6,   163,   217,    32,    45,    59,    86,    46,
     275,    61,    62,    46,    60,    29,    57,    57,    37,    75,
      76,    77,    57,    79,    45,    45,   259,    45,    62,    11,
     252,   101,    62,   148,    58,   150,    29,   151,   251,    24,
      21,    57,    57,    99,    57,    37,    17,    58,    60,    45,
      60,   148,    25,   150,    59,    29,   126,    60,   168,    45,
      67,    59,   169,    21,    29,   278,   279,     8,    45,   179,
      60,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,    57,    45,    45,
      59,    63,    60,    57,   209,    40,   152,    60,   154,    60,
     215,   157,   158,    63,    59,    64,    45,    69,    60,    63,
       7,   181,   209,    10,    64,    63,    60,   231,   215,    16,
      57,    18,    29,    29,   234,   203,    27,   183,   243,   185,
      63,    28,    21,   247,    29,    29,    29,    45,   245,    21,
      18,    38,    39,    29,    29,   281,   243,   261,   258,    46,
      47,    48,    49,    50,    51,    52,    53,    54,   233,   257,
     126,   203,    58,   169,   302,   242,    63,   247,    78,    -1,
     244,    -1,   181,    -1,    -1,    -1,    -1,   185,    -1,    -1,
     287,   296,   297,    -1,     7,    -1,    -1,    10,    -1,   304,
      -1,    -1,   248,    16,    -1,    18,   252,    -1,    -1,   296,
     297,     7,    -1,    -1,    10,    28,    -1,   304,    -1,    -1,
      16,    -1,    18,    -1,    -1,    38,    39,    -1,   274,    25,
      -1,    -1,    28,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    38,    39,    22,    -1,    59,    25,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     7,
      -1,    -1,    10,    41,    42,    43,    44,    45,    16,    -1,
      18,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     7,    -1,    -1,
      10,    11,    -1,    -1,    -1,    -1,    16,    -1,    18,    -1,
      -1,    -1,    -1,    -1,     7,    -1,     9,    10,    28,    -1,
      -1,    -1,    -1,    16,    -1,    18,    -1,    -1,    38,    39,
      -1,    -1,    -1,    -1,    -1,    28,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    10,    28,    -1,    -1,    -1,    -1,    16,    -1,
      18,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,
      28,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      38,    39,    22,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     7,    -1,    -1,
      10,    41,    42,    43,    44,    45,    16,    -1,    18,    -1,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    62,    63,    -1,    65,    66,    22,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    41,    42,    43,    44,
      45,    -1,    -1,    22,    -1,    50,    51,    -1,    -1,    -1,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    62,    12,    13,
      65,    66,    41,    42,    43,    44,    45,    -1,    -1,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    -1,    33,
      -1,    35,    36,    62,    -1,    -1,    65,    66,    -1,    -1,
      -1,    45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    71,    45,     0,    57,     4,    72,    45,    73,
      74,    14,    15,    20,    76,    77,    37,    57,    59,    45,
      79,   128,    78,   128,    81,   125,   128,     6,    75,    32,
      83,    84,    86,    45,    74,    51,    52,    77,    46,    77,
      46,    77,    60,    59,     5,    12,    13,    23,    26,    31,
      33,    35,    36,    45,    97,    98,   118,    29,    61,    62,
      92,    57,    57,     3,    30,    32,    34,    45,    93,   127,
      22,    41,    42,    43,    44,    50,    51,    62,    65,    66,
     111,   112,   113,   114,   118,    93,   126,   112,   112,    97,
     112,   109,   110,   127,    45,   112,    97,   119,    57,    37,
      45,    92,    20,    45,   128,    83,    83,    25,    94,   111,
      11,    62,    87,    62,    95,   125,    58,    57,   112,   112,
     112,   113,   112,   115,   116,   117,    57,     7,    10,    16,
      18,    28,    38,    39,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    57,   125,    25,    29,   100,    24,   104,
      21,    60,    37,    99,    17,    58,    61,    62,    68,   120,
      97,   112,    58,   128,    45,    60,    87,    93,    25,    59,
      93,    20,    45,    63,    88,    89,    90,   127,    29,    60,
      45,    80,    63,    40,    67,    59,    78,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,    82,   105,   106,   107,   108,   111,    21,
      97,    29,    97,   127,   112,     8,   112,    45,   120,    63,
     112,   124,   124,    87,    60,    45,    57,    93,    94,    90,
      59,    60,    63,    57,    60,    63,    93,    79,   112,   116,
      81,   104,    64,    60,    59,    40,    97,    64,    11,    97,
     120,   123,    59,    63,    69,    45,    63,    85,    60,    91,
     127,    60,    88,    93,    95,    57,    29,   105,    97,   107,
     111,    29,   109,   112,    27,   103,   120,   124,   122,   121,
      63,    76,    93,    90,   127,    29,    96,     9,   102,   112,
     104,   120,   120,    75,    95,   111,    21,     8,    29,    29,
     101,    97,    97,    45,    21,    29,   103,    97,    29
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
        case 18:

/* Line 1455 of yacc.c  */
#line 144 "oberon.y"
    {
                      printf("Add type %s\n",(yyvsp[(1) - (4)].str));
                      if(!env->insertType(string((yyvsp[(1) - (4)].str)),(yyvsp[(3) - (4)].typ)))
                        fprintf(stderr,"error: Redeclaration of %s\n",(yyvsp[(1) - (4)].str));                        
                    ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 155 "oberon.y"
    { 
                      char *st;
                      while(!identList.empty()){
                        st=identList.front();
                        printf("Declare variable %s.\n",st);
                        if(!env->declare(string(st),(yyvsp[(3) - (4)].typ)))
                          fprintf(stderr,"error: Redeclaration of %s\n",st);
                        identList.pop();
                        free(st);
                      }
                    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 182 "oberon.y"
    { 
                      Entry * e = env->lookup((yyvsp[(3) - (5)].str));
                      env = new Scope(env);
                      TypeSpecifier * t;
                      if(e!=NULL){
                        fprintf(stderr,"error %d: %s is declared already.\n",yylineno, (yyvsp[(3) - (5)].str));
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
                        env->getPrev()->declare(string((yyvsp[(3) - (5)].str)),t);
                      }

                      int i=1;
                      printf("Start procedure declaration- %s().\n",(yyvsp[(3) - (5)].str));
                      params.pop();
                    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 212 "oberon.y"
    {
                      returnType.pop();
                      if(strcmp((yyvsp[(3) - (10)].str),(yyvsp[(10) - (10)].str))!=0)
                        printf("error %d: Expected %s after END: found %s\n",yylineno,(yyvsp[(3) - (10)].str),(yyvsp[(10) - (10)].str));
                      Scope * prev = env->getPrev();
                      printf("Close procedure declaration- %s().\n",(yyvsp[(3) - (10)].str));
                      delete env;
                      env = prev;
                    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 230 "oberon.y"
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

  case 31:

/* Line 1455 of yacc.c  */
#line 241 "oberon.y"
    {
						  Entry * e=env->lookup((yyvsp[(4) - (4)].str));
                          if(e==NULL)
                            fprintf(stderr,"error: %s is not declared.\n",(yyvsp[(4) - (4)].str));
                          else if(e->type->node!=-1)
                            fprintf(stderr,"error: %s is not a type.\n",(yyvsp[(4) - (4)].str));
                          else{
                           params.push(make_pair("",(TypeSpecifier *)e->type->child[0]));
                          }	
						;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 252 "oberon.y"
    {
                          params.push(make_pair("",basicType[8]));
                        ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 256 "oberon.y"
    {
                          params.push(make_pair("",basicType[8]));
                        ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 269 "oberon.y"
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
#line 279 "oberon.y"
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
#line 290 "oberon.y"
    {
                          identList.push((yyvsp[(1) - (2)].str));
                        ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 294 "oberon.y"
    {
                          identList.push((yyvsp[(1) - (1)].str));
                        ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 307 "oberon.y"
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
#line 322 "oberon.y"
    {  //TODO during code generation
                          (yyval.typ) = new TypeSpecifier();
                          (yyval.typ)->node = tARRAY;
                          (yyval.typ)->n = 1;
                          (yyval.typ)->child = new TypeSpecifier *[1];
                          (yyval.typ)->child[0] = (yyvsp[(4) - (4)].typ);
                        ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 330 "oberon.y"
    { //Dynamic Array implement if time permits
                          (yyval.typ) = new TypeSpecifier();
                          (yyval.typ)->node = tARRAY;
                          (yyval.typ)->n = 1;
                          (yyval.typ)->child = new TypeSpecifier *[1];
                          (yyval.typ)->child[0] = (yyvsp[(3) - (3)].typ);
                        ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 338 "oberon.y"
    {
						   //Extension of Record if time permits
                           (yyval.typ)=NULL;
                        ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 343 "oberon.y"
    {
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
#line 362 "oberon.y"
    {
                          (yyval.typ) = new TypeSpecifier(tPOINTER);
                          (yyval.typ)->n = 1;
                          (yyval.typ)->child = new TypeSpecifier *[1];
                          (yyval.typ)->child[0] = (yyvsp[(3) - (3)].typ);
                        ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 369 "oberon.y"
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
#line 390 "oberon.y"
    {
                          fieldList.push(make_pair(identList,(yyvsp[(3) - (4)].typ)));
                          fieldSize+=identList.size();
                          queue<char *> tmp = identList;
                          identList=queue<char *>();
                        ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 398 "oberon.y"
    {
                          fieldList.push(make_pair(identList,(yyvsp[(3) - (3)].typ)));
                          fieldSize+=identList.size();
                          identList=queue<char *>();
                        ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 413 "oberon.y"
    { 
                          if((yyvsp[(3) - (3)].typ)!=basicType[tERROR]){
                            if (!CheckEquivalence((yyvsp[(1) - (3)].typ),(yyvsp[(3) - (3)].typ)))
                              if(!TypeExpandable((yyvsp[(1) - (3)].typ),(yyvsp[(3) - (3)].typ)))
                                typeError(0,(yyvsp[(3) - (3)].typ),(yyvsp[(1) - (3)].typ),yylineno);
                          }
                        ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 427 "oberon.y"
    {  
                          if((yyvsp[(2) - (2)].typ) != basicType[tERROR]){
                            if ((yyvsp[(2) - (2)].typ) != basicType[tBOOLEAN]){
                              fprintf(stderr,"condition in IF should be boolean.\n");
                            }
                          }
                        ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 437 "oberon.y"
    {
                          /*
                          Syntactic sugar. To be implemented if time permits. 
                          */
                        ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 444 "oberon.y"
    { 
                           if((yyvsp[(2) - (2)].typ) != basicType[tERROR]){
                             if ((yyvsp[(2) - (2)].typ) != basicType[tBOOLEAN]){
                               //$$ = basicType[tERROR];
                               fprintf(stderr,"condition in WHILE should be boolean.\n");
                             }
                           }
                         ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 455 "oberon.y"
    { 
                          if((yyvsp[(4) - (4)].typ) != basicType[tERROR]){
                            if ((yyvsp[(4) - (4)].typ) != basicType[tBOOLEAN]){
                              //$$ = basicType[tERROR];
                              fprintf(stderr,"condition in WHILE should be boolean.\n");
                            }
                          }
                        ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 465 "oberon.y"
    {
									Entry * smt; 
								    //$$ = NULL;
								    smt = env->lookup(string((yyvsp[(2) - (8)].str))); 
								    if(smt==NULL){
									 fprintf(stderr,"error: %s not declared.\n",(yyvsp[(2) - (8)].str));
								    }
								    else if(smt->type->node==-1){
									 fprintf(stderr,"%s is  a declared Type.\n",(yyvsp[(2) - (8)].str));                        
								    }
								    else{
									    if (isArithComparable((yyvsp[(4) - (8)].typ),(yyvsp[(6) - (8)].typ)) //&& isArithComparable($6,$8) 
											&& CheckEquivalence(smt->type,(yyvsp[(4) - (8)].typ)));
										//$$ = basicType[tVOID];
									    else ;
										//$$ = basicType[tERROR];
								    }
								;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 486 "oberon.y"
    {
									Entry * smt; 
								    //$$ = NULL;
								    smt = env->lookup(string((yyvsp[(2) - (6)].str))); 
								    if(smt==NULL){
									 fprintf(stderr,"error: %s not declared.\n",(yyvsp[(2) - (6)].str));
								    }
								    else if(smt->type->node==-1){
									 fprintf(stderr,"%s is  a declared Type.\n",(yyvsp[(2) - (6)].str));                        
								    }
								    else{
									    if (isArithComparable((yyvsp[(4) - (6)].typ),(yyvsp[(6) - (6)].typ)) //&& isArithComparable($6,$8) 
											&& CheckEquivalence(smt->type,(yyvsp[(4) - (6)].typ)));
										//$$ = basicType[tVOID];
									    else ;
										//$$ = basicType[tERROR];
								    }
								;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 513 "oberon.y"
    {
                                  if(returnType.size()==0){
                                    fprintf(stderr,"error at line %d: Cant return here.\n",yylineno);
                                  }
                                  else if((yyvsp[(2) - (2)].typ)!=basicType[tERROR]&&returnType.top()!=basicType[tERROR]){
                                    if(!CheckEquivalence(returnType.top(),(yyvsp[(2) - (2)].typ))){
                                      fprintf(stderr,"Invalid return type.\n");
                                      typeError(0,(yyvsp[(2) - (2)].typ),returnType.top(),yylineno);
                                    }
                                  }
                                ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 572 "oberon.y"
    { (yyval.typ) = assign_rel_type((yyvsp[(1) - (3)].typ),(yyvsp[(3) - (3)].typ),yylineno);;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 573 "oberon.y"
    { (yyval.typ) = assign_rel_type((yyvsp[(1) - (3)].typ),(yyvsp[(3) - (3)].typ),yylineno);;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 574 "oberon.y"
    { (yyval.typ) = assign_rel_type((yyvsp[(1) - (3)].typ),(yyvsp[(3) - (3)].typ),yylineno);;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 575 "oberon.y"
    { (yyval.typ) = assign_rel_type((yyvsp[(1) - (3)].typ),(yyvsp[(3) - (3)].typ),yylineno);;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 576 "oberon.y"
    { (yyval.typ) = assign_rel_type((yyvsp[(1) - (3)].typ),(yyvsp[(3) - (3)].typ),yylineno);;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 577 "oberon.y"
    { (yyval.typ) = assign_rel_type((yyvsp[(1) - (3)].typ),(yyvsp[(3) - (3)].typ),yylineno);;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 580 "oberon.y"
    {
                 if( (yyvsp[(3) - (3)].typ)->node==-1){
                   //the second expression defines a type
                   (yyval.typ) = basicType[tBOOLEAN];
                 }
                 else  {
                   (yyval.typ) = basicType[tERROR];
                   if ((yyvsp[(3) - (3)].typ)!=basicType[tERROR])
                   fprintf(stderr,"Type error at %d: expression does not define a type\n",yylineno);
                 }
               ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 591 "oberon.y"
    { if (isArithmetic((yyvsp[(2) - (2)].typ)))
							 (yyval.typ) = (yyvsp[(2) - (2)].typ);
						  else {
                            (yyval.typ) = basicType[tERROR];
                            if ((yyvsp[(2) - (2)].typ)!=basicType[tERROR])
                            fprintf(stderr,"Type error at %d: Not an arithmetic type\n",yylineno);
                          }
						;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 599 "oberon.y"
    { if (isArithmetic((yyvsp[(2) - (2)].typ)))
							 (yyval.typ) = (yyvsp[(2) - (2)].typ);
						  else {
                            (yyval.typ) = basicType[tERROR];
                            if ((yyvsp[(2) - (2)].typ)!=basicType[tERROR])
                            fprintf(stderr,"Type error at %d: Not an arithmetic type\n",yylineno);
                          }
						;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 607 "oberon.y"
    {(yyval.typ) = assign_add_type((yyvsp[(1) - (3)].typ),(yyvsp[(3) - (3)].typ),yylineno); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 608 "oberon.y"
    {(yyval.typ) = assign_add_type((yyvsp[(1) - (3)].typ),(yyvsp[(3) - (3)].typ),yylineno); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 610 "oberon.y"
    { if ( CheckEquivalence((yyvsp[(1) - (3)].typ),basicType[tBOOLEAN]) && CheckEquivalence((yyvsp[(3) - (3)].typ),basicType[tBOOLEAN]) )
					 (yyval.typ) = basicType[tBOOLEAN];
				  else {
                    (yyval.typ) = basicType[tERROR];
                    if ( (yyvsp[(1) - (3)].typ)!=basicType[tERROR] && (yyvsp[(3) - (3)].typ)!=basicType[tERROR])
                    typeError(0,(yyvsp[(1) - (3)].typ),basicType[tBOOLEAN],yylineno);
                  }
				;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 618 "oberon.y"
    { 
                  //
                  // if(isArithmetic($1->type,$3->type){
                  //    $$ = typeExpansion($1,$3);
                  // }
                  // typeExpansion will automatically typecast the values
                  // to be implemented in the next stage
                  //
				  (yyval.typ) = assign_add_type((yyvsp[(1) - (3)].typ),(yyvsp[(3) - (3)].typ),yylineno);
			    ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 629 "oberon.y"
    {(yyval.typ) = assign_add_type((yyvsp[(1) - (3)].typ),(yyvsp[(3) - (3)].typ),yylineno); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 631 "oberon.y"
    {
				  if (CheckEquivalence((yyvsp[(1) - (3)].typ),basicType[tINTEGER]) && CheckEquivalence((yyvsp[(3) - (3)].typ),basicType[tINTEGER]) )
					 (yyval.typ) = basicType[tINTEGER];
				  else {
				     (yyval.typ) = basicType[tERROR];
				     if ( (yyvsp[(1) - (3)].typ)!=basicType[tERROR] && (yyvsp[(3) - (3)].typ)!=basicType[tERROR])
				     fprintf(stderr,"Type error in division DIV at line number %d",yylineno);				    
				    } 
			    ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 640 "oberon.y"
    { 
				  if ( CheckEquivalence((yyvsp[(1) - (3)].typ),basicType[tINTEGER]) && CheckEquivalence((yyvsp[(3) - (3)].typ),basicType[tINTEGER]) )
					 (yyval.typ) = basicType[tINTEGER];
				  else {
				     (yyval.typ) = basicType[tERROR];
				     if ( (yyvsp[(1) - (3)].typ)!=basicType[tERROR] && (yyvsp[(3) - (3)].typ)!=basicType[tERROR])
				     fprintf(stderr,"Type error in division DIV at line number %d",yylineno);				    
				    } 
			    ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 649 "oberon.y"
    { 
				  if ( CheckEquivalence((yyvsp[(1) - (3)].typ),basicType[tBOOLEAN]) && CheckEquivalence((yyvsp[(3) - (3)].typ),basicType[tBOOLEAN]) )
					 (yyval.typ) = basicType[tBOOLEAN];
				  else {
				     (yyval.typ) = basicType[tERROR];
				     if ( (yyvsp[(1) - (3)].typ)!=basicType[tERROR] && (yyvsp[(3) - (3)].typ)!=basicType[tERROR])
				     fprintf(stderr,"Type error in division DIV at line number %d",yylineno);				    
				    } 
				;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 658 "oberon.y"
    { (yyval.typ) = (yyvsp[(1) - (1)].typ);;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 662 "oberon.y"
    { (yyval.typ) = (yyvsp[(1) - (1)].typ); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 663 "oberon.y"
    { (yyval.typ) = basicType[tINTEGER];;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 664 "oberon.y"
    { (yyval.typ) = basicType[tREAL];;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 665 "oberon.y"
    { (yyval.typ) = basicType[tCHAR];;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 667 "oberon.y"
    { (yyval.typ) = new TypeSpecifier(tPOINTER);
				(yyval.typ)->n = 1;
				(yyval.typ)->child = new TypeSpecifier *[1];
                (yyval.typ)->child[0] = basicType[tCHAR];
			  ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 673 "oberon.y"
    { (yyval.typ)= basicType[tVOID];;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 674 "oberon.y"
    { (yyval.typ)= NULL;;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 675 "oberon.y"
    { (yyval.typ)=(yyvsp[(2) - (3)].typ);;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 676 "oberon.y"
    { (yyval.typ)=(yyvsp[(2) - (2)].typ);;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 700 "oberon.y"
    {
                  Entry *e = env->lookup(string((yyvsp[(1) - (1)].str)));
                  if(e==NULL){
                     fprintf(stderr,"error at line %d: %s is not declared in this scope.\n",yylineno,(yyvsp[(1) - (1)].str));
                     expectedType.push(basicType[tERROR]);
                  }
                  else
                    expectedType.push(env->lookup(string((yyvsp[(1) - (1)].str)))->type);
                ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 709 "oberon.y"
    {
                    (yyval.typ)=expectedType.top();
                    expectedType.pop();
                ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 721 "oberon.y"
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
                    ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 740 "oberon.y"
    {
                      TypeSpecifier * tmp = expectedType.top();
                      if(tmp!=basicType[tERROR]){
                        if(tmp->node == tPROCEDURE){
                          if(validateFunctionCall(tmp,(yyvsp[(2) - (3)].typlist),yylineno))
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
                    ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 758 "oberon.y"
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
                    ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 780 "oberon.y"
    {
                        (yyval.typlist) = new TypeList;
                        (yyval.typlist)->head=(yyvsp[(1) - (1)].typ);
                        (yyval.typlist)->size=1;
                        (yyval.typlist)->tail=NULL;
                    ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 786 "oberon.y"
    { 
                        (yyval.typlist) = new TypeList;
                        (yyval.typlist)->head=(yyvsp[(1) - (3)].typ);
                        (yyval.typlist)->tail=(yyvsp[(3) - (3)].typlist);
                        (yyval.typlist)->size=(yyval.typlist)->tail->size+1;
					;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 795 "oberon.y"
    { identList.push((yyvsp[(1) - (1)].str)); 
                /*printf("push in list - %s size of list %d \n",$1,identList.size());*/ ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 797 "oberon.y"
    { identList.push((yyvsp[(1) - (2)].str)); 
                /*printf("push in list - %s size of list %d \n",$1,identList.size());*/ ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 804 "oberon.y"
    { strcpy((yyval.str),(yyvsp[(1) - (1)].str)); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 806 "oberon.y"
    { 
                  strcpy((yyval.str),(yyvsp[(1) - (3)].str));
                  strcat((yyval.str),".");
                  strcat((yyval.str),(yyvsp[(3) - (3)].str));
                ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 815 "oberon.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2602 "oberon.cc"
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
#line 821 "oberon.y"


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




