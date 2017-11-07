/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "proj2y.y" /* yacc.c:339  */

#include "tree.h"
#include <stdlib.h>

extern tree root2; //declared in the driver program

#line 73 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IntConst = 258,
    Ident = 259,
    FALSE = 51,
    TRUE = 52,
    NOT = 53,
    mod = 54,
    and = 55,
    xor = 56,
    elsif = 57,
    or = 58,
    dotdot = 59,
    Exit = 60,
    When = 61,
    For = 62,
    semicolon = 63,
    colon = 64,
    array = 65,
    declare = 66,
    coleq = 67,
    procedure = 68,
    SignedNumber = 69,
    of = 70,
    comma = 71,
    begin = 72,
    loop = 73,
    in = 74,
    is = 75,
    LBraket = 76,
    RBraket = 77,
    If = 78,
    Then = 79,
    End = 80,
    While = 81,
    Do = 82,
    Else = 83,
    LParen = 84,
    RParen = 85,
    Plus = 86,
    Minus = 87,
    Star = 88,
    Slash = 89,
    Eq = 90,
    Ne = 91,
    Lt = 92,
    Le = 93,
    Gt = 94,
    Ge = 95,
    Boolean = 96,
    Comma = 97,
    Eoln = 45,
    INTEGER = 98,
    BOOLEAN = 99,
    OPERATOR = 50,
    IDENTIFIER = 49,
    RESERVEDWORD = 48
  };
#endif
/* Tokens.  */
#define IntConst 258
#define Ident 259
#define FALSE 51
#define TRUE 52
#define NOT 53
#define mod 54
#define and 55
#define xor 56
#define elsif 57
#define or 58
#define dotdot 59
#define Exit 60
#define When 61
#define For 62
#define semicolon 63
#define colon 64
#define array 65
#define declare 66
#define coleq 67
#define procedure 68
#define SignedNumber 69
#define of 70
#define comma 71
#define begin 72
#define loop 73
#define in 74
#define is 75
#define LBraket 76
#define RBraket 77
#define If 78
#define Then 79
#define End 80
#define While 81
#define Do 82
#define Else 83
#define LParen 84
#define RParen 85
#define Plus 86
#define Minus 87
#define Star 88
#define Slash 89
#define Eq 90
#define Ne 91
#define Lt 92
#define Le 93
#define Gt 94
#define Ge 95
#define Boolean 96
#define Comma 97
#define Eoln 45
#define INTEGER 98
#define BOOLEAN 99
#define OPERATOR 50
#define IDENTIFIER 49
#define RESERVEDWORD 48

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 8 "proj2y.y" /* yacc.c:355  */
int num; tree t;

#line 230 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 247 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   125

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  54
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  128

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   267

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    52,     2,     2,    57,    56,
      55,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    53,    54,
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
      58,    59,    60,    61,    62,    63,    64,    65
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    27,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IntConst", "Ident", "FALSE", "TRUE",
  "NOT", "mod", "and", "xor", "elsif", "or", "dotdot", "Exit", "When",
  "For", "semicolon", "colon", "array", "declare", "coleq", "procedure",
  "SignedNumber", "of", "comma", "begin", "loop", "in", "is", "LBraket",
  "RBraket", "If", "Then", "End", "While", "Do", "Else", "LParen",
  "RParen", "Plus", "Minus", "Star", "Slash", "Eq", "Ne", "Lt", "Le", "Gt",
  "Ge", "Boolean", "Comma", "Eoln", "INTEGER", "BOOLEAN", "OPERATOR",
  "IDENTIFIER", "RESERVEDWORD", "\"procedure\"", "\"is\"", "\"begin\"",
  "\"end\"", "\";\"", "\"\"", "\"[\"", "\"]\"", "$accept", "program",
  "decls", "declaration", "id_list", "type", "const_range", "stmts",
  "statement", "range", "ref", "end_if", "expr", "relation", "sum", "sign",
  "prod", "factor", "basic", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    45,    98,    99,    50,    49,    48,   260,   261,
     262,   263,   264,   265,   266,   267
};
# endif

