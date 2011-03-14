
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

#include<stdio.h>
#include<string>
#include<queue>
#include "scope.h"
#include "type.h"
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
//}}}

Scope *env;
queue<char *> identList;



/* Line 189 of yacc.c  */
#line 100 "y.tab.c"

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
/* Tokens.  */
#define ARRAY 258
#define IMPORT 259
#define RETURN 260
#define BBEGIN 261
#define IN 262
#define THEN 263
#define BY 264
#define IS 265
#define TO 266
#define CASE 267
#define LOOP 268
#define TYPE 269
#define CONST 270
#define MOD 271
#define UNTIL 272
#define DIV 273
#define MODULE 274
#define VAR 275
#define DO 276
#define NIL 277
#define WHILE 278
#define ELSE 279
#define OF 280
#define WITH 281
#define ELSIF 282
#define OR 283
#define END 284
#define POINTER 285
#define EXIT 286
#define PROCEDURE 287
#define FOR 288
#define RECORD 289
#define IF 290
#define REPEAT 291
#define ASSIGN 292
#define LE 293
#define GE 294
#define DOTS 295
#define CONSTchar 296
#define CONSTstring 297
#define CONSTnum 298
#define ident 299
#define UMINUS 300
#define UPLUS 301




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 27 "oberon.y"

  char * str;



