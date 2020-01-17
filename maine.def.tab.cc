
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
#line 1 "maine.def.yy"

#include <string.h>
#include <stdio.h>
#include <iostream>
#include <stack>
#include <sstream>  
#include "Variable.h"
#include "VariableManager.h"
#define MAX_VARIABLE_LENGTH 100
using namespace std;

extern "C" int yylex();
extern void yyerror(const char* msg);
extern char* yytext;

int getInt(const char* name);
void saveInt(const char* name, int value);
void savingVariableInfo(string varVal, string varName);

//int yylineno = 1;

VariableManager vm;
stack <int> stackInt;
stack <double> stackDouble;
stack <string> stackString;
stack <Variable*> stackVariables;

extern char *yytext;
char *text;
int	ival;
double dval;


/* Line 189 of yacc.c  */
#line 107 "maine.def.tab.cc"

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
     NEWLINE = 258,
     SET = 259,
     PRINT = 260,
     STR = 261,
     DBL = 262,
     UNKNOWN = 263,
     COMMENTLINE = 264,
     INT = 265
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 34 "maine.def.yy"

	char *text;
	int	ival;
	double dval;



/* Line 214 of yacc.c  */
#line 161 "maine.def.tab.cc"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 173 "maine.def.tab.cc"

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
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   366

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  18
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNRULES -- Number of states.  */
#define YYNSTATES  123

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   265

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    16,     2,    15,     2,     2,     2,     2,     2,
       2,     2,    11,    13,     2,    12,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    17,
       2,    14,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    19,
      23,    27,    31,    35,    39,    43,    47,    51,    53,    56,
      59,    63,    67,    71,    75,    79,    83,    87,    91,    95,
      99,   103,   107,   111,   115,   119,   123,   125,   128,   131,
     135,   139,   143,   147,   151,   155,   159,   163,   167,   171,
     175,   179,   183,   187,   191,   195,   197,   200,   203,   207,
     211,   215,   219,   223,   227,   231,   235,   239,   243,   247,
     251,   255,   259,   263,   267,   269,   272,   275,   278,   281,
     283,   285,   287,   289,   291,   293,   295,   297,   300,   302,
     304,   307
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      19,     0,    -1,    20,    -1,    19,    20,    -1,    30,    -1,
      21,    -1,    29,    -1,    24,    -1,    20,    32,    -1,     4,
      31,    29,    -1,    21,    25,    28,    -1,    21,    25,    29,
      -1,    21,    25,    27,    -1,    21,    25,    26,    -1,    21,
      25,    24,    -1,    21,    25,    23,    -1,    21,    25,    22,
      -1,    11,    -1,    22,    31,    -1,    31,    22,    -1,    29,
      22,    29,    -1,    29,    22,    28,    -1,    29,    22,    26,
      -1,    29,    22,    27,    -1,    28,    22,    29,    -1,    28,
      22,    28,    -1,    28,    22,    26,    -1,    28,    22,    27,
      -1,    26,    22,    29,    -1,    26,    22,    28,    -1,    26,
      22,    26,    -1,    26,    22,    27,    -1,    27,    22,    29,
      -1,    27,    22,    28,    -1,    27,    22,    26,    -1,    27,
      22,    27,    -1,    12,    -1,    23,    31,    -1,    31,    23,
      -1,    29,    23,    29,    -1,    29,    23,    28,    -1,    29,
      23,    26,    -1,    29,    23,    27,    -1,    28,    23,    29,
      -1,    28,    23,    28,    -1,    28,    23,    26,    -1,    28,
      23,    27,    -1,    26,    23,    29,    -1,    26,    23,    28,
      -1,    26,    23,    26,    -1,    26,    23,    27,    -1,    27,
      23,    29,    -1,    27,    23,    28,    -1,    27,    23,    26,
      -1,    27,    23,    27,    -1,    13,    -1,    24,    31,    -1,
      31,    24,    -1,    29,    24,    29,    -1,    29,    24,    28,
      -1,    29,    24,    26,    -1,    29,    24,    27,    -1,    28,
      24,    29,    -1,    28,    24,    28,    -1,    28,    24,    26,
      -1,    28,    24,    27,    -1,    26,    24,    29,    -1,    26,
      24,    28,    -1,    26,    24,    26,    -1,    26,    24,    27,
      -1,    27,    24,    29,    -1,    27,    24,    28,    -1,    27,
      24,    26,    -1,    27,    24,    27,    -1,    14,    -1,    25,
      31,    -1,    31,    25,    -1,    15,     6,    -1,    26,    15,
      -1,     7,    -1,    10,    -1,     6,    -1,     8,    -1,     9,
      -1,    31,    -1,     5,    -1,    16,    -1,    31,    16,    -1,
       3,    -1,    17,    -1,    32,     3,    -1,    32,    17,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    53,    57,    58,    59,    60,    61,    68,
      71,    79,   109,   116,   125,   134,   145,   159,   160,   161,
     162,   182,   195,   212,   225,   239,   246,   253,   260,   275,
     282,   289,   296,   310,   317,   324,   334,   335,   336,   337,
     357,   370,   385,   398,   412,   419,   426,   433,   448,   455,
     462,   469,   483,   490,   497,   507,   508,   509,   510,   530,
     543,   558,   571,   585,   592,   599,   606,   621,   628,   635,
     642,   656,   663,   670,   680,   681,   682,   686,   689,   693,
     700,   707,   713,   714,   715,   716,   720,   721,   725,   726,
     727,   728
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NEWLINE", "SET", "PRINT", "STR", "DBL",
  "UNKNOWN", "COMMENTLINE", "INT", "'*'", "'-'", "'+'", "'='", "'\"'",
  "' '", "';'", "$accept", "read_all", "line", "op_set", "op_multi",
  "op_sub", "op_add", "op_assign", "quote", "double", "integer",
  "identity", "ignore", "whitespace", "endl", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,    42,    45,    43,    61,    34,    32,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    18,    19,    19,    20,    20,    20,    20,    20,    21,
      21,    21,    21,    21,    21,    21,    21,    22,    22,    22,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    22,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    25,    25,    25,    26,    26,    27,
      28,    29,    30,    30,    30,    30,    31,    31,    32,    32,
      32,    32
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    85,    81,    79,    82,    83,    80,    55,     0,
      86,     0,     2,     5,     7,     0,     0,     0,     6,     4,
      84,     0,    77,     1,     3,    88,    89,     8,    74,     0,
       0,    56,    78,     0,     0,     0,     0,     0,     0,    86,
      57,    87,     9,    90,    91,    17,    36,    16,    15,    14,
      13,    12,    10,    11,     0,    76,    68,    69,    67,    66,
      72,    73,    71,    70,    64,    65,    63,    62,    60,    61,
      59,    58,    18,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    19,    38,    75,
      78,    30,    31,    29,    28,    49,    50,    48,    47,    34,
      35,    33,    32,    53,    54,    52,    51,    26,    27,    25,
      24,    45,    46,    44,    43,    22,    23,    21,    20,    41,
      42,    40,    39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    11,    12,    13,    74,    75,    38,    29,    76,    77,
      78,    79,    19,    80,    27
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -28
static const yytype_int16 yypact[] =
{
     141,   -12,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     3,
     -28,   304,     4,   -11,   -12,   245,   263,   263,   263,   -28,
     316,    40,   -28,   -28,     4,   -28,   -28,     5,   -28,   121,
      -4,     7,     3,    94,   263,   316,    94,    94,    94,    54,
     -12,   -28,   -28,   -28,   -28,   -28,   -28,   -12,   -12,   -12,
     159,   121,   121,   121,   225,   -12,    -9,   -28,   -28,   -28,
      -9,   -28,   -28,   -28,    -9,   -28,   -28,   -28,    -9,   -28,
     -28,   -28,     7,     7,    94,    94,   159,   121,   121,   121,
     225,    94,    94,    94,    94,    94,    94,   -12,   -12,     7,
     -28,    -9,   -28,   -28,   -28,    -9,   -28,   -28,   -28,    -9,
     -28,   -28,   -28,    -9,   -28,   -28,   -28,    -9,   -28,   -28,
     -28,    -9,   -28,   -28,   -28,    -9,   -28,   -28,   -28,    -9,
     -28,   -28,   -28
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -28,   -28,    17,   -28,   -27,   -10,   286,     1,   106,   182,
     210,    78,   -28,     0,   -28
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -88
static const yytype_int8 yytable[] =
{
      20,    21,    47,    28,    10,    10,    90,    25,    43,    22,
      28,    20,    39,    30,    31,    35,    35,    35,    35,    48,
      35,    26,    44,    41,    81,    83,    85,    87,    24,    54,
      30,    55,     0,    31,    35,    35,    31,    31,    31,     0,
      31,    82,    84,    86,    88,     0,     3,    72,    73,    31,
      81,    83,    85,    87,   -87,    89,    41,   -87,   -87,   -87,
       0,     0,   -87,   -87,     0,     0,     0,    82,    84,    86,
      88,   -87,     0,     0,    72,    73,     0,     0,    18,     0,
       0,    72,    73,    72,    73,    72,    73,    72,    73,    18,
       0,     0,     0,    34,    34,    34,    34,     0,    34,    42,
       3,     4,     0,     0,     7,     0,    15,    53,     0,     9,
      10,    59,    34,    34,    63,    67,    71,    15,     0,     0,
       0,    15,    15,    15,    15,     0,    15,     3,     4,     0,
       0,     7,    45,    46,     8,    50,     9,    10,     0,    56,
      15,    15,    60,    64,    68,     1,     2,     3,     4,     5,
       6,     7,    94,    98,     8,     0,     9,    10,     0,   102,
     106,   110,   114,   118,   122,     3,     4,     0,     0,     7,
      45,    46,     8,     0,    32,    10,     0,     0,     0,     0,
      91,    95,    16,     0,     0,     0,     0,    99,   103,   107,
     111,   115,   119,    16,     0,     0,     0,    16,    16,    16,
      16,     0,    16,     0,     0,     0,     0,     0,     0,     0,
      17,    51,     0,     0,     0,    57,    16,    16,    61,    65,
      69,    17,     0,     0,     0,    17,    17,    17,    17,     0,
      17,     3,     4,     0,     0,     7,    45,    46,     8,    52,
       9,    39,     0,    58,    17,    17,    62,    66,    70,     0,
       0,     3,     4,     0,     0,     7,    92,    96,     8,     0,
      32,    10,     0,   100,   104,   108,   112,   116,   120,     3,
       4,     0,     0,     7,     0,     0,     8,     0,     9,    10,
       0,     0,     0,     0,    93,    97,    14,     0,     0,     0,
       0,   101,   105,   109,   113,   117,   121,    14,     0,     0,
       0,    33,    36,    37,    23,     0,    40,     0,     1,     2,
       3,     4,     5,     6,     7,    49,     0,     8,     0,     9,
      10,    40,     3,     4,     0,     0,     7,     0,     0,     8,
       0,     9,    39,     0,     0,     0,    33,    36,    37,     0,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,    36,    37,     0,    40
};

static const yytype_int8 yycheck[] =
{
       0,     1,    29,    14,    16,    16,    15,     3,     3,     6,
      14,    11,    16,    13,    14,    15,    16,    17,    18,    29,
      20,    17,    17,    16,    51,    52,    53,    54,    11,    29,
      30,    30,    -1,    33,    34,    35,    36,    37,    38,    -1,
      40,    51,    52,    53,    54,    -1,     6,    47,    48,    49,
      77,    78,    79,    80,     0,    55,    16,     3,     4,     5,
      -1,    -1,     8,     9,    -1,    -1,    -1,    77,    78,    79,
      80,    17,    -1,    -1,    74,    75,    -1,    -1,     0,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    -1,    20,    21,
       6,     7,    -1,    -1,    10,    -1,     0,    29,    -1,    15,
      16,    33,    34,    35,    36,    37,    38,    11,    -1,    -1,
      -1,    15,    16,    17,    18,    -1,    20,     6,     7,    -1,
      -1,    10,    11,    12,    13,    29,    15,    16,    -1,    33,
      34,    35,    36,    37,    38,     4,     5,     6,     7,     8,
       9,    10,    74,    75,    13,    -1,    15,    16,    -1,    81,
      82,    83,    84,    85,    86,     6,     7,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    -1,    -1,    -1,    -1,
      74,    75,     0,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    11,    -1,    -1,    -1,    15,    16,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       0,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    11,    -1,    -1,    -1,    15,    16,    17,    18,    -1,
      20,     6,     7,    -1,    -1,    10,    11,    12,    13,    29,
      15,    16,    -1,    33,    34,    35,    36,    37,    38,    -1,
      -1,     6,     7,    -1,    -1,    10,    74,    75,    13,    -1,
      15,    16,    -1,    81,    82,    83,    84,    85,    86,     6,
       7,    -1,    -1,    10,    -1,    -1,    13,    -1,    15,    16,
      -1,    -1,    -1,    -1,    74,    75,     0,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    11,    -1,    -1,
      -1,    15,    16,    17,     0,    -1,    20,    -1,     4,     5,
       6,     7,     8,     9,    10,    29,    -1,    13,    -1,    15,
      16,    35,     6,     7,    -1,    -1,    10,    -1,    -1,    13,
      -1,    15,    16,    -1,    -1,    -1,    50,    51,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    -1,    80
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    13,    15,
      16,    19,    20,    21,    24,    26,    27,    28,    29,    30,
      31,    31,     6,     0,    20,     3,    17,    32,    14,    25,
      31,    31,    15,    24,    29,    31,    24,    24,    24,    16,
      24,    16,    29,     3,    17,    11,    12,    22,    23,    24,
      26,    27,    28,    29,    31,    25,    26,    27,    28,    29,
      26,    27,    28,    29,    26,    27,    28,    29,    26,    27,
      28,    29,    31,    31,    22,    23,    26,    27,    28,    29,
      31,    22,    23,    22,    23,    22,    23,    22,    23,    31,
      15,    26,    27,    28,    29,    26,    27,    28,    29,    26,
      27,    28,    29,    26,    27,    28,    29,    26,    27,    28,
      29,    26,    27,    28,    29,    26,    27,    28,    29,    26,
      27,    28,    29
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
        case 2:

/* Line 1455 of yacc.c  */
#line 52 "maine.def.yy"
    { ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 53 "maine.def.yy"
    { ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 57 "maine.def.yy"
    { cout << endl; ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 58 "maine.def.yy"
    {;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 59 "maine.def.yy"
    {;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 60 "maine.def.yy"
    {;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 61 "maine.def.yy"
    { 
		//printf(" \r\t\t\t\t\t\t >> %s \n", yytext);
		// printf("\n");
	;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 68 "maine.def.yy"
    {
		stackString.push(yytext);
	;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 71 "maine.def.yy"
    {
		int result = (vm += new Variable(stackInt.top(), stackString.top()));
		if (!result){
			savingVariableInfo(to_string(stackInt.top()), stackString.top());
		}
		stackInt.pop();
		stackString.pop();
	;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 79 "maine.def.yy"
    {
		string name = yytext;
		Variable* var = vm[name];
		if (var == nullptr) {
			cout << "Could not find variable named [" << name << "]" << endl;
		}
		else {
			if (var->getType() == Variable::variableType::INT) {
				int result = (vm += new Variable(var->getIValue(), stackString.top()));
				if (!result){
					savingVariableInfo(to_string(var->getIValue()), stackString.top());
				}
				stackString.pop();
			}
			else if (var->getType() == Variable::variableType::DOUBLE) {
				int result = (vm += new Variable(var->getDValue(), stackString.top()));
				if (!result){
					savingVariableInfo(to_string(var->getDValue()), stackString.top());
				}
				stackString.pop();
			}
			else if (var->getType() == Variable::variableType::STRING) {
				int result = (vm += new Variable(var->getSValue(), stackString.top()));
				if (!result) {
					savingVariableInfo(var->getSValue(), stackString.top());
				}
				stackString.pop();
			}
		}
	;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 109 "maine.def.yy"
    {
		int result = (vm += new Variable(dval, stackString.top()));
		if (!result) {
			savingVariableInfo(to_string(dval), stackString.top());
		}
		stackString.pop()
	;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 116 "maine.def.yy"
    {
		string value = stackString.top();
		stackString.pop();
		int result = (vm += new Variable(value, stackString.top()));
		if (!result) {
			savingVariableInfo(value, stackString.top());
		}
		stackString.pop();
	;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 125 "maine.def.yy"
    {
		stackVariables.top()->setName(stackString.top());
		int result = (vm += stackVariables.top());
		if (!result) {
			savingVariableInfo(stackVariables.top()->getSValue(), stackVariables.top()->getName());
		}
		stackVariables.pop();
		stackString.pop();
	;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 134 "maine.def.yy"
    {
		if (stackVariables.top() != nullptr) {
			stackVariables.top()->setName(stackString.top());
			int result = (vm += stackVariables.top());
			if (!result) {
				savingVariableInfo(stackVariables.top()->getSValue(), stackVariables.top()->getName());
			}
		}
		stackVariables.pop();
		stackString.pop();
	;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 145 "maine.def.yy"
    {
		if (stackVariables.top() != nullptr) {
			stackVariables.top()->setName(stackString.top());
			int result = (vm += stackVariables.top());
			if (!result) {
				savingVariableInfo(stackVariables.top()->getSValue(), stackVariables.top()->getName());
			}
		}
		stackVariables.pop();
		stackString.pop();
	;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 159 "maine.def.yy"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 160 "maine.def.yy"
    {;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 161 "maine.def.yy"
    {;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 162 "maine.def.yy"
    {
		// expr:
		// ;
		string suppVal = stackString.top(); 
		stackString.pop();
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		Variable* suppVar = vm[suppVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else if (suppVar == nullptr) {
			cout << "Could not find variable named [" << suppVal << "]";
		}
		else {
			stackVariables.push(vm.multipleVariables(mainVar, suppVar));
		}
	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 182 "maine.def.yy"
    {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(ival, "temp");
			stackVariables.push(vm.multipleVariables(mainVar, suppVar));
		}
	;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 195 "maine.def.yy"
    {
		string stringValue = stackString.top();
		stackString.pop();
		string mainVal = stackString.top();
		stackString.pop();


		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			// cout << "TEST = " << mainVar->getIValue();
			Variable *suppVar = new Variable(stringValue, "temp");
			stackVariables.push(vm.multipleVariables(mainVar, suppVar));
		}
	;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 212 "maine.def.yy"
    {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(dval, "temp");
			stackVariables.push(vm.multipleVariables(mainVar, suppVar));
		}
	;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 225 "maine.def.yy"
    {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(stackInt.top(), "temp");
			stackVariables.push(vm.multipleVariables(suppVar, mainVar));
		}
		stackInt.pop();
	;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 239 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 246 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 253 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 260 "maine.def.yy"
    {
		string varName = stackString.top();
		stackString.pop();
		string stringValue = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[varName];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << varName << "]";
		}
		else {
			Variable *suppVar = new Variable(stringValue, "temp");
			stackVariables.push(vm.multipleVariables(suppVar, mainVar));
		}
	;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 275 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 282 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 289 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 296 "maine.def.yy"
    {
		Variable *suppVar = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		string varName = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[varName];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << varName << "]";
		}
		else {
			stackVariables.push(vm.multipleVariables(suppVar, mainVar));
		}
	;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 310 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 317 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 324 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 334 "maine.def.yy"
    {;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 335 "maine.def.yy"
    {;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 336 "maine.def.yy"
    {;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 337 "maine.def.yy"
    {
		// expr:
		// ;
		string suppVal = stackString.top(); 
		stackString.pop();
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		Variable* suppVar = vm[suppVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else if (suppVar == nullptr) {
			cout << "Could not find variable named [" << suppVal << "]";
		}
		else {
			stackVariables.push(vm.subVariables(mainVar, suppVar));
		}
	;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 357 "maine.def.yy"
    {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(ival, "temp");
			stackVariables.push(vm.subVariables(mainVar, suppVar));
		}
	;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 370 "maine.def.yy"
    {
		string stringValue = stackString.top();
		stackString.pop();
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(stringValue, "temp");
			stackVariables.push(vm.subVariables(mainVar, suppVar));
		}
	;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 385 "maine.def.yy"
    {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(dval, "temp");
			stackVariables.push(vm.subVariables(mainVar, suppVar));
		}
	;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 398 "maine.def.yy"
    {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(stackInt.top(), "temp");
			stackVariables.push(vm.subVariables(suppVar, mainVar));
		}
		stackInt.pop();
	;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 412 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 419 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 426 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 433 "maine.def.yy"
    {
		string varName = stackString.top();
		stackString.pop();
		string stringValue = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[varName];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << varName << "]";
		}
		else {
			Variable *suppVar = new Variable(stringValue, "temp");
			stackVariables.push(vm.subVariables(suppVar, mainVar));
		}
	;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 448 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 455 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 462 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 469 "maine.def.yy"
    {
		Variable *suppVar = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		string varName = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[varName];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << varName << "]";
		}
		else {
			stackVariables.push(vm.subVariables(suppVar, mainVar));
		}
	;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 483 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 490 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 497 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 507 "maine.def.yy"
    {;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 508 "maine.def.yy"
    {;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 509 "maine.def.yy"
    {;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 510 "maine.def.yy"
    {
		// expr:
		// ;
		string suppVal = stackString.top(); 
		stackString.pop();
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		Variable* suppVar = vm[suppVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else if (suppVar == nullptr) {
			cout << "Could not find variable named [" << suppVal << "]";
		}
		else {
			stackVariables.push(vm.addVariables(mainVar, suppVar));
		}
	;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 530 "maine.def.yy"
    {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(ival, "temp");
			stackVariables.push(vm.addVariables(mainVar, suppVar));
		}
	;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 543 "maine.def.yy"
    {
		string stringValue = stackString.top();
		stackString.pop();
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(stringValue, "temp");
			stackVariables.push(vm.addVariables(mainVar, suppVar));
		}
	;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 558 "maine.def.yy"
    {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(dval, "temp");
			stackVariables.push(vm.addVariables(mainVar, suppVar));
		}
	;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 571 "maine.def.yy"
    {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(stackInt.top(), "temp");
			stackVariables.push(vm.addVariables(mainVar, suppVar));
		}
		stackInt.pop();
	;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 585 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 592 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 599 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 606 "maine.def.yy"
    {
		string varName = stackString.top();
		stackString.pop();
		string stringValue = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[varName];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << varName << "]";
		}
		else {
			Variable *suppVar = new Variable(stringValue, "temp");
			stackVariables.push(vm.addVariables(suppVar, mainVar));
		}
	;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 621 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 628 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 635 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 642 "maine.def.yy"
    {
		Variable *suppVar = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		string varName = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[varName];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << varName << "]";
		}
		else {
			stackVariables.push(vm.addVariables(suppVar, mainVar));
		}
	;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 656 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 663 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 670 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 680 "maine.def.yy"
    {;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 681 "maine.def.yy"
    {;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 682 "maine.def.yy"
    {;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 686 "maine.def.yy"
    {
		stackString.push(yytext);
	;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 689 "maine.def.yy"
    {;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 693 "maine.def.yy"
    {
		dval = atof(yytext);
		stackDouble.push(dval);
	;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 700 "maine.def.yy"
    {
		ival = atoi(yytext);
		stackInt.push(ival);
	;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 707 "maine.def.yy"
    {
		stackString.push(yytext);
	;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 713 "maine.def.yy"
    {printf("#");;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 714 "maine.def.yy"
    {printf("### %s ###", yytext);;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 715 "maine.def.yy"
    {printf(" ");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 716 "maine.def.yy"
    {printf("print...");;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 720 "maine.def.yy"
    {;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 721 "maine.def.yy"
    {;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 725 "maine.def.yy"
    {;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 726 "maine.def.yy"
    {;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 727 "maine.def.yy"
    {;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 728 "maine.def.yy"
    {;}
    break;



/* Line 1455 of yacc.c  */
#line 2709 "maine.def.tab.cc"
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
#line 730 "maine.def.yy"

/* <-- FUNCTIONS --> */
extern void yyerror(const char* msg){}
extern "C" int yywrap (void) { return 1; }

void showstack(stack <int> s) 
{ 
    while (!s.empty()) 
    { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 

void savingVariableInfo(string varVal, string varName) {
	cout << "[" << varName << "] = [" << varVal << "]" << endl;
}

/* <-- MAIN --> */
int main(int argc, char *argv[])
{
	printf("Progrum run:");
	printf("\n\n----------------------------\n");
	yyparse();
	printf("\n----------------------------\n\n");
	//printf("Lines: %d\n", yylineno);
	printf("Cleaning: ");
	return 0;
}
