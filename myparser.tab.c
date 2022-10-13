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
#line 1 "myparser.y" /* yacc.c:339  */

  #include <stdio.h>
  #include <stdlib.h>
  #include <unistd.h>
  #include <ctype.h>
  #include "cgen.h"

  int yylex();
  extern int lineNum;
  extern FILE *yyin;
  extern FILE *yyout;    
  extern int yylineno;								

#line 80 "myparser.tab.c" /* yacc.c:339  */

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
   by #include "myparser.tab.h".  */
#ifndef YY_YY_MYPARSER_TAB_H_INCLUDED
# define YY_YY_MYPARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PROGRAM = 258,
    FUNCTION = 259,
    VARS = 260,
    PR_INTEGER = 261,
    PR_CHAR = 262,
    END_FUNCTION = 263,
    PR_RETURN = 264,
    PR_STARTMAIN = 265,
    PR_ENDMAIN = 266,
    STRUCT = 267,
    ENDSTRUCT = 268,
    TYPEDEF = 269,
    PR_IF = 270,
    PR_THEN = 271,
    PR_ENDIF = 272,
    PR_ELSEIF = 273,
    PR_ELSE = 274,
    PR_FOR = 275,
    PR_STEP = 276,
    PR_TO = 277,
    PR_ENDFOR = 278,
    PR_WHILE = 279,
    PR_ENDWHILE = 280,
    PR_SWITCH = 281,
    PR_CASE = 282,
    PR_DEFAULT = 283,
    PR_ENDSWITCH = 284,
    PR_END = 285,
    PR_BEGIN = 286,
    PR_PRINT = 287,
    PR_BREAK = 288,
    PR_CONT = 289,
    INTEGER = 290,
    CHAR = 291,
    NW_LINE = 292,
    EQUAL = 293,
    CLN = 294,
    DBL_QUOTE = 295,
    SEMICLN = 296,
    COMMA = 297,
    OPEN_BR = 298,
    CLOSE_BR = 299,
    OPEN_HK = 300,
    CLOSE_HK = 301,
    OPEN_PAR = 302,
    CLOSE_PAR = 303,
    PLUS = 304,
    SUB = 305,
    MUL = 306,
    DIV = 307,
    DBL_EQUAL = 308,
    GREQUAL = 309,
    LSEQUAL = 310,
    GRTHAN = 311,
    LSTHAN = 312,
    INEQ = 313,
    AND = 314,
    S_AND = 315,
    OR = 316,
    S_OR = 317,
    NOT = 318,
    S_NOT = 319,
    IDENTIFIERS = 320,
    INTEGERS = 321,
    FLOATS = 322
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "myparser.y" /* yacc.c:355  */

	char* str;
  int num;

#line 193 "myparser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 210 "myparser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   515

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   322

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    62,    62,    63,    64,    65,    68,    71,    75,    76,
      79,    82,    85,    86,    90,    91,    92,    93,    96,    99,
     100,   103,   107,   108,   111,   115,   116,   121,   122,   123,
     127,   130,   131,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   153,
     154,   155,   156,   160,   164,   165,   166,   170,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "FUNCTION", "VARS",
  "PR_INTEGER", "PR_CHAR", "END_FUNCTION", "PR_RETURN", "PR_STARTMAIN",
  "PR_ENDMAIN", "STRUCT", "ENDSTRUCT", "TYPEDEF", "PR_IF", "PR_THEN",
  "PR_ENDIF", "PR_ELSEIF", "PR_ELSE", "PR_FOR", "PR_STEP", "PR_TO",
  "PR_ENDFOR", "PR_WHILE", "PR_ENDWHILE", "PR_SWITCH", "PR_CASE",
  "PR_DEFAULT", "PR_ENDSWITCH", "PR_END", "PR_BEGIN", "PR_PRINT",
  "PR_BREAK", "PR_CONT", "INTEGER", "CHAR", "NW_LINE", "EQUAL", "CLN",
  "DBL_QUOTE", "SEMICLN", "COMMA", "OPEN_BR", "CLOSE_BR", "OPEN_HK",
  "CLOSE_HK", "OPEN_PAR", "CLOSE_PAR", "PLUS", "SUB", "MUL", "DIV",
  "DBL_EQUAL", "GREQUAL", "LSEQUAL", "GRTHAN", "LSTHAN", "INEQ", "AND",
  "S_AND", "OR", "S_OR", "NOT", "S_NOT", "IDENTIFIERS", "INTEGERS",
  "FLOATS", "$accept", "programm", "program_start", "name", "struction",
  "function", "func-mainp-str_vars", "commands", "cmd", "func_end",
  "main_part", "struction_end", "function_parameters", "variables", "type",
  "list_var", "Declare_Arrays", "end_func_value", "stmt", "case_comms",
  "dflt_comms", "elf_comms", "el_comms", "expr", "else_expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322
};
# endif