/* Line 214 of yacc.c  */
#line 234 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 246 "y.tab.c"

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
#define YYLAST   629

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNRULES -- Number of states.  */
#define YYNSTATES  294

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
      65,    66,    67,    74,    75,    79,    83,    84,    94,   100,
     106,   110,   113,   114,   118,   120,   124,   129,   133,   135,
     141,   148,   149,   151,   156,   160,   167,   171,   175,   178,
     182,   184,   190,   194,   195,   199,   201,   205,   207,   215,
     222,   228,   233,   245,   255,   259,   264,   266,   269,   271,
     272,   278,   279,   282,   283,   285,   289,   293,   294,   296,
     300,   302,   306,   312,   316,   320,   322,   326,   330,   334,
     338,   342,   346,   350,   354,   357,   360,   364,   368,   372,
     376,   380,   384,   388,   392,   394,   396,   398,   400,   402,
     404,   406,   410,   413,   417,   419,   420,   424,   426,   428,
     432,   435,   439,   444,   447,   452,   455,   456,   458,   462,
     464,   465,   470,   472,   476,   478,   481
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      70,     0,    -1,    19,    44,    56,    71,    75,    74,    29,
      44,    57,    -1,     4,    72,    56,    -1,    -1,    72,    58,
      73,    -1,    73,    -1,    44,    37,    44,    -1,    44,    -1,
       6,    93,    -1,    -1,    76,    82,    -1,    15,    78,    76,
      -1,    14,    79,    76,    -1,    -1,    20,    77,    80,    76,
      -1,    -1,   116,    45,   103,    56,    78,    -1,    -1,   116,
      45,    90,    56,    79,    -1,    -1,    -1,   113,    59,    90,
      56,    81,    80,    -1,    -1,    83,    56,    82,    -1,    84,
      56,    82,    -1,    -1,    32,    89,   116,    85,    56,    75,
      74,    29,    44,    -1,    32,    60,    89,   116,    85,    -1,
      61,    86,    62,    59,   115,    -1,    61,    86,    62,    -1,
      61,    62,    -1,    -1,    87,    56,    86,    -1,    87,    -1,
      88,    59,    90,    -1,    20,    88,    59,    90,    -1,    88,
      58,    44,    -1,    44,    -1,    61,    44,    59,    44,    62,
      -1,    61,    20,    44,    59,    44,    62,    -1,    -1,   115,
      -1,     3,    91,    25,    90,    -1,     3,    25,    90,    -1,
      34,    61,   115,    62,    92,    29,    -1,    34,    92,    29,
      -1,    30,    11,    90,    -1,    32,    85,    -1,   103,    58,
      91,    -1,   103,    -1,   113,    59,    90,    56,    92,    -1,
     113,    59,    90,    -1,    -1,    94,    56,    93,    -1,    94,
      -1,   110,    37,   104,    -1,   110,    -1,    35,   104,     8,
      93,    95,    96,    29,    -1,    12,   104,    25,    97,    96,
      29,    -1,    23,   104,    21,    93,    29,    -1,    36,    93,
      17,   104,    -1,    33,    44,    37,   104,    11,   104,     9,
     103,    21,    93,    29,    -1,    33,    44,    37,   104,    11,
     104,    21,    93,    29,    -1,    13,    93,    29,    -1,    26,
     101,    96,    29,    -1,    31,    -1,     5,   104,    -1,     5,
      -1,    -1,    27,   104,     8,    93,    95,    -1,    -1,    24,
      93,    -1,    -1,    98,    -1,    98,    63,    97,    -1,    99,
      59,    93,    -1,    -1,   100,    -1,   100,    58,    99,    -1,
     103,    -1,   103,    40,   103,    -1,   102,    21,    93,    63,
     101,    -1,   102,    21,    93,    -1,   115,    59,   115,    -1,
     104,    -1,   104,    45,   104,    -1,   104,    46,   104,    -1,
     104,    47,   104,    -1,   104,    38,   104,    -1,   104,    48,
     104,    -1,   104,    39,   104,    -1,   104,     7,   104,    -1,
     104,    10,   104,    -1,    49,   104,    -1,    50,   104,    -1,
     104,    49,   104,    -1,   104,    50,   104,    -1,   104,    28,
     104,    -1,   104,    51,   104,    -1,   104,    52,   104,    -1,
     104,    18,   104,    -1,   104,    16,   104,    -1,   104,    53,
     104,    -1,   105,    -1,   110,    -1,    43,    -1,    41,    -1,
      42,    -1,    22,    -1,   106,    -1,    61,   104,    62,    -1,
      64,   105,    -1,    65,   107,    66,    -1,   108,    -1,    -1,
     109,    58,   108,    -1,   109,    -1,   104,    -1,   104,    40,
     104,    -1,    44,   111,    -1,    57,    44,   111,    -1,    67,
     112,    68,   111,    -1,    60,   111,    -1,    61,   112,    62,
     111,    -1,    61,    62,    -1,    -1,   104,    -1,   104,    58,
     112,    -1,   116,    -1,    -1,   116,    58,   114,   113,    -1,
      44,    -1,    44,    57,    44,    -1,    44,    -1,    44,    51,
      -1,    44,    50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    77,    77,    81,    82,    86,    87,    91,    92,    96,
      97,   101,   105,   106,   107,   107,   108,   112,   113,   117,
     118,   123,   122,   131,   135,   136,   137,   142,   148,   153,
     154,   155,   156,   160,   161,   165,   166,   170,   171,   175,
     176,   177,   181,   182,   183,   184,   185,   186,   187,   191,
     192,   196,   197,   198,   202,   203,   207,   208,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     226,   227,   231,   232,   236,   237,   241,   242,   246,   247,
     251,   252,   256,   257,   261,   265,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   292,   293,   294,   295,   296,
     297,   298,   299,   303,   307,   308,   312,   313,   317,   318,
     322,   326,   327,   328,   329,   330,   331,   335,   336,   340,
     341,   341,   347,   348,   352,   353,   354
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
  "VarList", "$@2", "ProcList", "ProcDecl", "ForwardDecl", "FormalPars",
  "FPsectionList", "FPsection", "IdentList", "Receiver", "Type",
  "ConstExprList", "FieldList", "StatementSeq", "Statement", "ElseIfBlock",
  "Else", "CaseList", "Case", "CaseLabelList", "CaseLabels",
  "GuardStatList", "Guard", "ConstExpr", "Expr", "Factor", "Set",
  "optElementList", "ElementList", "Element", "Designator", "optSuffix",
  "ExprList", "IdentDefList", "$@3", "Qualident", "IdentDef", 0
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
      74,    75,    76,    76,    77,    76,    76,    78,    78,    79,
      79,    81,    80,    80,    82,    82,    82,    83,    84,    85,
      85,    85,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    89,    90,    90,    90,    90,    90,    90,    90,    91,
      91,    92,    92,    92,    93,    93,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   101,   101,   102,   103,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   105,   105,   105,   105,   105,
     105,   105,   105,   106,   107,   107,   108,   108,   109,   109,
     110,   111,   111,   111,   111,   111,   111,   112,   112,   113,
     114,   113,   115,   115,   116,   116,   116
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     9,     3,     0,     3,     1,     3,     1,     2,
       0,     2,     3,     3,     0,     4,     0,     5,     0,     5,
       0,     0,     6,     0,     3,     3,     0,     9,     5,     5,
       3,     2,     0,     3,     1,     3,     4,     3,     1,     5,
       6,     0,     1,     4,     3,     6,     3,     3,     2,     3,
       1,     5,     3,     0,     3,     1,     3,     1,     7,     6,
       5,     4,    11,     9,     3,     4,     1,     2,     1,     0,
       5,     0,     2,     0,     1,     3,     3,     0,     1,     3,
       1,     3,     5,     3,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     3,     1,     0,     3,     1,     1,     3,
       2,     3,     4,     2,     4,     2,     0,     1,     3,     1,
       0,     4,     1,     3,     1,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     4,     0,    16,     8,     0,
       6,    20,    18,    14,    10,    26,     0,     3,     0,   134,
      16,     0,    16,     0,    23,    69,     0,    41,    11,     0,
       0,     7,     5,   136,   135,    13,     0,    12,     0,    16,
       0,   129,    68,     0,    69,     0,     0,    66,     0,     0,
      69,   126,     9,    55,    57,     0,    41,     0,     0,    26,
      26,     0,     0,    32,    53,   132,     0,    42,   109,   107,
     108,   106,     0,     0,     0,     0,   115,     0,    85,   104,
     110,   105,    15,     0,   130,    67,     0,     0,     0,    73,
       0,     0,     0,     0,     0,     0,   126,     0,     0,   120,
      69,     0,     0,     0,     0,     0,    32,    24,    25,     0,
       0,    50,     0,     0,    48,     0,     0,     0,     0,    20,
      94,    95,     0,   112,   118,     0,   114,   117,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    77,    64,    69,
      69,     0,    69,     0,     0,    69,     0,   126,   123,   125,
     127,     0,     0,    54,    56,     2,    32,     0,     0,     0,
      44,     0,     0,    47,     0,    38,    31,     0,    34,     0,
       0,    46,     0,   133,    19,   111,     0,   113,     0,    17,
      92,    93,   102,   101,    98,    89,    91,    86,    87,    88,
      90,    96,    97,    99,   100,   103,    21,   131,    73,    74,
       0,    78,    80,     0,    72,    65,    83,    84,     0,    71,
      61,   121,     0,   126,   126,    28,     0,     0,    16,    43,
      49,     0,    30,     0,     0,     0,    53,    52,   119,   116,
      23,     0,    77,    69,     0,     0,    60,     0,     0,     0,
      73,   128,   124,   122,     0,    39,    10,     0,     0,    33,
      37,    35,     0,    53,    22,    59,    75,    76,    79,    81,
      82,     0,     0,     0,    40,     0,    36,    29,    45,    51,
       0,    69,    69,    58,     0,     0,     0,    71,    27,    69,
      63,    70,     0,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     9,    10,    26,    14,    15,    24,    22,
      20,    39,   240,    28,    29,    30,   114,   177,   178,   179,
      58,    66,   110,   116,    52,    53,   250,   151,   208,   209,
     210,   211,    89,    90,   212,    78,    79,    80,   125,   126,
     127,    81,    99,   161,   117,   146,    67,    41
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -228
static const yytype_int16 yypact[] =
{
       8,   -27,    30,   -34,  -228,    50,    34,    14,    47,    11,
    -228,    51,    51,  -228,    85,    66,    55,  -228,    34,    21,
      14,    56,    14,    63,    51,   585,    71,   -15,  -228,    57,
      59,  -228,  -228,  -228,  -228,  -228,    58,  -228,   148,    14,
      60,    64,   148,   148,   585,   148,    72,  -228,    74,   148,
     585,    36,  -228,    65,    86,    84,    70,    -6,    51,    66,
      66,    -1,   123,    78,   -28,    83,   103,  -228,  -228,  -228,
    -228,  -228,   148,   148,   148,     9,   148,   104,   489,  -228,
    -228,  -228,  -228,    58,  -228,   489,   300,   112,   347,   137,
     141,   105,   126,   363,   149,   121,    36,   507,   148,  -228,
     585,   148,   111,    51,   130,   116,    78,  -228,  -228,    58,
     151,   119,    58,     3,  -228,    72,   150,   122,   134,    51,
    -228,  -228,   178,  -228,   410,   117,  -228,   124,    51,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   128,    51,   148,  -228,   585,
     585,   157,   585,    72,   148,   585,   148,    36,  -228,  -228,
     237,   125,   127,  -228,   489,  -228,    78,   143,   159,   152,
    -228,    58,   148,  -228,   160,  -228,  -228,   131,   158,    18,
     145,  -228,    58,  -228,  -228,  -228,   148,  -228,   148,  -228,
     536,   536,  -228,  -228,   120,   536,   536,   536,   536,   536,
     536,   120,   120,  -228,  -228,  -228,  -228,  -228,   137,   142,
     156,   161,   181,   203,  -228,  -228,   170,  -228,   426,   207,
     489,  -228,   148,    36,    36,  -228,   192,   175,    14,  -228,
    -228,    22,   182,    -5,   198,    58,    51,   187,   489,  -228,
      51,   219,   148,   585,   148,   148,  -228,    72,   148,   148,
     137,  -228,  -228,  -228,   188,  -228,    85,    58,    72,  -228,
    -228,  -228,   220,    51,  -228,  -228,  -228,  -228,  -228,  -228,
    -228,   284,   473,   222,  -228,   223,  -228,  -228,  -228,  -228,
     148,   585,   585,  -228,   210,   238,   229,   207,  -228,   585,
    -228,  -228,   231,  -228
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -228,  -228,  -228,  -228,   245,    10,    39,    -2,  -228,   140,
     153,    29,  -228,    23,  -228,  -228,   -98,    37,  -228,    97,
     217,   -77,   102,  -227,   -43,  -228,   -10,  -206,    38,  -228,
      35,  -228,    31,  -228,   -35,    13,   206,  -228,  -228,   108,
    -228,   -25,   -91,   -87,   -20,  -228,   -36,     1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      54,    87,   241,    77,    40,   158,   145,    94,   169,   262,
      91,   162,    21,    23,   104,   174,    19,     3,    35,    54,
      37,    68,     5,   174,   109,    54,   111,     1,    11,    12,
       4,    68,   170,   115,    13,   173,   279,    82,   105,   175,
      69,    70,    71,    51,   273,    56,    57,   175,    72,    73,
      69,    70,    71,    51,     6,    85,    86,   163,    88,   106,
      74,    61,    93,    75,    76,   176,   221,    17,   225,    18,
      74,    33,    34,    75,    76,    54,   234,   235,     8,   180,
     234,   257,   107,   108,    16,   120,   121,   122,    62,   124,
      63,    25,    64,    95,   229,    19,    96,    97,    27,    31,
      55,    36,    65,    98,   166,   237,   213,   214,    38,   216,
     160,   160,   219,    59,   164,    60,    65,   217,    92,    83,
      21,   100,    84,   101,    54,    54,   207,    54,   102,    23,
      54,    57,   252,   253,   112,   251,   131,   111,   132,   113,
     118,   148,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   261,   119,
     128,   150,   152,   154,   153,   157,   156,   218,   165,   220,
      68,   142,   143,   144,   167,   168,   171,   172,   183,   181,
     276,   182,   188,   187,   206,   129,   215,   223,   130,    69,
      70,    71,    51,   232,   131,   224,   132,    72,    73,   238,
     267,   124,   226,   227,   175,   242,   133,   236,   228,    74,
     269,    91,    75,    76,   233,   243,   134,   135,    54,   244,
      40,   245,   277,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   246,   247,   249,   160,   254,   255,   286,   287,
     185,   258,   260,   263,   129,   285,   292,   130,   265,   278,
     274,   283,   284,   131,   288,   132,    54,    54,   290,   289,
     293,   271,   272,    32,    54,   133,   275,   256,   189,   264,
     259,   231,   184,   103,   230,   134,   135,   291,   270,   268,
     266,   123,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   129,     0,   280,   130,   222,   239,     0,     0,     0,
     131,     0,   132,     0,     0,   281,     0,   129,     0,     0,
     130,     0,   133,     0,     0,     0,   131,     0,   132,     0,
       0,     0,   134,   135,     0,   147,     0,     0,   133,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   134,   135,
       0,     0,     0,     0,     0,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   129,     0,     0,   130,     0,     0,
       0,     0,     0,   131,     0,   132,     0,     0,   149,     0,
     129,   155,     0,   130,     0,   133,     0,     0,     0,   131,
       0,   132,     0,     0,     0,   134,   135,     0,     0,     0,
       0,   133,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   134,   135,     0,     0,     0,     0,     0,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   129,     0,     0,
     130,     0,     0,     0,     0,     0,   131,     0,   132,     0,
       0,     0,     0,   129,     0,     0,   130,   248,   133,     0,
       0,     0,   131,     0,   132,     0,     0,     0,   134,   135,
     186,     0,     0,     0,   133,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   134,   135,     0,     0,     0,     0,
       0,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     129,   282,     0,   130,     0,     0,     0,     0,     0,   131,
       0,   132,     0,     0,     0,     0,   129,     0,     0,   130,
       0,   133,     0,     0,     0,   131,     0,   132,     0,     0,
       0,   134,   135,     0,     0,     0,     0,   133,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   134,   135,    68,
       0,     0,     0,     0,   136,   137,   138,   139,   140,   141,
     142,   143,   144,    -1,     0,     0,    -1,     0,    69,    70,
      71,    51,   131,     0,   132,     0,    72,    73,     0,     0,
       0,     0,     0,     0,   133,     0,     0,     0,    74,   159,
       0,    75,    76,     0,    -1,    -1,     0,     0,     0,     0,
       0,    -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,
      42,     0,     0,     0,     0,     0,     0,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    45,     0,
       0,    46,     0,     0,     0,     0,    47,     0,    48,     0,
      49,    50,     0,     0,     0,     0,     0,     0,     0,    51
};

