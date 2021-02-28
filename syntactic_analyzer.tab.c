/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 3 "syntactic_analyzer.y"


#include<stdio.h>
#include<stdlib.h>
#include "symbols_table.h"



void yyerror();

/* Line 371 of yacc.c  */
#line 79 "syntactic_analyzer.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "syntactic_analyzer.tab.h".  */
#ifndef YY_YY_SYNTACTIC_ANALYZER_TAB_H_INCLUDED
# define YY_YY_SYNTACTIC_ANALYZER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TYPEDEF = 258,
     CHAR = 259,
     INT = 260,
     FLOAT = 261,
     CONST = 262,
     CLASS = 263,
     PRIVATE = 264,
     PROTECTED = 265,
     PUBLIC = 266,
     VOID = 267,
     MAIN = 268,
     STATIC = 269,
     CONTINUE = 270,
     BREAK = 271,
     THIS = 272,
     IF = 273,
     ELSE = 274,
     WHILE = 275,
     FOR = 276,
     RETURN = 277,
     CIN = 278,
     COUT = 279,
     LPAREN = 280,
     RPAREN = 281,
     SEMI = 282,
     DOT = 283,
     COMMA = 284,
     ASSIGN = 285,
     COLON = 286,
     LBRACK = 287,
     RBRACK = 288,
     LBRACE = 289,
     RBRACE = 290,
     INP = 291,
     OUT = 292,
     METH = 293,
     ID = 294,
     ICONST = 295,
     FCONST = 296,
     CCONST = 297,
     STRING = 298,
     OROP = 299,
     ANDOP = 300,
     EQUOP = 301,
     RELOP = 302,
     ADDOP = 303,
     MULOP = 304,
     NOTOP = 305,
     INCDEC = 306,
     SIZEOP = 307,
     REFER = 308,
     SIGNOP = 309,
     NO_ELSE = 310
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 14 "syntactic_analyzer.y"

    
    char id[100];
	int iconst;
	double fconst;
	char cconst;
	char string[100];
    int line;


