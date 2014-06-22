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
#line 1 "parse.y"

# include "project.h"

/* forward routines */
void yyerror (char *fmt, ...);
void errmsg (int lineno, char *fmt, ...);
void parseinit ();

static MODEWHICH varmode; /* global variable for var mode propagation */

/* Line 371 of yacc.c  */
#line 79 "parse.tab.c"

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parse.tab.h".  */
#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
     INT_ = 258,
     TEXT_ = 259,
     ID_ = 260,
     AND_ = 261,
     DIV_ = 262,
     DOWNTO_ = 263,
     GE_ = 264,
     LE_ = 265,
     MOD_ = 266,
     NE_ = 267,
     NOT_ = 268,
     OR_ = 269,
     TO_ = 270,
     ARRAY_ = 271,
     BEGIN_ = 272,
     CASE_ = 273,
     CONST_ = 274,
     DO_ = 275,
     ELSE_ = 276,
     END_ = 277,
     FOR_ = 278,
     FUNCTION_ = 279,
     IF_ = 280,
     NIL_ = 281,
     OF_ = 282,
     PROCEDURE_ = 283,
     PROGRAM_ = 284,
     RECORD_ = 285,
     REPEAT_ = 286,
     THEN_ = 287,
     TYPE_ = 288,
     UNTIL_ = 289,
     VAR_ = 290,
     WHILE_ = 291,
     COLON_EQ_ = 292,
     DOT_DOT_ = 293
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 15 "parse.y"

  int        ival;     /* INTEGER literals */
  TEXT      *tval;     /* string literals (points to text table entry) */
  IDENT     *id;       /* identifiers (points to identifier table entry) */
  PROGRAM   *prog_;
  BLOCK     *block_;
  DECLLIST  *decllist_;
  DECL      *decl_;
  EXPR      *expr_;
  TYPE      *type_;
  STMT      *stmt_;
  STMTLIST  *stmtlist_;
  MODEWHICH  mode_;
  FIELDLIST *fieldlist_;
  CASELIST  *caselist_;
  CASEARM   *casearm_;
  EXPRLIST  *exprlist_;
  BINDLIST  *bindlist_;


