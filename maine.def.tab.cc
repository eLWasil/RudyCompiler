
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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   364

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  21
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  130
/* YYNRULES -- Number of states.  */
#define YYNSTATES  166

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
       2,     2,    19,     2,    18,     2,     2,     2,     2,     2,
      11,    13,    15,    12,     2,    16,     2,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    20,
       2,    17,     2,     2,     2,     2,     2,     2,     2,     2,
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
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      21,    23,    26,    29,    32,    35,    39,    42,    45,    49,
      53,    57,    61,    65,    69,    73,    77,    81,    85,    89,
      93,    97,   101,   105,   109,   113,   115,   118,   121,   125,
     129,   133,   137,   141,   145,   149,   153,   157,   161,   165,
     169,   173,   177,   181,   185,   187,   190,   193,   197,   201,
     205,   209,   213,   217,   221,   225,   229,   233,   237,   241,
     245,   249,   253,   257,   259,   262,   265,   269,   273,   277,
     281,   285,   289,   293,   297,   301,   305,   309,   313,   317,
     321,   325,   329,   331,   334,   337,   341,   345,   349,   353,
     357,   361,   365,   369,   373,   377,   381,   385,   389,   393,
     397,   401,   403,   406,   409,   412,   415,   418,   421,   424,
     426,   428,   430,   432,   434,   436,   438,   441,   443,   445,
     448
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      22,     0,    -1,    23,    -1,    22,    23,    -1,    37,    -1,
      26,    -1,    25,    -1,    36,    -1,    24,    -1,    23,    39,
      -1,     5,    -1,    24,    11,    -1,    24,    36,    -1,    24,
      32,    -1,    24,    38,    -1,    24,    38,    12,    -1,    24,
      12,    -1,    24,    13,    -1,    36,    31,    36,    -1,    36,
      31,    32,    -1,    36,    31,    35,    -1,    36,    31,    34,
      -1,    36,    31,    30,    -1,    36,    31,    29,    -1,    36,
      31,    28,    -1,    36,    31,    27,    -1,     4,    38,    36,
      -1,    26,    31,    35,    -1,    26,    31,    36,    -1,    26,
      31,    34,    -1,    26,    31,    32,    -1,    26,    31,    30,
      -1,    26,    31,    29,    -1,    26,    31,    28,    -1,    26,
      31,    27,    -1,    14,    -1,    27,    38,    -1,    38,    27,
      -1,    36,    27,    36,    -1,    36,    27,    35,    -1,    36,
      27,    32,    -1,    36,    27,    34,    -1,    35,    27,    36,
      -1,    35,    27,    35,    -1,    35,    27,    32,    -1,    35,
      27,    34,    -1,    33,    27,    36,    -1,    33,    27,    35,
      -1,    33,    27,    32,    -1,    33,    27,    34,    -1,    34,
      27,    36,    -1,    34,    27,    35,    -1,    34,    27,    32,
      -1,    34,    27,    34,    -1,    15,    -1,    28,    38,    -1,
      38,    28,    -1,    36,    28,    36,    -1,    36,    28,    35,
      -1,    36,    28,    32,    -1,    36,    28,    34,    -1,    35,
      28,    36,    -1,    35,    28,    35,    -1,    35,    28,    32,
      -1,    35,    28,    34,    -1,    33,    28,    36,    -1,    33,
      28,    35,    -1,    33,    28,    32,    -1,    33,    28,    34,
      -1,    34,    28,    36,    -1,    34,    28,    35,    -1,    34,
      28,    32,    -1,    34,    28,    34,    -1,    16,    -1,    29,
      38,    -1,    38,    29,    -1,    36,    29,    36,    -1,    36,
      29,    35,    -1,    36,    29,    32,    -1,    36,    29,    34,
      -1,    35,    29,    36,    -1,    35,    29,    35,    -1,    35,
      29,    32,    -1,    35,    29,    34,    -1,    33,    29,    36,
      -1,    33,    29,    35,    -1,    33,    29,    32,    -1,    33,
      29,    34,    -1,    34,    29,    36,    -1,    34,    29,    35,
      -1,    34,    29,    32,    -1,    34,    29,    34,    -1,    12,
      -1,    30,    38,    -1,    38,    30,    -1,    36,    30,    36,
      -1,    36,    30,    35,    -1,    36,    30,    33,    -1,    36,
      30,    34,    -1,    35,    30,    36,    -1,    35,    30,    35,
      -1,    35,    30,    33,    -1,    35,    30,    34,    -1,    33,
      30,    36,    -1,    33,    30,    35,    -1,    33,    30,    33,
      -1,    33,    30,    34,    -1,    34,    30,    36,    -1,    34,
      30,    35,    -1,    34,    30,    33,    -1,    34,    30,    34,
      -1,    17,    -1,    31,    38,    -1,    38,    31,    -1,    33,
      18,    -1,    18,     6,    -1,    33,     6,    -1,    33,    17,
      -1,    33,    19,    -1,     7,    -1,    10,    -1,     6,    -1,
       8,    -1,     9,    -1,    38,    -1,    19,    -1,    38,    19,
      -1,     3,    -1,    20,    -1,    39,     3,    -1,    39,    20,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    53,    57,    58,    59,    60,    61,    62,
      66,    67,    68,    76,    80,    81,    82,    83,    89,   108,
     124,   140,   155,   165,   175,   185,   198,   201,   209,   239,
     246,   255,   264,   275,   286,   300,   301,   302,   303,   321,
     334,   351,   364,   378,   385,   392,   399,   414,   421,   428,
     435,   449,   456,   463,   473,   474,   475,   476,   494,   507,
     524,   537,   551,   558,   565,   572,   587,   594,   601,   608,
     622,   629,   636,   646,   647,   648,   649,   667,   680,   695,
     708,   722,   729,   736,   743,   758,   765,   772,   779,   793,
     800,   807,   817,   818,   819,   820,   838,   851,   866,   879,
     893,   900,   907,   914,   929,   936,   943,   950,   964,   971,
     978,   988,   989,   990,   994,   998,  1001,  1009,  1015,  1024,
    1031,  1038,  1044,  1045,  1046,  1050,  1051,  1055,  1056,  1057,
    1058
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NEWLINE", "SET", "PRINT", "STR", "DBL",
  "UNKNOWN", "COMMENTLINE", "INT", "'('", "'+'", "')'", "'/'", "'*'",
  "'-'", "'='", "'\"'", "' '", "';'", "$accept", "read_all", "line",
  "print", "op_hset", "op_set", "op_div", "op_multi", "op_sub", "op_add",
  "op_assign", "quoteEnd", "quote", "double", "integer", "identity",
  "ignore", "whitespace", "endl", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,    40,    43,    41,    47,    42,    45,    61,    34,    32,
      59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    21,    22,    22,    23,    23,    23,    23,    23,    23,
      24,    24,    24,    24,    24,    24,    24,    24,    25,    25,
      25,    25,    25,    25,    25,    25,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    31,    31,    31,    32,    33,    33,    33,    33,    34,
      35,    36,    37,    37,    37,    38,    38,    39,    39,    39,
      39
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     2,     2,     3,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     2,
       2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    10,   121,   122,   123,   125,     0,     2,     8,
       6,     5,     7,     4,   124,     0,     1,     3,   127,   128,
       9,    11,    16,    17,     0,    13,     0,    12,    14,   111,
       0,     0,     0,   126,    26,   129,   130,   115,   116,   117,
     114,   118,    15,   119,   120,    92,    35,    54,    73,    34,
      33,    32,    31,    30,     0,    29,    27,    28,     0,   125,
     113,    25,    24,    23,    22,    19,    21,    20,    18,    36,
      55,    74,    93,   116,   114,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,    56,    75,
      94,   112,    48,    49,    47,    46,    67,    68,    66,    65,
      86,    87,    85,    84,   105,   106,   104,   103,    52,    53,
      51,    50,    71,    72,    70,    69,    90,    91,    89,    88,
     109,   110,   108,   107,    44,    45,    43,    42,    63,    64,
      62,    61,    82,    83,    81,    80,   101,   102,   100,    99,
      40,    41,    39,    38,    59,    60,    58,    57,    78,    79,
      77,    76,    97,    98,    96,    95
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    85,    86,    87,    88,
      30,    25,    26,    81,    82,    83,    13,    84,    20
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -18
static const yytype_int16 yypact[] =
{
     132,   -17,   -18,   -18,   -18,   -18,   -18,    15,     5,   345,
     -18,    19,    19,   -18,    -5,    -2,   -18,     5,   -18,   -18,
       7,   -18,   -18,   -18,    -1,   -18,   148,   -18,    -6,   -18,
     320,    20,   320,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -17,
     -17,   -17,   -17,   -18,   286,   320,   320,   320,   334,   -18,
     -17,   -17,   -17,   -17,   -17,   -18,   320,   320,   320,    -5,
      -5,    -5,    -5,   -18,    -1,   -18,    65,    65,    65,    65,
     306,   320,   320,   320,   334,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,   -17,   -17,   -17,
     -17,    -5,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,    40,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
      40,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,    40,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,    40,   -18,   -18,   -18
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -18,   -18,    21,   -18,   -18,   -18,   -14,   188,   206,   227,
      -9,   139,    76,    97,   118,    26,   -18,     0,   -18
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      14,    15,     6,    32,     3,    37,    42,    14,    18,    28,
      35,    31,    31,    33,    33,    16,    49,    33,    61,     1,
       2,     3,    60,     4,     5,    19,    12,    36,    17,     0,
      58,    31,    58,    12,     6,    27,    29,    29,     6,    59,
      76,    34,    89,    93,    97,     0,    38,     0,     0,    69,
      70,    71,    72,    89,    93,     0,    57,    39,    68,    41,
     101,    69,    70,    71,    72,     0,    76,     0,    89,    93,
      97,     3,    43,     0,     0,    44,    69,    70,    71,    72,
       0,     0,     0,    24,     6,    69,    70,    71,    72,    69,
      70,    71,    72,    69,    70,    71,    72,    69,    70,    71,
      72,     0,   105,   109,   113,   117,    54,     0,    54,     0,
       0,   121,   125,   129,   133,   137,   141,   145,   149,   153,
     157,   161,   165,     0,     0,     0,     0,    55,     0,    66,
      80,    80,    80,    80,    80,     0,     1,     2,     3,     0,
       4,     5,    80,    80,    80,     0,     0,     0,    56,     0,
      67,     6,     0,     0,    38,   114,    80,    80,    80,    80,
      80,     0,     0,     0,   130,    39,    40,    41,   146,    53,
       0,    65,   162,   103,   107,   111,   115,     0,     0,     0,
       0,     0,   119,   123,   127,   131,   135,   139,   143,   147,
     151,   155,   159,   163,   104,   108,   112,   116,     0,     0,
       0,     0,     0,   120,   124,   128,   132,   136,   140,   144,
     148,   152,   156,   160,   164,   102,   106,   110,    50,     0,
      62,     0,     0,     0,   118,   122,   126,     0,   134,   138,
     142,     0,   150,   154,   158,     0,    51,     0,    63,     0,
       0,     0,    77,     0,    90,    94,    98,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    94,    52,     0,    64,
      78,     0,    91,    95,    99,     0,     0,     0,    77,     0,
      90,    94,    98,    91,    95,     0,     0,     0,     0,     0,
       0,    79,     0,    92,    96,   100,    78,     0,    91,    95,
      99,     0,    73,    43,    92,    96,    44,     0,    45,     0,
      46,    47,    48,    39,    74,    75,     0,    79,     0,    92,
      96,   100,    73,    43,     0,     0,    44,     0,    45,     0,
      46,    47,    48,    39,    24,    75,     3,    43,     0,     0,
      44,     0,    45,     0,    46,    47,    48,     0,    24,     6,
       3,    43,     0,     0,    44,     0,    45,     0,    46,    47,
      48,     3,    24,    59,     0,     0,    21,    22,    23,     0,
       0,     0,     0,    24,     6
};