#define YYPACT_NINF -142

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-142)))

#define YYTABLE_NINF -8

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,   -36,    35,   140,  -142,  -142,  -142,   -36,   -25,   -36,
      29,     7,    51,  -142,    19,    23,    67,   -36,    51,  -142,
    -142,   -23,    34,   -23,    68,    67,  -142,  -142,  -142,    36,
      45,   164,    46,   -36,  -142,   -36,    67,    58,    11,    64,
     -36,    66,    70,    72,    83,    84,    88,   298,   204,  -142,
    -142,  -142,    -5,  -142,   115,  -142,   298,   -23,    11,    91,
    -142,  -142,  -142,    18,    11,   101,    11,    11,   106,  -142,
    -142,    11,   231,   130,  -142,   -36,   -36,  -142,  -142,   318,
    -142,    54,    11,  -142,    11,    11,    11,    11,   451,   107,
     111,   401,   108,   418,   109,    11,   384,   110,   147,  -142,
    -142,   123,   142,  -142,  -142,   223,    81,    81,    81,    81,
      11,    11,    11,    11,    11,    11,    11,    11,    11,    11,
      11,    11,   155,   114,   298,   298,   148,   148,   360,   134,
    -142,  -142,  -142,  -142,    -7,  -142,   173,    18,  -142,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,   298,   161,   234,   261,   138,    22,    26,   -18,     5,
    -142,   103,   126,  -142,  -142,    11,   156,  -142,   165,  -142,
     175,   -36,   169,   -36,   170,  -142,   298,   186,   185,   435,
     168,   298,  -142,  -142,   171,  -142,   174,  -142,   167,   298,
     195,   151,   181,   182,   298,   177,   178,   316,   205,   298,
    -142,   298,   298,   298,   190,   194,  -142,  -142,   167,   282,
     282,  -142,  -142,   335,   199,  -142,  -142,  -142,  -142
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     7,     6,     1,     0,     0,     0,
       0,     0,     0,     3,     0,     0,     0,     0,     0,     5,
       2,     0,     0,     0,     0,     0,     4,    25,    26,     0,
       0,     0,     0,     0,     8,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      14,    11,    27,    24,     0,     9,     0,     0,     0,    59,
      62,    63,    58,     0,     0,     0,     0,     0,     0,    17,
      16,     0,     0,     0,    13,     0,     0,    28,    21,     0,
      23,     0,     0,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
      29,     0,     0,    10,    61,     0,    64,    65,    66,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    48,    19,    30,    59,    31,     0,    32,    60,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,    37,    44,     0,     0,    36,     0,    43,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,    35,    42,     0,    34,     0,    41,    54,     0,
       0,     0,     0,     0,    53,     0,     0,     0,     0,    57,
      46,     0,     0,     0,     0,     0,    55,    56,     0,    49,
      51,    33,    40,     0,     0,    50,    52,    38,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,  -142,    -1,  -142,   216,   -21,   -42,   -46,  -142,
       9,  -142,   184,   219,   -14,   -57,  -142,  -142,  -142,  -124,
      82,  -141,  -142,   -22,   -43
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    46,    11,    12,    24,    48,    49,   103,
      13,    55,    29,    62,    33,    53,    77,   136,    50,   156,
     168,   177,   190,    63,    89
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,    -7,    74,   157,    35,    72,    14,    30,    16,     1,
      47,     7,    27,    28,    79,    56,    25,     8,   100,   101,
      19,    20,    15,    92,    94,   171,    74,    26,    97,     4,
     172,    -7,    52,    74,    54,     6,    81,    75,    76,    65,
      82,    17,    88,    30,    91,    93,    27,    28,   173,    96,
     166,   167,   129,   174,   166,   169,   206,   207,    58,    83,
     105,     8,   106,   107,   108,   109,    21,    84,    85,    86,
      87,    22,    23,   128,    52,    52,    59,    60,    61,    31,
     137,    34,   153,   154,    36,   215,   216,    51,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      57,   135,   104,    84,    85,    86,    87,    74,    74,   161,
      37,    64,    38,    66,   184,    74,   186,    67,    39,    68,
     175,   176,   180,    40,    69,    70,    71,    41,    78,    42,
      84,    85,    86,    87,   188,    43,    44,    45,    82,   194,
      90,    99,    74,   179,     7,   198,    95,   199,    74,   123,
       8,   131,     9,    74,    10,   122,   125,   127,   132,   208,
     209,   210,    74,    74,    74,   214,   197,   133,     4,    23,
      52,   151,    52,    38,   159,   155,    38,    27,    28,    39,
     152,   160,    39,   162,    40,   165,   213,    40,    41,    58,
      42,    41,   178,    42,   182,   181,    43,    44,    45,    43,
      44,    45,    27,    28,   183,   189,   191,   134,    60,    61,
     185,   187,   200,    38,    58,   195,   193,   201,   196,    39,
     202,   203,   218,   176,    40,   204,   205,    18,    41,     4,
      42,   211,   134,    60,    61,   212,    43,    44,    45,   170,
      38,    80,    32,    38,     0,     0,    39,     0,     0,    39,
      73,    40,     0,     0,    40,    41,     0,    42,    41,   163,
      42,     0,     0,    43,    44,    45,    43,    44,    45,     4,
      38,   138,    84,    85,    86,    87,    39,    98,     0,     0,
       0,    40,     0,     0,     0,    41,   164,    42,     0,     0,
       0,    38,     0,    43,    44,    45,     4,    39,     0,     4,
       0,     0,    40,     0,     0,     0,    41,    38,    42,   155,
       0,     0,     0,    39,    43,    44,    45,     0,    40,     0,
       0,     0,    41,     0,    42,     0,     4,   102,     0,     0,
      43,    44,    45,    39,   176,     0,     0,     0,    40,     0,
       0,     0,    41,     0,    42,     0,     0,     4,     0,     0,
      43,    44,    45,     0,     0,     0,     0,     0,   217,     0,
       0,     0,     0,     4,     0,    84,    85,    86,    87,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,     0,     0,     4,    84,    85,    86,    87,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     158,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      85,    86,    87,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   130,     0,     0,     0,     0,
       0,     0,     0,    84,    85,    86,    87,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   124,
      84,    85,    86,    87,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   126,    84,    85,    86,
      87,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   192,    84,    85,    86,    87,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      84,    85,    86,    87,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121
};