#define YYPACT_NINF -56

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-56)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -55,     4,    23,   -44,   -56,     3,     7,   -56,   -10,    38,
      43,    63,     2,     3,    -5,   -56,    20,    74,    92,     3,
      47,   -56,    39,    80,    78,   -56,    40,   -56,   -56,   -56,
     -30,    51,    75,    76,   -30,    44,     2,   -30,    -1,   -56,
     -56,   -56,    42,    59,    46,    37,   -30,   -30,     2,    72,
     -56,   -56,   -56,    95,   -56,    45,   -56,   -30,   -30,   -30,
      37,    37,   -30,   -30,   -30,   -30,   -30,   -30,   -56,   -56,
     -56,    32,   -30,   -56,     9,   -56,   -56,   -56,    82,     6,
      77,     2,   109,    89,   -56,   -56,   -56,     9,     9,    36,
      36,    36,    36,    36,    36,   -56,    79,    37,    37,    37,
       2,   -30,   -56,    19,   -56,    -5,   -56,   -56,   -56,   -56,
      81,    36,    64,    84,     2,   -56,   -56,    90,   -30,   -56,
      85,   -56,    87,    91,     2,   -56,    19,   -56
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     6,     3,     0,     0,
       0,     0,     0,     0,     0,     7,    22,    18,     0,     0,
       0,    13,     0,     0,     0,     4,     0,     8,     9,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
      42,    43,     0,    30,    31,     0,     0,     0,     0,     0,
       2,    14,    15,     0,    12,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,    54,
      53,     0,     0,    50,    38,    44,    49,    19,     0,     0,
       0,     0,     0,     0,    28,    29,    27,    39,    40,    32,
      33,    34,    35,    36,    37,    48,     0,     0,     0,     0,
       0,     0,    16,     0,    11,     0,    51,    47,    45,    46,
       0,    21,     0,     0,     0,    20,    10,     0,     0,    24,
       0,    17,     0,     0,     0,    25,     0,    26
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -56,   -56,    41,   -56,   110,    17,   -56,   -36,   -56,   -56,
     -40,    -2,   -33,    15,   -38,   -56,    22,   -18,    54
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     8,     9,    10,    29,    55,    22,    23,    78,
      24,   115,    42,    43,    44,    45,    74,    75,    76
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      51,    49,    53,     1,    52,    73,    16,     6,     3,    79,
      39,    40,    80,    77,    26,     5,    17,    97,    18,   101,
      73,    73,    19,     4,    89,    90,    91,    92,    93,    94,
     112,    73,    11,    41,    20,    68,    16,    69,    70,    96,
      68,    16,    69,    70,    71,   103,    60,    61,    27,    28,
      12,    98,    99,   113,    25,    13,   114,    73,    73,    73,
      33,    14,    54,   111,   110,    21,     7,     6,    57,    58,
      72,    59,    84,    85,    86,    72,    60,    61,   120,   107,
     108,   109,    87,    88,    30,   122,    60,    61,   126,    31,
      62,    63,    64,    65,    66,    67,    32,    34,    36,    37,
      35,    46,    48,    47,    38,    81,    50,    56,    82,   100,
      83,   102,   104,   105,   118,   117,   119,   121,   106,   123,
     124,    15,   116,   125,   127,    95
};

