
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


/* Line 189 of yacc.c  */
#line 89 "oberon.cc"

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
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 177 "oberon.cc"

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
#define YYLAST   621

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNRULES -- Number of states.  */
#define YYNSTATES  291

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
      33,    34,    37,    41,    45,    49,    50,    56,    57,    63,
      64,    70,    71,    75,    79,    80,    90,    96,   102,   106,
     109,   110,   114,   116,   120,   125,   129,   131,   137,   144,
     145,   147,   152,   156,   163,   167,   171,   174,   178,   180,
     186,   190,   191,   195,   197,   201,   203,   211,   218,   224,
     229,   241,   251,   255,   260,   262,   265,   267,   268,   274,
     275,   278,   279,   281,   285,   289,   290,   292,   296,   298,
     302,   308,   312,   316,   318,   322,   326,   330,   334,   338,
     342,   346,   350,   353,   356,   360,   364,   368,   372,   376,
     380,   384,   388,   390,   392,   394,   396,   398,   400,   402,
     406,   409,   413,   415,   416,   420,   422,   424,   428,   431,
     435,   440,   443,   448,   451,   452,   454,   458,   460,   464,
     466,   470,   472,   475
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      70,     0,    -1,    19,    44,    56,    71,    75,    74,    29,
      44,    57,    -1,     4,    72,    56,    -1,    -1,    72,    58,
      73,    -1,    73,    -1,    44,    37,    44,    -1,    44,    -1,
       6,    91,    -1,    -1,    76,    80,    -1,    15,    77,    76,
      -1,    14,    78,    76,    -1,    20,    79,    76,    -1,    -1,
     113,    45,   101,    56,    77,    -1,    -1,   113,    45,    88,
      56,    78,    -1,    -1,   111,    59,    88,    56,    79,    -1,
      -1,    81,    56,    80,    -1,    82,    56,    80,    -1,    -1,
      32,    87,   113,    83,    56,    75,    74,    29,    44,    -1,
      32,    60,    87,   113,    83,    -1,    61,    84,    62,    59,
     112,    -1,    61,    84,    62,    -1,    61,    62,    -1,    -1,
      85,    56,    84,    -1,    85,    -1,    86,    59,    88,    -1,
      20,    86,    59,    88,    -1,    86,    58,    44,    -1,    44,
      -1,    61,    44,    59,    44,    62,    -1,    61,    20,    44,
      59,    44,    62,    -1,    -1,   112,    -1,     3,    89,    25,
      88,    -1,     3,    25,    88,    -1,    34,    61,   112,    62,
      90,    29,    -1,    34,    90,    29,    -1,    30,    11,    88,
      -1,    32,    83,    -1,   101,    58,    89,    -1,   101,    -1,
     111,    59,    88,    56,    90,    -1,   111,    59,    88,    -1,
      -1,    92,    56,    91,    -1,    92,    -1,   108,    37,   102,
      -1,   108,    -1,    35,   102,     8,    91,    93,    94,    29,
      -1,    12,   102,    25,    95,    94,    29,    -1,    23,   102,
      21,    91,    29,    -1,    36,    91,    17,   102,    -1,    33,
      44,    37,   102,    11,   102,     9,   101,    21,    91,    29,
      -1,    33,    44,    37,   102,    11,   102,    21,    91,    29,
      -1,    13,    91,    29,    -1,    26,    99,    94,    29,    -1,
      31,    -1,     5,   102,    -1,     5,    -1,    -1,    27,   102,
       8,    91,    93,    -1,    -1,    24,    91,    -1,    -1,    96,
      -1,    96,    63,    95,    -1,    97,    59,    91,    -1,    -1,
      98,    -1,    98,    58,    97,    -1,   101,    -1,   101,    40,
     101,    -1,   100,    21,    91,    63,    99,    -1,   100,    21,
      91,    -1,   112,    59,   112,    -1,   102,    -1,   102,    45,
     102,    -1,   102,    46,   102,    -1,   102,    47,   102,    -1,
     102,    38,   102,    -1,   102,    48,   102,    -1,   102,    39,
     102,    -1,   102,     7,   102,    -1,   102,    10,   102,    -1,
      49,   102,    -1,    50,   102,    -1,   102,    49,   102,    -1,
     102,    50,   102,    -1,   102,    28,   102,    -1,   102,    51,
     102,    -1,   102,    52,   102,    -1,   102,    18,   102,    -1,
     102,    16,   102,    -1,   102,    53,   102,    -1,   103,    -1,
     108,    -1,    43,    -1,    41,    -1,    42,    -1,    22,    -1,
     104,    -1,    61,   102,    62,    -1,    64,   103,    -1,    65,
     105,    66,    -1,   106,    -1,    -1,   107,    58,   106,    -1,
     107,    -1,   102,    -1,   102,    40,   102,    -1,    44,   109,
      -1,    57,    44,   109,    -1,    67,   110,    68,   109,    -1,
      60,   109,    -1,    61,   110,    62,   109,    -1,    61,    62,
      -1,    -1,   102,    -1,   102,    58,   110,    -1,   113,    -1,
     113,    58,   111,    -1,    44,    -1,    44,    57,    44,    -1,
      44,    -1,    44,    51,    -1,    44,    50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    63,    64,    68,    69,    73,    74,    78,
      79,    83,    87,    88,    89,    90,    94,    95,    99,   100,
     104,   105,   109,   110,   111,   116,   122,   127,   128,   129,
     130,   134,   135,   139,   140,   144,   145,   149,   150,   151,
     155,   156,   157,   158,   159,   160,   161,   165,   166,   170,
     171,   172,   176,   177,   181,   182,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   200,   201,
     205,   206,   210,   211,   215,   216,   220,   221,   225,   226,
     230,   231,   235,   239,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   266,   267,   268,   269,   270,   271,   272,
     273,   277,   281,   282,   286,   287,   291,   292,   296,   300,
     301,   302,   303,   304,   305,   309,   310,   314,   315,   319,
     320,   324,   325,   326
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
  "StatBlock", "DeclSeq", "DataList", "ConstList", "TypeList", "VarList",
  "ProcList", "ProcDecl", "ForwardDecl", "FormalPars", "FPsectionList",
  "FPsection", "IdentList", "Receiver", "Type", "ConstExprList",
  "FieldList", "StatementSeq", "Statement", "ElseIfBlock", "Else",
  "CaseList", "Case", "CaseLabelList", "CaseLabels", "GuardStatList",
  "Guard", "ConstExpr", "Expr", "Factor", "Set", "optElementList",
  "ElementList", "Element", "Designator", "optSuffix", "ExprList",
  "IdentDefList", "Qualident", "IdentDef", 0
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
      74,    75,    76,    76,    76,    76,    77,    77,    78,    78,
      79,    79,    80,    80,    80,    81,    82,    83,    83,    83,
      83,    84,    84,    85,    85,    86,    86,    87,    87,    87,
      88,    88,    88,    88,    88,    88,    88,    89,    89,    90,
      90,    90,    91,    91,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    93,    93,
      94,    94,    95,    95,    96,    96,    97,    97,    98,    98,
      99,    99,   100,   101,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   103,   103,   103,   103,   103,   103,   103,
     103,   104,   105,   105,   106,   106,   107,   107,   108,   109,
     109,   109,   109,   109,   109,   110,   110,   111,   111,   112,
     112,   113,   113,   113
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     9,     3,     0,     3,     1,     3,     1,     2,
       0,     2,     3,     3,     3,     0,     5,     0,     5,     0,
       5,     0,     3,     3,     0,     9,     5,     5,     3,     2,
       0,     3,     1,     3,     4,     3,     1,     5,     6,     0,
       1,     4,     3,     6,     3,     3,     2,     3,     1,     5,
       3,     0,     3,     1,     3,     1,     7,     6,     5,     4,
      11,     9,     3,     4,     1,     2,     1,     0,     5,     0,
       2,     0,     1,     3,     3,     0,     1,     3,     1,     3,
       5,     3,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     3,     1,     0,     3,     1,     1,     3,     2,     3,
       4,     2,     4,     2,     0,     1,     3,     1,     3,     1,
       3,     1,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     4,     0,    15,     8,     0,
       6,    19,    17,    21,    10,    24,     0,     3,     0,   131,
      15,     0,    15,     0,    15,     0,   127,    67,     0,    39,
      11,     0,     0,     7,     5,   133,   132,    13,     0,    12,
       0,    14,     0,     0,    66,     0,    67,     0,     0,    64,
       0,     0,    67,   124,     9,    53,    55,     0,    39,     0,
       0,    24,    24,     0,     0,    30,    51,   129,     0,    40,
     107,   105,   106,   104,     0,     0,     0,     0,   113,     0,
      83,   102,   108,   103,     0,   128,    65,     0,     0,     0,
      71,     0,     0,     0,     0,     0,     0,   124,     0,     0,
     118,    67,     0,     0,     0,     0,     0,    30,    22,    23,
       0,     0,    48,     0,     0,    46,     0,     0,     0,     0,
      19,    92,    93,     0,   110,   116,     0,   112,   115,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    75,    62,    67,
      67,     0,    67,     0,     0,    67,     0,   124,   121,   123,
     125,     0,     0,    52,    54,     2,    30,     0,     0,     0,
      42,     0,     0,    45,     0,    36,    29,     0,    32,     0,
       0,    44,     0,   130,    18,   109,     0,   111,     0,    16,
      90,    91,   100,    99,    96,    87,    89,    84,    85,    86,
      88,    94,    95,    97,    98,   101,    20,    71,    72,     0,
      76,    78,     0,    70,    63,    81,    82,     0,    69,    59,
     119,     0,   124,   124,    26,     0,     0,    15,    41,    47,
       0,    28,     0,     0,     0,    51,    50,   117,   114,     0,
      75,    67,     0,     0,    58,     0,     0,     0,    71,   126,
     122,   120,     0,    37,    10,     0,     0,    31,    35,    33,
       0,    51,    57,    73,    74,    77,    79,    80,     0,     0,
       0,    38,     0,    34,    27,    43,    49,     0,    67,    67,
      56,     0,     0,     0,    69,    25,    67,    61,    68,     0,
      60
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     9,    10,    28,    14,    15,    22,    20,
      24,    30,    31,    32,   115,   177,   178,   179,    60,    68,
     111,   117,    54,    55,   248,   151,   207,   208,   209,   210,
      90,    91,   211,    80,    81,    82,   126,   127,   128,    83,
     100,   161,   118,    69,    26
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -230
static const yytype_int16 yypact[] =
{
       3,   -17,    38,   -20,  -230,    39,    18,     9,    34,   -25,
    -230,    47,    47,    47,    91,    50,    59,  -230,    18,   -34,
       9,    61,     9,    63,     9,    52,    66,   577,    92,     6,
    -230,    70,    71,  -230,  -230,  -230,  -230,  -230,   179,  -230,
     499,  -230,   179,    47,   499,   499,   577,   499,    86,  -230,
      88,   499,   577,    26,  -230,    83,   106,   116,   100,    -7,
      47,    50,    50,    35,   151,   102,   -33,   107,   110,  -230,
    -230,  -230,  -230,  -230,   499,   499,   499,    76,   499,   111,
     481,  -230,  -230,  -230,   113,  -230,   481,   292,   142,   339,
     148,   153,   117,   138,   355,   160,   134,    26,   143,   499,
    -230,   577,   499,   122,    47,   136,   129,   102,  -230,  -230,
     179,   166,   132,   179,     1,  -230,    86,   168,   140,   159,
      47,  -230,  -230,     2,  -230,   402,   144,  -230,   137,    47,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,    47,   499,  -230,   577,
     577,   190,   577,    86,   499,   577,   499,    26,  -230,  -230,
     229,   158,   154,  -230,   481,  -230,   102,   162,   180,   169,
    -230,   179,   499,  -230,   182,  -230,  -230,   167,   171,    36,
     170,  -230,   179,  -230,  -230,  -230,   499,  -230,   499,  -230,
     528,   528,  -230,  -230,   165,   528,   528,   528,   528,   528,
     528,   165,   165,  -230,  -230,  -230,  -230,   148,   174,   172,
     184,   188,   201,  -230,  -230,   175,  -230,   418,   216,   481,
    -230,   499,    26,    26,  -230,   200,   186,     9,  -230,  -230,
      43,   187,    -5,   205,   179,    47,   194,   481,  -230,   224,
     499,   577,   499,   499,  -230,    86,   499,   499,   148,  -230,
    -230,  -230,   192,  -230,    91,   179,    86,  -230,  -230,  -230,
     226,    47,  -230,  -230,  -230,  -230,  -230,  -230,   276,   465,
     227,  -230,   233,  -230,  -230,  -230,  -230,   499,   577,   577,
    -230,   214,   242,   235,   216,  -230,   577,  -230,  -230,   236,
    -230
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -230,  -230,  -230,  -230,   248,    15,    44,    22,   141,   152,
     127,    53,  -230,  -230,   -97,    56,  -230,   115,   232,   -40,
     112,  -229,   -45,  -230,     7,  -173,    55,  -230,    51,  -230,
      58,  -230,   -37,    14,   219,  -230,  -230,   118,  -230,   -27,
     -89,   -85,    -8,   -44,    69
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      56,    88,    84,    79,    92,    25,   260,    95,   158,   130,
     169,    19,   131,   105,   162,   174,    35,    36,   132,    56,
     133,   174,     1,    11,    12,    56,   112,     3,   116,    13,
     134,    17,   276,    18,   239,    85,     5,   106,     4,   175,
     135,   136,    37,     6,    39,   175,    41,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   163,    70,    86,    87,
     110,    89,     8,   176,   185,    94,    58,    59,   220,   224,
     170,    16,   180,   173,    56,   270,    71,    72,    73,    53,
      21,    23,    29,    96,    74,    75,    97,    98,   121,   122,
     123,    19,   125,    99,   233,   234,    76,    27,    70,    77,
      78,   233,   255,    33,   212,   213,    38,   215,    40,   216,
     218,    42,   160,   160,   108,   109,   164,    71,    72,    73,
      53,    57,    56,    56,    43,    56,    61,    62,    56,   107,
      67,   228,    93,   250,   251,   112,   249,    76,    25,   101,
      77,    78,   236,   102,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     103,    59,   113,   114,   119,    70,   120,   129,   217,   146,
     219,   148,   150,   166,   152,   154,   153,   156,   157,   165,
     167,   132,    63,   133,    71,    72,    73,    53,   168,    21,
     172,   171,    74,    75,   259,   188,   264,   181,    23,   182,
     237,    92,   125,   183,    76,   159,   266,    77,    78,    64,
     187,    65,   274,    66,    56,   273,   143,   144,   145,   214,
     222,   225,   223,    67,   226,   227,   175,   232,   243,   231,
     244,   241,   235,   283,   284,   160,   130,   240,   245,   131,
     282,   289,   242,   247,   252,   132,   256,   133,   253,   258,
     261,    56,    56,   262,   271,   275,   280,   134,   285,    56,
     268,   269,   281,   286,   287,   290,    34,   135,   136,   272,
     189,   254,   184,   206,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   130,   229,   277,   131,   221,   257,   230,
     104,   288,   132,   265,   133,   263,   124,   278,     0,   130,
       0,     0,   131,   267,   134,     0,   238,     0,   132,     0,
     133,     0,     0,     0,   135,   136,     0,   147,     0,     0,
     134,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     135,   136,     0,     0,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   130,     0,     0,   131,
       0,     0,     0,     0,     0,   132,     0,   133,     0,     0,
     149,     0,   130,   155,     0,   131,     0,   134,     0,     0,
       0,   132,     0,   133,     0,     0,     0,   135,   136,     0,
       0,     0,     0,   134,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   135,   136,     0,     0,     0,     0,     0,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   130,
       0,     0,   131,     0,     0,     0,     0,     0,   132,     0,
     133,     0,     0,     0,     0,   130,     0,     0,   131,   246,
     134,     0,     0,     0,   132,     0,   133,     0,     0,     0,
     135,   136,   186,     0,     0,     0,   134,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   135,   136,     0,     0,
       0,     0,     0,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   130,   279,     0,   131,     0,     0,     0,     0,
       0,   132,     0,   133,     0,     0,     0,     0,   130,     0,
       0,   131,     0,   134,     0,     0,     0,   132,     0,   133,
       0,     0,     0,   135,   136,     0,     0,     0,     0,   134,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   135,
     136,    70,     0,     0,     0,     0,   137,   138,   139,   140,
     141,   142,   143,   144,   145,    -1,     0,     0,    -1,     0,
      71,    72,    73,    53,   132,     0,   133,     0,    74,    75,
       0,     0,     0,     0,     0,     0,   134,     0,     0,     0,
      76,     0,     0,    77,    78,     0,    -1,    -1,     0,     0,
       0,     0,     0,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,   145,    44,     0,     0,     0,     0,     0,     0,    45,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,     0,     0,    48,     0,     0,     0,     0,    49,     0,
      50,     0,    51,    52,     0,     0,     0,     0,     0,     0,
       0,    53
};

