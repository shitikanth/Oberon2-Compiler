
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
queue< pair<queue<char *>, TypeSpecifier *> >fieldList;
int fieldSize=0;


/* Line 189 of yacc.c  */
#line 109 "oberon.cc"

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
     ident = 299,
     UMINUS = 300,
     UPLUS = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 36 "oberon.y"

  char * str;
  TypeSpecifier * typ;
  Ast * syn;



/* Line 214 of yacc.c  */
#line 199 "oberon.cc"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 211 "oberon.cc"

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
#define YYLAST   651

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNRULES -- Number of states.  */
#define YYNSTATES  296

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    46,     2,     2,    53,     2,
      61,    62,    51,    49,    58,    50,    57,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    59,    56,
      47,    45,    48,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    65,    63,    66,    64,     2,     2,     2,
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
      54,    55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    13,    17,    18,    22,    24,    28,    30,
      33,    34,    37,    41,    45,    46,    51,    52,    58,    59,
      60,    67,    68,    69,    76,    77,    81,    85,    86,    96,
     102,   108,   112,   115,   116,   120,   122,   126,   131,   135,
     137,   143,   150,   151,   153,   158,   162,   169,   173,   177,
     180,   184,   186,   187,   194,   198,   199,   203,   205,   209,
     211,   219,   226,   232,   237,   249,   259,   263,   268,   270,
     273,   275,   276,   282,   283,   286,   287,   289,   293,   297,
     298,   300,   304,   306,   310,   316,   320,   324,   326,   330,
     334,   338,   342,   346,   350,   354,   358,   361,   364,   368,
     372,   376,   380,   384,   388,   392,   396,   398,   400,   402,
     404,   406,   408,   410,   414,   417,   421,   423,   424,   428,
     430,   432,   436,   439,   443,   448,   451,   456,   459,   460,
     462,   466,   468,   469,   474,   476,   480,   482,   485
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      70,     0,    -1,    19,    44,    56,    71,    75,    74,    29,
      44,    57,    -1,     4,    72,    56,    -1,    -1,    72,    58,
      73,    -1,    73,    -1,    44,    37,    44,    -1,    44,    -1,
       6,    95,    -1,    -1,    76,    83,    -1,    15,    78,    76,
      -1,    14,    79,    76,    -1,    -1,    20,    77,    81,    76,
      -1,    -1,   118,    45,   105,    56,    78,    -1,    -1,    -1,
     118,    45,    91,    56,    80,    79,    -1,    -1,    -1,   115,
      59,    91,    56,    82,    81,    -1,    -1,    84,    56,    83,
      -1,    85,    56,    83,    -1,    -1,    32,    90,   118,    86,
      56,    75,    74,    29,    44,    -1,    32,    60,    90,   118,
      86,    -1,    61,    87,    62,    59,   117,    -1,    61,    87,
      62,    -1,    61,    62,    -1,    -1,    88,    56,    87,    -1,
      88,    -1,    89,    59,    91,    -1,    20,    89,    59,    91,
      -1,    89,    58,    44,    -1,    44,    -1,    61,    44,    59,
      44,    62,    -1,    61,    20,    44,    59,    44,    62,    -1,
      -1,   117,    -1,     3,    92,    25,    91,    -1,     3,    25,
      91,    -1,    34,    61,   117,    62,    93,    29,    -1,    34,
      93,    29,    -1,    30,    11,    91,    -1,    32,    86,    -1,
     105,    58,    92,    -1,   105,    -1,    -1,   115,    59,    91,
      56,    94,    93,    -1,   115,    59,    91,    -1,    -1,    96,
      56,    95,    -1,    96,    -1,   112,    37,   106,    -1,   112,
      -1,    35,   106,     8,    95,    97,    98,    29,    -1,    12,
     106,    25,    99,    98,    29,    -1,    23,   106,    21,    95,
      29,    -1,    36,    95,    17,   106,    -1,    33,    44,    37,
     106,    11,   106,     9,   105,    21,    95,    29,    -1,    33,
      44,    37,   106,    11,   106,    21,    95,    29,    -1,    13,
      95,    29,    -1,    26,   103,    98,    29,    -1,    31,    -1,
       5,   106,    -1,     5,    -1,    -1,    27,   106,     8,    95,
      97,    -1,    -1,    24,    95,    -1,    -1,   100,    -1,   100,
      63,    99,    -1,   101,    59,    95,    -1,    -1,   102,    -1,
     102,    58,   101,    -1,   105,    -1,   105,    40,   105,    -1,
     104,    21,    95,    63,   103,    -1,   104,    21,    95,    -1,
     117,    59,   117,    -1,   106,    -1,   106,    45,   106,    -1,
     106,    46,   106,    -1,   106,    47,   106,    -1,   106,    38,
     106,    -1,   106,    48,   106,    -1,   106,    39,   106,    -1,
     106,     7,   106,    -1,   106,    10,   106,    -1,    49,   106,
      -1,    50,   106,    -1,   106,    49,   106,    -1,   106,    50,
     106,    -1,   106,    28,   106,    -1,   106,    51,   106,    -1,
     106,    52,   106,    -1,   106,    18,   106,    -1,   106,    16,
     106,    -1,   106,    53,   106,    -1,   107,    -1,   112,    -1,
      43,    -1,    41,    -1,    42,    -1,    22,    -1,   108,    -1,
      61,   106,    62,    -1,    64,   107,    -1,    65,   109,    66,
      -1,   110,    -1,    -1,   111,    58,   110,    -1,   111,    -1,
     106,    -1,   106,    40,   106,    -1,    44,   113,    -1,    57,
      44,   113,    -1,    67,   114,    68,   113,    -1,    60,   113,
      -1,    61,   114,    62,   113,    -1,    61,    62,    -1,    -1,
     106,    -1,   106,    58,   114,    -1,   118,    -1,    -1,   118,
      58,   116,   115,    -1,    44,    -1,    44,    57,    44,    -1,
      44,    -1,    44,    51,    -1,    44,    50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    89,    89,    93,    94,    98,    99,   103,   104,   108,
     109,   113,   117,   118,   119,   119,   120,   124,   125,   130,
     129,   136,   141,   140,   154,   158,   159,   160,   165,   171,
     176,   177,   178,   179,   183,   184,   188,   189,   193,   194,
     198,   199,   200,   204,   219,   227,   235,   240,   260,   268,
     273,   274,   278,   277,   284,   289,   293,   294,   298,   299,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   317,   318,   322,   323,   327,   328,   332,   333,
     337,   338,   342,   343,   347,   348,   352,   356,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   383,   384,   385,
     386,   387,   388,   389,   390,   394,   398,   399,   403,   404,
     408,   409,   413,   417,   418,   419,   420,   421,   422,   426,
     427,   431,   433,   433,   440,   441,   451,   452,   453
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
  "CONSTstring", "CONSTnum", "ident", "'='", "'#'", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'&'", "UMINUS", "UPLUS", "';'", "'.'", "','",
  "':'", "'^'", "'('", "')'", "'|'", "'~'", "'{'", "'}'", "'['", "']'",
  "$accept", "Module", "ImportList", "ImportListTemp", "Import",
  "StatBlock", "DeclSeq", "DataList", "$@1", "ConstList", "TypeList",
  "$@2", "VarList", "$@3", "ProcList", "ProcDecl", "ForwardDecl",
  "FormalPars", "FPsectionList", "FPsection", "IdentList", "Receiver",
  "Type", "ConstExprList", "FieldList", "$@4", "StatementSeq", "Statement",
  "ElseIfBlock", "Else", "CaseList", "Case", "CaseLabelList", "CaseLabels",
  "GuardStatList", "Guard", "ConstExpr", "Expr", "Factor", "Set",
  "optElementList", "ElementList", "Element", "Designator", "optSuffix",
  "ExprList", "IdentDefList", "$@5", "Qualident", "IdentDef", 0
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
     295,   296,   297,   298,   299,    61,    35,    60,    62,    43,
      45,    42,    47,    38,   300,   301,    59,    46,    44,    58,
      94,    40,    41,   124,   126,   123,   125,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    76,    76,    77,    76,    76,    78,    78,    80,
      79,    79,    82,    81,    81,    83,    83,    83,    84,    85,
      86,    86,    86,    86,    87,    87,    88,    88,    89,    89,
      90,    90,    90,    91,    91,    91,    91,    91,    91,    91,
      92,    92,    94,    93,    93,    93,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   103,   103,   104,   105,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   107,   107,   107,
     107,   107,   107,   107,   107,   108,   109,   109,   110,   110,
     111,   111,   112,   113,   113,   113,   113,   113,   113,   114,
     114,   115,   116,   115,   117,   117,   118,   118,   118
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     9,     3,     0,     3,     1,     3,     1,     2,
       0,     2,     3,     3,     0,     4,     0,     5,     0,     0,
       6,     0,     0,     6,     0,     3,     3,     0,     9,     5,
       5,     3,     2,     0,     3,     1,     3,     4,     3,     1,
       5,     6,     0,     1,     4,     3,     6,     3,     3,     2,
       3,     1,     0,     6,     3,     0,     3,     1,     3,     1,
       7,     6,     5,     4,    11,     9,     3,     4,     1,     2,
       1,     0,     5,     0,     2,     0,     1,     3,     3,     0,
       1,     3,     1,     3,     5,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     3,     1,     0,     3,     1,
       1,     3,     2,     3,     4,     2,     4,     2,     0,     1,
       3,     1,     0,     4,     1,     3,     1,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     4,     0,    16,     8,     0,
       6,    21,    18,    14,    10,    27,     0,     3,     0,   136,
      16,     0,    16,     0,    24,    71,     0,    42,    11,     0,
       0,     7,     5,   138,   137,    13,     0,    12,     0,    16,
       0,   131,    70,     0,    71,     0,     0,    68,     0,     0,
      71,   128,     9,    57,    59,     0,    42,     0,     0,    27,
      27,     0,     0,    33,    55,   134,     0,    43,   111,   109,
     110,   108,     0,     0,     0,     0,   117,     0,    87,   106,
     112,   107,    15,     0,   132,    69,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,   128,     0,     0,   122,
      71,     0,     0,     0,     0,     0,    33,    25,    26,     0,
       0,    51,     0,     0,    49,     0,     0,     0,     0,    19,
      96,    97,     0,   114,   120,     0,   116,   119,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,    66,    71,
      71,     0,    71,     0,     0,    71,     0,   128,   125,   127,
     129,     0,     0,    56,    58,     2,    33,     0,     0,     0,
      45,     0,     0,    48,     0,    39,    32,     0,    35,     0,
       0,    47,     0,   135,    21,   113,     0,   115,     0,    17,
      94,    95,   104,   103,   100,    91,    93,    88,    89,    90,
      92,    98,    99,   101,   102,   105,    22,   133,    75,    76,
       0,    80,    82,     0,    74,    67,    85,    86,     0,    73,
      63,   123,     0,   128,   128,    29,     0,     0,    16,    44,
      50,     0,    31,     0,     0,     0,    55,    54,    20,   121,
     118,    24,     0,    79,    71,     0,     0,    62,     0,     0,
       0,    75,   130,   126,   124,     0,    40,    10,     0,     0,
      34,    38,    36,     0,    52,    23,    61,    77,    78,    81,
      83,    84,     0,     0,     0,    41,     0,    37,    30,    46,
      55,     0,    71,    71,    60,     0,    53,     0,     0,    73,
      28,    71,    65,    72,     0,    64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     9,    10,    26,    14,    15,    24,    22,
      20,   184,    39,   241,    28,    29,    30,   114,   177,   178,
     179,    58,    66,   110,   116,   280,    52,    53,   251,   151,
     208,   209,   210,   211,    89,    90,   212,    78,    79,    80,
     125,   126,   127,    81,    99,   161,   117,   146,    67,    41
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -229
static const yytype_int16 yypact[] =
{
      -3,   -23,    35,    13,  -229,    81,    43,    63,    54,    18,
    -229,    48,    48,  -229,    93,    66,    56,  -229,    43,    -9,
      63,    59,    63,    60,    48,   607,    72,   -30,  -229,    55,
      58,  -229,  -229,  -229,  -229,  -229,    52,  -229,   149,    63,
      57,    62,   149,   149,   607,   149,    71,  -229,    77,   149,
     607,   -33,  -229,    67,    94,    88,    74,   -11,    48,    66,
      66,    -5,   125,    78,    29,    83,    82,  -229,  -229,  -229,
    -229,  -229,   149,   149,   149,     7,   149,    85,   533,  -229,
    -229,  -229,  -229,    52,  -229,   533,   344,   113,   360,   122,
     126,    89,   112,   407,   150,   124,   -33,   567,   149,  -229,
     607,   149,   115,    48,   129,   110,    78,  -229,  -229,    52,
     145,   116,    52,     3,  -229,    71,   147,   119,   135,  -229,
    -229,  -229,   234,  -229,   423,   114,  -229,   123,    48,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   127,    48,   149,  -229,   607,
     607,   153,   607,    71,   149,   607,   149,   -33,  -229,  -229,
     281,   132,   117,  -229,   533,  -229,    78,   128,   142,   139,
    -229,    52,   149,  -229,   144,  -229,  -229,   134,   141,    22,
     138,  -229,    52,  -229,    48,  -229,   149,  -229,   149,  -229,
     549,   549,  -229,  -229,    92,   549,   549,   549,   549,   549,
     549,    92,    92,  -229,  -229,  -229,  -229,  -229,   122,   140,
     143,   146,   165,   177,  -229,  -229,   152,  -229,   470,   181,
     533,  -229,   149,   -33,   -33,  -229,   172,   155,    63,  -229,
    -229,    30,   159,     2,   176,    52,    48,   166,  -229,   533,
    -229,    48,   195,   149,   607,   149,   149,  -229,    71,   149,
     149,   122,  -229,  -229,  -229,   163,  -229,    93,    52,    71,
    -229,  -229,  -229,   197,  -229,  -229,  -229,  -229,  -229,  -229,
    -229,  -229,   297,   486,   198,  -229,   199,  -229,  -229,  -229,
      48,   149,   607,   607,  -229,   185,  -229,   209,   202,   181,
    -229,   607,  -229,  -229,   203,  -229
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -229,  -229,  -229,  -229,   215,   -22,     6,    -7,  -229,   108,
      53,  -229,     1,  -229,    -6,  -229,  -229,  -104,     5,  -229,
      73,   189,   -69,    79,  -228,  -229,   -43,  -229,   -40,  -190,
      10,  -229,     9,  -229,     8,  -229,   -35,    21,   180,  -229,
    -229,    75,  -229,   -25,   -90,   -93,   -20,  -229,   -36,     0
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      54,    87,   169,    77,    40,   162,   158,    94,   263,   104,
      91,    21,    23,    35,   145,    37,     1,    68,   242,    54,
     109,     3,   174,   174,    95,    54,   111,    96,    97,    68,
      56,    57,    82,   105,    98,     4,    69,    70,    71,    51,
     170,    33,    34,   173,    72,    73,   175,   175,    69,    70,
      71,    51,   286,   107,   108,    61,    74,   163,   106,    75,
      76,   274,   225,    85,    86,   176,    88,   221,    74,     5,
      93,    75,    76,    19,    17,    54,    18,    11,    12,   180,
     234,   235,    62,    13,    63,     6,    64,     8,   234,   258,
     115,    16,    19,   120,   121,   122,    65,   124,    27,    25,
      31,    55,   229,   166,    36,    38,   213,   214,   131,   216,
     132,    59,   219,   237,    60,    65,    83,   217,   160,   160,
      84,    92,   164,   100,    54,    54,   207,    54,    23,   252,
      54,   101,   102,   253,   254,    57,   112,   111,   119,   113,
     118,   128,   148,   142,   143,   144,   150,   152,   153,   154,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   262,   156,   157,   168,
     171,    68,   165,   167,   172,   218,   181,   220,   182,   183,
     187,   188,   215,   206,    21,   224,   227,   226,   175,   277,
      69,    70,    71,    51,   223,   228,   232,   233,    72,    73,
     236,   268,   244,   243,   245,   246,   247,   239,   250,   124,
      74,   270,    91,    75,    76,   248,   255,   256,   259,    54,
     261,    40,   264,   278,   266,   275,   279,   284,   285,   290,
     291,   292,   295,    32,   257,   276,   189,   238,   260,   288,
     289,   129,   265,   160,   130,   103,   287,   231,   294,   293,
     131,   230,   132,   267,   269,   123,   271,    54,    54,     0,
       0,     0,   133,   240,     0,     0,    54,     0,     0,     0,
     272,   273,   134,   135,     0,     0,     0,     0,     0,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   129,     0,
       0,   130,     0,     0,     0,     0,   185,   131,     0,   132,
       0,     0,     0,     0,   129,     0,   281,   130,     0,   133,
       0,     0,     0,   131,     0,   132,     0,     0,   282,   134,
     135,     0,     0,     0,     0,   133,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   134,   135,     0,     0,   222,
       0,     0,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   129,     0,     0,   130,     0,     0,     0,     0,     0,
     131,     0,   132,     0,     0,     0,     0,   129,     0,   147,
     130,     0,   133,     0,     0,     0,   131,     0,   132,     0,
       0,   149,   134,   135,     0,     0,     0,     0,   133,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   134,   135,
       0,     0,     0,     0,     0,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   129,   155,     0,   130,     0,     0,
       0,     0,     0,   131,     0,   132,     0,     0,     0,     0,
     129,     0,     0,   130,     0,   133,     0,     0,     0,   131,
       0,   132,     0,     0,     0,   134,   135,     0,     0,     0,
       0,   133,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   134,   135,   186,     0,     0,     0,     0,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   129,     0,     0,
     130,   249,     0,     0,     0,     0,   131,     0,   132,     0,
       0,     0,     0,   129,   283,     0,   130,     0,   133,     0,
       0,     0,   131,     0,   132,     0,     0,     0,   134,   135,
       0,     0,     0,     0,   133,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   134,   135,     0,     0,     0,     0,
       0,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     129,     0,     0,   130,     0,     0,     0,     0,     0,   131,
       0,   132,     0,     0,     0,     0,    -1,     0,     0,    -1,
       0,   133,     0,     0,     0,   131,     0,   132,     0,     0,
       0,   134,   135,     0,     0,     0,     0,   133,   136,   137,
     138,   139,   140,   141,   142,   143,   144,    -1,    -1,    68,
       0,     0,     0,     0,    -1,    -1,    -1,    -1,   140,   141,
     142,   143,   144,     0,     0,     0,     0,     0,    69,    70,
      71,    51,    42,     0,     0,     0,    72,    73,     0,    43,
      44,     0,     0,     0,     0,     0,     0,     0,    74,   159,
      45,    75,    76,    46,     0,     0,     0,     0,    47,     0,
      48,     0,    49,    50,     0,     0,     0,     0,     0,     0,
       0,    51
};

