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
#line 2 "parser.y" /* yacc.c:339  */


	#include<stdio.h>
	#include <stdbool.h>

	#pragma warning(disable: 4996)
	extern int yylex();
	extern int linea ;
	extern char* gramaticas[50000];
	extern char* yytext;
	int lineaactual=0;



#line 81 "parser.tab.c" /* yacc.c:339  */

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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    LITERAL = 258,
    INCLUDE = 259,
    DEFINE = 260,
    LEFT_BRACKET = 261,
    RIGHT_BRACKET = 262,
    COMMA = 263,
    LEFT_PARENTHESIS = 264,
    RIGHT_PARENTHESIS = 265,
    RIGHT_SBRACKET = 266,
    LEFT_SBRACKET = 267,
    SEMICOLON = 268,
    COLON = 269,
    EXCLAMATION = 270,
    PRIME = 271,
    INTERROGATION = 272,
    UP_ARROW = 273,
    DOT = 274,
    BIT_AND = 275,
    BIT_OR = 276,
    COMMENT = 277,
    PLUS = 278,
    MINUS = 279,
    DIV = 280,
    MOD = 281,
    MUL = 282,
    EQU = 283,
    LESS = 284,
    GREATER = 285,
    IDENTIFIER = 286,
    CONSTANT = 287,
    SIZEOF = 288,
    INTEGER = 289,
    PTR_OP = 290,
    INC_OP = 291,
    DEC_OP = 292,
    LEFT_OP = 293,
    RIGHT_OP = 294,
    LE_OP = 295,
    GE_OP = 296,
    EQ_OP = 297,
    NE_OP = 298,
    AND_OP = 299,
    OR_OP = 300,
    MUL_ASSIGN = 301,
    DIV_ASSIGN = 302,
    MOD_ASSIGN = 303,
    ADD_ASSIGN = 304,
    SUB_ASSIGN = 305,
    LEFT_ASSIGN = 306,
    RIGHT_ASSIGN = 307,
    AND_ASSIGN = 308,
    XOR_ASSIGN = 309,
    OR_ASSIGN = 310,
    TYPEDEF = 311,
    EXTERN = 312,
    STATIC = 313,
    AUTO = 314,
    REGISTER = 315,
    CHAR = 316,
    SHORT = 317,
    INT = 318,
    LONG = 319,
    SIGNED = 320,
    UNSIGNED = 321,
    FLOAT = 322,
    DOUBLE = 323,
    CONST = 324,
    VOLATILE = 325,
    VOID = 326,
    STRUCT = 327,
    UNION = 328,
    ENUM = 329,
    ELLIPSIS = 330,
    CASE = 331,
    DEFAULT = 332,
    IF = 333,
    ELSE = 334,
    SWITCH = 335,
    WHILE = 336,
    DO = 337,
    FOR = 338,
    GOTO = 339,
    CONTINUE = 340,
    BREAK = 341,
    RETURN = 342
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 220 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  244
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4053

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  368
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  616

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      88,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    40,    41,    42,    43,    44,    45,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    61,
      62,    63,    64,    65,    66,    67,    72,    73,    77,    78,
      79,    80,    81,    82,    83,    84,    88,    89,    90,    91,
      92,    93,    97,    98,    99,   100,   101,   102,   109,   110,
     111,   112,   116,   117,   118,   119,   120,   121,   122,   126,
     127,   128,   132,   133,   134,   135,   136,   140,   141,   142,
     146,   147,   151,   152,   156,   157,   161,   162,   166,   167,
     171,   172,   176,   177,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   195,   196,   200,   204,   205,
     206,   207,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   222,   223,   228,   229,   233,   234,   235,   240,
     241,   242,   243,   244,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   263,   264,   265,   269,   270,
     274,   275,   276,   280,   281,   285,   286,   288,   289,   294,
     295,   299,   300,   301,   305,   306,   307,   311,   312,   316,
     317,   321,   322,   326,   327,   328,   329,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   346,   347,   349,
     354,   355,   356,   357,   361,   362,   363,   364,   368,   369,
     374,   375,   381,   382,   383,   384,   385,   386,   388,   389,
     390,   391,   395,   396,   399,   400,   403,   404,   409,   410,
     411,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     427,   428,   429,   433,   434,   438,   439,   440,   441,   442,
     443,   447,   448,   449,   453,   454,   455,   456,   460,   461,
     462,   466,   467,   468,   469,   473,   474,   478,   479,   480,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   498,   499,   500,   501,   502,   506,   507,   508,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   525,   526,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,   587,   588,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,   611,   614,   615,   616,   617,   618,   619,   620
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LITERAL", "INCLUDE", "DEFINE",
  "LEFT_BRACKET", "RIGHT_BRACKET", "COMMA", "LEFT_PARENTHESIS",
  "RIGHT_PARENTHESIS", "RIGHT_SBRACKET", "LEFT_SBRACKET", "SEMICOLON",
  "COLON", "EXCLAMATION", "PRIME", "INTERROGATION", "UP_ARROW", "DOT",
  "BIT_AND", "BIT_OR", "COMMENT", "PLUS", "MINUS", "DIV", "MOD", "MUL",
  "EQU", "LESS", "GREATER", "IDENTIFIER", "CONSTANT", "SIZEOF", "INTEGER",
  "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "'\\n'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "pointer_type", "type_qualifier_list", "parameter_type_list",
  "parameter_declaration", "identifier_list", "parameter_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "initializer", "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration", "define",
  "define_options", "function_definition", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,    10
};
# endif

#define YYPACT_NINF -469

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-469)))