static const yytype_int16 yycheck[] =
{
      27,    46,    42,    40,    48,    13,   235,    52,    97,     7,
     107,    44,    10,    20,    99,    20,    50,    51,    16,    46,
      18,    20,    19,    14,    15,    52,    63,    44,    61,    20,
      28,    56,   261,    58,   207,    43,    56,    44,     0,    44,
      38,    39,    20,     4,    22,    44,    24,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   101,    22,    44,    45,
      25,    47,    44,    62,    62,    51,    60,    61,   157,   166,
     110,    37,   116,   113,   101,   248,    41,    42,    43,    44,
      11,    12,    32,    57,    49,    50,    60,    61,    74,    75,
      76,    44,    78,    67,    58,    59,    61,     6,    22,    64,
      65,    58,    59,    44,   149,   150,    45,   152,    45,   153,
     155,    59,    98,    99,    61,    62,   102,    41,    42,    43,
      44,    29,   149,   150,    58,   152,    56,    56,   155,    60,
      44,   171,    44,   222,   223,   172,   221,    61,   146,    56,
      64,    65,   182,    37,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
      44,    61,    11,    61,    57,    22,    56,    56,   154,    56,
     156,    29,    24,   104,    21,    37,    59,    17,    44,    57,
      44,    16,     3,    18,    41,    42,    43,    44,    59,   120,
      58,    25,    49,    50,   234,    58,   241,    29,   129,    59,
     186,   245,   188,    44,    61,    62,   243,    64,    65,    30,
      66,    32,   256,    34,   241,   255,    51,    52,    53,    29,
      62,    59,    68,    44,    44,    56,    44,    56,    40,    62,
      29,    59,    62,   278,   279,   221,     7,    63,    63,    10,
     277,   286,    58,    27,    44,    16,    59,    18,    62,    44,
      56,   278,   279,    29,    62,    29,    29,    28,    44,   286,
     246,   247,    29,    21,    29,    29,    18,    38,    39,   254,
     129,   227,   120,   146,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     7,   172,     9,    10,    58,   232,   174,
      58,   284,    16,   242,    18,   240,    77,    21,    -1,     7,
      -1,    -1,    10,   245,    28,    -1,   188,    -1,    16,    -1,
      18,    -1,    -1,    -1,    38,    39,    -1,    25,    -1,    -1,
      28,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      38,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     7,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    18,    -1,    -1,
      21,    -1,     7,     8,    -1,    10,    -1,    28,    -1,    -1,
      -1,    16,    -1,    18,    -1,    -1,    -1,    38,    39,    -1,
      -1,    -1,    -1,    28,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    38,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     7,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    16,    -1,
      18,    -1,    -1,    -1,    -1,     7,    -1,    -1,    10,    11,
      28,    -1,    -1,    -1,    16,    -1,    18,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    28,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    38,    39,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    18,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    10,    -1,    28,    -1,    -1,    -1,    16,    -1,    18,
      -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    28,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    38,
      39,    22,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     7,    -1,    -1,    10,    -1,
      41,    42,    43,    44,    16,    -1,    18,    -1,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      61,    -1,    -1,    64,    65,    -1,    38,    39,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     5,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    -1,
      33,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    70,    44,     0,    56,     4,    71,    44,    72,
      73,    14,    15,    20,    75,    76,    37,    56,    58,    44,
      78,   113,    77,   113,    79,   111,   113,     6,    74,    32,
      80,    81,    82,    44,    73,    50,    51,    76,    45,    76,
      45,    76,    59,    58,     5,    12,    13,    23,    26,    31,
      33,    35,    36,    44,    91,    92,   108,    29,    60,    61,
      87,    56,    56,     3,    30,    32,    34,    44,    88,   112,
      22,    41,    42,    43,    49,    50,    61,    64,    65,   101,
     102,   103,   104,   108,    88,   111,   102,   102,    91,   102,
      99,   100,   112,    44,   102,    91,    57,    60,    61,    67,
     109,    56,    37,    44,    87,    20,    44,   113,    80,    80,
      25,    89,   101,    11,    61,    83,    61,    90,   111,    57,
      56,   102,   102,   102,   103,   102,   105,   106,   107,    56,
       7,    10,    16,    18,    28,    38,    39,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    56,    25,    29,    21,
      24,    94,    21,    59,    37,     8,    17,    44,   109,    62,
     102,   110,   110,    91,   102,    57,   113,    44,    59,    83,
      88,    25,    58,    88,    20,    44,    62,    84,    85,    86,
     112,    29,    59,    44,    78,    62,    40,    66,    58,    77,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,    79,    95,    96,    97,
      98,   101,    91,    91,    29,    91,   112,   102,    91,   102,
     109,    58,    62,    68,    83,    59,    44,    56,    88,    89,
      86,    62,    56,    58,    59,    62,    88,   102,   106,    94,
      63,    59,    58,    40,    29,    63,    11,    27,    93,   110,
     109,   109,    44,    62,    75,    59,    59,    84,    44,    88,
      90,    56,    29,    95,    91,    97,   101,    99,   102,   102,
      94,    62,    74,    88,   112,    29,    90,     9,    21,     8,
      29,    29,   101,    91,    91,    44,    21,    29,    93,    91,
      29
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
      

/* Line 1455 of yacc.c  */
#line 1698 "oberon.cc"
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
#line 330 "oberon.y"


int main()
{
  int res = yyparse();
  if (res==0)
    printf("Successful parse\n");
  else
    printf("Encountered errors\n");
  exit(res);
}