static const yytype_int16 yycheck[] =
{
       1,     8,    48,   127,    25,    47,     7,    21,     9,     3,
      31,     4,    35,    36,    56,    36,    17,    10,    75,    76,
      11,    12,    47,    66,    67,    43,    72,    18,    71,    65,
      48,    38,    33,    79,    35,     0,    58,    42,    43,    40,
      47,    12,    64,    57,    66,    67,    35,    36,    43,    71,
      28,    29,    95,    48,    28,    29,   197,   198,    47,    41,
      82,    10,    84,    85,    86,    87,    47,    49,    50,    51,
      52,    48,     5,    95,    75,    76,    65,    66,    67,    45,
     102,    13,   124,   125,    48,   209,   210,    41,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      42,   102,    48,    49,    50,    51,    52,   153,   154,   151,
      65,    47,     9,    47,   171,   161,   173,    47,    15,    47,
      17,    18,   165,    20,    41,    41,    38,    24,    13,    26,
      49,    50,    51,    52,   176,    32,    33,    34,    47,   181,
      39,    11,   188,   165,     4,   188,    40,   189,   194,    38,
      10,    41,    12,   199,    14,    48,    48,    48,    11,   201,
     202,   203,   208,   209,   210,   208,   188,    44,    65,     5,
     171,    16,   173,     9,    40,    27,     9,    35,    36,    15,
      66,     8,    15,    22,    20,    47,   208,    20,    24,    47,
      26,    24,    66,    26,    29,    39,    32,    33,    34,    32,
      33,    34,    35,    36,    29,    19,    21,    65,    66,    67,
      41,    41,    17,     9,    47,    44,    48,    66,    44,    15,
      39,    39,    23,    18,    20,    48,    48,    11,    24,    65,
      26,    41,    65,    66,    67,    41,    32,    33,    34,   157,
       9,    57,    23,     9,    -1,    -1,    15,    -1,    -1,    15,
      46,    20,    -1,    -1,    20,    24,    -1,    26,    24,    25,
      26,    -1,    -1,    32,    33,    34,    32,    33,    34,    65,
       9,    48,    49,    50,    51,    52,    15,    46,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    -1,    -1,
      -1,     9,    -1,    32,    33,    34,    65,    15,    -1,    65,
      -1,    -1,    20,    -1,    -1,    -1,    24,     9,    26,    27,
      -1,    -1,    -1,    15,    32,    33,    34,    -1,    20,    -1,
      -1,    -1,    24,    -1,    26,    -1,    65,     9,    -1,    -1,
      32,    33,    34,    15,    18,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    24,    -1,    26,    -1,    -1,    65,    -1,    -1,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    65,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    65,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    69,    70,    65,    71,     0,     4,    10,    12,
      14,    72,    73,    78,    71,    47,    71,    12,    73,    78,
      78,    47,    48,     5,    74,    71,    78,    35,    36,    80,
      82,    45,    81,    82,    13,    74,    48,    65,     9,    15,
      20,    24,    26,    32,    33,    34,    71,    74,    75,    76,
      86,    41,    71,    83,    71,    79,    74,    42,    47,    65,
      66,    67,    81,    91,    47,    71,    47,    47,    47,    41,
      41,    38,    75,    46,    76,    42,    43,    84,    13,    75,
      80,    91,    47,    41,    49,    50,    51,    52,    91,    92,
      39,    91,    92,    91,    92,    40,    91,    92,    46,    11,
      83,    83,     9,    77,    48,    91,    91,    91,    91,    91,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    48,    38,    48,    48,    48,    48,    91,    92,
      41,    41,    11,    44,    65,    71,    85,    91,    48,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    16,    66,    75,    75,    27,    87,    87,    40,    40,
       8,    75,    22,    25,    25,    47,    28,    29,    88,    29,
      88,    43,    48,    43,    48,    17,    18,    89,    66,    91,
      92,    39,    29,    29,    83,    41,    83,    41,    75,    19,
      90,    21,    48,    48,    75,    44,    44,    91,    92,    75,
      17,    66,    39,    39,    48,    48,    89,    89,    75,    75,
      75,    41,    41,    91,    92,    87,    87,    23,    23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    69,    69,    69,    70,    71,    72,    72,
      73,    74,    75,    75,    76,    76,    76,    76,    77,    78,
      78,    79,    80,    80,    81,    82,    82,    83,    83,    83,
      84,    85,    85,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    87,    87,    88,    89,    89,    89,    90,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     4,     3,     2,     1,     4,     5,
       8,     3,     1,     2,     1,     3,     2,     2,     3,     8,
       7,     2,     2,     4,     2,     1,     1,     1,     2,     3,
       3,     1,     1,    10,     7,     7,     6,     6,    12,     4,
      10,     7,     7,     6,     6,    12,     9,     7,     4,     6,
       7,     6,     7,     3,     2,     4,     4,     2,     1,     1,
       4,     3,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3
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
#line 62 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n %s\n %s\n", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));}
#line 1492 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 63 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n %s\n",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1498 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 64 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n %s\n %s\n %s\n", (yyvsp[-3].str),(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));}
#line 1504 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 65 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n %s\n %s\n",(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));}
#line 1510 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 68 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("PROGRAM %s\n", (yyvsp[0].str));}
#line 1516 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 71 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n");}
#line 1522 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 75 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("STRUCT %s\n %s\n ENDSTRUCT", (yyvsp[-2].str),(yyvsp[-1].str));}
#line 1528 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 76 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("TYPEDEF STRUCT %s\n %s\n %s\n", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));}
#line 1534 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 79 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("FUNCTION %s (%s) \n %s\n %s\n %s\n", (yyvsp[-6].str),(yyvsp[-4].str),(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));}
#line 1540 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 82 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("VARS %s;\n", (yyvsp[-1].str));}
#line 1546 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 85 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n", (yyvsp[0].str));}
#line 1552 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 86 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n %s\n", (yyvsp[-1].str),(yyvsp[0].str));}
#line 1558 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 90 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n",(yyvsp[0].str)); }
#line 1564 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 91 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("RETURN %s\n;",(yyvsp[-1].str)); }
#line 1570 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 92 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("CONTINUE;\n"); }
#line 1576 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 93 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("BREAK;\n"); }
#line 1582 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 96 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("RETURN %s\n END_FUNCTION",(yyvsp[-1].str)); }
#line 1588 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 99 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("STARTMAIN() \n {\n %s\n %s\n }\n ENDMAIN", (yyvsp[-3].str),(yyvsp[-2].str));}
#line 1594 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 100 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("STARTMAIN() \n {\n %s\n }\n ENDMAIN", (yyvsp[-2].str));}
#line 1600 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 103 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s ENDSTRUCT", (yyvsp[-1].str));}
#line 1606 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 107 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s", (yyvsp[-1].str));}
#line 1612 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 108 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s, %s", (yyvsp[-3].str),(yyvsp[0].str));}
#line 1618 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 111 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s", (yyvsp[-1].str),(yyvsp[0].str));}
#line 1624 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 115 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("INTEGER"); }
#line 1630 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 116 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("CHAR"); }
#line 1636 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 121 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str));}
#line 1642 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 122 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s", (yyvsp[-1].str),(yyvsp[0].str));}
#line 1648 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 123 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s, %s", (yyvsp[-2].str),(yyvsp[0].str));}
#line 1654 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 127 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("[%s]\n", (yyvsp[-1].str));}
#line 1660 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 130 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s");}
#line 1666 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 131 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s");}
#line 1672 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 134 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("PRINT(%s%s%s[%s]);\n", (yyvsp[-6].str), (yyvsp[-3].str)); }
#line 1678 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 135 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("PRINT(%s%s%s);\n", (yyvsp[-3].str)); }
#line 1684 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 136 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("SWITCH(%s)\n %s\n %s\n ENDSWITCH\n", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-1].str)); }
#line 1690 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 137 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("SWITCH(%s)\n %s\n ENDSWITCH\n", (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 1696 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 138 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("WHILE (%s)\n %s\n ENDWHILE\n",(yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1702 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 139 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("FOR %s:=%s TO %s STEP %s\n %s\n %s\n ENDFOR\n", (yyvsp[-10].str),(yyvsp[-2].str),(yyvsp[-1].str));}
#line 1708 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 140 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s=%s;\n",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1714 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 141 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("PRINT(%s%s%s[%s]);\n", (yyvsp[-6].str), (yyvsp[-3].str)); }
#line 1720 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 142 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("PRINT(%s%s%s);\n", (yyvsp[-3].str)); }
#line 1726 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 143 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("SWITCH(%s)\n %s\n %s\n ENDSWITCH\n", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-1].str)); }
#line 1732 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 144 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("SWITCH(%s)\n %s\n ENDSWITCH\n", (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 1738 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 145 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("WHILE (%s)\n %s\n ENDWHILE'\n",(yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1744 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 146 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("FOR %s:=%s TO %s STEP %s\n %s\n %s\n ENDFOR\n", (yyvsp[-10].str), (yyvsp[-2].str),(yyvsp[-1].str));}
#line 1750 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 147 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("IF (%s) THEN\n %s\n %s\n %s\n ENDIF\n", (yyvsp[-6].str),(yyvsp[-3].str),(yyvsp[-2].str),(yyvsp[-1].str));}
#line 1756 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 148 "myparser.y" /* yacc.c:1646  */
    {(yyval.str) = template("IF (%s) THEN\n %s\n ENDIF\n", (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1762 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 149 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s=%s;",(yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1768 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 153 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("CASE(%s):\n %s",(yyvsp[-3].str),(yyvsp[0].str)); }
#line 1774 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 154 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("CASE(%s):\n %s\n %s",(yyvsp[-4].str),(yyvsp[-1].str),(yyvsp[0].str)); }
#line 1780 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 155 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("CASE(%s):\n %s",(yyvsp[-3].str),(yyvsp[0].str)); }
#line 1786 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 156 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("CASE(%s):\n %s\n %s",(yyvsp[-4].str),(yyvsp[-1].str),(yyvsp[0].str)); }
#line 1792 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 160 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("DEFAULT:\n %s",(yyvsp[0].str)); }
#line 1798 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 164 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("ELSEIF\n %s",(yyvsp[0].str)); }
#line 1804 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 165 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("ELSEIF\n %s\n %s\n %s",(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)); }
#line 1810 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 166 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("ELSEIF\n %s\n %s\n %s",(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)); }
#line 1816 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 170 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("ELSE\n %s",(yyvsp[0].str)); }
#line 1822 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 174 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s"); }
#line 1828 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 175 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s (%s)",(yyvsp[-1].str)); }
#line 1834 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 176 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("(%s)",(yyvsp[-1].str)); }
#line 1840 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 177 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s"); }
#line 1846 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 178 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s"); }
#line 1852 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 179 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s + %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1858 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 180 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s - %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1864 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 181 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s * %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1870 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 182 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s / %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1876 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 186 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s == %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1882 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 187 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s >= %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1888 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 188 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s <= %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1894 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 189 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s > %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1900 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 190 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s < %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1906 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 191 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s != %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1912 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 192 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s and %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1918 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 193 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s && %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1924 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 194 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s or %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1930 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 195 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s || %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1936 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 196 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s not %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1942 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 197 "myparser.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s ! %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1948 "myparser.tab.c" /* yacc.c:1646  */
    break;


#line 1952 "myparser.tab.c" /* yacc.c:1646  */
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
#line 200 "myparser.y" /* yacc.c:1906  */


int main(int argc, char *argv[]){
    ++argv; --argc;  
    int parser_return_value = 0;
    if (argc==1) {
        FILE *file_pointer = fopen(argv[0],"r");
        if (file_pointer!=NULL) {
            yyin = file_pointer;   
            parser_return_value = yyparse();
        } 
        else {
            printf("Error!!!\n");
            return 1;
        }
    } 
    else {
           printf ("Loading...\n");
           parser_return_value = yyparse();
    }
    if (parser_return_value==0) {
        printf(" No errors detected!!\n");
    } 
    else {
        printf("\nLoading failed!!\n");
    }
    return 0;
}