static const yytype_uint8 yycheck[] =
{
      36,    34,     3,    58,    37,    45,     4,     4,     4,    47,
      40,    41,    48,    46,    19,    59,    14,     8,    16,    13,
      60,    61,    20,     0,    62,    63,    64,    65,    66,    67,
      11,    71,    25,    63,    32,     3,     4,     5,     6,    72,
       3,     4,     5,     6,     7,    81,    40,    41,    53,    54,
      60,    42,    43,    34,    13,    17,    37,    97,    98,    99,
      19,    18,    63,   101,   100,    63,    63,     4,     9,    10,
      38,    12,    57,    58,    59,    38,    40,    41,   114,    97,
      98,    99,    60,    61,    64,   118,    40,    41,   124,    15,
      44,    45,    46,    47,    48,    49,     4,    50,    18,    21,
      61,    50,    26,    28,    64,    33,    62,    65,    13,    27,
      65,    34,     3,    24,    50,    34,    32,    27,    39,    34,
      33,    11,   105,    32,   126,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,    67,     4,     0,    59,     4,    63,    68,    69,
      70,    25,    60,    17,    18,    70,     4,    14,    16,    20,
      32,    63,    73,    74,    76,    68,    19,    53,    54,    71,
      64,    15,     4,    68,    50,    61,    18,    21,    64,    40,
      41,    63,    78,    79,    80,    81,    50,    28,    26,    78,
      62,    73,    78,     3,    63,    72,    65,     9,    10,    12,
      40,    41,    44,    45,    46,    47,    48,    49,     3,     5,
       6,     7,    38,    76,    82,    83,    84,    78,    75,    80,
      73,    33,    13,    65,    79,    79,    79,    82,    82,    80,
      80,    80,    80,    80,    80,    84,    78,     8,    42,    43,
      27,    13,    34,    73,     3,    24,    39,    83,    83,    83,
      73,    80,    11,    34,    37,    77,    71,    34,    50,    32,
      73,    27,    78,    34,    33,    32,    73,    77
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    68,    69,    70,    70,    71,    71,
      71,    72,    72,    73,    73,    74,    74,    74,    74,    74,
      74,    75,    76,    76,    77,    77,    77,    78,    78,    78,
      78,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      80,    81,    81,    81,    82,    82,    82,    82,    83,    83,
      84,    84,    84,    84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     8,     1,     3,     3,     1,     3,     1,     1,
       6,     3,     1,     1,     3,     3,     5,     8,     1,     4,
       6,     3,     1,     4,     2,     4,     6,     3,     3,     3,
       1,     1,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     1,     1,     1,     1,     3,     3,     3,     2,     1,
       1,     3,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 27 "proj2y.y" /* yacc.c:1646  */
    {root2 = buildTree(procedure, (yyvsp[-4].t), (yyvsp[-2].t), NULL); root2->next = buildIntTree(Ident, (yyvsp[-6].num));}
#line 1406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 28 "proj2y.y" /* yacc.c:1646  */
    {}
#line 1412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 29 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(semicolon, (yyvsp[-2].t), (yyvsp[0].t), NULL);}
#line 1418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 30 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(colon, (yyvsp[-2].t), (yyvsp[0].t), NULL);}
#line 1424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 31 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildIntTree(Ident, (yyvsp[0].num));}
#line 1430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 32 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildIntTree(Ident, (yyvsp[-2].num)); (yyval.t)->next = (yyvsp[0].t);}
#line 1436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 33 "proj2y.y" /* yacc.c:1646  */
    {}
#line 1442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 34 "proj2y.y" /* yacc.c:1646  */
    {}
#line 1448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 35 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(array,(yyvsp[-3].t),(yyvsp[0].t),NULL);}
#line 1454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 36 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildIntTree(IntConst,(yyvsp[-2].num)); (yyval.t)->next = buildIntTree(IntConst,(yyvsp[-2].num));}
#line 1460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 37 "proj2y.y" /* yacc.c:1646  */
    {}
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 38 "proj2y.y" /* yacc.c:1646  */
    {}
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 39 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(colon,(yyvsp[-2].t),(yyvsp[0].t),NULL);}
#line 1478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 40 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(coleq,(yyvsp[-2].t),(yyvsp[0].t),NULL);}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 41 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(declare, (yyvsp[-3].t), (yyvsp[-1].t),NULL);}
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 42 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(For, buildIntTree(Ident,(yyvsp[-6].num)),(yyvsp[-4].t), (yyvsp[-2].t));}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 43 "proj2y.y" /* yacc.c:1646  */
    {}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 44 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(Exit,(yyvsp[0].t),NULL,NULL);}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 45 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(If, (yyvsp[-3].t), (yyvsp[-1].t), (yyvsp[0].t));}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 46 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(dotdot,(yyvsp[-2].t),(yyvsp[0].t),NULL);}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 47 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildIntTree(Ident,(yyvsp[0].num));}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 48 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildIntTree(Ident,(yyvsp[-3].num)); (yyval.t)->next = (yyvsp[-1].t);}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 49 "proj2y.y" /* yacc.c:1646  */
    {}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 50 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(Else,(yyvsp[-2].t),NULL,NULL);}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 51 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(elsif, (yyvsp[-3].t), (yyvsp[-1].t), (yyvsp[0].t));}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 52 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(or, (yyvsp[-2].t), (yyvsp[0].t), NULL);}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 53 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(and, (yyvsp[-2].t), (yyvsp[0].t), NULL);}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 54 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(xor, (yyvsp[-2].t), (yyvsp[0].t), NULL);}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 55 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 56 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 57 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(Eq, (yyvsp[-2].t), (yyvsp[0].t), NULL);}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 58 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(Ne, (yyvsp[-2].t), (yyvsp[0].t), NULL);}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 59 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(Lt, (yyvsp[-2].t), (yyvsp[0].t), NULL);}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 60 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(Le, (yyvsp[-2].t), (yyvsp[0].t), NULL);}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 61 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(Gt, (yyvsp[-2].t), (yyvsp[0].t), NULL);}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 62 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(Ge, (yyvsp[-2].t), (yyvsp[0].t), NULL);}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 63 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(SignedNumber, (yyvsp[-1].t), (yyvsp[0].t), NULL);}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 64 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(Plus, (yyvsp[-2].t), (yyvsp[0].t), NULL);}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 65 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(Minus, (yyvsp[-2].t), (yyvsp[0].t), NULL);}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 66 "proj2y.y" /* yacc.c:1646  */
    {}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 67 "proj2y.y" /* yacc.c:1646  */
    {}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 68 "proj2y.y" /* yacc.c:1646  */
    {}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 69 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 70 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(Star, (yyvsp[-2].t), (yyvsp[0].t), NULL);}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 71 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(Slash, (yyvsp[-2].t), (yyvsp[0].t), NULL);}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 72 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(mod, (yyvsp[-2].t), (yyvsp[0].t), NULL);}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 73 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildTree(NOT ,(yyvsp[0].t) ,NULL, NULL);}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 74 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 75 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[0].t);}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 76 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = (yyvsp[-1].t);}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 77 "proj2y.y" /* yacc.c:1646  */
    {(yyval.t) = buildIntTree (IntConst, (yyvsp[0].num));}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 78 "proj2y.y" /* yacc.c:1646  */
    {}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 79 "proj2y.y" /* yacc.c:1646  */
    {}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1722 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 80 "proj2y.y" /* yacc.c:1906  */