/* Line 387 of yacc.c  */
#line 181 "parse.tab.c"
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

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 209 "parse.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   316

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNRULES -- Number of states.  */
#define YYNSTATES  240

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    30,    18,    16,    26,    17,    22,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    27,    28,
      19,    21,    20,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    24,     2,    25,    23,     2,     2,     2,     2,     2,
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
      15,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    14,    15,    17,    20,    23,    26,
      29,    32,    35,    37,    39,    44,    47,    50,    52,    54,
      59,    62,    68,    72,    75,    77,    79,    81,    84,    86,
      88,    90,    92,    94,    96,   101,   105,   108,   111,   113,
     117,   121,   123,   127,   131,   133,   137,   142,   146,   148,
     149,   151,   154,   161,   162,   166,   170,   171,   175,   176,
     182,   186,   187,   190,   191,   193,   202,   203,   207,   209,
     211,   213,   215,   217,   219,   221,   223,   225,   231,   232,
     236,   240,   244,   247,   249,   252,   256,   258,   262,   264,
     266,   268,   270,   272,   274,   276,   279,   283,   285,   287,
     289,   291,   295,   297,   299,   301,   303,   305,   309,   313,
     316,   318,   320,   322,   326,   328,   332,   338,   339,   342,
     348,   351,   352,   354,   357,   361,   363,   365,   369,   374,
     379,   388,   390
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    44,     5,    28,    56,    22,    -1,    57,
      32,    98,    37,    -1,    -1,    58,    -1,    34,    59,    -1,
      50,    65,    -1,    48,    62,    -1,    76,    57,    -1,    84,
      57,    -1,    61,    60,    -1,    59,    -1,    57,    -1,     5,
      21,    67,    28,    -1,     1,    28,    -1,    64,    63,    -1,
      62,    -1,    57,    -1,     5,    21,    70,    28,    -1,     1,
      28,    -1,     5,    27,    70,    28,    66,    -1,     5,    26,
      65,    -1,     1,    28,    -1,    65,    -1,    57,    -1,    68,
      -1,    69,    68,    -1,     4,    -1,     3,    -1,     5,    -1,
      16,    -1,    17,    -1,    72,    -1,    31,    24,    72,    71,
      -1,    45,    74,    37,    -1,    45,    37,    -1,    23,     5,
      -1,     1,    -1,    25,    42,    70,    -1,    26,    72,    71,
      -1,     5,    -1,    67,    53,    67,    -1,    29,    73,    30,
      -1,     5,    -1,     5,    26,    73,    -1,     5,    27,    70,
      75,    -1,     5,    26,    74,    -1,     1,    -1,    -1,    28,
      -1,    28,    74,    -1,    43,     5,    77,    28,    56,    28,
      -1,    -1,    29,    78,    30,    -1,    29,     1,    30,    -1,
      -1,    83,    79,    80,    -1,    -1,     5,    27,     5,    81,
      82,    -1,     5,    26,    80,    -1,    -1,    28,    78,    -1,
      -1,    50,    -1,    39,     5,    77,    27,     5,    28,    56,
      28,    -1,    -1,    86,    52,    90,    -1,    97,    -1,    99,
      -1,   106,    -1,    86,    -1,   101,    -1,   107,    -1,   108,
      -1,     1,    -1,    88,    -1,     5,    29,    90,    87,    30,
      -1,    -1,    26,    90,    87,    -1,    89,    90,    25,    -1,
      88,    22,     5,    -1,    88,    23,    -1,     5,    -1,    88,
      24,    -1,    89,    90,    26,    -1,    92,    -1,    92,    91,
      92,    -1,    21,    -1,    12,    -1,    19,    -1,    10,    -1,
       9,    -1,    20,    -1,    94,    -1,    69,    94,    -1,    92,
      93,    94,    -1,    16,    -1,    17,    -1,    14,    -1,    96,
      -1,    94,    95,    96,    -1,    18,    -1,     7,    -1,    11,
      -1,     6,    -1,    86,    -1,    29,    90,    30,    -1,    29,
       1,    30,    -1,    13,    96,    -1,     3,    -1,     4,    -1,
      41,    -1,    32,    98,    37,    -1,    85,    -1,    85,    28,
      98,    -1,    40,    90,    47,    85,   100,    -1,    -1,    36,
      85,    -1,    33,    90,    42,   102,    37,    -1,   104,   103,
      -1,    -1,    28,    -1,    28,   102,    -1,   105,    27,    85,
      -1,     1,    -1,    67,    -1,    67,    26,   105,    -1,    51,
      90,    35,    85,    -1,    46,    98,    49,    90,    -1,    38,
       5,    52,    90,   109,    90,    35,    85,    -1,    15,    -1,
       8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    84,    84,    91,   106,   107,   111,   113,   115,   117,
     119,   124,   129,   130,   134,   136,   141,   146,   147,   151,
     153,   158,   168,   177,   182,   183,   187,   188,   190,   195,
     197,   202,   202,   212,   213,   215,   217,   219,   221,   226,
     228,   239,   241,   243,   248,   250,   260,   262,   264,   270,
     271,   273,   278,   289,   290,   292,   298,   297,   305,   304,
     308,   322,   323,   328,   329,   333,   344,   345,   347,   348,
     349,   350,   352,   353,   354,   355,   360,   361,   367,   368,
     373,   375,   377,   379,   384,   385,   390,   391,   396,   396,
     396,   396,   396,   396,   400,   401,   403,   408,   408,   408,
     412,   413,   418,   418,   418,   418,   422,   423,   425,   427,
     429,   431,   433,   438,   447,   453,   462,   472,   473,   478,
     488,   504,   505,   507,   517,   519,   524,   526,   531,   536,
     546,   557,   557
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT_", "TEXT_", "ID_", "AND_", "DIV_",
  "DOWNTO_", "GE_", "LE_", "MOD_", "NE_", "NOT_", "OR_", "TO_", "'+'",
  "'-'", "'*'", "'<'", "'>'", "'='", "'.'", "'^'", "'['", "']'", "','",
  "':'", "';'", "'('", "')'", "ARRAY_", "BEGIN_", "CASE_", "CONST_", "DO_",
  "ELSE_", "END_", "FOR_", "FUNCTION_", "IF_", "NIL_", "OF_", "PROCEDURE_",
  "PROGRAM_", "RECORD_", "REPEAT_", "THEN_", "TYPE_", "UNTIL_", "VAR_",
  "WHILE_", "COLON_EQ_", "DOT_DOT_", "$accept", "Program", "Block",
  "OptDefinitionParts", "DefinitionParts", "ConstantDefinitions",
  "OptConstantDefinitions", "ConstantDefinition", "TypeDefinitions",
  "OptTypeDefinitions", "TypeDefinition", "VariableDeclaration",
  "OptVariableDeclarations", "Constant", "UnsignedConstant", "Sign",
  "Type", "EltType", "SimpleType", "IdList", "FieldList", "OptFieldList",
  "ProcedureDeclaration", "OptFormalParameters", "ParameterGroup", "$@1",
  "Parameters", "@2", "OptParameterGroup", "OptVar", "FunctionDeclaration",
  "Statement", "Variable", "OptExprs", "LimitedVar", "SubVar",
  "Expression", "RelOp", "SimpleExpression", "AddOp", "Term", "MultOp",
  "Factor", "CompoundStatement", "Statements", "IfStatement", "OptElse",
  "CaseStatement", "CaseListElements", "OptCaseListElements",
  "CaseListElement", "CaseLabelList", "WhileStatement", "RepeatStatement",
  "ForStatement", "Direction", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    43,    45,    42,    60,
      62,    61,    46,    94,    91,    93,    44,    58,    59,    40,
      41,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    57,    57,    58,    58,    58,    58,
      58,    59,    60,    60,    61,    61,    62,    63,    63,    64,
      64,    65,    65,    65,    66,    66,    67,    67,    67,    68,
      68,    69,    69,    70,    70,    70,    70,    70,    70,    71,
      71,    72,    72,    72,    73,    73,    74,    74,    74,    75,
      75,    75,    76,    77,    77,    77,    79,    78,    81,    80,
      80,    82,    82,    83,    83,    84,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    86,    86,    87,    87,
      88,    88,    88,    88,    89,    89,    90,    90,    91,    91,
      91,    91,    91,    91,    92,    92,    92,    93,    93,    93,
      94,    94,    95,    95,    95,    95,    96,    96,    96,    96,
      96,    96,    96,    97,    98,    98,    99,   100,   100,   101,
     102,   103,   103,   103,   104,   104,   105,   105,   106,   107,
     108,   109,   109
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     0,     1,     2,     2,     2,     2,
       2,     2,     1,     1,     4,     2,     2,     1,     1,     4,
       2,     5,     3,     2,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     4,     3,     2,     2,     1,     3,
       3,     1,     3,     3,     1,     3,     4,     3,     1,     0,
       1,     2,     6,     0,     3,     3,     0,     3,     0,     5,
       3,     0,     2,     0,     1,     8,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     3,
       3,     3,     2,     1,     2,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     3,     3,     2,
       1,     1,     1,     3,     1,     3,     5,     0,     2,     5,
       2,     0,     1,     2,     3,     1,     1,     3,     4,     4,
       8,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     4,     0,     0,     0,     0,
       0,     0,     0,     5,     4,     4,     0,     0,     6,     0,
      53,    53,     0,     0,     8,     0,     0,     0,     7,     2,
       0,     9,    10,    15,     0,    13,    12,    11,     0,     0,
       0,    20,     0,    18,    17,    16,    23,     0,     0,    75,
      83,     0,     0,     0,     0,     0,     0,   114,    71,    76,
       0,    68,     0,    69,    72,    70,    73,    74,    29,    28,
      30,    31,    32,     0,    26,     0,     0,    64,     0,    56,
       0,     4,    38,    41,     0,     0,     0,     0,     0,     0,
      33,    22,     0,     0,     0,   110,   111,     0,     0,   112,
       0,   106,     0,    86,    94,   100,     0,     0,     0,     0,
       0,     0,     0,    82,    84,     0,     3,    14,    27,    55,
      54,     0,     0,     0,    37,    44,     0,     0,    48,     0,
      36,     0,     0,    19,     0,    78,   113,   109,     0,     0,
      95,     0,    92,    91,    89,    99,    97,    98,    90,    93,
      88,     0,     0,   105,   103,   104,   102,     0,     0,     0,
       0,     0,   115,    67,    81,    80,    85,     0,    57,     4,
      52,     0,    43,     0,     0,     0,    35,    42,    25,    24,
      21,     0,     0,   108,   107,   125,   126,     0,   121,     0,
      87,    96,   101,     0,   117,   129,   128,     0,     0,     0,
      45,     0,     0,    34,    47,    49,    78,    77,     0,   119,
       0,   120,     0,   132,   131,     0,     0,   116,    60,    58,
      65,     0,     0,     0,    46,    79,   127,   123,   124,     0,
     118,    61,    39,    40,    51,     0,    63,    59,   130,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    11,    12,    13,    18,    37,    19,    24,    45,
      25,    28,   180,    88,    74,   100,    89,   203,    90,   126,
     131,   224,    14,    39,    78,   121,   168,   231,   237,    79,
      15,    57,   101,   182,    59,    60,   102,   151,   103,   152,
     104,   157,   105,    61,    62,    63,   217,    64,   187,   211,
     188,   189,    65,    66,    67,   215
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -143
static const yytype_int16 yypact[] =
{
     -21,    33,    53,    62,  -143,     0,    82,    92,    99,    84,
      87,    88,    80,  -143,     0,     0,   100,   105,  -143,    36,
      86,    86,   104,   115,  -143,   161,   110,    94,  -143,  -143,
      23,  -143,  -143,  -143,   102,  -143,  -143,  -143,    26,   103,
     113,  -143,   220,  -143,  -143,  -143,  -143,    87,   220,  -143,
     114,    23,   213,   146,   213,   182,   213,   140,   118,   132,
     213,  -143,   130,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,   144,  -143,    61,   143,  -143,   151,  -143,
     169,     0,  -143,   138,   189,   191,   173,    25,   149,   171,
    -143,  -143,   178,   213,   170,  -143,  -143,    98,   255,  -143,
      98,  -143,   177,   291,    29,  -143,   175,   166,   183,   199,
     152,   213,   230,  -143,  -143,   109,  -143,  -143,  -143,  -143,
    -143,   233,   212,   216,  -143,   219,   217,   275,  -143,   120,
    -143,   211,   102,  -143,   207,   226,  -143,  -143,   223,   231,
      29,    41,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,   213,    98,  -143,  -143,  -143,  -143,    98,   213,   112,
     213,   112,  -143,  -143,  -143,  -143,  -143,   133,  -143,     0,
    -143,   191,  -143,   139,    90,   220,  -143,  -143,  -143,  -143,
    -143,   213,   232,  -143,  -143,  -143,   237,   227,   238,   240,
     108,    29,  -143,    44,   234,  -143,  -143,   233,   264,   246,
    -143,   239,   275,  -143,  -143,   254,   226,  -143,   102,  -143,
     272,  -143,    23,  -143,  -143,   213,   112,  -143,  -143,  -143,
    -143,   220,   139,    28,  -143,  -143,  -143,  -143,  -143,   248,
    -143,   257,  -143,  -143,  -143,   112,   236,  -143,  -143,  -143
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -143,  -143,   -76,   -11,  -143,   268,  -143,  -143,   265,  -143,
    -143,   -36,  -143,   -32,   218,   -33,   -42,    72,  -120,   124,
    -142,  -143,  -143,   276,    63,  -143,   101,  -143,  -143,  -143,
    -143,  -139,   -30,    96,  -143,  -143,   -44,  -143,   155,  -143,
     -81,  -143,   -79,  -143,   -38,  -143,  -143,  -143,   106,  -143,
    -143,   107,  -143,  -143,  -143,  -143
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -123
static const yytype_int16 yytable[] =
{
      58,    75,    73,    31,    32,   123,    92,   173,    35,    75,
     107,    91,   109,    94,    43,    75,   115,   108,   137,   140,
     194,    58,   196,     1,    49,    58,   128,    76,    50,   128,
     129,   -63,   204,   129,     6,   153,   154,    16,     3,     7,
     155,    17,   185,     8,    68,    69,    70,   156,     9,   135,
      10,   -66,   213,     4,   139,    51,    52,    71,    72,   214,
     -66,    53,   130,    54,    68,   -50,    70,   163,    -4,    55,
       6,   191,   162,   228,    56,     7,    77,   230,   192,     8,
      58,   234,   222,    16,     9,    22,    10,    17,    26,    23,
       5,   128,    27,   199,    75,   129,   238,    20,   179,    75,
     177,    95,    96,    50,    21,    68,    69,    70,    75,   186,
      29,    97,    30,    49,   193,    38,   195,    50,    71,    72,
      47,    48,   145,   178,   146,   147,    34,    98,    33,    58,
      80,    58,    41,   205,   165,   166,    42,   206,    46,    99,
     -66,    81,    75,    93,    51,    52,   174,   175,   -66,   -66,
      53,   106,    54,    49,   112,   113,   114,    50,    55,   197,
     198,   -66,    22,    56,   201,   202,    23,   116,   110,    75,
     111,   229,   117,   119,   122,    75,   186,    75,   186,   232,
     -66,   120,    58,    49,    51,    52,    58,    50,    75,   -66,
      53,   -30,    54,    -4,   124,     6,   125,   127,    55,   133,
       7,   -66,   132,    56,     8,    58,   134,   136,    26,     9,
     -66,    10,    27,   159,    51,    52,    95,    96,    50,   141,
      53,    82,    54,    68,    69,    83,    97,   158,    55,    71,
      72,   -66,   160,    56,   161,   164,    71,    72,   167,    -4,
     169,     6,    98,    84,   170,   171,     7,   172,   176,    85,
       8,    86,   181,   183,    99,     9,   138,    10,    95,    96,
      50,   184,   207,   208,   209,    87,   210,   212,    97,   219,
     216,    71,    72,   185,   220,    68,    69,    70,    68,    69,
      83,   221,   223,   235,    98,   236,    77,    36,    71,    72,
      44,    71,    72,   118,   233,   200,    99,    40,   218,   239,
     142,   143,   225,   144,    85,   145,   190,   146,   147,  -122,
     148,   149,   150,     0,     0,   226,   227
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-143)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      30,    34,    34,    14,    15,    81,    48,   127,    19,    42,
      54,    47,    56,    51,    25,    48,    60,    55,    97,   100,
     159,    51,   161,    44,     1,    55,     1,     1,     5,     1,
       5,     5,   174,     5,    34,     6,     7,     1,     5,    39,
      11,     5,     1,    43,     3,     4,     5,    18,    48,    93,
      50,    28,     8,     0,    98,    32,    33,    16,    17,    15,
      37,    38,    37,    40,     3,    37,     5,   111,    32,    46,
      34,   152,   110,   212,    51,    39,    50,   216,   157,    43,
     110,   223,   202,     1,    48,     1,    50,     5,     1,     5,
      28,     1,     5,   169,   127,     5,   235,     5,   134,   132,
     132,     3,     4,     5,     5,     3,     4,     5,   141,   141,
      22,    13,    32,     1,   158,    29,   160,     5,    16,    17,
      26,    27,    14,   134,    16,    17,    21,    29,    28,   159,
      27,   161,    28,   175,    25,    26,    21,   181,    28,    41,
      28,    28,   175,    29,    32,    33,    26,    27,    36,    37,
      38,     5,    40,     1,    22,    23,    24,     5,    46,    26,
      27,    49,     1,    51,    25,    26,     5,    37,    28,   202,
      52,   215,    28,    30,     5,   208,   208,   210,   210,   221,
      28,    30,   212,     1,    32,    33,   216,     5,   221,    37,
      38,    53,    40,    32,     5,    34,     5,    24,    46,    28,
      39,    49,    53,    51,    43,   235,    28,    37,     1,    48,
      28,    50,     5,    47,    32,    33,     3,     4,     5,    42,
      38,     1,    40,     3,     4,     5,    13,    52,    46,    16,
      17,    49,    49,    51,    35,     5,    16,    17,     5,    32,
      28,    34,    29,    23,    28,    26,    39,    30,    37,    29,
      43,    31,    26,    30,    41,    48,     1,    50,     3,     4,
       5,    30,    30,    26,    37,    45,    28,    27,    13,     5,
      36,    16,    17,     1,    28,     3,     4,     5,     3,     4,
       5,    42,    28,    35,    29,    28,    50,    19,    16,    17,
      25,    16,    17,    75,   222,   171,    41,    21,   197,   236,
       9,    10,   206,    12,    29,    14,   151,    16,    17,    37,
      19,    20,    21,    -1,    -1,   208,   210
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    55,     5,     0,    28,    34,    39,    43,    48,
      50,    56,    57,    58,    76,    84,     1,     5,    59,    61,
       5,     5,     1,     5,    62,    64,     1,     5,    65,    22,
      32,    57,    57,    28,    21,    57,    59,    60,    29,    77,
      77,    28,    21,    57,    62,    63,    28,    26,    27,     1,
       5,    32,    33,    38,    40,    46,    51,    85,    86,    88,
      89,    97,    98,    99,   101,   106,   107,   108,     3,     4,
       5,    16,    17,    67,    68,    69,     1,    50,    78,    83,
      27,    28,     1,     5,    23,    29,    31,    45,    67,    70,
      72,    65,    70,    29,    98,     3,     4,    13,    29,    41,
      69,    86,    90,    92,    94,    96,     5,    90,    98,    90,
      28,    52,    22,    23,    24,    90,    37,    28,    68,    30,
      30,    79,     5,    56,     5,     5,    73,    24,     1,     5,
      37,    74,    53,    28,    28,    90,    37,    96,     1,    90,
      94,    42,     9,    10,    12,    14,    16,    17,    19,    20,
      21,    91,    93,     6,     7,    11,    18,    95,    52,    47,
      49,    35,    98,    90,     5,    25,    26,     5,    80,    28,
      28,    26,    30,    72,    26,    27,    37,    67,    57,    65,
      66,    26,    87,    30,    30,     1,    67,   102,   104,   105,
      92,    94,    96,    90,    85,    90,    85,    26,    27,    56,
      73,    25,    26,    71,    74,    70,    90,    30,    26,    37,
      28,   103,    27,     8,    15,   109,    36,   100,    80,     5,
      28,    42,    72,    28,    75,    87,   105,   102,    85,    90,
      85,    81,    70,    71,    74,    35,    28,    82,    85,    78
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
        case 2:
/* Line 1787 of yacc.c  */
#line 85 "parse.y"
    { DECLLIST *dl = make_decllist (make_program_decl ((yyvsp[(2) - (5)].id)), 0);
	        (yyval.prog_) = make_program (dl, (yyvsp[(4) - (5)].block_));
	      }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 92 "parse.y"
    { 
        /* 
          Feature 1
          Implement the make_block function in astree.c that can create BLOCK node and
          initialize DECLLIST and STMTLIST in this node.
          Hint: You can use anew function find in astree.c to new the BLOCK.
                Read struct.h for more information about struct type.
        */   
            (yyval.block_) = make_block ((yyvsp[(1) - (4)].decllist_), (yyvsp[(3) - (4)].stmtlist_)); 
          }
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 106 "parse.y"
    { (yyval.decllist_) = 0; }
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 112 "parse.y"
    { (yyval.decllist_) = (yyvsp[(2) - (2)].decllist_); }
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 114 "parse.y"
    { (yyval.decllist_) = (yyvsp[(2) - (2)].decllist_); }
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 116 "parse.y"
    { (yyval.decllist_) = (yyvsp[(2) - (2)].decllist_); }
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 118 "parse.y"
    { (yyval.decllist_) = make_decllist ((yyvsp[(1) - (2)].decl_), (yyvsp[(2) - (2)].decllist_)); }
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 120 "parse.y"
    { (yyval.decllist_) = make_decllist ((yyvsp[(1) - (2)].decl_), (yyvsp[(2) - (2)].decllist_)); }
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 125 "parse.y"
    { (yyval.decllist_) = make_decllist ((yyvsp[(1) - (2)].decl_), (yyvsp[(2) - (2)].decllist_)); }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 135 "parse.y"
    { (yyval.decl_) = make_const_decl ((yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)].expr_)); }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 137 "parse.y"
    { (yyval.decl_) = 0; }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 142 "parse.y"
    { (yyval.decllist_) = make_decllist ((yyvsp[(1) - (2)].decl_), (yyvsp[(2) - (2)].decllist_)); }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 152 "parse.y"
    { (yyval.decl_) = make_type_decl ((yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)].type_)); }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 154 "parse.y"
    { (yyval.decl_) = 0; }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 164 "parse.y"
    { 
            DECL *d = make_var_decl ((yyvsp[(1) - (5)].id), (yyvsp[(3) - (5)].type_));
            (yyval.decllist_) = make_decllist (d, (yyvsp[(5) - (5)].decllist_));
          }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 169 "parse.y"
    { 
            if ((yyvsp[(3) - (3)].decllist_) && (yyvsp[(3) - (3)].decllist_)->this && (yyvsp[(3) - (3)].decllist_)->this->tag == DeclVar_) {
	            DECL *d = make_var_decl ((yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].decllist_)->this->d.var->var_type);
	            (yyval.decllist_) = make_decllist (d, (yyvsp[(3) - (3)].decllist_));
	        }
            else
              (yyval.decllist_) = (yyvsp[(3) - (3)].decllist_) ;
          }
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 178 "parse.y"
    { (yyval.decllist_) = 0; }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 189 "parse.y"
    { (yyval.expr_) = make_un_expr ((yyvsp[(1) - (2)].ival), (yyvsp[(2) - (2)].expr_)); }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 191 "parse.y"
    { (yyval.expr_) = make_txt_expr ((yyvsp[(1) - (1)].tval)); }
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 196 "parse.y"
    { (yyval.expr_) = make_int_expr ((yyvsp[(1) - (1)].ival)); }
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 198 "parse.y"
    { (yyval.expr_) = make_bind_expr ((yyvsp[(1) - (1)].id)); }
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 214 "parse.y"
    { (yyval.type_) = make_array_type ((yyvsp[(3) - (4)].type_), (yyvsp[(4) - (4)].type_)); }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 216 "parse.y"
    { (yyval.type_) = make_record_fieldList_type ((yyvsp[(2) - (3)].fieldlist_)); }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 218 "parse.y"
    { (yyval.type_) = make_record_type (); }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 220 "parse.y"
    { (yyval.type_) = make_not_bind_id_type (); }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 222 "parse.y"
    { (yyval.type_) = the_err_type; }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 227 "parse.y"
    { (yyval.type_) = (yyvsp[(3) - (3)].type_); }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 233 "parse.y"
    {
            (yyval.type_) = make_elt_type ((yyvsp[(2) - (3)].type_), (yyvsp[(3) - (3)].type_));
          }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 240 "parse.y"
    { (yyval.type_) = make_id_type ((yyvsp[(1) - (1)].id)); }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 242 "parse.y"
    { (yyval.type_) = make_range_type ((yyvsp[(1) - (3)].expr_), (yyvsp[(3) - (3)].expr_)); }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 244 "parse.y"
    { (yyval.type_) = make_enum_type ((yyvsp[(2) - (3)].bindlist_)); }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 249 "parse.y"
    { (yyval.bindlist_) = make_bindlist (make_binding ((yyvsp[(1) - (1)].id)),  0); }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 251 "parse.y"
    { (yyval.bindlist_) = make_bindlist (make_binding ((yyvsp[(1) - (3)].id)), (yyvsp[(3) - (3)].bindlist_)); }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 261 "parse.y"
    { (yyval.fieldlist_) = make_fieldlist (make_field ((yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)].type_)), (yyvsp[(4) - (4)].fieldlist_)); }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 263 "parse.y"
    { (yyval.fieldlist_) = make_fieldlist (make_field ((yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].fieldlist_)->this->field_type), (yyvsp[(3) - (3)].fieldlist_)); }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 265 "parse.y"
    { (yyval.fieldlist_) = 0; }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 270 "parse.y"
    { (yyval.fieldlist_) = 0; }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 272 "parse.y"
    { (yyval.fieldlist_) = 0; }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 274 "parse.y"
    { (yyval.fieldlist_) = (yyvsp[(2) - (2)].fieldlist_); }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 284 "parse.y"
    { (yyval.decl_) = make_procfunc_decl ((yyvsp[(2) - (6)].id), (yyvsp[(3) - (6)].decllist_), NULL, (yyvsp[(5) - (6)].block_)); }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 289 "parse.y"
    { (yyval.decllist_) =  0; }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 291 "parse.y"
    { (yyval.decllist_) = (yyvsp[(2) - (3)].decllist_); }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 293 "parse.y"
    { (yyval.decllist_) =  0; }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 298 "parse.y"
    { varmode = (yyvsp[(1) - (1)].mode_); /* this "passes forward" the mode for the group */ }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 300 "parse.y"
    { (yyval.decllist_) = (yyvsp[(3) - (3)].decllist_); }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 305 "parse.y"
    { (yyval.decl_) = make_formal_decl ((yyvsp[(1) - (3)].id), varmode, make_id_type ((yyvsp[(3) - (3)].id))); }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 307 "parse.y"
    { (yyval.decllist_) = make_decllist ((yyvsp[(4) - (5)].decl_), (yyvsp[(5) - (5)].decllist_)); }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 309 "parse.y"
    { 
            if ((yyvsp[(3) - (3)].decllist_) && (yyvsp[(3) - (3)].decllist_)->this && (yyvsp[(3) - (3)].decllist_)->this->d.frm) {
              FORMAL *old = (yyvsp[(3) - (3)].decllist_)->this->d.frm;
              DECL *d = make_formal_decl ((yyvsp[(1) - (3)].id), old->frm_mode, old->frm_type);
              (yyval.decllist_) = make_decllist (d, (yyvsp[(3) - (3)].decllist_));
            }
            else
              (yyval.decllist_) = (yyvsp[(3) - (3)].decllist_);
	      }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 322 "parse.y"
    { (yyval.decllist_) = 0; }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 324 "parse.y"
    { (yyval.decllist_) = (yyvsp[(2) - (2)].decllist_); }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 328 "parse.y"
    { (yyval.mode_) = ModeValue_; }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 329 "parse.y"
    { (yyval.mode_) = ModeVar_  ; }
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 339 "parse.y"
    { (yyval.decl_) = make_procfunc_decl ((yyvsp[(2) - (8)].id), (yyvsp[(3) - (8)].decllist_), (yyvsp[(5) - (8)].id), (yyvsp[(7) - (8)].block_)); }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 344 "parse.y"
    { (yyval.stmt_) = 0 ; }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 346 "parse.y"
    { (yyval.stmt_) = make_assign_stmt ((yyvsp[(1) - (3)].expr_), (yyvsp[(3) - (3)].expr_)); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 351 "parse.y"
    { (yyval.stmt_) = make_call_stmt ((yyvsp[(1) - (1)].expr_)); }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 356 "parse.y"
    { (yyval.stmt_) = 0 ; }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 362 "parse.y"
    { (yyval.expr_) = make_call_expr ((yyvsp[(1) - (5)].id), make_exprlist ((yyvsp[(3) - (5)].expr_), (yyvsp[(4) - (5)].exprlist_))); }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 367 "parse.y"
    { (yyval.exprlist_) = 0; }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 369 "parse.y"
    { (yyval.exprlist_) = make_exprlist ((yyvsp[(2) - (3)].expr_), (yyvsp[(3) - (3)].exprlist_)); }
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 374 "parse.y"
    { (yyval.expr_) = make_bin_expr ('[', (yyvsp[(1) - (3)].expr_), (yyvsp[(2) - (3)].expr_)); }
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 376 "parse.y"
    { (yyval.expr_) = make_bin_expr ('.', (yyvsp[(1) - (3)].expr_), make_id_expr ((yyvsp[(3) - (3)].id))); }
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 378 "parse.y"
    { (yyval.expr_) = make_un_expr ('^', (yyvsp[(1) - (2)].expr_)); }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 380 "parse.y"
    { (yyval.expr_) = make_bind_expr ((yyvsp[(1) - (1)].id)); }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 386 "parse.y"
    { (yyval.expr_) = make_bin_expr ('[', (yyvsp[(1) - (3)].expr_), (yyvsp[(2) - (3)].expr_)); }
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 392 "parse.y"
    { (yyval.expr_) = make_bin_expr ((yyvsp[(2) - (3)].ival), (yyvsp[(1) - (3)].expr_), (yyvsp[(3) - (3)].expr_)); }
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 402 "parse.y"
    { (yyval.expr_) = make_un_expr ((yyvsp[(1) - (2)].ival), (yyvsp[(2) - (2)].expr_)); }
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 404 "parse.y"
    { (yyval.expr_) = make_bin_expr ((yyvsp[(2) - (3)].ival), (yyvsp[(1) - (3)].expr_), (yyvsp[(3) - (3)].expr_)); }
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 414 "parse.y"
    { (yyval.expr_) = make_bin_expr ((yyvsp[(2) - (3)].ival), (yyvsp[(1) - (3)].expr_), (yyvsp[(3) - (3)].expr_)); }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 424 "parse.y"
    { (yyval.expr_) = (yyvsp[(2) - (3)].expr_); }
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 426 "parse.y"
    { (yyval.expr_) = 0; }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 428 "parse.y"
    { (yyval.expr_) = make_un_expr (NOT_, (yyvsp[(2) - (2)].expr_)); }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 430 "parse.y"
    { (yyval.expr_) = make_int_expr ((yyvsp[(1) - (1)].ival)); }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 432 "parse.y"
    { (yyval.expr_) = make_txt_expr ((yyvsp[(1) - (1)].tval)); }
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 434 "parse.y"
    { (yyval.expr_) = the_nil_expr; }
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 443 "parse.y"
    { (yyval.stmt_) = make_compound_stmt ((yyvsp[(2) - (3)].stmtlist_)); }
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 452 "parse.y"
    { (yyval.stmtlist_) = make_stmts ((yyvsp[(1) - (1)].stmt_), NULL); }
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 458 "parse.y"
    { (yyval.stmtlist_) = make_stmts ((yyvsp[(1) - (3)].stmt_), (yyvsp[(3) - (3)].stmtlist_)); }
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 467 "parse.y"
    { (yyval.stmt_) = make_if_stmt ((yyvsp[(2) - (5)].expr_), (yyvsp[(4) - (5)].stmt_), (yyvsp[(5) - (5)].stmt_)); }
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 472 "parse.y"
    { (yyval.stmt_) =  0; }
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 474 "parse.y"
    { (yyval.stmt_) = (yyvsp[(2) - (2)].stmt_); }
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 484 "parse.y"
    { (yyval.stmt_) = make_case_stmt((yyvsp[(2) - (5)].expr_), (yyvsp[(4) - (5)].caselist_)); }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 494 "parse.y"
    { (yyval.caselist_) = make_caselist_elements ((yyvsp[(1) - (2)].casearm_), (yyvsp[(2) - (2)].caselist_)); }
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 504 "parse.y"
    { (yyval.caselist_) = 0; }
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 506 "parse.y"
    { (yyval.caselist_) = 0; }
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 508 "parse.y"
    { (yyval.caselist_) = (yyvsp[(2) - (2)].caselist_); }
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 518 "parse.y"
    { (yyval.casearm_) = make_caselist_element ((yyvsp[(1) - (3)].exprlist_), (yyvsp[(3) - (3)].stmt_)); }
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 520 "parse.y"
    { (yyval.casearm_) = 0; }
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 525 "parse.y"
    { (yyval.exprlist_) = make_exprlist ((yyvsp[(1) - (1)].expr_),  0); }
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 527 "parse.y"
    { (yyval.exprlist_) = make_exprlist ((yyvsp[(1) - (3)].expr_), (yyvsp[(3) - (3)].exprlist_)); }
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 532 "parse.y"
    { (yyval.stmt_) = make_whilestmt ((yyvsp[(2) - (4)].expr_), (yyvsp[(4) - (4)].stmt_)); }
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 542 "parse.y"
    { (yyval.stmt_) = make_repeat_stmt ((yyvsp[(4) - (4)].expr_), (yyvsp[(2) - (4)].stmtlist_)); }
    break;

  case 130:
/* Line 1787 of yacc.c  */
#line 553 "parse.y"
    { (yyval.stmt_) = make_for_stmt ((yyvsp[(2) - (8)].id), (yyvsp[(4) - (8)].expr_), (yyvsp[(6) - (8)].expr_), (yyvsp[(3) - (8)].ival), (yyvsp[(8) - (8)].stmt_), TRUE); }
    break;


/* Line 1787 of yacc.c  */
#line 2232 "parse.tab.c"
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
#line 591 "parse.y"


void
yyerror (char *fmt, ...)
{
  va_list args;
  va_start (args, fmt);
  errmsg (yylineno, fmt, args);
  va_end (args);
  parse_error = 1;
}

void
warning (int lineno, char *fmt, ...)
{
  va_list args;
  fprintf (stderr, "%s:%d: ", inname, lineno);
  va_start (args, fmt);
  vfprintf (stderr, fmt, args);
  va_end (args);
  fprintf (stderr, "\n");
}

void
errmsg (int lineno, char *fmt, ...)
/* Use of <stdargs> allows a call to yyerror to specify a format string
   followed by multiple arguments */
{
  va_list args;
  /* Print filename and line number at beginning of every error message.
     Use same format as gcc produces, so can compile and check errors
     within emacs. */
  fprintf (stderr, "%s:%d: ", inname, lineno);
  /* Print specific error message */
  va_start (args, fmt);
  vfprintf (stderr, fmt, args);
  va_end (args);
  fprintf (stderr, "\n");
  error_flag = 1;
}

void
parseinit ()
{
  init_types ();
  init_objects ();
  init_exprs ();
  init_decls ();
  init_regtable ();
}