static const yytype_int16 yycheck[] =
{
      25,    44,   106,    38,    24,    98,    96,    50,   236,    20,
      46,    11,    12,    20,    83,    22,    19,    22,   208,    44,
      25,    44,    20,    20,    57,    50,    61,    60,    61,    22,
      60,    61,    39,    44,    67,     0,    41,    42,    43,    44,
     109,    50,    51,   112,    49,    50,    44,    44,    41,    42,
      43,    44,   280,    59,    60,     3,    61,   100,    58,    64,
      65,   251,   166,    42,    43,    62,    45,   157,    61,    56,
      49,    64,    65,    44,    56,   100,    58,    14,    15,   115,
      58,    59,    30,    20,    32,     4,    34,    44,    58,    59,
      61,    37,    44,    72,    73,    74,    44,    76,    32,     6,
      44,    29,   171,   103,    45,    45,   149,   150,    16,   152,
      18,    56,   155,   182,    56,    44,    59,   153,    97,    98,
      58,    44,   101,    56,   149,   150,   146,   152,   128,   222,
     155,    37,    44,   223,   224,    61,    11,   172,    56,    61,
      57,    56,    29,    51,    52,    53,    24,    21,    59,    37,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   235,    17,    44,    59,
      25,    22,    57,    44,    58,   154,    29,   156,    59,    44,
      66,    58,    29,    56,   184,    68,    44,    59,    44,   258,
      41,    42,    43,    44,    62,    56,    62,    56,    49,    50,
      62,   244,    59,    63,    58,    40,    29,   186,    27,   188,
      61,   246,   248,    64,    65,    63,    44,    62,    59,   244,
      44,   241,    56,   259,    29,    62,    29,    29,    29,    44,
      21,    29,    29,    18,   228,   257,   128,   184,   233,   282,
     283,     7,   241,   222,    10,    56,   281,   174,   291,   289,
      16,   172,    18,   243,   245,    75,   248,   282,   283,    -1,
      -1,    -1,    28,   188,    -1,    -1,   291,    -1,    -1,    -1,
     249,   250,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     7,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    62,    16,    -1,    18,
      -1,    -1,    -1,    -1,     7,    -1,     9,    10,    -1,    28,
      -1,    -1,    -1,    16,    -1,    18,    -1,    -1,    21,    38,
      39,    -1,    -1,    -1,    -1,    28,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    38,    39,    -1,    -1,    58,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      16,    -1,    18,    -1,    -1,    -1,    -1,     7,    -1,    25,
      10,    -1,    28,    -1,    -1,    -1,    16,    -1,    18,    -1,
      -1,    21,    38,    39,    -1,    -1,    -1,    -1,    28,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    38,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     7,     8,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    18,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    10,    -1,    28,    -1,    -1,    -1,    16,
      -1,    18,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,
      -1,    28,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    38,    39,    40,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     7,    -1,    -1,
      10,    11,    -1,    -1,    -1,    -1,    16,    -1,    18,    -1,
      -1,    -1,    -1,     7,     8,    -1,    10,    -1,    28,    -1,
      -1,    -1,    16,    -1,    18,    -1,    -1,    -1,    38,    39,
      -1,    -1,    -1,    -1,    28,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    38,    39,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    16,
      -1,    18,    -1,    -1,    -1,    -1,     7,    -1,    -1,    10,
      -1,    28,    -1,    -1,    -1,    16,    -1,    18,    -1,    -1,
      -1,    38,    39,    -1,    -1,    -1,    -1,    28,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    38,    39,    22,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,     5,    -1,    -1,    -1,    49,    50,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      23,    64,    65,    26,    -1,    -1,    -1,    -1,    31,    -1,
      33,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    70,    44,     0,    56,     4,    71,    44,    72,
      73,    14,    15,    20,    75,    76,    37,    56,    58,    44,
      79,   118,    78,   118,    77,     6,    74,    32,    83,    84,
      85,    44,    73,    50,    51,    76,    45,    76,    45,    81,
     115,   118,     5,    12,    13,    23,    26,    31,    33,    35,
      36,    44,    95,    96,   112,    29,    60,    61,    90,    56,
      56,     3,    30,    32,    34,    44,    91,   117,    22,    41,
      42,    43,    49,    50,    61,    64,    65,   105,   106,   107,
     108,   112,    76,    59,    58,   106,   106,    95,   106,   103,
     104,   117,    44,   106,    95,    57,    60,    61,    67,   113,
      56,    37,    44,    90,    20,    44,   118,    83,    83,    25,
      92,   105,    11,    61,    86,    61,    93,   115,    57,    56,
     106,   106,   106,   107,   106,   109,   110,   111,    56,     7,
      10,    16,    18,    28,    38,    39,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    91,   116,    25,    29,    21,
      24,    98,    21,    59,    37,     8,    17,    44,   113,    62,
     106,   114,   114,    95,   106,    57,   118,    44,    59,    86,
      91,    25,    58,    91,    20,    44,    62,    87,    88,    89,
     117,    29,    59,    44,    80,    62,    40,    66,    58,    78,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,    56,   115,    99,   100,
     101,   102,   105,    95,    95,    29,    95,   117,   106,    95,
     106,   113,    58,    62,    68,    86,    59,    44,    56,    91,
      92,    89,    62,    56,    58,    59,    62,    91,    79,   106,
     110,    82,    98,    63,    59,    58,    40,    29,    63,    11,
      27,    97,   114,   113,   113,    44,    62,    75,    59,    59,
      87,    44,    91,    93,    56,    81,    29,    99,    95,   101,
     105,   103,   106,   106,    98,    62,    74,    91,   117,    29,
      94,     9,    21,     8,    29,    29,    93,   105,    95,    95,
      44,    21,    29,    97,    95,    29
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
#line 119 "oberon.y"
    {printf("Found declarations.\n");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 130 "oberon.y"
    {
                      printf("Add type %s\n",(yyvsp[(1) - (4)].str));
                      if(!env->insertType(string((yyvsp[(1) - (4)].str)),(yyvsp[(3) - (4)].typ)))
                        fprintf(stderr,"error: Redeclaration of %s\n",(yyvsp[(1) - (4)].str));
                    ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 141 "oberon.y"
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

  case 43:

/* Line 1455 of yacc.c  */
#line 205 "oberon.y"
    { 
                          Entry * smt; 
                          (yyval.typ) = NULL;
                          smt = env->lookup(string((yyvsp[(1) - (1)].str))); 
                          if(smt==NULL){
                            fprintf(stderr,"error: %s not declared.\n",(yyvsp[(1) - (1)].str));
                          }
                          else if(smt->type->node==-1){
                            (yyval.typ) = (TypeSpecifier *) (smt->value);
                          }
                          else{
                            fprintf(stderr,"%s is not a declared Type.\n",(yyvsp[(1) - (1)].str));
                          }
                        ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 220 "oberon.y"
    {
                          (yyval.typ) = new TypeSpecifier();
                          (yyval.typ)->node = tARRAY;
                          (yyval.typ)->n = 1;
                          (yyval.typ)->child = new TypeSpecifier *[1];
                          (yyval.typ)->child[0] = (yyvsp[(4) - (4)].typ);
                        ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 228 "oberon.y"
    {
                          (yyval.typ) = new TypeSpecifier();
                          (yyval.typ)->node = tARRAY;
                          (yyval.typ)->n = 1;
                          (yyval.typ)->child = new TypeSpecifier *[1];
                          (yyval.typ)->child[0] = (yyvsp[(3) - (3)].typ);
                        ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 236 "oberon.y"
    {
                          //Neglect for now
                          (yyval.typ)=NULL;
                        ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 241 "oberon.y"
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
                          fieldSize=0;
                        ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 261 "oberon.y"
    {
                          (yyval.typ) = new TypeSpecifier();
                          (yyval.typ)->node = tPOINTER;
                          (yyval.typ)->n = 1;
                          (yyval.typ)->child = new TypeSpecifier *[1];
                          (yyval.typ)->child[0] = (yyvsp[(3) - (3)].typ);
                        ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 269 "oberon.y"
    {(yyval.typ)=NULL;;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 278 "oberon.y"
    {
                          fieldList.push(make_pair(identList,(yyvsp[(3) - (4)].typ)));
                          fieldSize+=identList.size();
                        ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 282 "oberon.y"
    {//HAHA
             ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 285 "oberon.y"
    {
                          fieldList.push(make_pair(identList,(yyvsp[(3) - (3)].typ)));
                          fieldSize+=identList.size();
                        ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 431 "oberon.y"
    { identList.push((yyvsp[(1) - (1)].str)); 
                /*printf("push in list - %s size of list %d \n",$1,identList.size());*/ ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 433 "oberon.y"
    { identList.push((yyvsp[(1) - (2)].str)); 
                /*printf("push in list - %s size of list %d \n",$1,identList.size());*/ ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 440 "oberon.y"
    { strcpy((yyval.str),(yyvsp[(1) - (1)].str)); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 442 "oberon.y"
    { 
                  strcpy((yyval.str),(yyvsp[(1) - (3)].str));
                  strcat((yyval.str),".");
                  strcat((yyval.str),(yyvsp[(3) - (3)].str));
                ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 451 "oberon.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1944 "oberon.cc"
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
#line 457 "oberon.y"


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