#define YYTABLE_NINF -365

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1859,    35,  1179,  1265,  3048,  -469,    16,    50,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,    19,  -469,  -469,
     107,   120,  -469,  2368,  3301,  -469,    41,   167,  -469,  3320,
    2242,   692,   100,    15,  1077,  -469,  1021,  -469,  -469,  -469,
      61,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,  1179,  -469,  1350,  -469,  2314,
    -469,  -469,  -469,    45,  -469,  -469,    71,    42,   973,  -469,
    3792,  -469,  3824,  3824,  3856,    98,   115,   138,   173,  1868,
     188,   183,   205,   208,  3440,    74,   300,  1428,  3856,  -469,
     413,   245,   -11,   186,   252,   228,   210,   251,   209,     4,
    -469,  -469,   136,  -469,   107,  3888,   114,   256,  -469,  -469,
    1435,  1520,  -469,  -469,  -469,  -469,   992,   268,  3133,   272,
    3198,  -469,  -469,   254,   307,  -469,   172,  2242,  3028,   143,
    -469,  -469,  -469,   167,  2368,  1242,   312,  2674,  3472,    84,
    -469,   174,  -469,   167,  3920,   619,  -469,   265,  -469,  1775,
    2693,  3504,   100,  3920,   100,  -469,  -469,  -469,   636,  -469,
    -469,    15,  -469,  2368,  -469,  -469,    80,  -469,  3387,   316,
     902,  1097,   159,   306,  3536,  3217,  3952,  -469,   300,   202,
    1868,  2386,  -469,  -469,  -469,   902,  -469,   345,  1868,  3856,
    3856,  3856,   357,   249,  2170,   361,  -469,  -469,  -469,   230,
    -469,   794,  3568,  3856,   347,   352,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  3856,
    -469,  3856,  3856,  3856,  3856,  3856,  3856,  3856,  3856,  3856,
    3856,  3856,  3856,  3856,  3856,  3856,  3856,  3856,  3856,  3856,
    3856,  3856,  3856,  3856,  3856,  -469,  2458,   391,  1179,  -469,
    -469,  1605,  -469,  -469,  1775,   721,  1497,   340,   143,  -469,
    -469,  -469,   368,   293,  -469,   254,  -469,  -469,  1775,  3114,
    -469,  -469,   579,  1497,  2943,  -469,   579,  1242,  2026,  -469,
     240,   390,   391,   548,  -469,    27,   394,  -469,   397,   396,
    -469,   398,   174,  2765,  3600,  3632,   300,  -469,  -469,  1096,
    1775,  -469,   738,   272,   403,   409,  -469,   410,   636,  -469,
     636,  2693,  -469,  -469,  -469,   395,   401,  -469,   412,   423,
    3664,   202,  3856,  3856,   405,  3856,  -469,   204,   427,   432,
    1868,  -469,   314,   319,   331,   434,  1775,  3696,  -469,  -469,
     202,   202,  3984,   391,  -469,   336,  -469,    57,  -469,  -469,
    -469,   228,  -469,  -469,  -469,   245,   245,   209,   265,   265,
     245,   245,   -11,   -11,   -11,   -11,   186,   186,   252,   228,
     210,   251,   148,   209,  -469,  -469,  -469,  -469,  -469,   231,
    3856,  -469,   254,   369,    20,   438,  3856,   232,  -469,   436,
    -469,   579,  -469,   455,  1775,   267,  2962,  2098,  4016,    74,
      79,   415,  1327,  2674,  -469,  -469,  -469,  1953,  -469,  -469,
    -469,   445,  -469,   446,  -469,   381,   143,  2875,  -469,  2784,
    -469,  -469,  -469,   426,   441,   449,  3856,   385,   154,   391,
    -469,  -469,   452,  -469,  3856,  -469,  1868,  1868,  1775,  3856,
    1690,  3856,  3728,   391,   391,  2530,  -469,  3856,  -469,  -469,
    3856,  -469,  -469,  -469,  -469,  -469,  -469,   579,  -469,  3856,
    -469,  -469,  1962,  3536,  2602,  -469,   192,   456,  -469,  -469,
    -469,  -469,  -469,  3760,  2875,  -469,   462,  -469,   447,  3856,
    -469,  -469,  -469,  -469,   393,  -469,  -469,  -469,   337,  1775,
     356,  1775,   362,   204,   470,  -469,  -469,  -469,  -469,   865,
     161,   471,  -469,   475,  -469,  -469,  -469,  2856,   454,   193,
    1868,   477,  -469,  -469,  1775,  -469,  -469,  1775,   478,  -469,
    2098,   481,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  3888,  3282,  -469
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     268,     0,     0,     0,     0,   276,   185,   184,   167,   119,
     120,   121,   122,   123,   125,   126,   127,   128,   131,   132,
     129,   130,   161,   162,   124,   138,   139,     0,   275,   270,
       0,     0,   114,   102,   104,   133,     0,   206,   134,   112,
     116,   164,     0,   180,   105,   277,     0,   266,   269,   272,
       0,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   278,   271,     0,     4,     0,   234,     0,
     245,    41,    40,    36,    38,    39,    37,     0,     2,     3,
       0,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    28,    42,     0,    51,
      52,    59,    62,    67,    70,    72,    74,    76,    78,    80,
      82,    95,     0,   238,     0,   116,     0,   241,   225,   226,
       0,     0,   227,   228,   229,   230,     0,     0,   104,     0,
     105,   187,   186,     0,   156,    98,     0,   116,   164,     0,
     101,   103,   106,   145,   108,     0,   137,     0,     0,   208,
     207,   209,   113,   147,     0,     2,    42,   118,   365,     0,
       0,     0,     0,     0,     0,   168,   169,   165,   163,   188,
     182,   181,   107,   109,     1,   267,     0,   279,   234,     0,
       0,     2,     0,     0,   116,   105,     0,     2,    29,     0,
       0,     0,    33,    30,    31,     0,    97,     0,     0,     0,
       0,     0,     2,     0,     0,     0,   262,   263,   264,     0,
       7,     0,     0,     0,     0,     0,    21,    22,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   246,     0,    10,     0,   236,
     239,     0,   235,   243,   244,   146,   148,     0,     0,   173,
     172,   174,   159,     0,   157,     0,    99,   363,     0,     0,
     115,   110,     0,   146,     0,   140,     0,     0,     0,   216,
       2,     0,   201,   194,   195,   208,     0,   204,   190,     0,
     212,     0,   210,     0,     0,     0,    28,   220,   117,   226,
     240,   179,   167,   195,     0,     0,   176,     0,   170,   166,
     171,     0,   189,   183,   111,     0,     0,    16,     0,     0,
       0,     5,     0,   174,     2,     0,   231,     2,     0,     0,
       0,   233,     0,     0,     0,     0,     0,     0,   261,   265,
       0,     0,     0,    11,    17,     0,    26,     0,    19,    20,
      83,    53,    49,    50,    48,    55,    56,    54,    57,    58,
      60,    61,    63,    64,    65,    66,    68,    69,    71,    73,
      75,    77,     0,    79,    96,   242,   237,   145,   147,     0,
       0,   154,     0,     0,   226,   368,     0,     0,   149,   151,
     136,   167,   141,   206,   142,     0,     0,     0,     0,     9,
     208,   196,     0,     0,   192,   193,   217,     0,   211,   213,
     218,     0,   214,     0,   223,     0,     0,     0,   366,     0,
     177,   178,   175,     0,     0,     0,     0,    52,     0,     8,
      44,    43,     0,    34,     0,   232,     0,     0,     0,     0,
       0,   227,     0,    13,    12,     0,    23,     0,    18,    14,
       0,   100,   160,   158,   155,   367,   152,     0,   144,     0,
     143,   135,     2,   116,     0,   197,     0,     0,   191,   205,
     219,   215,   221,     0,     0,   202,   203,   273,     0,     0,
      45,    46,    47,    35,   247,   249,   256,   250,     0,     0,
       0,     0,     0,     2,     0,    27,    81,   150,   153,   208,
       2,     0,   200,     0,   198,   222,   224,     0,     0,     0,
       0,     0,   260,   255,     0,   257,   252,     0,     0,    24,
       0,     0,    34,   199,   274,    15,   248,   251,   259,   254,
     258,   253,    25,   116,   105,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -469,   444,  -121,  -469,   377,  -469,  -145,   -32,  -296,    -9,
      81,   175,  -194,   178,   171,  -244,  -469,   -76,  -202,  -469,
     474,  -164,    52,    56,   -18,   285,  -469,   503,  -469,  -469,
     144,  -347,   250,  -343,   -42,  -469,   158,    43,    92,    29,
      76,     0,  -469,  -469,  -219,  -468,     5,     9,    67,   -20,
    -214,  -232,  -469,   442,  -469,    86,    13,    -1,  -256,  -469,
    -469,  -469,  -469,   463,  -129,  -469,   134
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   165,   166,   425,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   299,
     182,   267,   183,   184,    31,    32,    33,    34,    35,    36,
     354,   355,    37,   467,   468,    38,   343,   344,    39,   185,
      41,   259,    43,   241,   366,   367,   385,   368,    44,   369,
     221,   378,   495,   187,   188,   189,   334,   380,   192,   193,
     194,   195,    46,    47,   134,   135,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,   389,   191,   186,    42,   372,   247,   472,   227,   435,
     436,   384,   206,   475,   440,   441,   190,   220,   417,   549,
    -362,   322,   377,   300,  -362,   203,   258,   310,   311,    40,
      42,   377,   201,   199,   214,     6,   483,   219,    49,   218,
     186,    42,     7,   240,   243,   136,    42,   215,   249,   323,
     204,   256,    29,   229,   371,  -185,    30,  -185,     8,   207,
     197,   201,     6,   437,    50,   324,   202,   387,   529,     7,
     237,   200,   216,   257,   149,    40,   151,   280,   266,   453,
     426,  -184,   136,  -184,    22,    23,    45,   202,   358,   211,
     212,   218,   246,   217,     6,   222,   218,   430,    29,   395,
     242,     7,    30,   376,   508,   396,   208,   431,  -362,   196,
     225,   149,   268,   151,  -185,  -185,   196,   136,   238,   549,
     205,   253,   454,   326,   269,   449,   228,     6,   209,   472,
     475,     8,    45,   210,     7,   239,   191,   186,     8,   186,
    -184,  -184,   266,   494,   324,   225,   149,   270,   151,   325,
     190,   372,   196,   227,   491,   266,   324,   432,   433,   434,
     521,   522,   530,     6,   562,   281,   206,   324,   254,   401,
       7,   582,   384,   377,     8,   227,   217,   308,   309,   218,
     209,     6,   271,   373,    42,   346,   374,     6,     7,   331,
     186,   186,   399,   220,     7,   197,    42,   274,   214,   455,
     243,   324,   582,   220,   605,   136,   255,   186,    42,    42,
     493,   405,     6,   219,   275,   312,   313,   365,   276,     7,
     348,   277,   227,   219,     6,   199,   314,   315,   319,   186,
      42,     7,   253,   257,   149,   399,   151,   237,   324,   209,
     537,   393,   330,   419,   531,   538,   364,   253,   318,   217,
     186,   400,   218,   321,   212,   243,   242,   510,   511,   383,
       6,   328,   238,   337,   349,   186,   372,     7,   308,   309,
     351,  -167,   320,   363,   186,   537,   438,   439,   338,   254,
     540,   330,   340,   508,   213,   342,   363,   416,   336,   223,
     302,   303,   304,   347,   316,   317,   532,   200,   266,   394,
     461,   462,   536,   442,   443,   444,   445,   336,   388,   282,
     390,   242,   283,   345,   209,   379,   402,   398,   357,   284,
     459,   586,   324,   397,   516,   575,   186,   324,   408,   517,
     415,   186,   409,   392,   186,   285,   286,   287,    42,   324,
     481,   518,   336,   485,   527,   324,   528,   591,   186,    42,
     341,   377,    42,   336,    42,   199,    42,   336,   480,   410,
     219,   560,   481,   365,   324,   372,   594,   474,   507,   511,
     324,   260,   597,    42,   418,   578,   534,   462,   428,    42,
     186,   469,   219,   429,   266,   469,   330,   383,   552,   553,
     266,    42,   484,   337,   280,   561,   460,   446,   447,   482,
     330,   465,   364,   301,   486,   487,   488,   512,   497,   489,
     302,   303,   304,   500,   363,   520,   186,   226,   336,   501,
     364,   502,   403,   305,   306,   200,   503,   336,   336,   363,
     307,   301,   504,   505,   464,   496,   399,   513,   302,   303,
     304,   238,   514,   519,     3,   336,   545,   363,   213,   336,
     539,   305,   306,   220,   576,   550,   557,   551,   307,   253,
     558,   559,   563,   266,   483,   356,   584,   218,   330,   466,
     587,    42,   590,   365,   186,     6,    42,   480,   588,   281,
     599,   602,     7,   365,   604,   603,     8,    42,   612,   474,
     607,   615,   451,   448,   350,   577,    42,    42,   450,    42,
     469,   476,   469,   463,   555,   533,   543,   198,   556,   245,
     229,   227,   383,   498,     0,     0,   364,     0,   186,     0,
     186,     0,   481,     0,     0,   554,   330,   262,   364,   263,
     264,   226,     0,   363,     0,     0,     0,    42,     0,   363,
       0,     0,   579,   363,   255,   226,   583,   507,     0,   547,
     200,   535,     0,     0,    42,   363,   238,   483,     0,     0,
     218,     0,   226,     0,     0,     0,   469,   348,     6,   186,
     566,   186,   208,   598,   336,     7,     0,     0,     0,     8,
     601,   227,   253,   228,   226,   457,   458,    42,   196,     0,
       0,     0,   574,   466,   186,   226,     0,   186,     0,     6,
     480,   273,     0,   457,   473,     0,     7,   356,   226,     0,
       8,   581,     0,   252,   243,     0,   364,   336,     0,     0,
       0,   592,     0,   595,     0,  -167,     0,     0,     0,   613,
     327,   226,     0,   333,  -167,  -167,   336,     0,   279,     0,
     347,     0,   198,   363,     0,   391,   608,     0,   231,   610,
    -167,  -167,  -167,  -167,     0,   232,   363,     0,     0,     0,
       0,   362,     0,     0,     0,     0,     0,   614,     0,     0,
     242,   234,   235,   236,   362,     0,     0,     0,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   335,
     226,   230,   406,   327,   231,     0,     0,     0,     0,     0,
     411,   232,     6,     0,     0,     0,     0,     0,   353,     7,
     233,     0,     0,     8,   252,   423,   473,   234,   235,   236,
     252,   339,     0,   198,     0,   252,     0,     0,     0,   252,
       0,    -2,     0,   412,   413,   414,   499,   217,    -2,     0,
     218,   226,     0,   335,     0,     0,     0,   427,     6,     0,
       0,     0,     0,     0,   353,     7,     0,     0,   353,     0,
       0,     0,     0,   333,     0,     0,     0,   226,     0,   226,
     226,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,   452,   136,     0,   526,
     252,     0,   479,   405,     0,     0,     0,     0,     0,   420,
       0,     0,     0,     0,     0,     0,     0,   362,   421,     0,
       0,     0,   333,     0,     0,   257,   149,   422,   151,   335,
       0,     0,   252,     0,     0,   362,     0,   226,   353,   353,
       0,     0,     0,   226,     0,   509,     0,     0,     0,     0,
       0,     0,   515,     0,     0,   262,   353,     0,     0,     0,
     353,   198,     0,     0,   523,   524,     0,     0,   136,     0,
       0,   249,     0,     0,   600,   506,     0,   218,     0,   252,
     141,   142,     0,   226,     0,   143,     0,     0,   144,   145,
       0,   226,   146,   147,     0,     0,   257,   149,   150,   151,
       0,   152,   153,     0,     0,   136,     0,   226,   249,     0,
       0,   250,     0,     0,     0,     0,   226,   141,   142,     0,
     226,   479,   143,     0,   327,   144,   145,   362,     0,   146,
     147,   362,     0,   251,   149,   150,   151,     0,   152,   153,
       0,     0,     0,   362,     0,     0,     0,     0,     0,     0,
       0,   252,     0,     0,     0,     0,   226,     0,   564,   565,
     567,     0,   333,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,  -167,
     198,     0,     0,     0,     0,   353,   198,   260,  -167,  -167,
     226,     0,     0,   568,     0,   570,   572,     0,     0,   252,
       0,   196,     0,     0,  -167,  -167,  -167,  -167,     0,     0,
       0,   593,     6,   596,     0,     0,     0,     0,   252,     7,
       0,   244,     0,     8,     0,     1,     2,     3,   353,     0,
       4,   362,   606,   589,     5,     0,   609,     0,     0,   611,
       0,     6,     0,     0,   479,     0,     0,   353,     7,     0,
       0,     0,     8,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,     0,
       0,     0,     0,     0,   252,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,  -364,     6,     0,     0,
    -364,     0,     0,  -167,     7,   196,     0,     0,     0,    28,
       0,     0,  -167,  -167,     0,     0,     6,     6,     0,     0,
       0,     0,     0,     7,     7,     0,     0,     8,   399,  -167,
    -167,  -167,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,  -364,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,     0,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   136,     0,
       0,   137,   138,   352,   139,     0,     0,     0,   140,     0,
     141,   142,     0,     0,     0,   143,     0,     0,   144,   145,
       0,     0,   146,   147,     0,     0,   148,   149,   150,   151,
       0,   152,   153,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,   154,   155,   156,     0,   157,   158,   159,   160,   161,
     162,   163,   164,   136,     0,     0,   137,   248,   546,   139,
       0,     0,     0,   140,     0,   141,   142,     0,     0,     0,
     143,     0,     0,   144,   145,     0,     0,   146,   147,     0,
       0,   148,   149,   150,   151,     0,   152,   153,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,   154,   155,   156,     0,
     157,   158,   159,   160,   161,   162,   163,   164,   136,     0,
       0,   137,   329,     0,   139,     0,     0,     0,   140,     0,
     141,   142,     0,     0,     0,   143,   288,     0,   144,   145,
       0,     0,   146,   147,     0,     0,   148,   149,   150,   151,
       0,   152,   153,     0,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,   154,   155,   156,     0,   157,   158,   159,   160,   161,
     162,   163,   164,   136,     0,     0,   137,   332,     0,   139,
       0,     0,     0,   140,     0,   141,   142,     0,     0,     0,
     143,     0,     0,   144,   145,     0,     0,   146,   147,     0,
       0,   148,   149,   150,   151,     0,   152,   153,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,   154,   155,   156,     0,
     157,   158,   159,   160,   161,   162,   163,   164,   136,     0,
       0,   137,   456,     0,   139,     0,     0,     0,   140,     0,
     141,   142,     0,     0,     0,   143,     0,     0,   144,   145,
       0,     0,   146,   147,     0,     0,   148,   149,   150,   151,
       0,   152,   153,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,   154,   155,   156,     0,   157,   158,   159,   160,   161,
     162,   163,   164,   136,     0,     0,   137,     0,     0,   139,
     569,     0,     0,   140,     0,   141,   142,     0,     0,     0,
     143,     0,     0,   144,   145,     0,     0,   146,   147,     0,
       0,   148,   149,   150,   151,     0,   152,   153,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,   154,   155,   156,     0,
     157,   158,   159,   160,   161,   162,   163,   164,   136,     0,
       0,   137,     0,     0,   139,     0,     0,     0,   140,     0,
     141,   142,     0,     0,     0,   143,     0,     0,   144,   145,
       0,     0,   146,   147,     0,     0,   148,   149,   150,   151,
       0,   152,   153,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,   154,   155,   156,     0,   157,   158,   159,   160,   161,
     162,   163,   164,     1,     2,     3,     0,     0,     4,     0,
       0,   136,     5,     0,   137,     0,     0,   265,     0,     6,
       0,   140,     0,   141,   142,     0,     7,     0,   143,     0,
       8,   144,   145,     0,     0,   146,   147,     0,     0,   272,
     149,   150,   151,     0,   152,   153,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   154,   155,   156,    28,   157,   158,
     159,   160,   161,   162,   163,   164,   136,     0,     0,     0,
       0,     0,   326,     0,     0,     0,     0,     0,  -167,     0,
       0,   217,     0,     6,   218,     0,     0,  -167,  -167,     0,
       7,     0,     6,     0,   360,   149,   361,   151,     0,     7,
       0,     0,     0,   399,  -167,  -167,  -167,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   548,   136,
       0,     0,   249,     0,     0,   477,   359,     0,   218,     0,
       0,   141,   142,     0,     0,     0,   143,     0,     0,   144,
     145,     0,     0,   146,   147,     0,     0,   360,   149,   478,
     151,     0,   152,   153,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   136,     0,     0,   249,     0,     0,   477,   359,     0,
     218,     0,     0,   141,   142,     0,     0,     0,   143,     0,
       0,   144,   145,     0,     0,   146,   147,     0,     0,   542,
     149,   478,   151,     0,   152,   153,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   136,     0,     0,   249,     0,     0,   139,
       0,     0,     0,   140,     0,   141,   142,     0,     0,     0,
     143,     0,     0,   144,   145,     0,     0,   146,   147,     0,
       0,   225,   149,   150,   151,     0,   152,   153,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   136,     0,     0,   137,     0,
       0,   139,     0,     0,     0,     0,     0,   141,   142,     0,
       0,     0,   143,     0,     0,   144,   145,     0,     0,   146,
     224,     0,     0,   225,   149,   150,   151,     0,   152,   153,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   136,     0,     0,
     249,     0,     0,   250,     0,     0,     0,     0,     0,   141,
     142,     0,     0,     0,   143,     0,     0,   144,   145,     0,
       0,   146,   147,     0,     0,   251,   149,   150,   151,     0,
     152,   153,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   136,
       0,     0,   249,     0,     0,   265,     0,     0,     0,     0,
       0,   141,   142,     0,     0,     0,   143,     0,     0,   144,
     145,     0,     0,   146,   147,     0,     0,   407,   149,   150,
     151,     0,   152,   153,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     0,     0,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   136,     0,     0,   249,     0,     0,   250,     0,     0,
       0,     0,     0,   141,   142,     0,     0,     0,   143,     0,
       0,   144,   145,     0,     0,   146,   147,     0,     0,   225,
     149,   150,   151,     0,   152,   153,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   136,     0,     0,   249,     0,     0,   265,
       0,     0,     0,     0,     0,   141,   142,     0,     0,     0,
     143,     0,     0,   144,   145,     0,     0,   146,   147,     0,
       0,   573,   149,   150,   151,     0,   152,   153,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   136,     0,     0,   249,     0,
       0,   265,     0,     0,     0,     0,     0,   141,   142,     0,
       0,     0,   143,     0,     0,   144,   145,     0,     0,   146,
     147,     0,     0,   580,   149,   150,   151,     0,   152,   153,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   136,     0,     0,
       0,     0,     0,   358,   359,     0,   218,     0,     0,     0,
       0,     0,     0,     0,     6,     0,   136,     0,     0,     0,
       0,     7,   326,   381,     0,   360,   149,   361,   151,     0,
       0,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     0,   382,   149,   361,   151,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   136,     0,
       0,     0,     0,     0,   326,   490,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     6,     0,   136,     0,     0,
       0,     0,     7,   326,     0,     0,   360,   149,   361,   151,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     0,   382,   149,   361,   151,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   136,
       0,     0,     0,     0,     0,   326,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     3,     0,     7,     4,     0,     0,   360,   149,   361,
     151,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     7,     0,     0,     0,     8,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     470,     0,     4,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,     0,     0,     0,     0,     0,   541,
       7,     4,     0,     0,   471,     0,     0,     0,     0,     0,
       0,     0,     6,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     0,   471,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   230,     0,     0,
     231,     0,     0,     0,     0,     0,     0,   232,     6,     0,
       0,     0,     0,     0,     0,     7,   233,   196,     0,     8,
       0,     0,     0,   234,   235,   236,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,     8,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     7,     0,   339,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   341,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     7,     0,   403,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   514,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     0,     0,     0,  -146,     0,     0,     0,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     0,     0,  -148,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   -16,   -16,     0,     0,   -16,
     -16,     0,     0,     0,   -16,   -16,   -16,   -16,   -16,     0,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,     0,     0,
       0,     0,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   136,     0,     0,   249,     0,     0,   265,
       0,     0,     0,   278,     0,   141,   142,     0,     0,     0,
     143,     0,     0,   144,   145,     0,     0,   146,   147,     0,
       0,   257,   149,   150,   151,   136,   152,   153,   249,     0,
       0,   265,     0,   370,     0,     0,     0,   141,   142,     0,
       0,     0,   143,     0,     0,   144,   145,     0,     0,   146,
     147,     0,     0,   257,   149,   150,   151,   136,   152,   153,
     249,     0,     0,   265,     0,   386,     0,     0,     0,   141,
     142,     0,     0,     0,   143,     0,     0,   144,   145,     0,
       0,   146,   147,     0,     0,   257,   149,   150,   151,   136,
     152,   153,   249,     0,     0,   265,   340,     0,     0,     0,
       0,   141,   142,     0,     0,     0,   143,     0,     0,   144,
     145,     0,     0,   146,   224,     0,     0,   257,   149,   150,
     151,   136,   152,   153,   249,     0,     0,   265,   424,     0,
       0,     0,     0,   141,   142,     0,     0,     0,   143,     0,
       0,   144,   145,     0,     0,   146,   147,     0,     0,   257,
     149,   150,   151,   136,   152,   153,   249,     0,     0,   265,
       0,   492,     0,     0,     0,   141,   142,     0,     0,     0,
     143,     0,     0,   144,   145,     0,     0,   146,   147,     0,
       0,   257,   149,   150,   151,   136,   152,   153,   375,   397,
       0,   265,     0,     0,     0,     0,     0,   141,   142,     0,
       0,     0,   143,     0,     0,   144,   145,     0,     0,   146,
     147,     0,     0,   257,   149,   150,   151,   136,   152,   153,
     249,     0,     0,   265,   506,     0,     0,     0,     0,   141,
     142,     0,     0,     0,   143,     0,     0,   144,   145,     0,
       0,   146,   147,     0,     0,   257,   149,   150,   151,   136,
     152,   153,   249,     0,     0,   265,     0,     0,     0,   140,
       0,   141,   142,     0,     0,     0,   143,     0,     0,   144,
     145,     0,     0,   146,   147,     0,     0,   257,   149,   150,
     151,   136,   152,   153,   249,     0,     0,   265,   571,     0,
       0,     0,     0,   141,   142,     0,     0,     0,   143,     0,
       0,   144,   145,     0,     0,   146,   147,     0,     0,   257,
     149,   150,   151,   136,   152,   153,   375,   585,     0,   265,
       0,     0,     0,     0,     0,   141,   142,     0,     0,     0,
     143,     0,     0,   144,   145,     0,     0,   146,   147,     0,
       0,   257,   149,   150,   151,   136,   152,   153,   249,     0,
       0,   261,     0,     0,     0,     0,     0,   141,   142,     0,
       0,     0,   143,     0,     0,   144,   145,     0,     0,   146,
     147,     0,     0,   257,   149,   150,   151,   136,   152,   153,
     249,     0,     0,   256,     0,     0,     0,     0,     0,   141,
     142,     0,     0,     0,   143,     0,     0,   144,   145,     0,
       0,   146,   147,     0,     0,   257,   149,   150,   151,   136,
     152,   153,   249,     0,     0,   265,     0,     0,     0,     0,
       0,   141,   142,     0,     0,     0,   143,     0,     0,   144,
     145,     0,     0,   146,   147,     0,     0,   257,   149,   150,
     151,   136,   152,   153,   249,     0,     0,   265,     0,     0,
       0,     0,     0,   141,   142,     0,     0,     0,   143,     0,
       0,   144,   145,     0,     0,   146,   224,     0,     0,   257,
     149,   150,   151,   136,   152,   153,   375,     0,     0,   265,
       0,     0,     0,     0,     0,   141,   142,     0,     0,     0,
     143,     0,     0,   144,   145,     0,     0,   146,   147,     0,
       0,   257,   149,   150,   151,   136,   152,   153,   249,     0,
       0,   265,     0,     0,     0,     0,     0,   141,   142,     0,
       0,     0,   143,     0,     0,   144,   145,     0,     0,   146,
     147,     0,     0,   404,   149,   150,   151,   136,   152,   153,
     249,     0,     0,   525,     0,     0,     0,     0,     0,   141,
     142,     0,     0,     0,   143,     0,     0,   144,   145,     0,
       0,   146,   147,     0,     0,   257,   149,   150,   151,   136,
     152,   153,   249,     0,     0,   544,     0,     0,     0,     0,
       0,   141,   142,     0,     0,     0,   143,     0,     0,   144,
     145,     0,     0,   146,   147,     0,     0,   257,   149,   150,
     151,     0,   152,   153
};