/* Line 387 of yacc.c  */
#line 188 "syntactic_analyzer.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_SYNTACTIC_ANALYZER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 216 "syntactic_analyzer.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   572

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  164
/* YYNRULES -- Number of states.  */
#define YYNSTATES  308

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    10,    12,    14,    16,    18,
      20,    26,    28,    30,    32,    34,    36,    38,    41,    42,
      46,    49,    54,    58,    60,    65,    67,    71,    73,    77,
      81,    85,    89,    93,    97,   100,   103,   106,   109,   112,
     114,   119,   121,   125,   129,   133,   137,   142,   146,   149,
     151,   155,   157,   161,   165,   167,   169,   170,   172,   174,
     176,   180,   182,   187,   192,   195,   196,   200,   203,   206,
     209,   212,   215,   218,   221,   222,   224,   226,   228,   232,
     236,   240,   242,   245,   247,   250,   253,   258,   261,   266,
     269,   271,   273,   277,   281,   285,   289,   291,   294,   297,
     298,   300,   302,   307,   312,   317,   322,   327,   331,   334,
     339,   342,   344,   347,   351,   354,   356,   358,   359,   365,
     370,   372,   373,   376,   378,   380,   382,   384,   386,   388,
     390,   392,   395,   398,   400,   403,   406,   409,   412,   419,
     422,   426,   427,   433,   438,   444,   454,   458,   463,   473,
     475,   476,   482,   487,   492,   496,   498,   500,   504,   506,
     508,   510,   514,   522,   527
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    58,   123,    -1,    58,    59,    -1,    -1,
      60,    -1,    65,    -1,    76,    -1,    93,    -1,    97,    -1,
       3,    61,    39,    63,    27,    -1,    62,    -1,    39,    -1,
       4,    -1,     5,    -1,     6,    -1,    12,    -1,    63,    64,
      -1,    -1,    32,    40,    33,    -1,    32,    33,    -1,     7,
      61,    66,    27,    -1,    66,    29,    67,    -1,    67,    -1,
      39,    63,    30,    68,    -1,    69,    -1,    34,    75,    35,
      -1,    43,    -1,    69,    44,    69,    -1,    69,    45,    69,
      -1,    69,    46,    69,    -1,    69,    47,    69,    -1,    69,
      48,    69,    -1,    69,    49,    69,    -1,    50,    69,    -1,
      48,    69,    -1,    52,    69,    -1,    51,    70,    -1,    70,
      51,    -1,    70,    -1,    70,    25,    73,    26,    -1,    74,
      -1,    25,    71,    26,    -1,    25,    62,    26,    -1,    50,
       1,    39,    -1,    50,     1,    49,    -1,    70,    32,    71,
      33,    -1,    70,    28,    39,    -1,   107,    39,    -1,    17,
      -1,    71,    29,    71,    -1,    72,    -1,    70,    30,    72,
      -1,    70,    30,    43,    -1,    69,    -1,    71,    -1,    -1,
      42,    -1,    40,    -1,    41,    -1,    75,    29,    68,    -1,
      68,    -1,     8,    39,    77,    27,    -1,    78,    34,    79,
      35,    -1,    31,    39,    -1,    -1,    79,    80,    81,    -1,
      80,    81,    -1,     9,    31,    -1,    10,    31,    -1,    11,
      31,    -1,     9,     1,    -1,    10,     1,    -1,    11,     1,
      -1,    -1,    82,    -1,    86,    -1,    83,    -1,    61,    84,
      27,    -1,    61,     1,    27,    -1,    84,    29,    85,    -1,
      85,    -1,    39,    63,    -1,    87,    -1,    88,    27,    -1,
      92,    27,    -1,    89,    25,    90,    26,    -1,    61,    39,
      -1,    90,    29,    61,    91,    -1,    61,    91,    -1,    63,
      -1,    53,    -1,    89,    25,    26,    -1,    61,    94,    27,
      -1,    61,    94,     1,    -1,    94,    29,    95,    -1,    95,
      -1,    85,    96,    -1,    30,    68,    -1,    -1,    87,    -1,
      98,    -1,    99,    34,   105,    35,    -1,   104,    34,   105,
      35,    -1,    92,    34,   105,    35,    -1,   100,    25,   102,
      26,    -1,    89,    25,   102,    26,    -1,    61,   101,    39,
      -1,    39,    38,    -1,   102,    29,    61,   103,    -1,    61,
     103,    -1,    85,    -1,    53,    39,    -1,   100,    25,    26,
      -1,   106,   108,    -1,   106,    -1,   108,    -1,    -1,   106,
     107,    61,    84,    27,    -1,   107,    61,    84,    27,    -1,
      14,    -1,    -1,   108,   109,    -1,   109,    -1,   110,    -1,
     111,    -1,   113,    -1,   114,    -1,   116,    -1,   117,    -1,
     122,    -1,    15,    27,    -1,    16,    27,    -1,    27,    -1,
      15,     1,    -1,    16,     1,    -1,    71,    27,    -1,    71,
       1,    -1,    18,    25,    71,    26,   109,   112,    -1,    19,
     109,    -1,    19,     1,    31,    -1,    -1,    20,    25,    71,
      26,   109,    -1,    20,    25,     1,    27,    -1,    20,    25,
      71,     1,    27,    -1,    21,    25,   115,    27,   115,    27,
     115,    26,   109,    -1,    21,     1,    26,    -1,    21,    25,
       1,    25,    -1,    21,    25,   115,    27,   115,    27,   115,
       1,    27,    -1,    71,    -1,    -1,    22,   115,    27,    22,
       1,    -1,    23,    36,   118,    27,    -1,    24,    37,   120,
      27,    -1,   118,    36,   119,    -1,   119,    -1,    70,    -1,
     120,    37,   121,    -1,   121,    -1,    71,    -1,    43,    -1,
      34,   105,    35,    -1,   124,    34,   105,    35,   124,     1,
      35,    -1,     5,    13,    25,    26,    -1,     5,    13,     1,
      26,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    91,    91,    96,    97,   102,   103,   104,   105,   106,
     111,   117,   118,   124,   125,   126,   127,   132,   133,   138,
     139,   143,   148,   149,   153,   159,   160,   161,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   188,   189,   190,   191,
     196,   197,   201,   202,   203,   208,   209,   214,   215,   216,
     220,   221,   225,   230,   235,   236,   240,   241,   246,   247,
     248,   249,   250,   251,   252,   257,   258,   264,   270,   271,
     276,   277,   282,   287,   293,   294,   300,   305,   311,   312,
     317,   318,   323,   329,   330,   336,   337,   342,   346,   347,
     351,   352,   357,   358,   359,   364,   365,   369,   374,   379,
     380,   385,   386,   390,   395,   396,   397,   398,   403,   404,
     409,   410,   415,   416,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   436,   437,   443,   447,
     448,   449,   454,   455,   456,   461,   462,   463,   464,   469,
     470,   475,   481,   482,   487,   488,   492,   497,   498,   503,
     504,   510,   515,   520,   521
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TYPEDEF", "CHAR", "INT", "FLOAT",
  "CONST", "CLASS", "PRIVATE", "PROTECTED", "PUBLIC", "VOID", "MAIN",
  "STATIC", "CONTINUE", "BREAK", "THIS", "IF", "ELSE", "WHILE", "FOR",
  "RETURN", "CIN", "COUT", "LPAREN", "RPAREN", "SEMI", "DOT", "COMMA",
  "ASSIGN", "COLON", "LBRACK", "RBRACK", "LBRACE", "RBRACE", "INP", "OUT",
  "METH", "ID", "ICONST", "FCONST", "CCONST", "STRING", "OROP", "ANDOP",
  "EQUOP", "RELOP", "ADDOP", "MULOP", "NOTOP", "INCDEC", "SIZEOP", "REFER",
  "SIGNOP", "NO_ELSE", "$accept", "program", "global_declarations",
  "global_declaration", "typedef_declaration", "typename", "standard_type",
  "dims", "dim", "const_declaration", "constdefs", "constdef",
  "init_value", "expression", "variable", "general_expression",
  "assignment", "expression_list", "constant", "init_values",
  "class_declaration", "class_body", "parent", "members_methods", "access",
  "member_or_method", "member", "var_declaration", "variabledefs",
  "variabledef", "method", "short_func_declaration",
  "short_par_func_header", "func_header_start", "parameter_type_list",
  "pass_dims", "nopar_func_header", "global_var_declaration",
  "init_variabledefs", "init_variabledef", "initializer",
  "func_declaration", "full_func_declaration", "full_par_func_header",
  "class_func_header_start", "func_class", "parameter_list",
  "pass_variabledef", "nopar_class_func_header", "decl_statements",
  "declarations", "decltype", "statements", "statement",
  "expression_statement", "if_statement", "if_tail", "while_statement",
  "for_statement", "optexpr", "return_statement", "io_statement",
  "in_list", "in_item", "out_list", "out_item", "comp_statement",
  "main_function", "main_header", YY_NULL
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    58,    59,    59,    59,    59,    59,
      60,    61,    61,    62,    62,    62,    62,    63,    63,    64,
      64,    65,    66,    66,    67,    68,    68,    68,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    70,
      71,    71,    72,    72,    72,    73,    73,    74,    74,    74,
      75,    75,    76,    77,    78,    78,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    81,    81,    82,    83,    83,
      84,    84,    85,    86,    87,    87,    88,    89,    90,    90,
      91,    91,    92,    93,    93,    94,    94,    95,    96,    96,
      97,    97,    98,    98,    98,    99,    99,   100,   101,   102,
     102,   103,   103,   104,   105,   105,   105,   105,   106,   106,
     107,   107,   108,   108,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   110,   110,   111,   112,
     112,   112,   113,   113,   113,   114,   114,   114,   114,   115,
     115,   116,   117,   117,   118,   118,   119,   120,   120,   121,
     121,   122,   123,   124,   124
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     1,     1,     1,     1,
       5,     1,     1,     1,     1,     1,     1,     2,     0,     3,
       2,     4,     3,     1,     4,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     1,
       4,     1,     3,     3,     3,     3,     4,     3,     2,     1,
       3,     1,     3,     3,     1,     1,     0,     1,     1,     1,
       3,     1,     4,     4,     2,     0,     3,     2,     2,     2,
       2,     2,     2,     2,     0,     1,     1,     1,     3,     3,
       3,     1,     2,     1,     2,     2,     4,     2,     4,     2,
       1,     1,     3,     3,     3,     3,     1,     2,     2,     0,
       1,     1,     4,     4,     4,     4,     4,     3,     2,     4,
       2,     1,     2,     3,     2,     1,     1,     0,     5,     4,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     2,     2,     2,     2,     6,     2,
       3,     0,     5,     4,     5,     9,     3,     4,     9,     1,
       0,     5,     4,     4,     3,     1,     1,     3,     1,     1,
       1,     3,     7,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,    13,    14,    15,     0,     0,
      16,    12,     3,     5,     0,    11,     6,     7,   100,     0,
       0,     0,     8,     9,   101,     0,     0,     0,     2,     0,
      14,     0,     0,     0,    65,    18,    99,     0,    96,     0,
      84,     0,    85,   121,   121,     0,   121,   121,    18,     0,
       0,    18,     0,    23,     0,     0,     0,   108,    82,   121,
      97,    94,    93,     0,   107,    92,    18,     0,     0,   120,
       0,     0,    49,     0,     0,     0,   121,     0,     0,   121,
     133,   121,    58,    59,    57,   121,     0,   121,   121,    54,
      39,     0,    51,    41,     0,   121,     0,   116,   123,   124,
     125,   126,   127,   128,   129,   130,     0,   113,     0,     0,
       0,     0,     0,   164,   163,     0,    21,     0,    64,    62,
      74,     0,    17,   121,    27,    98,    25,    39,     0,    18,
      95,    91,    90,   111,    89,   110,    86,     0,   106,     0,
     134,   131,   135,   132,   121,     0,     0,     0,   149,     0,
     121,   121,     0,     0,     0,    35,     0,    34,    37,    36,
     121,   121,   121,   121,   121,   121,    56,     0,   121,   121,
      38,   137,   136,   121,   104,     0,   114,    48,     0,   122,
     102,     0,   105,   103,     0,    10,   121,    22,     0,     0,
       0,    74,     0,    20,     0,    61,     0,    48,   112,    18,
       0,     0,     0,     0,   146,     0,     0,     0,   156,     0,
     155,   160,   159,     0,   158,    43,    42,   161,    44,    45,
      28,    29,    30,    31,    32,    33,    55,     0,    47,    53,
      52,     0,    50,     0,     0,    81,     0,     0,    24,    71,
      68,    72,    69,    73,    70,    63,     0,     0,    67,    75,
      77,    76,    83,     0,     0,    19,   121,    26,    91,    88,
     109,   121,   143,     0,   121,   147,   121,     0,   152,   121,
     153,   121,    40,    46,     0,   119,     0,     0,    66,     0,
      18,     0,     0,    60,   141,   144,   142,     0,   151,   154,
     157,   118,    80,   162,    79,    78,    18,     0,   138,   150,
       0,   139,     0,   140,     0,   121,   148,   145
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    12,    13,   247,    15,    58,   122,    16,
      52,    53,   125,    89,    90,    91,    92,   227,    93,   196,
      17,    55,    56,   191,   192,   248,   249,   250,   234,   133,
     251,   252,    19,   253,    67,   134,   254,    22,    37,    38,
      60,    23,    24,    25,    26,    39,    68,   135,    27,    94,
      95,   128,    97,    98,    99,   100,   298,   101,   102,   149,
     103,   104,   209,   210,   213,   214,   105,    28,    29
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -139
static const yytype_int16 yypact[] =
{
    -139,   106,   185,  -139,    66,  -139,   137,  -139,    66,   112,
    -139,  -139,  -139,  -139,   124,  -139,  -139,  -139,  -139,   142,
     156,   114,  -139,  -139,  -139,   160,   177,   175,  -139,   179,
    -139,   184,    83,   215,   201,   102,   229,    15,  -139,   240,
    -139,   127,  -139,   345,   345,   200,   345,   345,  -139,   255,
     256,  -139,   192,  -139,   248,   204,   259,  -139,   257,   481,
    -139,  -139,  -139,   251,  -139,  -139,   -27,   170,   172,  -139,
      92,   144,  -139,   272,   273,    84,   292,   264,   265,   306,
    -139,   345,  -139,  -139,  -139,    16,   244,   193,    16,   329,
     205,   129,  -139,  -139,   268,   384,    95,   423,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,   270,  -139,   -24,   188,
     286,   310,   132,  -139,  -139,    56,  -139,   215,  -139,  -139,
     319,   139,  -139,   481,  -139,  -139,   329,   276,   313,  -139,
    -139,   314,   257,  -139,  -139,  -139,  -139,    66,  -139,    66,
    -139,  -139,  -139,  -139,    16,   274,   281,   135,   312,   328,
     193,    11,   338,   189,   336,   332,   -15,  -139,   150,  -139,
      16,    16,    16,    16,    16,    16,   502,   343,   520,    16,
    -139,  -139,  -139,    16,  -139,    95,   423,   344,   251,  -139,
    -139,   314,  -139,  -139,   379,  -139,   481,  -139,    48,    59,
      80,   133,    66,  -139,   355,  -139,    68,  -139,  -139,   337,
     -24,   196,   362,   128,  -139,   366,   365,   372,   150,    60,
    -139,  -139,   312,   -14,  -139,  -139,  -139,  -139,  -139,  -139,
     290,   224,   302,   -17,   332,  -139,   312,   377,  -139,  -139,
    -139,   151,  -139,   251,   209,  -139,   137,   409,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,    66,    26,  -139,  -139,
    -139,  -139,  -139,   387,   386,  -139,   481,  -139,  -139,  -139,
    -139,   462,  -139,   388,   462,  -139,   292,   413,  -139,   193,
    -139,    11,  -139,  -139,   228,  -139,   251,   381,  -139,   390,
     395,   235,   127,  -139,   402,  -139,  -139,   396,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,   337,   226,  -139,   502,
     391,  -139,     9,  -139,   400,   462,  -139,  -139
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,  -139,  -139,  -139,    -2,   349,   -44,  -139,  -139,
    -139,   316,  -109,   -48,   -40,   -71,   261,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,   239,   203,  -139,  -139,  -129,   -13,
    -139,   429,  -139,   440,  -139,   252,   450,  -139,  -139,   392,
    -139,  -139,  -139,  -139,  -139,  -139,   408,   254,  -139,    45,
    -139,   -26,   361,   -94,  -139,  -139,  -139,  -139,  -139,  -138,
    -139,  -139,  -139,   190,  -139,   187,  -139,  -139,   277
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -151
static const yytype_int16 yytable[] =
{
      14,    36,    31,   179,   112,   148,    33,   115,   153,   206,
     304,   126,   129,   270,   195,   129,    61,    96,    96,   127,
      96,    96,   132,   271,   218,    69,   131,   279,    72,   181,
      69,   164,   165,    72,   219,   305,    79,   155,   157,    66,
     159,    79,    62,   108,    63,   127,   127,   158,   127,   239,
      36,    82,    83,    84,   211,    96,    82,    83,    84,    85,
     241,    86,    87,    88,    85,   280,    86,    87,    88,   175,
       5,    30,     7,   201,   203,   126,   148,   238,    10,   240,
     212,   243,   179,   127,    49,   146,   186,   268,   121,   106,
     242,   110,   111,   140,   178,   226,   269,   256,   231,     5,
      30,     7,   232,   257,   274,    11,     3,    10,    50,   147,
     208,   244,   220,   221,   222,   223,   224,   225,   281,   141,
     127,   127,   127,   127,   127,   127,   154,   -87,   287,   263,
     171,     5,    30,     7,   177,   199,   205,   200,   126,    10,
      57,    42,   188,   189,   190,   142,   127,   283,    43,    69,
      32,    34,    72,    65,   264,   132,   172,   173,   173,   185,
      79,   302,  -150,    35,   121,   235,    11,   284,   245,    40,
     286,   143,   193,   233,  -121,    82,    83,    84,   167,   194,
     173,    41,   169,    85,   273,    86,    87,    88,     4,     5,
       6,     7,     8,     9,    44,   148,   136,    10,   138,   137,
     212,   139,    45,   301,     5,    30,     7,    69,   126,    46,
      72,   307,    10,    47,   182,   216,   127,   139,   173,   116,
     235,   117,   261,    48,    11,   173,   107,   300,   148,   208,
     166,   119,    54,   167,   235,   168,   275,   169,   276,    11,
      69,    70,    71,    72,    73,   156,    74,    75,    76,    77,
      78,    79,   132,    80,    51,   291,   170,   276,    69,    59,
      81,    72,   295,   292,   276,  -121,    82,    83,    84,    79,
     162,   163,   164,   165,    85,   202,    86,    87,    88,    64,
     296,   113,   114,  -121,    82,    83,    84,   118,    69,   121,
     129,    72,    85,   120,    86,    87,    88,   144,   145,    79,
     150,   166,   151,   174,   167,   180,    69,   204,   169,    72,
       5,    30,     7,  -121,    82,    83,    84,    79,    10,  -150,
      69,   183,    85,    72,    86,    87,    88,   170,   188,   189,
     190,    79,    82,    83,    84,   161,   162,   163,   164,   165,
      85,   173,    86,    87,    88,   184,    82,    83,    84,   163,
     164,   165,   197,   198,    85,   207,    86,    87,    88,    69,
      70,    71,    72,    73,   215,    74,    75,    76,    77,    78,
      79,   217,    80,   160,   161,   162,   163,   164,   165,    81,
    -117,   165,   228,   -12,   236,    82,    83,    84,   255,   262,
     258,   265,   266,    85,   267,    86,    87,    88,    69,    70,
      71,    72,    73,   272,    74,    75,    76,    77,    78,    79,
     277,    80,   282,    42,   288,   285,   293,   294,    81,  -115,
     -87,   297,   303,   299,    82,    83,    84,   306,   152,   230,
     246,    18,    85,   187,    86,    87,    88,    69,    70,    71,
      72,    73,    20,    74,    75,    76,    77,    78,    79,   278,
      80,   259,    21,   109,   260,   130,   176,    81,   290,   289,
       0,   237,  -121,    82,    83,    84,     0,     0,     0,     0,
       0,    85,     0,    86,    87,    88,    69,    70,    71,    72,
      73,     0,    74,    75,    76,    77,    78,    79,     0,    80,
       0,     0,     0,     0,     0,    69,    81,     0,    72,     0,
       0,     0,    82,    83,    84,     0,    79,     0,     0,     0,
      85,     0,    86,    87,    88,   123,    69,     0,     0,    72,
       0,    82,    83,    84,   124,     0,     0,    79,     0,    85,
       0,    86,    87,    88,    69,     0,     0,    72,     0,     0,
       0,  -121,    82,    83,    84,    79,     0,     0,     0,     0,
      85,     0,    86,    87,    88,     0,     0,     0,     0,     0,
      82,    83,    84,   229,     0,     0,     0,     0,    85,     0,
      86,    87,    88
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-139)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       2,    14,     4,    97,    48,    76,     8,    51,    79,   147,
       1,    59,    39,    27,   123,    39,     1,    43,    44,    59,
      46,    47,    66,    37,    39,    14,    53,     1,    17,    53,
      14,    48,    49,    17,    49,    26,    25,    85,    86,    41,
      88,    25,    27,    45,    29,    85,    86,    87,    88,     1,
      63,    40,    41,    42,    43,    81,    40,    41,    42,    48,
       1,    50,    51,    52,    48,    39,    50,    51,    52,    95,
       4,     5,     6,   144,   145,   123,   147,   186,    12,    31,
     151,     1,   176,   123,     1,     1,    30,    27,    32,    44,
      31,    46,    47,     1,    96,   166,    36,    29,   169,     4,
       5,     6,   173,    35,   233,    39,     0,    12,    25,    25,
     150,    31,   160,   161,   162,   163,   164,   165,   247,    27,
     160,   161,   162,   163,   164,   165,    81,    25,   266,     1,
       1,     4,     5,     6,    39,   137,     1,   139,   186,    12,
      38,    27,     9,    10,    11,     1,   186,   256,    34,    14,
      13,    39,    17,    26,    26,   199,    27,    29,    29,    27,
      25,   299,    27,    39,    32,   178,    39,   261,    35,    27,
     264,    27,    33,   175,    39,    40,    41,    42,    28,    40,
      29,    25,    32,    48,    33,    50,    51,    52,     3,     4,
       5,     6,     7,     8,    34,   266,    26,    12,    26,    29,
     271,    29,    25,   297,     4,     5,     6,    14,   256,    34,
      17,   305,    12,    34,    26,    26,   256,    29,    29,    27,
     233,    29,    26,    39,    39,    29,    26,     1,   299,   269,
      25,    27,    31,    28,   247,    30,    27,    32,    29,    39,
      14,    15,    16,    17,    18,     1,    20,    21,    22,    23,
      24,    25,   296,    27,    39,    27,    51,    29,    14,    30,
      34,    17,    27,   276,    29,    39,    40,    41,    42,    25,
      46,    47,    48,    49,    48,     1,    50,    51,    52,    39,
     282,    26,    26,    39,    40,    41,    42,    39,    14,    32,
      39,    17,    48,    34,    50,    51,    52,    25,    25,    25,
      36,    25,    37,    35,    28,    35,    14,    26,    32,    17,
       4,     5,     6,    39,    40,    41,    42,    25,    12,    27,
      14,    35,    48,    17,    50,    51,    52,    51,     9,    10,
      11,    25,    40,    41,    42,    45,    46,    47,    48,    49,
      48,    29,    50,    51,    52,    35,    40,    41,    42,    47,
      48,    49,    39,    39,    48,    27,    50,    51,    52,    14,
      15,    16,    17,    18,    26,    20,    21,    22,    23,    24,
      25,    35,    27,    44,    45,    46,    47,    48,    49,    34,
      35,    49,    39,    39,     5,    40,    41,    42,    33,    27,
      53,    25,    27,    48,    22,    50,    51,    52,    14,    15,
      16,    17,    18,    26,    20,    21,    22,    23,    24,    25,
       1,    27,    25,    27,     1,    27,    35,    27,    34,    35,
      25,    19,    31,    27,    40,    41,    42,    27,    79,   168,
     191,     2,    48,   117,    50,    51,    52,    14,    15,    16,
      17,    18,     2,    20,    21,    22,    23,    24,    25,   246,
      27,   199,     2,    45,   200,    63,    95,    34,   271,   269,
      -1,   184,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    14,    34,    -1,    17,    -1,
      -1,    -1,    40,    41,    42,    -1,    25,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    34,    14,    -1,    -1,    17,
      -1,    40,    41,    42,    43,    -1,    -1,    25,    -1,    48,
      -1,    50,    51,    52,    14,    -1,    -1,    17,    -1,    -1,
      -1,    39,    40,    41,    42,    25,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    58,     0,     3,     4,     5,     6,     7,     8,
      12,    39,    59,    60,    61,    62,    65,    76,    87,    88,
      89,    92,    93,    97,    98,    99,   100,   104,   123,   124,
       5,    61,    13,    61,    39,    39,    85,    94,    95,   101,
      27,    25,    27,    34,    34,    25,    34,    34,    39,     1,
      25,    39,    66,    67,    31,    77,    78,    38,    63,    30,
      96,     1,    27,    29,    39,    26,    61,    90,   102,    14,
      15,    16,    17,    18,    20,    21,    22,    23,    24,    25,
      27,    34,    40,    41,    42,    48,    50,    51,    52,    69,
      70,    71,    72,    74,   105,   106,   107,   108,   109,   110,
     111,   113,   114,   116,   117,   122,   105,    26,    61,   102,
     105,   105,    63,    26,    26,    63,    27,    29,    39,    27,
      34,    32,    64,    34,    43,    68,    69,    70,   107,    39,
      95,    53,    63,    85,    91,   103,    26,    29,    26,    29,
       1,    27,     1,    27,    25,    25,     1,    25,    71,   115,
      36,    37,    62,    71,   105,    69,     1,    69,    70,    69,
      44,    45,    46,    47,    48,    49,    25,    28,    30,    32,
      51,     1,    27,    29,    35,   107,   108,    39,    61,   109,
      35,    53,    26,    35,    35,    27,    30,    67,     9,    10,
      11,    79,    80,    33,    40,    68,    75,    39,    39,    61,
      61,    71,     1,    71,    26,     1,   115,    27,    70,   118,
     119,    43,    71,   120,   121,    26,    26,    35,    39,    49,
      69,    69,    69,    69,    69,    69,    71,    73,    39,    43,
      72,    71,    71,    61,    84,    85,     5,   124,    68,     1,
      31,     1,    31,     1,    31,    35,    80,    61,    81,    82,
      83,    86,    87,    89,    92,    33,    29,    35,    53,    91,
     103,    26,    27,     1,    26,    25,    27,    22,    27,    36,
      27,    37,    26,    33,    84,    27,    29,     1,    81,     1,
      39,    84,    25,    68,   109,    27,   109,   115,     1,   119,
     121,    27,    85,    35,    27,    27,    61,    19,   112,    27,
       1,   109,   115,    31,     1,    26,    27,   109
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      //yychar = YYLEX;
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 44:
/* Line 1787 of yacc.c  */
#line 182 "syntactic_analyzer.y"
    { printf("expression error in line %d\n", yylval.line); yyerror("error"); yyerrok; }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 183 "syntactic_analyzer.y"
    { printf("expression error in line %d\n", yylval.line); yyerror("error"); yyerrok; }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 249 "syntactic_analyzer.y"
    {printf("access error, missing colon in line %d\n", yylval.line); yyerror("error"); yyerrok; }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 250 "syntactic_analyzer.y"
    {printf("access error, missing colon in line %d\n", yylval.line); yyerror("error"); yyerrok; }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 251 "syntactic_analyzer.y"
    {printf("access error, missing colong in line %d\n", yylval.line); yyerror("error"); yyerrok; }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 271 "syntactic_analyzer.y"
    {printf("var_declaration, missing variable name in line %d\n", yylval.line); yyerror("error"); yyerrok; }
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 330 "syntactic_analyzer.y"
    {printf("global_var_declaration error, missing semi in line %d\n", yylval.line); yyerror("error"); yyerrok; }
    break;

  case 134:
/* Line 1787 of yacc.c  */
#line 430 "syntactic_analyzer.y"
    {printf("statement error, missing semi in line %d\n", yylval.line); yyerror("error"); yyerrok; }
    break;

  case 135:
/* Line 1787 of yacc.c  */
#line 431 "syntactic_analyzer.y"
    {printf("statement error, missing semi in line %d\n", yylval.line); yyerror("error"); yyerrok; }
    break;

  case 137:
/* Line 1787 of yacc.c  */
#line 437 "syntactic_analyzer.y"
    {printf("general_expression error, missing semi in line %d\n", yylval.line); yyerror("error"); yyerrok; }
    break;

  case 140:
/* Line 1787 of yacc.c  */
#line 448 "syntactic_analyzer.y"
    {printf("if_tail error in line %d\n", yylval.line); yyerror("error"); yyerrok; }
    break;

  case 143:
/* Line 1787 of yacc.c  */
#line 455 "syntactic_analyzer.y"
    {printf("while_statement error in line %d\n", yylval.line); yyerror("error"); yyerrok; }
    break;

  case 144:
/* Line 1787 of yacc.c  */
#line 456 "syntactic_analyzer.y"
    {printf("while_statement error in line %d\n", yylval.line); yyerror("error"); yyerrok; }
    break;

  case 146:
/* Line 1787 of yacc.c  */
#line 462 "syntactic_analyzer.y"
    {printf("for_statement error in line %d\n", yylval.line); yyerror("error"); yyerrok; }
    break;

  case 147:
/* Line 1787 of yacc.c  */
#line 463 "syntactic_analyzer.y"
    {printf("for_statement error in line %d\n", yylval.line); yyerror("error"); yyerrok; }
    break;

  case 148:
/* Line 1787 of yacc.c  */
#line 464 "syntactic_analyzer.y"
    {printf("for_statement error in line %d\n", yylval.line); yyerror("error"); yyerrok; }
    break;

  case 151:
/* Line 1787 of yacc.c  */
#line 476 "syntactic_analyzer.y"
    {printf("return_statement error missing semi, in line %d\n", yylval.line); yyerror("error"); yyerrok; }
    break;

  case 162:
/* Line 1787 of yacc.c  */
#line 516 "syntactic_analyzer.y"
    {printf("main_function error in line %d\n", yylval.line); yyerror("error"); yyerrok;}
    break;

  case 164:
/* Line 1787 of yacc.c  */
#line 521 "syntactic_analyzer.y"
    {printf("main_header error in line %d\n", yylval.line); yyerror("error"); yyerrok; }
    break;


/* Line 1787 of yacc.c  */
#line 1873 "syntactic_analyzer.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2050 of yacc.c  */
#line 525 "syntactic_analyzer.y"

/*C PART */


int main(int argc, char *argv[]){
	
    
    
    init_ht();
    if(yyparse()==0){
        printf("Succesful\n");
    }
    else{
        printf("Unsuccesful\n");
    }
    
    print_ht();
}

void yyerror(const char *mes){
	
	fprintf(stderr," %s ", mes);
    int error=0;
    
	error++;
	if(error==5){
        printf("Abort\n");
        exit(1);
	}

}












