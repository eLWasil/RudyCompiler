
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
#define YYLAST   432

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  19
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNRULES -- Number of states.  */
#define YYNSTATES  147

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
       2,     2,    17,     2,    16,     2,     2,     2,     2,     2,
       2,     2,    12,    14,     2,    13,     2,    11,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    18,
       2,    15,     2,     2,     2,     2,     2,     2,     2,     2,
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
      23,    27,    31,    35,    39,    43,    47,    51,    55,    57,
      60,    63,    67,    71,    75,    79,    83,    87,    91,    95,
      99,   103,   107,   111,   115,   119,   123,   127,   129,   132,
     135,   139,   143,   147,   151,   155,   159,   163,   167,   171,
     175,   179,   183,   187,   191,   195,   199,   201,   204,   207,
     211,   215,   219,   223,   227,   231,   235,   239,   243,   247,
     251,   255,   259,   263,   267,   271,   273,   276,   279,   283,
     287,   291,   295,   299,   303,   307,   311,   315,   319,   323,
     327,   331,   335,   339,   343,   345,   348,   351,   354,   357,
     359,   361,   363,   365,   367,   369,   371,   373,   376,   378,
     380,   383
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      20,     0,    -1,    21,    -1,    20,    21,    -1,    32,    -1,
      22,    -1,    31,    -1,    26,    -1,    21,    34,    -1,     4,
      33,    31,    -1,    22,    27,    30,    -1,    22,    27,    31,
      -1,    22,    27,    29,    -1,    22,    27,    28,    -1,    22,
      27,    26,    -1,    22,    27,    25,    -1,    22,    27,    24,
      -1,    22,    27,    23,    -1,    11,    -1,    23,    33,    -1,
      33,    23,    -1,    31,    23,    31,    -1,    31,    23,    30,
      -1,    31,    23,    28,    -1,    31,    23,    29,    -1,    30,
      23,    31,    -1,    30,    23,    30,    -1,    30,    23,    28,
      -1,    30,    23,    29,    -1,    28,    23,    31,    -1,    28,
      23,    30,    -1,    28,    23,    28,    -1,    28,    23,    29,
      -1,    29,    23,    31,    -1,    29,    23,    30,    -1,    29,
      23,    28,    -1,    29,    23,    29,    -1,    12,    -1,    24,
      33,    -1,    33,    24,    -1,    31,    24,    31,    -1,    31,
      24,    30,    -1,    31,    24,    28,    -1,    31,    24,    29,
      -1,    30,    24,    31,    -1,    30,    24,    30,    -1,    30,
      24,    28,    -1,    30,    24,    29,    -1,    28,    24,    31,
      -1,    28,    24,    30,    -1,    28,    24,    28,    -1,    28,
      24,    29,    -1,    29,    24,    31,    -1,    29,    24,    30,
      -1,    29,    24,    28,    -1,    29,    24,    29,    -1,    13,
      -1,    25,    33,    -1,    33,    25,    -1,    31,    25,    31,
      -1,    31,    25,    30,    -1,    31,    25,    28,    -1,    31,
      25,    29,    -1,    30,    25,    31,    -1,    30,    25,    30,
      -1,    30,    25,    28,    -1,    30,    25,    29,    -1,    28,
      25,    31,    -1,    28,    25,    30,    -1,    28,    25,    28,
      -1,    28,    25,    29,    -1,    29,    25,    31,    -1,    29,
      25,    30,    -1,    29,    25,    28,    -1,    29,    25,    29,
      -1,    14,    -1,    26,    33,    -1,    33,    26,    -1,    31,
      26,    31,    -1,    31,    26,    30,    -1,    31,    26,    28,
      -1,    31,    26,    29,    -1,    30,    26,    31,    -1,    30,
      26,    30,    -1,    30,    26,    28,    -1,    30,    26,    29,
      -1,    28,    26,    31,    -1,    28,    26,    30,    -1,    28,
      26,    28,    -1,    28,    26,    29,    -1,    29,    26,    31,
      -1,    29,    26,    30,    -1,    29,    26,    28,    -1,    29,
      26,    29,    -1,    15,    -1,    27,    33,    -1,    33,    27,
      -1,    16,     6,    -1,    28,    16,    -1,     7,    -1,    10,
      -1,     6,    -1,     8,    -1,     9,    -1,    33,    -1,     5,
      -1,    17,    -1,    33,    17,    -1,     3,    -1,    18,    -1,
      34,     3,    -1,    34,    18,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    53,    57,    58,    59,    60,    61,    68,
      71,    79,   109,   116,   125,   134,   145,   156,   170,   171,
     172,   173,   191,   204,   221,   234,   248,   255,   262,   269,
     284,   291,   298,   305,   319,   326,   333,   343,   344,   345,
     346,   364,   377,   394,   407,   421,   428,   435,   442,   457,
     464,   471,   478,   492,   499,   506,   516,   517,   518,   519,
     537,   550,   565,   578,   592,   599,   606,   613,   628,   635,
     642,   649,   663,   670,   677,   687,   688,   689,   690,   708,
     721,   736,   749,   763,   770,   777,   784,   799,   806,   813,
     820,   834,   841,   848,   858,   859,   860,   864,   867,   871,
     878,   885,   891,   892,   893,   894,   898,   899,   903,   904,
     905,   906
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NEWLINE", "SET", "PRINT", "STR", "DBL",
  "UNKNOWN", "COMMENTLINE", "INT", "'/'", "'*'", "'-'", "'+'", "'='",
  "'\"'", "' '", "';'", "$accept", "read_all", "line", "op_set", "op_div",
  "op_multi", "op_sub", "op_add", "op_assign", "quote", "double",
  "integer", "identity", "ignore", "whitespace", "endl", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,    47,    42,    45,    43,    61,    34,    32,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    19,    20,    20,    21,    21,    21,    21,    21,    22,
      22,    22,    22,    22,    22,    22,    22,    22,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    27,    27,    27,    28,    28,    29,
      30,    31,    32,    32,    32,    32,    33,    33,    34,    34,
      34,    34
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
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
       0,     0,   105,   101,    99,   102,   103,   100,    75,     0,
     106,     0,     2,     5,     7,     0,     0,     0,     6,     4,
     104,     0,    97,     1,     3,   108,   109,     8,    94,     0,
       0,    76,    98,     0,     0,     0,     0,     0,     0,   106,
      77,   107,     9,   110,   111,    18,    37,    56,    17,    16,
      15,    14,    13,    12,    10,    11,     0,    96,    88,    89,
      87,    86,    92,    93,    91,    90,    84,    85,    83,    82,
      80,    81,    79,    78,    19,    38,    57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,    39,    58,    95,    98,    31,
      32,    30,    29,    50,    51,    49,    48,    69,    70,    68,
      67,    35,    36,    34,    33,    54,    55,    53,    52,    73,
      74,    72,    71,    27,    28,    26,    25,    46,    47,    45,
      44,    65,    66,    64,    63,    23,    24,    22,    21,    42,
      43,    41,    40,    61,    62,    60,    59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    11,    12,    13,    77,    78,    79,    38,    29,    80,
      81,    82,    83,    19,    84,    27
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -14
static const yytype_int16 yypact[] =
{
     274,    -9,   -14,   -14,   -14,   -14,   -14,   -14,   -14,    18,
     -14,   351,     3,   -13,    -9,   336,   410,   410,   410,   -14,
     415,     6,   -14,   -14,     3,   -14,   -14,     4,   -14,    93,
     -12,    -8,    18,   140,   410,   415,   140,   140,   140,    58,
      -9,   -14,   -14,   -14,   -14,   -14,   -14,   -14,    -9,    -9,
      -9,    -9,   370,    93,    93,    93,   398,    -9,    -6,   -14,
     -14,   -14,    -6,   -14,   -14,   -14,    -6,   -14,   -14,   -14,
      -6,   -14,   -14,   -14,    -8,    -8,    -8,   140,   140,   140,
     370,    93,    93,    93,   398,   140,   140,   140,   140,   140,
     140,   140,   140,   140,    -9,    -9,    -9,    -8,   -14,    -6,
     -14,   -14,   -14,    -6,   -14,   -14,   -14,    -6,   -14,   -14,
     -14,    -6,   -14,   -14,   -14,    -6,   -14,   -14,   -14,    -6,
     -14,   -14,   -14,    -6,   -14,   -14,   -14,    -6,   -14,   -14,
     -14,    -6,   -14,   -14,   -14,    -6,   -14,   -14,   -14,    -6,
     -14,   -14,   -14,    -6,   -14,   -14,   -14
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -14,   -14,    14,   -14,   -10,    -1,   115,   319,    -4,   125,
     208,   236,    97,   -14,     0,   -14
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -108
static const yytype_int16 yytable[] =
{
      20,    21,    28,    28,    10,    39,    25,    43,    10,    41,
      98,    20,     3,    30,    31,    35,    35,    35,    35,    48,
      35,    26,    44,    41,    22,    24,    57,     0,    49,    56,
      30,     0,     0,    31,    35,    35,    31,    31,    31,     0,
      31,     0,     0,    85,    88,    91,    94,     0,    74,    75,
      76,    31,    86,    89,    92,    95,     0,    97,  -107,     0,
       0,  -107,  -107,  -107,     0,     0,  -107,  -107,     0,     0,
       0,    85,    88,    91,    94,     0,  -107,    74,    75,    76,
      86,    89,    92,    95,     0,    74,    75,    76,    74,    75,
      76,    74,    75,    76,    74,    75,    76,    18,     0,     3,
       4,     0,     0,     7,    45,    46,    47,     8,    18,     9,
      10,     0,    34,    34,    34,    34,     0,    34,    42,     0,
       0,     0,     0,     0,     0,    15,    55,     0,     0,     0,
      61,    34,    34,    65,    69,    73,    15,     0,     0,     0,
      15,    15,    15,    15,    50,    15,     3,     4,     0,     0,
       7,     0,     0,     0,    52,     0,     9,    10,    58,    15,
      15,    62,    66,    70,     0,     0,     0,     0,    87,    90,
      93,    96,     0,     0,   102,   106,   110,     0,     0,     0,
       0,     0,   114,   118,   122,   126,   130,   134,   138,   142,
     146,     0,     0,     0,     0,     0,    87,    90,    93,    96,
       0,     0,    99,   103,   107,     0,     0,     0,    16,     0,
     111,   115,   119,   123,   127,   131,   135,   139,   143,    16,
       0,     0,     0,    16,    16,    16,    16,     0,    16,     0,
       0,     0,     0,     0,     0,     0,    17,    53,     0,     0,
       0,    59,    16,    16,    63,    67,    71,    17,     0,     0,
       0,    17,    17,    17,    17,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,     0,     0,    60,
      17,    17,    64,    68,    72,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,   100,   104,   108,     8,     0,
       9,    10,     0,   112,   116,   120,   124,   128,   132,   136,
     140,   144,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   101,   105,   109,     0,     0,     0,    14,
       0,   113,   117,   121,   125,   129,   133,   137,   141,   145,
      14,     0,     0,     0,    33,    36,    37,     0,     0,    40,
       0,     0,     3,     4,     0,     0,     7,     0,    51,     0,
       8,    23,    32,    10,    40,     1,     2,     3,     4,     5,
       6,     7,     0,     0,     0,     8,     0,     9,    10,     0,
       0,    33,    36,    37,     0,    40,     3,     4,     0,     0,
       7,    45,    46,    47,     8,     0,    32,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      36,    37,     0,    40,     3,     4,     0,     0,     7,    45,
      46,    47,     8,     0,     9,    39,     3,     4,     0,     0,
       7,     3,     4,     0,     8,     7,     9,    10,     0,     8,
       0,     9,    39
};

static const yytype_int8 yycheck[] =
{
       0,     1,    15,    15,    17,    17,     3,     3,    17,    17,
      16,    11,     6,    13,    14,    15,    16,    17,    18,    29,
      20,    18,    18,    17,     6,    11,    30,    -1,    29,    29,
      30,    -1,    -1,    33,    34,    35,    36,    37,    38,    -1,
      40,    -1,    -1,    53,    54,    55,    56,    -1,    48,    49,
      50,    51,    53,    54,    55,    56,    -1,    57,     0,    -1,
      -1,     3,     4,     5,    -1,    -1,     8,     9,    -1,    -1,
      -1,    81,    82,    83,    84,    -1,    18,    77,    78,    79,
      81,    82,    83,    84,    -1,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,     0,    -1,     6,
       7,    -1,    -1,    10,    11,    12,    13,    14,    11,    16,
      17,    -1,    15,    16,    17,    18,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,     0,    29,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    11,    -1,    -1,    -1,
      15,    16,    17,    18,    29,    20,     6,     7,    -1,    -1,
      10,    -1,    -1,    -1,    29,    -1,    16,    17,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    53,    54,
      55,    56,    -1,    -1,    77,    78,    79,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      -1,    -1,    77,    78,    79,    -1,    -1,    -1,     0,    -1,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     0,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    11,    -1,    -1,
      -1,    15,    16,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    10,    77,    78,    79,    14,    -1,
      16,    17,    -1,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    -1,    -1,    -1,     0,
      -1,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      11,    -1,    -1,    -1,    15,    16,    17,    -1,    -1,    20,
      -1,    -1,     6,     7,    -1,    -1,    10,    -1,    29,    -1,
      14,     0,    16,    17,    35,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    16,    17,    -1,
      -1,    52,    53,    54,    -1,    56,     6,     7,    -1,    -1,
      10,    11,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    -1,    84,     6,     7,    -1,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,     6,     7,    -1,    -1,
      10,     6,     7,    -1,    14,    10,    16,    17,    -1,    14,
      -1,    16,    17
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    14,    16,
      17,    20,    21,    22,    26,    28,    29,    30,    31,    32,
      33,    33,     6,     0,    21,     3,    18,    34,    15,    27,
      33,    33,    16,    26,    31,    33,    26,    26,    26,    17,
      26,    17,    31,     3,    18,    11,    12,    13,    23,    24,
      25,    26,    28,    29,    30,    31,    33,    27,    28,    29,
      30,    31,    28,    29,    30,    31,    28,    29,    30,    31,
      28,    29,    30,    31,    33,    33,    33,    23,    24,    25,
      28,    29,    30,    31,    33,    23,    24,    25,    23,    24,
      25,    23,    24,    25,    23,    24,    25,    33,    16,    28,
      29,    30,    31,    28,    29,    30,    31,    28,    29,    30,
      31,    28,    29,    30,    31,    28,    29,    30,    31,    28,
      29,    30,    31,    28,    29,    30,    31,    28,    29,    30,
      31,    28,    29,    30,    31,    28,    29,    30,    31,    28,
      29,    30,    31,    28,    29,    30,    31
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
#line 156 "maine.def.yy"
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

  case 18:

/* Line 1455 of yacc.c  */
#line 170 "maine.def.yy"
    {;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 171 "maine.def.yy"
    {;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 172 "maine.def.yy"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 173 "maine.def.yy"
    {
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
			stackVariables.push(vm.divideVariables(mainVar, suppVar));
		}
	;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 191 "maine.def.yy"
    {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(ival, "temp");
			stackVariables.push(vm.divideVariables(mainVar, suppVar));
		}
	;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 204 "maine.def.yy"
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
			stackVariables.push(vm.divideVariables(mainVar, suppVar));
		}
	;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 221 "maine.def.yy"
    {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(dval, "temp");
			stackVariables.push(vm.divideVariables(mainVar, suppVar));
		}
	;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 234 "maine.def.yy"
    {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(stackInt.top(), "temp");
			stackVariables.push(vm.divideVariables(suppVar, mainVar));
		}
		stackInt.pop();
	;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 248 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 255 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 262 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 269 "maine.def.yy"
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
			stackVariables.push(vm.divideVariables(suppVar, mainVar));
		}
	;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 284 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 291 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 298 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 305 "maine.def.yy"
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
			stackVariables.push(vm.divideVariables(suppVar, mainVar));
		}
	;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 319 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 326 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 333 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 343 "maine.def.yy"
    {;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 344 "maine.def.yy"
    {;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 345 "maine.def.yy"
    {;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 346 "maine.def.yy"
    {
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

  case 41:

/* Line 1455 of yacc.c  */
#line 364 "maine.def.yy"
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

  case 42:

/* Line 1455 of yacc.c  */
#line 377 "maine.def.yy"
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

  case 43:

/* Line 1455 of yacc.c  */
#line 394 "maine.def.yy"
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

  case 44:

/* Line 1455 of yacc.c  */
#line 407 "maine.def.yy"
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

  case 45:

/* Line 1455 of yacc.c  */
#line 421 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 428 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 435 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 442 "maine.def.yy"
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

  case 49:

/* Line 1455 of yacc.c  */
#line 457 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 464 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 471 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 478 "maine.def.yy"
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

  case 53:

/* Line 1455 of yacc.c  */
#line 492 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 499 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 506 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 516 "maine.def.yy"
    {;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 517 "maine.def.yy"
    {;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 518 "maine.def.yy"
    {;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 519 "maine.def.yy"
    {
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

  case 60:

/* Line 1455 of yacc.c  */
#line 537 "maine.def.yy"
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

  case 61:

/* Line 1455 of yacc.c  */
#line 550 "maine.def.yy"
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

  case 62:

/* Line 1455 of yacc.c  */
#line 565 "maine.def.yy"
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

  case 63:

/* Line 1455 of yacc.c  */
#line 578 "maine.def.yy"
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

  case 64:

/* Line 1455 of yacc.c  */
#line 592 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 599 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 606 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 613 "maine.def.yy"
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

  case 68:

/* Line 1455 of yacc.c  */
#line 628 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 635 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 642 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 649 "maine.def.yy"
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

  case 72:

/* Line 1455 of yacc.c  */
#line 663 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 670 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 677 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 687 "maine.def.yy"
    {;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 688 "maine.def.yy"
    {;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 689 "maine.def.yy"
    {;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 690 "maine.def.yy"
    {
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

  case 79:

/* Line 1455 of yacc.c  */
#line 708 "maine.def.yy"
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

  case 80:

/* Line 1455 of yacc.c  */
#line 721 "maine.def.yy"
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

  case 81:

/* Line 1455 of yacc.c  */
#line 736 "maine.def.yy"
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

  case 82:

/* Line 1455 of yacc.c  */
#line 749 "maine.def.yy"
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

  case 83:

/* Line 1455 of yacc.c  */
#line 763 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 770 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 777 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 784 "maine.def.yy"
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

  case 87:

/* Line 1455 of yacc.c  */
#line 799 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 806 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 813 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 820 "maine.def.yy"
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

  case 91:

/* Line 1455 of yacc.c  */
#line 834 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 841 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 848 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 858 "maine.def.yy"
    {;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 859 "maine.def.yy"
    {;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 860 "maine.def.yy"
    {;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 864 "maine.def.yy"
    {
		stackString.push(yytext);
	;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 867 "maine.def.yy"
    {;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 871 "maine.def.yy"
    {
		dval = atof(yytext);
		stackDouble.push(dval);
	;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 878 "maine.def.yy"
    {
		ival = atoi(yytext);
		stackInt.push(ival);
	;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 885 "maine.def.yy"
    {
		stackString.push(yytext);
	;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 891 "maine.def.yy"
    {printf("#");;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 892 "maine.def.yy"
    {printf("### %s ###", yytext);;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 893 "maine.def.yy"
    {printf(" ");;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 894 "maine.def.yy"
    {printf("print...");;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 898 "maine.def.yy"
    {;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 899 "maine.def.yy"
    {;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 903 "maine.def.yy"
    {;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 904 "maine.def.yy"
    {;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 905 "maine.def.yy"
    {;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 906 "maine.def.yy"
    {;}
    break;



/* Line 1455 of yacc.c  */
#line 3040 "maine.def.tab.cc"
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
#line 908 "maine.def.yy"

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