static const yytype_int16 yycheck[] =
{
       0,   233,     3,     3,     4,   219,   135,   354,    40,   305,
     306,   230,    30,   356,   310,   311,     3,    37,   274,   487,
       0,    17,   224,   168,     4,     6,   147,    38,    39,     0,
      30,   233,    16,     4,    34,    20,     9,    37,     3,    12,
      40,    41,    27,    43,    44,     3,    46,     6,     6,    45,
      31,     9,     0,    40,   218,    10,     0,    12,    31,    30,
       4,    16,    20,   307,    29,     8,    16,   231,    11,    27,
      41,     4,    31,    31,    32,    46,    34,     3,   154,   323,
     282,    10,     3,    12,    69,    70,     0,    16,     9,    33,
      34,    12,    31,     9,    20,    39,    12,   299,    46,    19,
      44,    27,    46,   224,   400,    25,    30,   301,    88,     9,
      31,    32,    14,    34,    69,    70,     9,     3,    42,   587,
      13,   139,   324,     9,     9,   319,    40,    20,     8,   476,
     473,    31,    46,    13,    27,    43,   137,   137,    31,   139,
      69,    70,   218,   375,     8,    31,    32,     9,    34,    13,
     137,   365,     9,   185,   373,   231,     8,   302,   303,   304,
     416,   417,    14,    20,    10,   165,   184,     8,   139,    10,
      27,    10,   391,   375,    31,   207,     9,    23,    24,    12,
       8,    20,     9,     9,   184,    13,    12,    20,    27,   190,
     190,   191,    31,   213,    27,   139,   196,     9,   198,   328,
     200,     8,    10,   223,    11,     3,   139,   207,   208,   209,
     374,     9,    20,   213,    31,    29,    30,   217,    13,    27,
     207,    13,   254,   223,    20,   196,    40,    41,    18,   229,
     230,    27,   250,    31,    32,    31,    34,   208,     8,     8,
       8,   241,   190,    13,    13,    13,   217,   265,    20,     9,
     250,   251,    12,    44,   198,   255,   200,   402,   403,   230,
      20,     5,   186,   196,   208,   265,   480,    27,    23,    24,
     214,    31,    21,   217,   274,     8,   308,   309,    10,   250,
      13,   229,    10,   579,    34,    31,   230,   274,   196,    39,
      25,    26,    27,   207,    42,    43,   460,   230,   374,   243,
       7,     8,   466,   312,   313,   314,   315,   215,   232,     9,
     234,   255,    12,     6,     8,   229,    10,   250,     6,    19,
     338,   553,     8,     7,    10,   527,   326,     8,   261,    10,
      81,   331,   265,   241,   334,    35,    36,    37,   338,     8,
     360,    10,   250,   363,     8,     8,    10,    10,   348,   349,
      10,   553,   352,   261,   354,   326,   356,   265,   358,    14,
     360,   506,   382,   363,     8,   579,    10,   354,   400,   514,
       8,    14,    10,   373,    13,   539,     7,     8,    31,   379,
     380,   352,   382,    31,   460,   356,   334,   358,     7,     8,
     466,   391,   363,   326,     3,    10,    28,   316,   317,     9,
     348,   349,   373,    18,    10,     8,    10,   407,   379,    11,
      25,    26,    27,    10,   358,   416,   416,    40,   326,    10,
     391,    11,    10,    38,    39,   358,    31,   335,   336,   373,
      45,    18,    31,    10,   348,   379,    31,    10,    25,    26,
      27,   365,    10,     9,     6,   353,    31,   391,   198,   357,
      14,    38,    39,   473,   530,    10,    30,    11,    45,   477,
      19,    12,    10,   539,     9,   215,    10,    12,   416,    14,
       8,   471,    79,   473,   474,    20,   476,   477,    31,   479,
      10,    10,    27,   483,    30,    10,    31,   487,    10,   476,
      13,    10,   321,   318,   209,   537,   496,   497,   320,   499,
     471,   357,   473,   345,   499,   462,   477,     4,   499,    46,
     497,   543,   483,   379,    -1,    -1,   487,    -1,   518,    -1,
     520,    -1,   542,    -1,    -1,   496,   474,   150,   499,   152,
     153,   154,    -1,   477,    -1,    -1,    -1,   537,    -1,   483,
      -1,    -1,   542,   487,   477,   168,   546,   579,    -1,   482,
     483,   465,    -1,    -1,   554,   499,   480,     9,    -1,    -1,
      12,    -1,   185,    -1,    -1,    -1,   537,   554,    20,   569,
     518,   571,   496,   573,   482,    27,    -1,    -1,    -1,    31,
     580,   613,   600,   497,   207,   335,   336,   587,     9,    -1,
      -1,    -1,   525,    14,   594,   218,    -1,   597,    -1,    20,
     600,   159,    -1,   353,   354,    -1,    27,   357,   231,    -1,
      31,   544,    -1,   139,   614,    -1,   587,   525,    -1,    -1,
      -1,   569,    -1,   571,    -1,     6,    -1,    -1,    -1,   600,
     186,   254,    -1,   191,    15,    16,   544,    -1,   164,    -1,
     554,    -1,   139,   587,    -1,     9,   594,    -1,    12,   597,
      31,    32,    33,    34,    -1,    19,   600,    -1,    -1,    -1,
      -1,   217,    -1,    -1,    -1,    -1,    -1,   600,    -1,    -1,
     614,    35,    36,    37,   230,    -1,    -1,    -1,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   196,
     323,     9,   260,   259,    12,    -1,    -1,    -1,    -1,    -1,
     268,    19,    20,    -1,    -1,    -1,    -1,    -1,   215,    27,
      28,    -1,    -1,    31,   250,   281,   476,    35,    36,    37,
     256,    10,    -1,   230,    -1,   261,    -1,    -1,    -1,   265,
      -1,     3,    -1,   269,   270,   271,     8,     9,    10,    -1,
      12,   374,    -1,   250,    -1,    -1,    -1,   283,    20,    -1,
      -1,    -1,    -1,    -1,   261,    27,    -1,    -1,   265,    -1,
      -1,    -1,    -1,   331,    -1,    -1,    -1,   400,    -1,   402,
     403,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,   322,     3,    -1,   422,
     326,    -1,   358,     9,    -1,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   373,    24,    -1,
      -1,    -1,   380,    -1,    -1,    31,    32,    33,    34,   326,
      -1,    -1,   358,    -1,    -1,   391,    -1,   460,   335,   336,
      -1,    -1,    -1,   466,    -1,   401,    -1,    -1,    -1,    -1,
      -1,    -1,   410,    -1,    -1,   478,   353,    -1,    -1,    -1,
     357,   358,    -1,    -1,   420,   421,    -1,    -1,     3,    -1,
      -1,     6,    -1,    -1,     9,    10,    -1,    12,    -1,   405,
      15,    16,    -1,   506,    -1,    20,    -1,    -1,    23,    24,
      -1,   514,    27,    28,    -1,    -1,    31,    32,    33,    34,
      -1,    36,    37,    -1,    -1,     3,    -1,   530,     6,    -1,
      -1,     9,    -1,    -1,    -1,    -1,   539,    15,    16,    -1,
     543,   477,    20,    -1,   480,    23,    24,   483,    -1,    27,
      28,   487,    -1,    31,    32,    33,    34,    -1,    36,    37,
      -1,    -1,    -1,   499,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   477,    -1,    -1,    -1,    -1,   579,    -1,   516,   517,
     518,    -1,   520,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    -1,     6,
     477,    -1,    -1,    -1,    -1,   482,   483,    14,    15,    16,
     613,    -1,    -1,   519,    -1,   521,   522,    -1,    -1,   525,
      -1,     9,    -1,    -1,    31,    32,    33,    34,    -1,    -1,
      -1,   569,    20,   571,    -1,    -1,    -1,    -1,   544,    27,
      -1,     0,    -1,    31,    -1,     4,     5,     6,   525,    -1,
       9,   587,   590,   559,    13,    -1,   594,    -1,    -1,   597,
      -1,    20,    -1,    -1,   600,    -1,    -1,   544,    27,    -1,
      -1,    -1,    31,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   600,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,     0,    20,    -1,    -1,
       4,    -1,    -1,     6,    27,     9,    -1,    -1,    -1,    88,
      -1,    -1,    15,    16,    -1,    -1,    20,    20,    -1,    -1,
      -1,    -1,    -1,    27,    27,    -1,    -1,    31,    31,    32,
      33,    34,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    88,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,     3,    -1,
      -1,     6,     7,    31,     9,    -1,    -1,    -1,    13,    -1,
      15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,    34,
      -1,    36,    37,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    77,    78,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,     3,    -1,    -1,     6,     7,    31,     9,
      -1,    -1,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,    -1,    36,    37,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,     3,    -1,
      -1,     6,     7,    -1,     9,    -1,    -1,    -1,    13,    -1,
      15,    16,    -1,    -1,    -1,    20,    28,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,    34,
      -1,    36,    37,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    77,    78,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,     3,    -1,    -1,     6,     7,    -1,     9,
      -1,    -1,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,    -1,    36,    37,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,     3,    -1,
      -1,     6,     7,    -1,     9,    -1,    -1,    -1,    13,    -1,
      15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,    34,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    77,    78,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,     3,    -1,    -1,     6,    -1,    -1,     9,
      10,    -1,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,    -1,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,     3,    -1,
      -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    13,    -1,
      15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,    34,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    77,    78,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,     4,     5,     6,    -1,    -1,     9,    -1,
      -1,     3,    13,    -1,     6,    -1,    -1,     9,    -1,    20,
      -1,    13,    -1,    15,    16,    -1,    27,    -1,    20,    -1,
      31,    23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    88,    80,    81,
      82,    83,    84,    85,    86,    87,     3,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,     6,    -1,
      -1,     9,    -1,    20,    12,    -1,    -1,    15,    16,    -1,
      27,    -1,    20,    -1,    31,    32,    33,    34,    -1,    27,
      -1,    -1,    -1,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     3,
      -1,    -1,     6,    -1,    -1,     9,    10,    -1,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     3,    -1,    -1,     6,    -1,    -1,     9,    10,    -1,
      12,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     3,    -1,    -1,     6,    -1,    -1,     9,
      -1,    -1,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,    -1,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,     3,    -1,    -1,     6,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     3,    -1,    -1,
       6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,     3,
      -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,    -1,    36,    37,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     3,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     3,    -1,    -1,     6,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,    -1,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,     3,    -1,    -1,     6,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     3,    -1,    -1,
      -1,    -1,    -1,     9,    10,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,     3,    -1,    -1,    -1,
      -1,    27,     9,    10,    -1,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    31,    32,    33,    34,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     3,    -1,
      -1,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,     3,    -1,    -1,
      -1,    -1,    27,     9,    -1,    -1,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    31,    32,    33,    34,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,     3,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,     6,    -1,    27,     9,    -1,    -1,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
       7,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,     7,
      27,     9,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     9,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,     9,    -1,    31,
      -1,    -1,    -1,    35,    36,    37,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    10,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,     8,     9,    -1,    -1,    12,
      13,    -1,    -1,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     3,    -1,    -1,     6,    -1,    -1,     9,
      -1,    -1,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,     3,    36,    37,     6,    -1,
      -1,     9,    -1,    11,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,     3,    36,    37,
       6,    -1,    -1,     9,    -1,    11,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,     3,
      36,    37,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,     3,    36,    37,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    34,     3,    36,    37,     6,    -1,    -1,     9,
      -1,    11,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,     3,    36,    37,     6,     7,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,     3,    36,    37,
       6,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,     3,
      36,    37,     6,    -1,    -1,     9,    -1,    -1,    -1,    13,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,     3,    36,    37,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    34,     3,    36,    37,     6,     7,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,     3,    36,    37,     6,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,     3,    36,    37,
       6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,     3,
      36,    37,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,     3,    36,    37,     6,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    34,     3,    36,    37,     6,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,     3,    36,    37,     6,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,     3,    36,    37,
       6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,     3,
      36,    37,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     9,    13,    20,    27,    31,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    88,   111,
     112,   113,   114,   115,   116,   117,   118,   121,   124,   127,
     128,   129,   130,   131,   137,   144,   151,   152,   155,     3,
      29,     3,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,   153,   154,     3,     6,     7,     9,
      13,    15,    16,    20,    23,    24,    27,    28,    31,    32,
      33,    34,    36,    37,    76,    77,    78,    80,    81,    82,
      83,    84,    85,    86,    87,    90,    91,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   109,   111,   112,   128,   130,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     9,   112,   116,   128,
     137,    16,    16,     6,    31,    13,   113,   128,   129,     8,
      13,   112,   112,   121,   130,     6,    31,     9,    12,   130,
     138,   139,   112,   121,    28,    31,    93,    96,   144,   145,
       9,    12,    19,    28,    35,    36,    37,   128,   129,   127,
     130,   132,   112,   130,     0,   152,    31,   153,     7,     6,
       9,    31,   109,   113,   128,   137,     9,    31,    91,   130,
      14,     9,    93,    93,    93,     9,   106,   110,    14,     9,
       9,     9,    31,   142,     9,    31,    13,    13,    13,   109,
       3,   130,     9,    12,    19,    35,    36,    37,    28,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,   108,
      95,    18,    25,    26,    27,    38,    39,    45,    23,    24,
      38,    39,    29,    30,    40,    41,    42,    43,    20,    18,
      21,    44,    17,    45,     8,    13,     9,    90,     5,     7,
     111,   146,     7,   142,   145,   116,   127,   137,    10,    10,
      10,    10,    31,   125,   126,     6,    13,   144,   145,   112,
     114,   112,    31,   116,   119,   120,   121,     6,     9,    10,
      31,    33,    90,   112,   128,   130,   133,   134,   136,   138,
      11,   110,   139,     9,    12,     6,    91,   107,   140,   144,
     146,    10,    31,   128,   133,   135,    11,   110,   129,   140,
     129,     9,   127,   130,   112,    19,    25,     7,   137,    31,
     130,    10,    10,    10,    31,     9,   142,    31,   137,   137,
      14,   142,   109,   109,   109,    81,   145,   147,    13,    13,
      15,    24,    33,    90,    10,    92,   107,   109,    31,    31,
     107,   101,    95,    95,    95,    97,    97,   104,    96,    96,
      97,    97,    98,    98,    98,    98,    99,    99,   100,   101,
     102,   103,   109,   104,   107,   153,     7,   121,   121,   113,
      28,     7,     8,   125,   144,   111,    14,   122,   123,   128,
       7,    31,   120,   121,   145,   122,   119,     9,    33,    90,
     130,   138,     9,     9,   128,   138,    10,     8,    10,    11,
      10,   133,    11,   110,   140,   141,   112,   128,   155,     8,
      10,    10,    11,    31,    31,    10,    10,    96,    97,    90,
      95,    95,   130,    10,    10,   142,    10,    10,    10,     9,
     146,   147,   147,    90,    90,     9,    93,     8,    10,    11,
      14,    13,   110,   126,     7,   144,   110,     8,    13,    14,
      13,     7,    31,   128,     9,    31,    31,   137,    75,   134,
      10,    11,     7,     8,   128,   135,   136,    30,    19,    12,
      95,    10,    10,    10,   142,   142,   111,   142,   109,    10,
     109,    10,   109,    31,   137,   107,   106,   123,   110,   130,
      31,   137,    10,   130,    10,     7,   140,     8,    31,   109,
      79,    10,   111,   142,    10,   111,   142,    10,   130,    10,
       9,   130,    10,    10,    30,    11,   142,    13,   111,   142,
     111,   142,    10,   128,   137,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    90,    90,    90,    90,    90,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    92,    92,    93,    93,
      93,    93,    93,    93,    93,    93,    94,    94,    94,    94,
      94,    94,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    97,    97,    97,    97,    97,    97,    97,    98,
      98,    98,    99,    99,    99,    99,    99,   100,   100,   100,
     101,   101,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   107,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   109,   109,   110,   111,   111,
     111,   111,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   113,   113,   114,   114,   114,   115,
     115,   115,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   117,   117,   117,   118,   118,
     119,   119,   119,   120,   120,   121,   121,   121,   121,   122,
     122,   123,   123,   123,   124,   124,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   128,   128,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     130,   130,   130,   130,   131,   131,   131,   131,   132,   132,
     133,   133,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   135,   135,   136,   136,   137,   137,   138,   138,
     138,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     140,   140,   140,   141,   141,   142,   142,   142,   142,   142,
     142,   143,   143,   143,   144,   144,   144,   144,   145,   145,
     145,   146,   146,   146,   146,   147,   147,   148,   148,   148,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   150,   150,   150,   150,   150,   151,   151,   151,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   153,   153,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   155,   155,   155,   155,   155,   155,   155
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     2,     4,     1,
       2,     3,     4,     4,     4,     7,     2,     3,     4,     3,
       3,     2,     2,     4,     6,     7,     1,     3,     1,     2,
       2,     2,     2,     2,     4,     5,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     5,     5,     5,     3,     3,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       5,     2,     1,     2,     1,     1,     2,     2,     2,     2,
       3,     3,     1,     2,     1,     3,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     2,     3,     3,     2,     1,     2,     1,     1,
       3,     1,     2,     3,     4,     5,     2,     1,     3,     1,
       3,     1,     1,     2,     1,     2,     3,     1,     2,     2,
       3,     3,     3,     3,     3,     4,     3,     4,     4,     3,
       1,     2,     2,     3,     1,     1,     2,     2,     1,     2,
       1,     3,     2,     2,     1,     1,     2,     3,     4,     5,
       4,     1,     3,     3,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     3,     4,     1,     2,
       2,     1,     3,     2,     2,     1,     2,     5,     7,     5,
       5,     7,     6,     7,     7,     6,     5,     6,     7,     7,
       6,     3,     2,     2,     2,     3,     1,     2,     0,     1,
       1,     2,     2,     6,     8,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     3,     2,     4,     5,     4
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
#line 39 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s primary_expression: IDENTIFIER FINAL\n",linea, gramaticas );}
#line 2449 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 40 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: CONSTANT FINAL\n",linea,  gramaticas );}
#line 2455 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 41 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );}
#line 2461 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 42 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: LEFT_PARENTHESIS FINAL expression RIGHT_PARETHESIS\n",linea, gramaticas);}
#line 2467 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 43 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: INTEGER FINAL\n",linea, gramaticas );}
#line 2473 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 44 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );}
#line 2479 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 45 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );}
#line 2485 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 50 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression\n",linea, gramaticas );}
#line 2491 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 51 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: pointer primary_expression\n",linea, gramaticas);}
#line 2497 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 52 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );}
#line 2503 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 53 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );}
#line 2509 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 54 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );}
#line 2515 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 55 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
#line 2521 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 56 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);
}
#line 2528 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 57 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
#line 2534 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 58 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
#line 2540 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 59 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_PARENTHESIS argument_expression_list LEFT_PARENTHESIS\n",linea, gramaticas);}
#line 2546 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 61 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DOT IDENTIFIER\n",linea, gramaticas);}
#line 2552 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 62 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression PTR_OP IDENTIFIER\n",linea, gramaticas);}
#line 2558 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 63 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression INC_OP\n",linea, gramaticas );}
#line 2564 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 64 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DEC_OP\n",linea, gramaticas );}
#line 2570 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 65 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
#line 2576 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 66 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2582 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 67 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2588 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 72 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: assignment_expression\n",linea, gramaticas);}
#line 2594 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 73 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: argument_expression_list COMMA assignment_expression\n",linea, gramaticas);}
#line 2600 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 77 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: postfix_expression\n",linea, gramaticas );}
#line 2606 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 78 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression:pointer postfix_expression\n",linea, gramaticas);}
#line 2612 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 79 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: INC_OP unary_expression\n",linea, gramaticas );}
#line 2618 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 80 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: DEC_OP unary_expression\n",linea, gramaticas );}
#line 2624 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 81 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: unary_operator cast_expression\n",linea, gramaticas );}
#line 2630 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 82 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
#line 2636 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 83 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2642 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 84 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2648 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 88 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: BIT_AND\n",linea, gramaticas );}
#line 2654 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 89 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MUL\n",linea, gramaticas );}
#line 2660 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 90 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PLUS\n",linea, gramaticas );}
#line 2666 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 91 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MINUS\n",linea, gramaticas );}
#line 2672 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 92 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PRIME\n",linea, gramaticas );}
#line 2678 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 93 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: EXCLAMATION\n",linea, gramaticas);}
#line 2684 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 97 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: unary_expression\n",linea, gramaticas);}
#line 2690 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 98 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2696 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 99 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2702 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 100 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2708 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 101 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2714 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 102 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2720 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 109 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MUL cast_expression\n",linea, gramaticas );}
#line 2726 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 110 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression DIV cast_expression\n",linea, gramaticas );}
#line 2732 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 111 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MOD cast_expression\n",linea,gramaticas );}
#line 2738 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 112 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: cast_expression\n",linea, gramaticas);}
#line 2744 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 116 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: multiplicative_expression\n",linea,gramaticas );}
#line 2750 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 117 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression:multiplicative_expression UP_ARROW and_expression\n",linea,gramaticas );}
#line 2756 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 118 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression:multiplicative_expression OR_OP logical_and_expression\n",linea,gramaticas );}
#line 2762 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 119 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);}
#line 2768 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 120 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);}
#line 2774 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 121 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression PLUS multiplicative_expression\n",linea,gramaticas) ;}
#line 2780 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 122 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression MINUS multiplicative_expression\n",linea, gramaticas) ;}
#line 2786 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 126 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: additive_expression\n",linea, gramaticas );}
#line 2792 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 127 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);}
#line 2798 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 128 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression RIGHT_OP additive_expression \n",linea, gramaticas);}
#line 2804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 132 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: shift_expression\n",linea, gramaticas);}
#line 2810 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 133 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LESS shift_expression\n",linea, gramaticas);}
#line 2816 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 134 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GREATER shift_expression\n",linea, gramaticas );}
#line 2822 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 135 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LE_OP shift_expression\n",linea, gramaticas);}
#line 2828 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 136 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GE_OP shift_expression\n",linea, gramaticas );}
#line 2834 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 140 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: relational_expression\n",linea, gramaticas);}
#line 2840 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 141 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression EQ_OP relational_expression\n",linea, gramaticas );}
#line 2846 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 142 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression NE_OP relational_expression\n",linea, gramaticas);}
#line 2852 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 146 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: equality_expression\n",linea, gramaticas );}
#line 2858 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 147 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: and_expression BIT_AND equality_expression\n",linea, gramaticas);}
#line 2864 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 151 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: and_expression\n",linea, gramaticas );}
#line 2870 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 152 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: exclusive_or_expression UP_ARROW and_expression\n",linea, gramaticas );}
#line 2876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 156 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: exclusive_or_expression\n",linea, gramaticas);}
#line 2882 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 157 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression\n",linea, gramaticas );}
#line 2888 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 161 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: inclusive_or_expression\n",linea,gramaticas );}
#line 2894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 162 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n",linea, gramaticas);}
#line 2900 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 166 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_and_expression\n",linea,gramaticas);}
#line 2906 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 167 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_or_expression OR_OP logical_and_expression\n",linea, gramaticas );}
#line 2912 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 171 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression\n",linea, gramaticas);}
#line 2918 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 172 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression INTERROGATION expression COLON conditional_expression\n",linea,gramaticas);}
#line 2924 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 176 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: conditional_expression\n",linea, gramaticas);}
#line 2930 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 177 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: unary_expression assignment_operator assignment_expression\n",linea,gramaticas);}
#line 2936 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 181 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: EQU\n",linea, gramaticas);}
#line 2942 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 182 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MUL_ASSIGN\n",linea,gramaticas );}
#line 2948 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 183 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: DIV_ASSIGN\n",linea,gramaticas);}
#line 2954 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 184 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MOD_ASSIGN\n",linea,gramaticas);}
#line 2960 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 185 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: ADD_ASSIGN\n",linea, gramaticas);}
#line 2966 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: SUB_ASSIGN\n",linea, gramaticas);}
#line 2972 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 187 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: LEFT_ASSIGN\n",linea, gramaticas);}
#line 2978 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 188 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: RIGHT_ASSIGN\n",linea,gramaticas);}
#line 2984 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 189 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: AND_ASSIGN\n",linea, gramaticas);}
#line 2990 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 190 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: XOR_ASSIGN\n",linea, gramaticas);}
#line 2996 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 191 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: OR_ASSIGN\n",linea, gramaticas);}
#line 3002 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 195 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: assignment_expression\n",linea, gramaticas);}
#line 3008 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 196 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: expression COMMA assignment_expression\n",linea,gramaticas);}
#line 3014 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 200 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  constant_expression: conditional_expression\n",linea, gramaticas );}
#line 3020 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 204 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3026 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 205 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers init_declarator_list SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3032 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 206 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: LEFT_PARENTHESIS declaration_specifiers RIGHT_PARENTHESIS init_declarator_list SEMICOLON \n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3038 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 207 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  declaration: LEFT_PARENTHESIS declaration_specifiers RIGHT_PARENTHESIS init_declarator_list SEMICOLON \n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3044 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 211 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier \n",linea, gramaticas);}
#line 3050 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 212 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier declaration_specifiers\n",linea, gramaticas);}
#line 3056 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 213 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);}
#line 3062 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 215 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
#line 3068 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 217 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);}
#line 3074 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 219 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
#line 3080 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 220 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
#line 3086 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 222 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier\n",linea, gramaticas );}
#line 3092 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 223 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier declaration_specifiers\n",linea, gramaticas );}
#line 3098 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 228 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator\n",linea, gramaticas );}
#line 3104 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 229 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator_list COMMA init_declarator\n",linea,gramaticas);}
#line 3110 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 233 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator\n",linea, gramaticas );}
#line 3116 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 234 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator EQU initializer\n",linea, gramaticas );}
#line 3122 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 235 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: multiplicative_expression\n",linea, gramaticas );}
#line 3128 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 240 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: TYPEDEF\n",linea, gramaticas);}
#line 3134 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 241 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: EXTERN\n",linea, gramaticas);}
#line 3140 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 242 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: STATIC\n",linea,gramaticas);}
#line 3146 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 243 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: AUTO\n",linea, gramaticas);}
#line 3152 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 244 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: REGISTER\n",linea, gramaticas);}
#line 3158 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 248 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: VOID\n",linea, gramaticas);}
#line 3164 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 249 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: CHAR\n",linea, gramaticas);}
#line 3170 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 250 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SHORT\n",linea, gramaticas);}
#line 3176 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 251 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: INT\n",linea, gramaticas);}
#line 3182 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 252 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: LONG\n",linea, gramaticas);}
#line 3188 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 253 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: FLOAT\n",linea, gramaticas);}
#line 3194 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 254 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: DOUBLE\n",linea, gramaticas);}
#line 3200 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 255 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SIGNED\n",linea, gramaticas);}
#line 3206 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 256 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: UNSIGNED\n",linea, gramaticas);}
#line 3212 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 257 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: struct_or_union_specifier\n",linea, gramaticas );}
#line 3218 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 258 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: enum_specifier\n",linea, gramaticas );}
#line 3224 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 263 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET \n",linea, gramaticas );}
#line 3230 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 264 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET\n",linea,gramaticas );}
#line 3236 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 265 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER\n",linea, gramaticas);}
#line 3242 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 269 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: STRUCT\n",linea, gramaticas);}
#line 3248 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 270 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: UNION\n",linea, gramaticas);}
#line 3254 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 274 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration\n",linea, gramaticas );}
#line 3260 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 275 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration_list struct_declaration\n",linea, gramaticas );}
#line 3266 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 276 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list:  struct_declaration_list declaration_list\n",linea, gramaticas );}
#line 3272 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 280 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3278 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 281 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration: IDENTIFIER struct_declarator_list SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3284 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 285 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier specifier_qualifier_list\n",linea, gramaticas );}
#line 3290 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 286 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier\n",linea, gramaticas );}
#line 3296 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 288 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier specifier_qualifier_list\n",linea,gramaticas);}
#line 3302 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 289 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier\n",linea, gramaticas );}
#line 3308 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 294 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator\n",linea, gramaticas );}
#line 3314 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 295 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator_list COMMA struct_declarator\n",linea, gramaticas );}
#line 3320 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 299 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator\n",linea, gramaticas );}
#line 3326 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 300 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: COLON constant_expression \n",linea, gramaticas );}
#line 3332 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 301 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator COLON constant_expression \n",linea, gramaticas);}
#line 3338 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 305 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3344 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 306 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET \n",linea,gramaticas);}
#line 3350 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 307 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER\n",linea, gramaticas );}
#line 3356 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 311 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator\n",linea, gramaticas);}
#line 3362 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 312 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator_list COMMA enumerator\n",linea, gramaticas );}
#line 3368 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 316 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER\n",linea, gramaticas);}
#line 3374 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 317 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER EQU constant_expression\n",linea,gramaticas);}
#line 3380 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 321 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: CONST\n",linea,gramaticas);}
#line 3386 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 322 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: VOLATILE\n",linea, gramaticas);}
#line 3392 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 326 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: pointer direct_declarator \n",linea, gramaticas );}
#line 3398 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 327 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: direct_declarator\n",linea, gramaticas );}
#line 3404 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 328 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: declarator direct_declarator\n",linea, gramaticas );}
#line 3410 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 329 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: direct_declarator EQU initializer \n",linea, gramaticas );}
#line 3416 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 335 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: IDENTIFIER\n",linea, gramaticas);}
#line 3422 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 336 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator INC_OP\n",linea, gramaticas);}
#line 3428 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 337 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator DEC_OP\n",linea, gramaticas);}
#line 3434 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 338 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator DOT direct_declarator\n",linea, gramaticas);}
#line 3440 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 339 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator PTR_OP direct_declarator\n",linea, gramaticas);}
#line 3446 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 340 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3452 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 341 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3458 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 342 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: TYPE_NAME\n",linea,gramaticas);}
#line 3464 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 343 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET\n",linea,gramaticas);}
#line 3470 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 344 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
#line 3476 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 346 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3482 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 347 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3488 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 349 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
#line 3494 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 354 "parser.y" /* yacc.c:1646  */
    { printf("%d con %s  pointer: pointer_type\n",linea, gramaticas);}