static const yytype_int16 yycheck[] =
{
      25,    44,   208,    38,    24,    96,    83,    50,   106,   236,
      46,    98,    11,    12,    20,    20,    44,    44,    20,    44,
      22,    22,    56,    20,    25,    50,    61,    19,    14,    15,
       0,    22,   109,    61,    20,   112,   263,    39,    44,    44,
      41,    42,    43,    44,   250,    60,    61,    44,    49,    50,
      41,    42,    43,    44,     4,    42,    43,   100,    45,    58,
      61,     3,    49,    64,    65,    62,   157,    56,   166,    58,
      61,    50,    51,    64,    65,   100,    58,    59,    44,   115,
      58,    59,    59,    60,    37,    72,    73,    74,    30,    76,
      32,     6,    34,    57,   171,    44,    60,    61,    32,    44,
      29,    45,    44,    67,   103,   182,   149,   150,    45,   152,
      97,    98,   155,    56,   101,    56,    44,   153,    44,    59,
     119,    56,    58,    37,   149,   150,   146,   152,    44,   128,
     155,    61,   223,   224,    11,   222,    16,   172,    18,    61,
      57,    29,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   235,    56,
      56,    24,    21,    37,    59,    44,    17,   154,    57,   156,
      22,    51,    52,    53,    44,    59,    25,    58,    44,    29,
     257,    59,    58,    66,    56,     7,    29,    62,    10,    41,
      42,    43,    44,    62,    16,    68,    18,    49,    50,   186,
     243,   188,    59,    44,    44,    63,    28,    62,    56,    61,
     245,   247,    64,    65,    56,    59,    38,    39,   243,    58,
     240,    40,   258,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    29,    63,    27,   222,    44,    62,   281,   282,
      62,    59,    44,    56,     7,   280,   289,    10,    29,    29,
      62,    29,    29,    16,    44,    18,   281,   282,    29,    21,
      29,   248,   249,    18,   289,    28,   256,   228,   128,   240,
     233,   174,   119,    56,   172,    38,    39,   287,   247,   244,
     242,    75,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     7,    -1,     9,    10,    58,   188,    -1,    -1,    -1,
      16,    -1,    18,    -1,    -1,    21,    -1,     7,    -1,    -1,
      10,    -1,    28,    -1,    -1,    -1,    16,    -1,    18,    -1,
      -1,    -1,    38,    39,    -1,    25,    -1,    -1,    28,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    38,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     7,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    18,    -1,    -1,    21,    -1,
       7,     8,    -1,    10,    -1,    28,    -1,    -1,    -1,    16,
      -1,    18,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,
      -1,    28,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     7,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    16,    -1,    18,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    10,    11,    28,    -1,
      -1,    -1,    16,    -1,    18,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    28,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    38,    39,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       7,     8,    -1,    10,    -1,    -1,    -1,    -1,    -1,    16,
      -1,    18,    -1,    -1,    -1,    -1,     7,    -1,    -1,    10,
      -1,    28,    -1,    -1,    -1,    16,    -1,    18,    -1,    -1,
      -1,    38,    39,    -1,    -1,    -1,    -1,    28,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    38,    39,    22,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     7,    -1,    -1,    10,    -1,    41,    42,
      43,    44,    16,    -1,    18,    -1,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    61,    62,
      -1,    64,    65,    -1,    38,    39,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    31,    -1,    33,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    70,    44,     0,    56,     4,    71,    44,    72,
      73,    14,    15,    20,    75,    76,    37,    56,    58,    44,
      79,   116,    78,   116,    77,     6,    74,    32,    82,    83,
      84,    44,    73,    50,    51,    76,    45,    76,    45,    80,
     113,   116,     5,    12,    13,    23,    26,    31,    33,    35,
      36,    44,    93,    94,   110,    29,    60,    61,    89,    56,
      56,     3,    30,    32,    34,    44,    90,   115,    22,    41,
      42,    43,    49,    50,    61,    64,    65,   103,   104,   105,
     106,   110,    76,    59,    58,   104,   104,    93,   104,   101,
     102,   115,    44,   104,    93,    57,    60,    61,    67,   111,
      56,    37,    44,    89,    20,    44,   116,    82,    82,    25,
      91,   103,    11,    61,    85,    61,    92,   113,    57,    56,
     104,   104,   104,   105,   104,   107,   108,   109,    56,     7,
      10,    16,    18,    28,    38,    39,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    90,   114,    25,    29,    21,
      24,    96,    21,    59,    37,     8,    17,    44,   111,    62,
     104,   112,   112,    93,   104,    57,   116,    44,    59,    85,
      90,    25,    58,    90,    20,    44,    62,    86,    87,    88,
     115,    29,    59,    44,    79,    62,    40,    66,    58,    78,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,    56,   113,    97,    98,
      99,   100,   103,    93,    93,    29,    93,   115,   104,    93,
     104,   111,    58,    62,    68,    85,    59,    44,    56,    90,
      91,    88,    62,    56,    58,    59,    62,    90,   104,   108,
      81,    96,    63,    59,    58,    40,    29,    63,    11,    27,
      95,   112,   111,   111,    44,    62,    75,    59,    59,    86,
      44,    90,    92,    56,    80,    29,    97,    93,    99,   103,
     101,   104,   104,    96,    62,    74,    90,   115,    29,    92,
       9,    21,     8,    29,    29,   103,    93,    93,    44,    21,
      29,    95,    93,    29
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
#line 107 "oberon.y"
    {printf("Found declarations.\n");}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 123 "oberon.y"
    { char *st;
                      while(!identList.empty()){
                        st=indentList.front();
                        indentList.pop();
                      }
                    }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 340 "oberon.y"
    { identList.push((yyvsp[(1) - (1)].str)); }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 341 "oberon.y"
    { identList.push((yyvsp[(1) - (2)].str)); }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 352 "oberon.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;



/* Line 1455 of yacc.c  */
#line 1808 "y.tab.c"
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
#line 358 "oberon.y"


int main()
{
  env = new Scope();
  int res = yyparse();
  if (res==0)
    printf("Successful parse\n");
  else
    printf("Encountered errors\n");
  exit(res);
}