static const yytype_int8 yycheck[] =
{
       0,     1,    19,    12,     6,     6,    12,     7,     3,     9,
       3,    11,    12,    19,    19,     0,    30,    19,    32,     4,
       5,     6,    31,     8,     9,    20,     0,    20,     7,    -1,
      30,    31,    32,     7,    19,     9,    17,    17,    19,    19,
      54,    15,    56,    57,    58,    -1,     6,    -1,    -1,    49,
      50,    51,    52,    67,    68,    -1,    30,    17,    32,    19,
      60,    61,    62,    63,    64,    -1,    80,    -1,    82,    83,
      84,     6,     7,    -1,    -1,    10,    76,    77,    78,    79,
      -1,    -1,    -1,    18,    19,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,    76,    77,    78,    79,    30,    -1,    32,    -1,
      -1,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    -1,    -1,    -1,    -1,    30,    -1,    32,
      54,    55,    56,    57,    58,    -1,     4,     5,     6,    -1,
       8,     9,    66,    67,    68,    -1,    -1,    -1,    30,    -1,
      32,    19,    -1,    -1,     6,    79,    80,    81,    82,    83,
      84,    -1,    -1,    -1,    88,    17,    18,    19,    92,    30,
      -1,    32,    96,    76,    77,    78,    79,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    76,    77,    78,    30,    -1,
      32,    -1,    -1,    -1,    85,    86,    87,    -1,    89,    90,
      91,    -1,    93,    94,    95,    -1,    30,    -1,    32,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    30,    -1,    32,
      54,    -1,    56,    57,    58,    -1,    -1,    -1,    80,    -1,
      82,    83,    84,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    80,    -1,    82,    83,
      84,    -1,     6,     7,    67,    68,    10,    -1,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    80,    -1,    82,
      83,    84,     6,     7,    -1,    -1,    10,    -1,    12,    -1,
      14,    15,    16,    17,    18,    19,     6,     7,    -1,    -1,
      10,    -1,    12,    -1,    14,    15,    16,    -1,    18,    19,
       6,     7,    -1,    -1,    10,    -1,    12,    -1,    14,    15,
      16,     6,    18,    19,    -1,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    18,    19
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     8,     9,    19,    22,    23,    24,
      25,    26,    36,    37,    38,    38,     0,    23,     3,    20,
      39,    11,    12,    13,    18,    32,    33,    36,    38,    17,
      31,    38,    31,    19,    36,     3,    20,     6,     6,    17,
      18,    19,    12,     7,    10,    12,    14,    15,    16,    27,
      28,    29,    30,    32,    33,    34,    35,    36,    38,    19,
      31,    27,    28,    29,    30,    32,    34,    35,    36,    38,
      38,    38,    38,     6,    18,    19,    27,    28,    29,    30,
      33,    34,    35,    36,    38,    27,    28,    29,    30,    27,
      28,    29,    30,    27,    28,    29,    30,    27,    28,    29,
      30,    38,    32,    34,    35,    36,    32,    34,    35,    36,
      32,    34,    35,    36,    33,    34,    35,    36,    32,    34,
      35,    36,    32,    34,    35,    36,    32,    34,    35,    36,
      33,    34,    35,    36,    32,    34,    35,    36,    32,    34,
      35,    36,    32,    34,    35,    36,    33,    34,    35,    36,
      32,    34,    35,    36,    32,    34,    35,    36,    32,    34,
      35,    36,    33,    34,    35,    36
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
    {;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 62 "maine.def.yy"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 66 "maine.def.yy"
    {;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 67 "maine.def.yy"
    {;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 68 "maine.def.yy"
    {
		Variable *var = vm[stackString.top()];
		stackString.pop();
		if (var != nullptr) {
			stackVariables.push(var);
			cout << stackVariables.top()->getSValue();
		}
	;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 76 "maine.def.yy"
    {
		cout << stackString.top();
		stackString.pop();
	;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 80 "maine.def.yy"
    {;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 81 "maine.def.yy"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 82 "maine.def.yy"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 83 "maine.def.yy"
    {
		cout << endl;
	;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 89 "maine.def.yy"
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
			*mainVar = suppVar;
		}
	;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 108 "maine.def.yy"
    {
		string sValue = stackString.top();
		stackString.pop();
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable* suppVar = new Variable(sValue, "temp");
			*mainVar = suppVar;
		}
	;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 124 "maine.def.yy"
    {
		string mainVal = stackString.top();
		stackString.pop();
		int iValue = stackInt.top();
		stackInt.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable* suppVar = new Variable(iValue, "temp");
			*mainVar = suppVar;
		}
	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 140 "maine.def.yy"
    {
		string mainVal = stackString.top();
		stackString.pop();
		double dValue = stackDouble.top();
		stackDouble.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable* suppVar = new Variable(dValue, "temp");
			*mainVar = suppVar;
		}
	;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 155 "maine.def.yy"
    {
		if (stackVariables.top() != nullptr) {
			string mainVal = stackString.top();

			Variable* mainVar = vm[mainVal];
			*mainVar = stackVariables.top();
		}
		stackVariables.pop();
		stackString.pop();
	;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 165 "maine.def.yy"
    {
		if (stackVariables.top() != nullptr) {
			string mainVal = stackString.top();

			Variable* mainVar = vm[mainVal];
			*mainVar = stackVariables.top();
		}
		stackVariables.pop();
		stackString.pop();
	;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 175 "maine.def.yy"
    {
		if (stackVariables.top() != nullptr) {
			string mainVal = stackString.top();

			Variable* mainVar = vm[mainVal];
			*mainVar = stackVariables.top();
		}
		stackVariables.pop();
		stackString.pop();
	;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 185 "maine.def.yy"
    {
		if (stackVariables.top() != nullptr) {
			string mainVal = stackString.top();

			Variable* mainVar = vm[mainVal];
			*mainVar = stackVariables.top();
		}
		stackVariables.pop();
		stackString.pop();
	;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 198 "maine.def.yy"
    {
		stackString.push(yytext);
	;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 201 "maine.def.yy"
    {
		int result = (vm += new Variable(stackInt.top(), stackString.top()));
		if (!result){
			savingVariableInfo(to_string(stackInt.top()), stackString.top());
		}
		stackInt.pop();
		stackString.pop();
	;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 209 "maine.def.yy"
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

  case 29:

/* Line 1455 of yacc.c  */
#line 239 "maine.def.yy"
    {
		int result = (vm += new Variable(dval, stackString.top()));
		if (!result) {
			savingVariableInfo(to_string(dval), stackString.top());
		}
		stackString.pop()
	;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 246 "maine.def.yy"
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

  case 31:

/* Line 1455 of yacc.c  */
#line 255 "maine.def.yy"
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

  case 32:

/* Line 1455 of yacc.c  */
#line 264 "maine.def.yy"
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

  case 33:

/* Line 1455 of yacc.c  */
#line 275 "maine.def.yy"
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

  case 34:

/* Line 1455 of yacc.c  */
#line 286 "maine.def.yy"
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

  case 35:

/* Line 1455 of yacc.c  */
#line 300 "maine.def.yy"
    {;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 301 "maine.def.yy"
    {;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 302 "maine.def.yy"
    {;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 303 "maine.def.yy"
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

  case 39:

/* Line 1455 of yacc.c  */
#line 321 "maine.def.yy"
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

  case 40:

/* Line 1455 of yacc.c  */
#line 334 "maine.def.yy"
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

  case 41:

/* Line 1455 of yacc.c  */
#line 351 "maine.def.yy"
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

  case 42:

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
			Variable *suppVar = new Variable(stackInt.top(), "temp");
			stackVariables.push(vm.divideVariables(suppVar, mainVar));
		}
		stackInt.pop();
	;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 378 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 385 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 392 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 399 "maine.def.yy"
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

  case 47:

/* Line 1455 of yacc.c  */
#line 414 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 421 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 428 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 435 "maine.def.yy"
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

  case 51:

/* Line 1455 of yacc.c  */
#line 449 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 456 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 463 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 473 "maine.def.yy"
    {;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 474 "maine.def.yy"
    {;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 475 "maine.def.yy"
    {;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 476 "maine.def.yy"
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

  case 58:

/* Line 1455 of yacc.c  */
#line 494 "maine.def.yy"
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

  case 59:

/* Line 1455 of yacc.c  */
#line 507 "maine.def.yy"
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

  case 60:

/* Line 1455 of yacc.c  */
#line 524 "maine.def.yy"
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

  case 61:

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
			Variable *suppVar = new Variable(stackInt.top(), "temp");
			stackVariables.push(vm.multipleVariables(suppVar, mainVar));
		}
		stackInt.pop();
	;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 551 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 558 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 565 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 572 "maine.def.yy"
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

  case 66:

/* Line 1455 of yacc.c  */
#line 587 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 594 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 601 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 608 "maine.def.yy"
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

  case 70:

/* Line 1455 of yacc.c  */
#line 622 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 629 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 636 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 646 "maine.def.yy"
    {;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 647 "maine.def.yy"
    {;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 648 "maine.def.yy"
    {;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 649 "maine.def.yy"
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

  case 77:

/* Line 1455 of yacc.c  */
#line 667 "maine.def.yy"
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

  case 78:

/* Line 1455 of yacc.c  */
#line 680 "maine.def.yy"
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

  case 79:

/* Line 1455 of yacc.c  */
#line 695 "maine.def.yy"
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

  case 80:

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
			Variable *suppVar = new Variable(stackInt.top(), "temp");
			stackVariables.push(vm.subVariables(suppVar, mainVar));
		}
		stackInt.pop();
	;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 722 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 729 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 736 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 743 "maine.def.yy"
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

  case 85:

/* Line 1455 of yacc.c  */
#line 758 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 765 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 772 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 779 "maine.def.yy"
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

  case 89:

/* Line 1455 of yacc.c  */
#line 793 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 800 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 807 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 817 "maine.def.yy"
    {;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 818 "maine.def.yy"
    {;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 819 "maine.def.yy"
    {;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 820 "maine.def.yy"
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

  case 96:

/* Line 1455 of yacc.c  */
#line 838 "maine.def.yy"
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

  case 97:

/* Line 1455 of yacc.c  */
#line 851 "maine.def.yy"
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

  case 98:

/* Line 1455 of yacc.c  */
#line 866 "maine.def.yy"
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

  case 99:

/* Line 1455 of yacc.c  */
#line 879 "maine.def.yy"
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

  case 100:

/* Line 1455 of yacc.c  */
#line 893 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 900 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 907 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 914 "maine.def.yy"
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

  case 104:

/* Line 1455 of yacc.c  */
#line 929 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 936 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 943 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 950 "maine.def.yy"
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

  case 108:

/* Line 1455 of yacc.c  */
#line 964 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 971 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 978 "maine.def.yy"
    {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 988 "maine.def.yy"
    {;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 989 "maine.def.yy"
    {;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 990 "maine.def.yy"
    {;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 994 "maine.def.yy"
    {;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 998 "maine.def.yy"
    {
		stackString.push(yytext);
	;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1001 "maine.def.yy"
    {
		string quoteVal = stackString.top();
		stackString.pop();
		string strVal = yytext;
		stackString.pop();
		quoteVal += strVal;
		stackString.push(quoteVal);
	;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1009 "maine.def.yy"
    {
		string quoteVal = stackString.top();
		stackString.pop();
		quoteVal += "=";
		stackString.push(quoteVal);
	;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1015 "maine.def.yy"
    {
		string quoteVal = stackString.top();
		stackString.pop();
		quoteVal += " ";
		stackString.push(quoteVal);
	;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1024 "maine.def.yy"
    {
		dval = atof(yytext);
		stackDouble.push(dval);
	;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1031 "maine.def.yy"
    {
		ival = atoi(yytext);
		stackInt.push(ival);
	;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1038 "maine.def.yy"
    {
		stackString.push(yytext);
	;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1044 "maine.def.yy"
    {printf("#");;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1045 "maine.def.yy"
    {printf("*** %s\\\\ ***", yytext);;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1046 "maine.def.yy"
    {printf(" ");;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1050 "maine.def.yy"
    {;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1051 "maine.def.yy"
    {;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1055 "maine.def.yy"
    {;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1056 "maine.def.yy"
    {;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1057 "maine.def.yy"
    {;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1058 "maine.def.yy"
    {;}
    break;



/* Line 1455 of yacc.c  */
#line 3303 "maine.def.tab.cc"
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
#line 1060 "maine.def.yy"

/* <-- FUNCTIONS --> */
extern void yyerror(const char* msg){}
extern "C" int yywrap (void) { return 1; }

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
	return 0;
}