#line 3500 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 355 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: pointer_type type_qualifier_list\n",linea, gramaticas );}
#line 3506 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 356 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: pointer_type pointer\n",linea, gramaticas );}
#line 3512 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 357 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: pointer_type type_qualifier_list pointer\n",linea,gramaticas);}
#line 3518 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 361 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: MUL\n",linea,gramaticas);}
#line 3524 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 362 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: BIT_AND\n",linea,gramaticas);}
#line 3530 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 363 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: MUL\n",linea,gramaticas);}
#line 3536 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 364 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: BIT_AND\n",linea,gramaticas);}
#line 3542 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 368 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier\n",linea,gramaticas );}
#line 3548 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 369 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier_list type_qualifier\n",linea, gramaticas );}
#line 3554 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 374 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list\n",linea, gramaticas );}
#line 3560 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 375 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list COMMA ELLIPSIS\n",linea, gramaticas);}
#line 3566 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 381 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers declarator\n",linea, gramaticas );}
#line 3572 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 382 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas );}
#line 3578 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 383 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers\n",linea, gramaticas );}
#line 3584 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 384 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declarator\n",linea, gramaticas );}
#line 3590 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 385 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: IDENTIFIER abstract_declarator\n",linea, gramaticas );}
#line 3596 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 386 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: IDENTIFIER abstract_declarator\n",linea, gramaticas
	 );}
#line 3603 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 388 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3609 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 389 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS IDENTIFIER pointer RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3615 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 390 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS IDENTIFIER RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3621 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 395 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER COMMA identifier_list\n",linea, gramaticas);}
#line 3627 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 396 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER COMMA parameter_list\n",linea, gramaticas);}
#line 3633 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 399 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_declaration\n",linea, gramaticas);}
#line 3639 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 400 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_list COMMA parameter_declaration\n",linea, gramaticas);}
#line 3645 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 403 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list\n",linea, gramaticas);}
#line 3651 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 404 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list abstract_declarator\n",linea, gramaticas);}
#line 3657 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 409 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer\n",linea, gramaticas);}
#line 3663 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 410 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: direct_abstract_declarator\n",linea, gramaticas );}
#line 3669 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 411 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer direct_abstract_declarator\n",linea, gramaticas);}
#line 3675 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 415 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS \n",linea, gramaticas );}
#line 3681 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 416 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator:  LEFT_SBRACKET RIGHT_SBRACKET \n",linea, gramaticas);}
#line 3687 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 417 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
#line 3693 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 418 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
#line 3699 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 419 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
#line 3705 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 420 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea, gramaticas);}
#line 3711 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 421 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS \n",linea, gramaticas );}
#line 3717 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 422 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas );}
#line 3723 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 423 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea,  gramaticas  );}
#line 3729 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 427 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: assignment_expression\n",linea, gramaticas );}
#line 3735 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 428 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list RIGHT_BRACKET\n",linea,  gramaticas );}
#line 3741 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 429 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET\n",linea, gramaticas );}
#line 3747 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 433 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer\n",linea, gramaticas);}
#line 3753 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 434 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer_list COMMA initializer \n",linea, gramaticas);}
#line 3759 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 438 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: labeled_statement\n",linea, gramaticas );}
#line 3765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 439 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: compound_statement\n",linea, gramaticas);}
#line 3771 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 440 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: expression_statement\n",linea,gramaticas );}
#line 3777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 441 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: selection_statement\n",linea, gramaticas);}
#line 3783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 442 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: iteration_statement\n",linea, gramaticas );}
#line 3789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 443 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: jump_statement\n",linea, gramaticas );}
#line 3795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 447 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: IDENTIFIER COLON statement \n",linea, gramaticas );}
#line 3801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 448 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: CASE constant_expression COLON statement\n",linea, gramaticas );}
#line 3807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 449 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: DEFAULT COLON statement\n",linea, gramaticas );}
#line 3813 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 453 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET RIGHT_BRACKET\n",linea, gramaticas);}
#line 3819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 454 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET statement_list RIGHT_BRACKET\n",linea, gramaticas );}
#line 3825 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 455 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3831 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 456 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3837 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 460 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration\n",linea, gramaticas );}
#line 3843 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 461 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration_list declaration\n",linea, gramaticas);}
#line 3849 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 462 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration_list statement_list\n",linea, gramaticas);}
#line 3855 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 466 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement\n",linea, gramaticas );}
#line 3861 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 467 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: statement DEFINE define\n",linea, gramaticas);}
#line 3867 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 468 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement_list statement\n",linea, gramaticas);}
#line 3873 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 469 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement_list declaration_list\n",linea, gramaticas);}
#line 3879 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 473 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 474 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: expression SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3891 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 478 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea,gramaticas);}
#line 3897 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 479 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement\n",linea, gramaticas);}
#line 3903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 480 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 3909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 484 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3915 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 485 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 486 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 3927 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 487 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3933 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 488 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3939 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 489 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3945 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 490 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3951 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 491 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 3957 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 492 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3963 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 493 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3969 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 494 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3975 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 498 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: GOTO IDENTIFIER SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3981 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 499 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: CONTINUE SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3987 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 500 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: BREAK SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 501 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3999 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 502 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN expression SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4005 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 506 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a external_declaration\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 4011 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 507 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a ciclo translation_unit\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 4017 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 508 "parser.y" /* yacc.c:1646  */
    {printf("%d  translation_unit: Archivo Vacío\n",linea );memset(gramaticas,0,sizeof(gramaticas));}
#line 4023 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 513 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: function_definition\n",linea, gramaticas);}
#line 4029 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 514 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: declaration\n",linea, gramaticas);}
#line 4035 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 515 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas)); printf("%d con %s  external_declaration: DEFINE define\n",linea, gramaticas);}
#line 4041 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 516 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 4047 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 517 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 4053 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 518 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 4059 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 519 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: \\n \n",linea, gramaticas);}
#line 4065 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 520 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: SEMICOLON\n",linea, gramaticas);}
#line 4071 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 521 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: compound_statement\n",linea, gramaticas);}
#line 4077 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 525 "parser.y" /* yacc.c:1646  */
    {printf("Sigue");}
#line 4083 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 526 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define: IDENTIFIER define\n",linea, gramaticas);}
#line 4089 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 614 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator declaration_list compound_statement\n",linea,gramaticas);}
#line 4095 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 615 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator compound_statement \n",linea, gramaticas);}
#line 4101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 616 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator declaration_list compound_statement\n",linea, gramaticas );}
#line 4107 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 617 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator compound_statement\n",linea,gramaticas);}
#line 4113 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 618 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator declaration_list compound_statement function_definition\n",linea,gramaticas);}
#line 4119 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 4123 "parser.tab.c" /* yacc.c:1646  */
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
#line 623 "parser.y" /* yacc.c:1906  */


#include<stdio.h>
#include <stdbool.h>
