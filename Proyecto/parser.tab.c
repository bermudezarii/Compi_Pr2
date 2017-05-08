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

	#pragma warning(disable: 4996)
	extern int yylex();
	extern int linea ;
	extern char* gramaticas[50000];
	int lineaactual=0;



#line 76 "parser.tab.c" /* yacc.c:339  */

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

#line 215 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  238
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3832

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  356
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  591

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
       0,    34,    34,    35,    36,    37,    38,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    53,    54,    55,
      56,    57,    58,    59,    64,    65,    69,    70,    71,    72,
      73,    74,    75,    76,    80,    81,    82,    83,    84,    85,
      89,    90,    91,    92,    93,    94,   101,   102,   103,   104,
     108,   109,   110,   111,   112,   116,   117,   118,   122,   123,
     124,   125,   126,   130,   131,   132,   136,   137,   141,   142,
     146,   147,   151,   152,   156,   157,   161,   162,   166,   167,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   185,   186,   190,   194,   195,   196,   197,   201,   202,
     203,   204,   205,   206,   208,   209,   214,   215,   219,   220,
     221,   225,   226,   227,   228,   229,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   248,   249,
     250,   254,   255,   259,   260,   261,   265,   266,   270,   271,
     272,   273,   278,   279,   283,   284,   285,   289,   290,   291,
     295,   296,   300,   301,   305,   306,   310,   311,   312,   313,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   328,
     329,   331,   335,   336,   337,   338,   342,   343,   347,   348,
     353,   354,   360,   361,   362,   363,   364,   365,   367,   368,
     369,   370,   374,   375,   378,   379,   382,   383,   388,   389,
     390,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     406,   407,   408,   412,   413,   417,   418,   419,   420,   421,
     422,   426,   427,   428,   432,   433,   434,   435,   439,   440,
     441,   445,   446,   447,   448,   452,   453,   457,   458,   459,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   477,   478,   479,   480,   481,   485,   486,   487,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   504,   505,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,   587,   588,
     589,   590,   593,   594,   595,   596,   597
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

#define YYPACT_NINF -458

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-458)))

#define YYTABLE_NINF -355

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1823,    49,  1143,  1229,  3064,  -458,  -458,  -458,  -458,  -458,
    -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,
    -458,  -458,  -458,  -458,  -458,  -458,  -458,    33,  -458,  -458,
     109,   142,  -458,  1896,  3144,  -458,    83,   242,  -458,  3163,
    2206,   946,    70,    18,  -458,  -458,   985,  -458,  -458,  -458,
      -7,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,
    -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,
    -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,
    -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,
    -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,
    -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,
    -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,
    -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,
    -458,  -458,  -458,  -458,  -458,  1143,  -458,  1314,  -458,  2278,
    -458,  -458,  -458,    38,  -458,  -458,    43,   282,   626,  -458,
    3571,  -458,  3603,  3603,  3635,    28,    61,    63,   124,  1832,
     143,    84,   146,   148,   867,   105,   211,  1307,  3635,  -458,
      41,   219,   214,   137,   235,   174,   150,   201,   166,    15,
    -458,  -458,   167,  -458,   109,  3667,    96,   222,  -458,  -458,
    1399,  1484,  -458,  -458,  -458,  -458,   738,   224,  3083,   254,
     255,   286,  -458,   173,  2206,   197,  -458,  -458,  -458,   242,
    1896,  1034,   293,  2710,  3159,   176,  -458,   206,  -458,   242,
    3699,   717,  -458,   269,  -458,  1739,  2729,  3283,    70,  3699,
      70,  -458,  -458,  -458,   220,  -458,  -458,    18,  -458,  -458,
       3,  -458,  3230,   296,  2350,   577,   262,   279,  3315,   301,
    3731,  -458,   211,   140,  1832,  2422,  -458,  -458,  -458,  2350,
    -458,   292,  1832,  3635,  3635,  3635,   304,   240,  2134,   313,
    -458,  -458,  -458,   179,   910,  3347,  3635,   299,   300,  -458,
    -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,
    -458,  -458,  3635,  -458,  3635,  3635,  3635,  3635,  3635,  3635,
    3635,  3635,  3635,  3635,  3635,  3635,  3635,  3635,  3635,  3635,
    3635,  3635,  3635,  3635,  3635,  3635,  -458,  2494,  -458,  1143,
    -458,  -458,  1569,  -458,  -458,  1739,   783,  1376,   197,  -458,
    -458,   325,   331,  -458,   255,  -458,  -458,  1739,  -458,  -458,
     270,  1376,  2979,  -458,   377,  1034,  1990,  -458,   408,   369,
    -458,   438,  -458,   151,   355,  -458,   379,   372,  -458,   381,
     206,  2801,  3379,  3411,   211,  -458,  -458,  1060,  1739,  -458,
     452,   254,   393,   397,  -458,   407,   220,  -458,   220,  2729,
    -458,  -458,   396,   401,  -458,   426,  3443,  -458,  3635,  3635,
     409,  3635,  -458,   104,   435,  1832,  -458,   319,   337,   348,
     458,  1739,  3475,  -458,  -458,   140,   140,  3763,  -458,  -458,
     349,  -458,   227,  -458,  -458,  -458,   174,  -458,  -458,  -458,
     166,   269,   269,   219,   219,   214,   214,   214,   214,   137,
     137,   235,   174,   150,   201,   112,   166,  -458,  -458,  -458,
     189,  3635,  -458,   255,   388,    21,  3635,   195,  -458,   454,
    -458,   270,  -458,  1739,  2710,   199,  2998,  2062,  3795,   105,
      62,   439,  1206,  -458,  -458,  -458,  1917,  -458,  -458,  -458,
     463,  -458,   470,  -458,   416,   197,  2911,  -458,  2820,  -458,
    -458,  -458,   444,   465,   474,  3635,    65,    93,  -458,  -458,
     477,  -458,  -458,  1832,  1832,  1739,  3635,  1654,  3635,  3507,
    -458,  -458,  2566,  -458,  3635,  -458,  -458,  3635,  -458,  -458,
    -458,  -458,  -458,   270,  -458,  3635,  -458,  -458,   410,  3315,
    2638,  -458,    53,   478,  -458,  -458,  -458,  -458,  -458,  3539,
    2911,  -458,   482,  -458,   460,  3635,  -458,  -458,  -458,  -458,
     413,  -458,  -458,  -458,   352,  1739,   356,  1739,   375,   104,
     483,  -458,  -458,  -458,  -458,   998,   323,   484,  -458,   486,
    -458,  -458,  -458,  2892,   468,   263,  1832,   487,  -458,  -458,
    1739,  -458,  -458,  1739,   489,  -458,  2062,   492,  -458,  -458,
    -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  3667,
    -458
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     258,     0,     0,     0,     0,   266,   177,   176,   160,   111,
     112,   113,   114,   115,   117,   118,   119,   120,   123,   124,
     121,   122,   154,   155,   116,   131,   132,     0,   265,   260,
       0,     0,   106,    98,   100,   125,     0,   196,   126,   104,
     108,   157,     0,   172,   127,   267,     0,   256,   259,   262,
       0,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   268,   261,     0,     4,     0,   224,     0,
     235,    39,    38,    34,    36,    37,    35,     0,     2,     3,
       0,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,    26,    40,     0,    49,
      50,    55,    58,    63,    66,    68,    70,    72,    74,    76,
      78,    91,     0,   228,     0,   108,     0,   231,   215,   216,
       0,     0,   217,   218,   219,   220,     0,     0,   100,     0,
       0,   149,    94,     0,   108,     0,    97,    99,   101,   138,
     102,     0,   130,     0,     0,   198,   197,   199,   105,   140,
       0,     2,    40,   110,   355,     0,     0,     0,     0,     0,
       0,   161,   162,   158,   156,   178,   174,   173,     1,   257,
       0,   269,   224,     0,     0,     2,     0,     0,   108,   127,
       0,     2,    27,     0,     0,     0,    31,    28,    29,     0,
      93,     0,     0,     0,     0,     0,     2,     0,     0,     0,
     252,   253,   254,     0,     0,     0,     0,     0,     0,    19,
      20,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   236,     0,     8,     0,
     226,   229,     0,   225,   233,   234,   139,   141,     0,   166,
     165,   152,     0,   150,     0,    95,   353,     0,   107,   103,
       0,   139,     0,   133,   196,     0,     0,   206,     2,     0,
     191,   184,   185,   198,     0,   194,   180,     0,   202,     0,
     200,     0,     0,     0,    26,   210,   109,   216,   230,   171,
     160,   185,     0,     0,   168,     0,   163,   159,   164,     0,
     179,   175,     0,     0,    14,     0,     0,     5,     0,     0,
       2,     0,   221,     2,   127,     0,   223,     0,     0,     0,
       0,     0,     0,   251,   255,     0,     0,     0,     9,    15,
       0,    24,     0,    17,    18,    79,    51,    47,    48,    46,
      52,    53,    54,    56,    57,    59,    60,    61,    62,    64,
      65,    67,    69,    71,    73,     0,    75,    92,   232,   227,
       0,     0,   147,     0,     0,   216,     0,     0,   142,   144,
     129,   160,   134,   135,     0,     0,     0,     0,     0,     7,
     198,   186,     0,   182,   183,   207,     0,   201,   203,   208,
       0,   204,     0,   213,     0,     0,     0,   356,     0,   169,
     170,   167,     0,     0,     0,     0,    50,     0,    42,    41,
       0,    32,   222,     0,     0,     0,     0,     0,   217,     0,
      11,    10,     0,    21,     0,    16,    12,     0,    96,   153,
     151,   148,   145,     0,   137,     0,   136,   128,     2,   108,
       0,   187,     0,   127,   181,   195,   209,   205,   211,     0,
       0,   192,   193,   263,     0,     0,    43,    44,    45,    33,
     237,   239,   246,   240,     0,     0,     0,     0,     0,     2,
     127,    25,    77,   143,   146,   198,     2,   127,   190,     0,
     188,   212,   214,     0,     0,     0,     0,     0,   250,   245,
       0,   247,   242,     0,     0,    22,     0,     0,    32,   189,
     264,    13,   238,   241,   249,   244,   248,   243,    23,   108,
      33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -458,   518,  -118,  -458,   374,  -458,   -14,   -34,  -282,   106,
     141,   194,  -261,   196,   198,  -237,  -458,   -69,  -194,  -458,
     451,  -183,    51,    23,   -28,   309,  -458,   376,  -458,  -458,
     161,  -337,   -22,   165,     4,  -458,   185,    80,   320,    54,
     -29,     0,  -458,  -458,  -215,  -457,    47,    55,  -121,   -36,
    -200,  -222,  -458,   391,  -458,    36,     7,     5,  -254,  -458,
    -458,  -458,  -458,   488,  -119,  -458,   168
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   165,   166,   410,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   292,
     182,   261,   183,   184,    31,    32,    33,    34,    35,    36,
     342,   343,    37,   447,   448,    38,   332,   333,    39,   185,
      41,   253,    43,   237,   354,   355,   373,   356,    44,   357,
     217,   366,   474,   187,   188,   189,   325,   368,   192,   193,
     194,   195,    46,    47,   134,   135,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,   216,   203,   186,    42,   452,   223,   377,   191,   525,
     190,   372,   209,   234,   402,   360,   241,   219,   249,   423,
     424,  -352,   382,    30,   240,  -352,   365,   197,   383,   252,
      42,   359,   313,   416,   210,   365,    45,   215,     6,   200,
     186,    42,   262,   236,   375,     7,    42,   225,  -177,   432,
    -177,    29,    49,  -176,    40,  -176,   207,   208,   199,   294,
     314,   420,   218,   558,   201,   136,   295,   296,   297,    30,
     263,   346,   264,     6,   214,   537,   224,   436,    50,   196,
       7,   411,    45,   294,   204,   260,   298,    22,    23,   211,
     295,   296,   297,   221,   149,   233,   151,    29,   415,   136,
      40,     8,   364,   538,   487,   317,   525,  -177,  -177,  -352,
     298,   247,  -176,  -176,   212,   269,   299,   300,   196,   452,
     315,   437,   202,   249,     6,     6,   507,   221,   149,     6,
     151,     7,     7,   265,   394,   385,     7,   186,   249,   186,
       8,   473,   191,   136,   190,   260,   470,   498,   499,   391,
     205,   223,   268,   360,   293,   206,   203,   234,   260,   270,
     454,   271,   197,   214,   372,   274,   303,   304,   310,   365,
     223,   251,   149,   216,   151,   315,   209,   305,   306,   472,
     316,   205,     8,   216,    42,   213,   335,   315,   214,   344,
     186,   186,   404,   248,   309,   322,    42,   205,   210,   376,
     438,   378,   508,   513,   186,    42,   196,   513,   514,   215,
     312,   337,   516,   353,   223,   361,   247,     6,   362,   215,
     275,   208,   311,   276,     7,   186,    42,   319,     8,   379,
     277,   247,   227,   339,   328,   315,   351,   381,   506,   228,
     336,   321,   299,   300,   186,   386,   278,   279,   280,   351,
     199,   213,   301,   302,   214,   230,   231,   232,   509,   186,
     360,   367,     6,   512,   330,   421,   422,   352,   186,     7,
     315,   315,   387,   487,   581,   401,   321,   307,   308,   196,
     371,   417,   418,   419,   446,   136,   331,   205,   243,   388,
       6,   250,   334,   260,   295,   296,   297,     7,   248,   345,
     440,     8,     6,   384,   209,   219,   395,   562,   216,     7,
     551,   389,   461,   251,   149,   464,   151,   186,   254,   209,
     344,   400,   186,   344,   234,   186,   403,   315,    42,   493,
     413,   414,   554,   558,   461,   365,   249,   186,   442,   443,
      42,   523,    42,     6,   353,   315,   460,   494,   215,   453,
       7,   353,   486,   441,   385,   360,   315,   504,   495,   505,
     315,    42,   567,   235,   315,   465,   570,    42,   186,   351,
     215,   199,   260,   445,   488,   489,   321,   260,   462,    42,
     198,   550,   467,   315,   351,   573,   454,   466,   321,   214,
     475,   446,   468,   490,   449,   511,   443,     6,   449,   557,
     371,   186,   351,   479,     7,   463,   497,   480,     8,   425,
     426,   427,   428,  -160,   222,   352,  -160,   213,   481,   213,
     214,   476,   214,   528,   529,  -160,  -160,   482,     6,   247,
       6,   234,   483,   352,   344,     7,   484,     7,   552,  -160,
     385,   385,  -160,  -160,  -160,   491,   260,   454,   429,   430,
     214,    42,   321,   186,   353,   249,    42,   460,     6,   274,
     478,   213,    -2,   453,   214,     7,    42,   496,   515,     8,
     521,   536,     6,   526,   533,    42,    42,   351,    42,     7,
     351,   527,   461,   225,   534,   223,   535,   539,   560,   351,
     563,   564,   566,   575,   578,   186,   579,   186,   580,   588,
     583,   351,   590,   431,   321,   449,   456,   433,   371,   455,
     434,   519,   224,    42,   338,   198,   327,   553,   555,   444,
     352,   486,   559,   510,   256,   531,   257,   258,   222,   530,
      42,   327,   352,   532,   239,   477,     0,   337,     0,     0,
       0,     0,   222,     0,     0,   186,   542,   186,   247,   574,
     267,     0,     0,     0,     0,   223,   577,   380,     0,   222,
       0,     0,     0,    42,   327,     0,   336,   449,     0,     0,
     186,     0,   326,   186,     0,   327,   460,     0,   222,   327,
    -160,     0,   324,  -160,     0,     0,   351,   341,   222,     0,
     246,     0,  -160,  -160,     0,     0,   568,     6,   571,   351,
       0,   222,   198,     0,     7,     0,     0,     0,   385,  -160,
    -160,  -160,     0,     0,     0,   273,     0,   352,     0,     0,
     326,   584,   222,     0,   586,     0,     0,     0,     0,  -160,
     589,   341,  -160,     0,     0,   341,     0,   327,     0,     0,
     254,  -160,  -160,     0,     0,   392,   327,   327,     0,     0,
       0,     0,     0,   396,     0,     0,     0,  -160,  -160,  -160,
    -160,   327,     0,     0,     0,   327,     0,     0,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,     0,   222,     0,
       0,     0,     0,   326,     0,   246,     0,     0,     0,     0,
       0,   246,   341,   341,   318,     0,   246,     0,     0,     0,
     246,     0,     0,   324,   397,   398,   399,   341,     0,     0,
    -160,   341,   198,  -160,     0,     0,     0,   412,     0,     0,
       0,   350,  -160,  -160,     0,     0,   222,     0,     0,     0,
       0,     0,     0,     0,   350,     0,     0,   196,  -160,  -160,
    -160,  -160,     0,     0,     0,     0,     0,     0,     6,   324,
     222,     0,   222,   222,   435,     7,     0,     0,   246,     8,
       0,   318,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   503,   327,     0,     0,     0,   492,     0,     0,     0,
       0,     0,   408,   329,     0,     0,     0,   246,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     0,   222,     0,     0,     0,     0,
     222,     0,   327,     0,     0,     0,     0,     0,     0,     0,
     198,     0,   256,   198,     0,     0,     0,     0,   341,     0,
     327,     0,   246,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,   222,
       0,     0,     0,     0,   459,     0,     0,     0,     0,     0,
     136,     0,     0,   243,     0,     0,   259,     0,   341,   350,
     272,   222,   141,   142,   540,   541,   543,   143,   324,   222,
     144,   145,     0,   222,   146,   147,   341,   350,   251,   149,
     150,   151,     0,   152,   153,     0,     0,     0,   246,     0,
       0,     0,     0,   136,     0,     0,     0,     0,     0,   391,
       0,     0,     0,   500,   501,   405,     0,     0,     0,   222,
       0,     0,     0,     0,   406,     0,   569,     0,   572,     0,
       0,   251,   149,   407,   151,     0,     0,   544,     0,   546,
     548,     0,     0,   246,     0,   226,     0,   582,   227,     0,
       0,   585,     0,   222,   587,   228,     6,     0,     0,     0,
       0,   246,   350,     7,   229,   459,     0,     8,   318,     0,
       0,   230,   231,   232,   350,   238,   565,     0,     0,     1,
       2,     3,     0,     0,     4,     0,   350,     0,     5,     0,
       0,   136,     0,     0,   243,     6,     0,   576,   485,     0,
     214,     0,     7,   141,   142,     0,     8,     0,   143,     0,
       0,   144,   145,     0,     0,   146,   147,   246,     0,   251,
     149,   150,   151,     0,   152,   153,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    -354,     0,     0,     0,  -354,   340,     0,     0,     0,   196,
       0,     0,     0,    28,     0,     0,     0,     0,     0,     0,
       6,   350,     0,     0,     0,     0,     0,     7,     0,     0,
       0,     8,     0,     0,   459,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,  -354,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   136,     0,     0,   137,   138,   522,   139,     0,
       0,     0,   140,     0,   141,   142,     0,     0,     0,   143,
       0,     0,   144,   145,     0,     0,   146,   147,     0,     0,
     148,   149,   150,   151,     0,   152,   153,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,   154,   155,   156,     0,   157,
     158,   159,   160,   161,   162,   163,   164,   136,     0,     0,
     137,   242,     0,   139,     0,     0,     0,   140,     0,   141,
     142,     0,     0,     0,   143,   281,     0,   144,   145,     0,
       0,   146,   147,     0,     0,   148,   149,   150,   151,     0,
     152,   153,     0,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
     154,   155,   156,     0,   157,   158,   159,   160,   161,   162,
     163,   164,   136,     0,     0,   137,   320,     0,   139,     0,
       0,     0,   140,     0,   141,   142,     0,     0,     0,   143,
       0,     0,   144,   145,     0,     0,   146,   147,     0,     0,
     148,   149,   150,   151,     0,   152,   153,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,   154,   155,   156,     0,   157,
     158,   159,   160,   161,   162,   163,   164,   136,     0,     0,
     137,   323,     0,   139,     0,     0,     0,   140,     0,   141,
     142,     0,     0,     0,   143,     0,     0,   144,   145,     0,
       0,   146,   147,     0,     0,   148,   149,   150,   151,     0,
     152,   153,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
     154,   155,   156,     0,   157,   158,   159,   160,   161,   162,
     163,   164,   136,     0,     0,   137,   439,     0,   139,     0,
       0,     0,   140,     0,   141,   142,     0,     0,     0,   143,
       0,     0,   144,   145,     0,     0,   146,   147,     0,     0,
     148,   149,   150,   151,     0,   152,   153,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,   154,   155,   156,     0,   157,
     158,   159,   160,   161,   162,   163,   164,   136,     0,     0,
     137,     0,     0,   139,   545,     0,     0,   140,     0,   141,
     142,     0,     0,     0,   143,     0,     0,   144,   145,     0,
       0,   146,   147,     0,     0,   148,   149,   150,   151,     0,
     152,   153,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
     154,   155,   156,     0,   157,   158,   159,   160,   161,   162,
     163,   164,   136,     0,     0,   137,     0,     0,   139,     0,
       0,     0,   140,     0,   141,   142,     0,     0,     0,   143,
       0,     0,   144,   145,     0,     0,   146,   147,     0,     0,
     148,   149,   150,   151,     0,   152,   153,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,   154,   155,   156,     0,   157,
     158,   159,   160,   161,   162,   163,   164,     1,     2,     3,
       0,     0,     4,     0,     0,   136,     5,     0,   137,     0,
       0,   259,     0,     6,     0,   140,     0,   141,   142,     0,
       7,     0,   143,     0,     8,   144,   145,     0,     0,   146,
     147,     0,     0,   266,   149,   150,   151,     0,   152,   153,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   154,   155,
     156,    28,   157,   158,   159,   160,   161,   162,   163,   164,
     136,     0,     0,     0,     0,     0,   317,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,   348,   149,
     349,   151,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   524,   136,     0,     0,   243,     0,     0,   457,
     347,     0,   214,     0,     0,   141,   142,     0,     0,     0,
     143,     0,     0,   144,   145,     0,     0,   146,   147,     0,
       0,   348,   149,   458,   151,     0,   152,   153,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   136,     0,     0,   243,     0,
       0,   457,   347,     0,   214,     0,     0,   141,   142,     0,
       0,     0,   143,     0,     0,   144,   145,     0,     0,   146,
     147,     0,     0,   518,   149,   458,   151,     0,   152,   153,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   136,     0,     0,
     243,     0,     0,   139,     0,     0,     0,   140,     0,   141,
     142,     0,     0,     0,   143,     0,     0,   144,   145,     0,
       0,   146,   147,     0,     0,   221,   149,   150,   151,     0,
     152,   153,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   136,
       0,     0,   137,     0,     0,   139,     0,     0,     0,     0,
       0,   141,   142,     0,     0,     0,   143,     0,     0,   144,
     145,     0,     0,   146,   220,     0,     0,   221,   149,   150,
     151,     0,   152,   153,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   136,     0,     0,   243,     0,     0,   244,     0,     0,
       0,     0,     0,   141,   142,     0,     0,     0,   143,     0,
       0,   144,   145,     0,     0,   146,   147,     0,     0,   245,
     149,   150,   151,     0,   152,   153,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   136,     0,     0,   243,     0,     0,   244,
       0,     0,     0,     0,     0,   141,   142,     0,     0,     0,
     143,     0,     0,   144,   145,     0,     0,   146,   147,     0,
       0,   245,   149,   150,   151,     0,   152,   153,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   136,     0,     0,   243,     0,
       0,   259,     0,     0,     0,     0,     0,   141,   142,     0,
       0,     0,   143,     0,     0,   144,   145,     0,     0,   146,
     147,     0,     0,   393,   149,   150,   151,     0,   152,   153,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   136,     0,     0,
     243,     0,     0,   244,     0,     0,     0,     0,     0,   141,
     142,     0,     0,     0,   143,     0,     0,   144,   145,     0,
       0,   146,   147,     0,     0,   221,   149,   150,   151,     0,
     152,   153,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   136,
       0,     0,   243,     0,     0,   259,     0,     0,     0,     0,
       0,   141,   142,     0,     0,     0,   143,     0,     0,   144,
     145,     0,     0,   146,   147,     0,     0,   549,   149,   150,
     151,     0,   152,   153,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   136,     0,     0,   243,     0,     0,   259,     0,     0,
       0,     0,     0,   141,   142,     0,     0,     0,   143,     0,
       0,   144,   145,     0,     0,   146,   147,     0,     0,   556,
     149,   150,   151,     0,   152,   153,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   136,     0,     0,     0,     0,     0,   346,
     347,     0,   214,     0,     0,     0,     0,     0,     0,     0,
       6,     0,   136,     0,     0,     0,     0,     7,   317,   369,
       0,   348,   149,   349,   151,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
     370,   149,   349,   151,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   136,     0,     0,     0,     0,     0,
     317,   469,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     0,   136,     0,     0,     0,     0,     7,   317,
       0,     0,   348,   149,   349,   151,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       0,   370,   149,   349,   151,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   136,     0,     0,     0,     0,
       0,   317,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     0,     0,     0,     0,     3,     0,     7,
       4,     0,     0,   348,   149,   349,   151,     0,     0,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,   450,     0,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     0,   517,     7,     4,     0,     0,
     451,     0,     0,     0,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,   451,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   196,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     7,     0,   329,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,  -139,     0,
       0,     0,   136,     0,     6,   243,     0,     0,   259,     0,
     358,     7,     0,     0,   141,   142,     0,  -141,     0,   143,
       0,     0,   144,   145,     0,     0,   146,   147,     0,     0,
     251,   149,   150,   151,     0,   152,   153,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   -14,   -14,
       0,     0,   -14,   -14,     0,     0,     0,   -14,   -14,   -14,
     -14,   -14,     0,   -14,   -14,   -14,   -14,   -14,   -14,   -14,
     -14,     0,     0,     0,     0,   -14,   -14,   -14,   -14,   -14,
     -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,
     -14,   -14,   -14,   -14,   -14,   -14,   136,     0,     0,   243,
       0,     0,   259,     0,   374,     0,     0,     0,   141,   142,
       0,     0,     0,   143,     0,     0,   144,   145,     0,     0,
     146,   147,     0,     0,   251,   149,   150,   151,   136,   152,
     153,   243,     0,     0,   259,   330,     0,     0,     0,     0,
     141,   142,     0,     0,     0,   143,     0,     0,   144,   145,
       0,     0,   146,   220,     0,     0,   251,   149,   150,   151,
     136,   152,   153,   243,     0,     0,   259,   409,     0,     0,
       0,     0,   141,   142,     0,     0,     0,   143,     0,     0,
     144,   145,     0,     0,   146,   147,     0,     0,   251,   149,
     150,   151,   136,   152,   153,   243,     0,     0,   259,     0,
     471,     0,     0,     0,   141,   142,     0,     0,     0,   143,
       0,     0,   144,   145,     0,     0,   146,   147,     0,     0,
     251,   149,   150,   151,   136,   152,   153,   363,   384,     0,
     259,     0,     0,     0,     0,     0,   141,   142,     0,     0,
       0,   143,     0,     0,   144,   145,     0,     0,   146,   147,
       0,     0,   251,   149,   150,   151,   136,   152,   153,   243,
       0,     0,   259,   485,     0,     0,     0,     0,   141,   142,
       0,     0,     0,   143,     0,     0,   144,   145,     0,     0,
     146,   147,     0,     0,   251,   149,   150,   151,   136,   152,
     153,   243,     0,     0,   259,     0,     0,     0,   140,     0,
     141,   142,     0,     0,     0,   143,     0,     0,   144,   145,
       0,     0,   146,   147,     0,     0,   251,   149,   150,   151,
     136,   152,   153,   243,     0,     0,   259,   547,     0,     0,
       0,     0,   141,   142,     0,     0,     0,   143,     0,     0,
     144,   145,     0,     0,   146,   147,     0,     0,   251,   149,
     150,   151,   136,   152,   153,   363,   561,     0,   259,     0,
       0,     0,     0,     0,   141,   142,     0,     0,     0,   143,
       0,     0,   144,   145,     0,     0,   146,   147,     0,     0,
     251,   149,   150,   151,   136,   152,   153,   243,     0,     0,
     255,     0,     0,     0,     0,     0,   141,   142,     0,     0,
       0,   143,     0,     0,   144,   145,     0,     0,   146,   147,
       0,     0,   251,   149,   150,   151,   136,   152,   153,   243,
       0,     0,   250,     0,     0,     0,     0,     0,   141,   142,
       0,     0,     0,   143,     0,     0,   144,   145,     0,     0,
     146,   147,     0,     0,   251,   149,   150,   151,   136,   152,
     153,   243,     0,     0,   259,     0,     0,     0,     0,     0,
     141,   142,     0,     0,     0,   143,     0,     0,   144,   145,
       0,     0,   146,   147,     0,     0,   251,   149,   150,   151,
     136,   152,   153,   243,     0,     0,   259,     0,     0,     0,
       0,     0,   141,   142,     0,     0,     0,   143,     0,     0,
     144,   145,     0,     0,   146,   220,     0,     0,   251,   149,
     150,   151,   136,   152,   153,   363,     0,     0,   259,     0,
       0,     0,     0,     0,   141,   142,     0,     0,     0,   143,
       0,     0,   144,   145,     0,     0,   146,   147,     0,     0,
     251,   149,   150,   151,   136,   152,   153,   243,     0,     0,
     259,     0,     0,     0,     0,     0,   141,   142,     0,     0,
       0,   143,     0,     0,   144,   145,     0,     0,   146,   147,
       0,     0,   390,   149,   150,   151,   136,   152,   153,   243,
       0,     0,   502,     0,     0,     0,     0,     0,   141,   142,
       0,     0,     0,   143,     0,     0,   144,   145,     0,     0,
     146,   147,     0,     0,   251,   149,   150,   151,   136,   152,
     153,   243,     0,     0,   520,     0,     0,     0,     0,     0,
     141,   142,     0,     0,     0,   143,     0,     0,   144,   145,
       0,     0,   146,   147,     0,     0,   251,   149,   150,   151,
       0,   152,   153
};

static const yytype_int16 yycheck[] =
{
       0,    37,    30,     3,     4,   342,    40,   229,     3,   466,
       3,   226,    34,    42,   268,   215,   135,    39,   139,   301,
     302,     0,    19,     0,    31,     4,   220,     4,    25,   147,
      30,   214,    17,   294,    34,   229,     0,    37,    20,     6,
      40,    41,    14,    43,   227,    27,    46,    40,    10,   310,
      12,     0,     3,    10,     0,    12,    33,    34,     4,    18,
      45,   298,    39,    10,    31,     3,    25,    26,    27,    46,
       9,     9,     9,    20,    12,    10,    40,   314,    29,     9,
      27,   275,    46,    18,    30,   154,    45,    69,    70,     6,
      25,    26,    27,    31,    32,    41,    34,    46,   292,     3,
      46,    31,   220,    10,   386,     9,   563,    69,    70,    88,
      45,   139,    69,    70,    31,    31,    23,    24,     9,   456,
       8,   315,    13,   244,    20,    20,    14,    31,    32,    20,
      34,    27,    27,     9,   255,    31,    27,   137,   259,   139,
      31,   363,   137,     3,   137,   214,   361,   401,   402,     9,
       8,   185,     9,   353,   168,    13,   184,   186,   227,    13,
       9,    13,   139,    12,   379,   165,    29,    30,    18,   363,
     204,    31,    32,   209,    34,     8,   198,    40,    41,   362,
      13,     8,    31,   219,   184,     9,    13,     8,    12,   211,
     190,   191,    13,   139,    20,   190,   196,     8,   198,   228,
     319,   230,    13,     8,   204,   205,     9,     8,    13,   209,
      44,   204,    13,   213,   248,     9,   244,    20,    12,   219,
       9,   198,    21,    12,    27,   225,   226,     5,    31,     9,
      19,   259,    12,   210,    10,     8,   213,   237,    11,    19,
     204,   190,    23,    24,   244,   245,    35,    36,    37,   226,
     196,     9,    38,    39,    12,    35,    36,    37,   441,   259,
     460,   225,    20,   446,    10,   299,   300,   213,   268,    27,
       8,     8,    10,   555,    11,   268,   225,    42,    43,     9,
     226,   295,   296,   297,    14,     3,    31,     8,     6,    10,
      20,     9,     6,   362,    25,    26,    27,    27,   244,     6,
     328,    31,    20,     7,   326,   327,    14,   529,   344,    27,
     504,    10,   348,    31,    32,   351,    34,   317,    14,   341,
     342,    81,   322,   345,   353,   325,    13,     8,   328,    10,
      31,    31,   515,    10,   370,   529,   457,   337,     7,     8,
     340,   462,   342,    20,   344,     8,   346,    10,   348,   342,
      27,   351,   386,    28,    31,   555,     8,     8,    10,    10,
       8,   361,    10,    43,     8,    10,    10,   367,   368,   346,
     370,   317,   441,   337,   388,   389,   325,   446,     9,   379,
       4,   502,    10,     8,   361,    10,     9,     8,   337,    12,
     367,    14,    11,   393,   340,     7,     8,    20,   344,   520,
     346,   401,   379,    10,    27,   351,   401,    10,    31,   303,
     304,   305,   306,     3,    40,   361,     6,     9,    11,     9,
      12,   367,    12,     7,     8,    15,    16,    31,    20,   457,
      20,   460,    31,   379,   456,    27,    10,    27,   507,    31,
      31,    31,    32,    33,    34,    10,   515,     9,   307,   308,
      12,   451,   401,   453,   454,   576,   456,   457,    20,   459,
       8,     9,    10,   456,    12,    27,   466,     9,    14,    31,
      31,   485,    20,    10,    30,   475,   476,   454,   478,    27,
     457,    11,   518,   476,    19,   519,    12,    10,    10,   466,
       8,    31,    79,    10,    10,   495,    10,   497,    30,    10,
      13,   478,    10,   309,   453,   451,   345,   311,   454,   344,
     312,   457,   476,   513,   205,   139,   196,   513,   518,   334,
     466,   555,   522,   443,   150,   478,   152,   153,   154,   475,
     530,   211,   478,   478,    46,   367,    -1,   530,    -1,    -1,
      -1,    -1,   168,    -1,    -1,   545,   495,   547,   576,   549,
     159,    -1,    -1,    -1,    -1,   589,   556,   237,    -1,   185,
      -1,    -1,    -1,   563,   244,    -1,   530,   513,    -1,    -1,
     570,    -1,   196,   573,    -1,   255,   576,    -1,   204,   259,
       3,    -1,   191,     6,    -1,    -1,   563,   211,   214,    -1,
     139,    -1,    15,    16,    -1,    -1,   545,    20,   547,   576,
      -1,   227,   226,    -1,    27,    -1,    -1,    -1,    31,    32,
      33,    34,    -1,    -1,    -1,   164,    -1,   563,    -1,    -1,
     244,   570,   248,    -1,   573,    -1,    -1,    -1,    -1,     3,
     576,   255,     6,    -1,    -1,   259,    -1,   317,    -1,    -1,
      14,    15,    16,    -1,    -1,   254,   326,   327,    -1,    -1,
      -1,    -1,    -1,   262,    -1,    -1,    -1,    31,    32,    33,
      34,   341,    -1,    -1,    -1,   345,    -1,    -1,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,    -1,   314,    -1,
      -1,    -1,    -1,   317,    -1,   244,    -1,    -1,    -1,    -1,
      -1,   250,   326,   327,   186,    -1,   255,    -1,    -1,    -1,
     259,    -1,    -1,   322,   263,   264,   265,   341,    -1,    -1,
       3,   345,   346,     6,    -1,    -1,    -1,   276,    -1,    -1,
      -1,   213,    15,    16,    -1,    -1,   362,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,    -1,    -1,     9,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    20,   368,
     386,    -1,   388,   389,   313,    27,    -1,    -1,   317,    31,
      -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   407,   462,    -1,    -1,    -1,   395,    -1,    -1,    -1,
      -1,    -1,   274,    10,    -1,    -1,    -1,   346,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    -1,   441,    -1,    -1,    -1,    -1,
     446,    -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     454,    -1,   458,   457,    -1,    -1,    -1,    -1,   462,    -1,
     520,    -1,   391,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,   485,
      -1,    -1,    -1,    -1,   346,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,     6,    -1,    -1,     9,    -1,   502,   361,
      13,   507,    15,    16,   493,   494,   495,    20,   497,   515,
      23,    24,    -1,   519,    27,    28,   520,   379,    31,    32,
      33,    34,    -1,    36,    37,    -1,    -1,    -1,   457,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,   405,   406,    15,    -1,    -1,    -1,   555,
      -1,    -1,    -1,    -1,    24,    -1,   545,    -1,   547,    -1,
      -1,    31,    32,    33,    34,    -1,    -1,   496,    -1,   498,
     499,    -1,    -1,   502,    -1,     9,    -1,   566,    12,    -1,
      -1,   570,    -1,   589,   573,    19,    20,    -1,    -1,    -1,
      -1,   520,   454,    27,    28,   457,    -1,    31,   460,    -1,
      -1,    35,    36,    37,   466,     0,   535,    -1,    -1,     4,
       5,     6,    -1,    -1,     9,    -1,   478,    -1,    13,    -1,
      -1,     3,    -1,    -1,     6,    20,    -1,     9,    10,    -1,
      12,    -1,    27,    15,    16,    -1,    31,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    28,   576,    -1,    31,
      32,    33,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
       0,    -1,    -1,    -1,     4,    31,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      20,   563,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    31,    -1,    -1,   576,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    88,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     3,    -1,    -1,     6,     7,    31,     9,    -1,
      -1,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,    33,    34,    -1,    36,    37,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,     3,    -1,    -1,
       6,     7,    -1,     9,    -1,    -1,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    20,    28,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,    -1,
      36,    37,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    78,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,     3,    -1,    -1,     6,     7,    -1,     9,    -1,
      -1,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,    33,    34,    -1,    36,    37,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,     3,    -1,    -1,
       6,     7,    -1,     9,    -1,    -1,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    78,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,     3,    -1,    -1,     6,     7,    -1,     9,    -1,
      -1,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,    33,    34,    -1,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,     3,    -1,    -1,
       6,    -1,    -1,     9,    10,    -1,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    78,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,     3,    -1,    -1,     6,    -1,    -1,     9,    -1,
      -1,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,    33,    34,    -1,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,     4,     5,     6,
      -1,    -1,     9,    -1,    -1,     3,    13,    -1,     6,    -1,
      -1,     9,    -1,    20,    -1,    13,    -1,    15,    16,    -1,
      27,    -1,    20,    -1,    31,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    88,    80,    81,    82,    83,    84,    85,    86,    87,
       3,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31,    32,
      33,    34,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     3,    -1,    -1,     6,    -1,    -1,     9,
      10,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,    -1,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,     3,    -1,    -1,     6,    -1,
      -1,     9,    10,    -1,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     3,    -1,    -1,
       6,    -1,    -1,     9,    -1,    -1,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,     3,
      -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     3,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
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
       6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,     3,
      -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     3,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     3,    -1,    -1,    -1,    -1,    -1,     9,
      10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,     3,    -1,    -1,    -1,    -1,    27,     9,    10,
      -1,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      31,    32,    33,    34,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,     3,    -1,    -1,    -1,    -1,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,     3,    -1,    -1,    -1,    -1,    27,     9,
      -1,    -1,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    31,    32,    33,    34,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,     3,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,     6,    -1,    27,
       9,    -1,    -1,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,     7,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,     7,    27,     9,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    10,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    14,    -1,
      -1,    -1,     3,    -1,    20,     6,    -1,    -1,     9,    -1,
      11,    27,    -1,    -1,    15,    16,    -1,    14,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,    33,    34,    -1,    36,    37,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     8,     9,
      -1,    -1,    12,    13,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     3,    -1,    -1,     6,
      -1,    -1,     9,    -1,    11,    -1,    -1,    -1,    15,    16,
      -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    34,     3,    36,
      37,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,
      15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,    34,
       3,    36,    37,     6,    -1,    -1,     9,    10,    -1,    -1,
      -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,
      33,    34,     3,    36,    37,     6,    -1,    -1,     9,    -1,
      11,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,    33,    34,     3,    36,    37,     6,     7,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,
      -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,
      -1,    -1,    31,    32,    33,    34,     3,    36,    37,     6,
      -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    34,     3,    36,
      37,     6,    -1,    -1,     9,    -1,    -1,    -1,    13,    -1,
      15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,    34,
       3,    36,    37,     6,    -1,    -1,     9,    10,    -1,    -1,
      -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,
      33,    34,     3,    36,    37,     6,     7,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,    33,    34,     3,    36,    37,     6,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,
      -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,
      -1,    -1,    31,    32,    33,    34,     3,    36,    37,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    34,     3,    36,
      37,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,    34,
       3,    36,    37,     6,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,
      33,    34,     3,    36,    37,     6,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,    33,    34,     3,    36,    37,     6,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,
      -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,
      -1,    -1,    31,    32,    33,    34,     3,    36,    37,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    34,     3,    36,
      37,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,    34,
      -1,    36,    37
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
       6,    31,    13,   113,   128,     8,    13,   112,   112,   121,
     130,     6,    31,     9,    12,   130,   138,   139,   112,   121,
      28,    31,    93,    96,   144,   145,     9,    12,    19,    28,
      35,    36,    37,   128,   129,   127,   130,   132,     0,   152,
      31,   153,     7,     6,     9,    31,   109,   113,   128,   137,
       9,    31,    91,   130,    14,     9,    93,    93,    93,     9,
     106,   110,    14,     9,     9,     9,    31,   142,     9,    31,
      13,    13,    13,   109,   130,     9,    12,    19,    35,    36,
      37,    28,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,   108,    95,    18,    25,    26,    27,    45,    23,
      24,    38,    39,    29,    30,    40,    41,    42,    43,    20,
      18,    21,    44,    17,    45,     8,    13,     9,    90,     5,
       7,   111,   146,     7,   142,   145,   116,   127,    10,    10,
      10,    31,   125,   126,     6,    13,   144,   145,   114,   112,
      31,   116,   119,   120,   121,     6,     9,    10,    31,    33,
      90,   112,   128,   130,   133,   134,   136,   138,    11,   110,
     139,     9,    12,     6,    91,   107,   140,   144,   146,    10,
      31,   128,   133,   135,    11,   110,   129,   140,   129,     9,
     127,   130,    19,    25,     7,    31,   130,    10,    10,    10,
      31,     9,   142,    31,   137,    14,   142,   109,   109,   109,
      81,   145,   147,    13,    13,    15,    24,    33,    90,    10,
      92,   107,   109,    31,    31,   107,   101,    95,    95,    95,
     104,    96,    96,    97,    97,    98,    98,    98,    98,    99,
      99,   100,   101,   102,   103,   109,   104,   107,   153,     7,
     113,    28,     7,     8,   125,   144,    14,   122,   123,   128,
       7,    31,   120,   145,     9,   122,   119,     9,    33,    90,
     130,   138,     9,   128,   138,    10,     8,    10,    11,    10,
     133,    11,   110,   140,   141,   112,   128,   155,     8,    10,
      10,    11,    31,    31,    10,    10,    96,    97,    95,    95,
     130,    10,   142,    10,    10,    10,     9,   146,   147,   147,
      90,    90,     9,    93,     8,    10,    11,    14,    13,   110,
     126,     7,   110,     8,    13,    14,    13,     7,    31,   128,
       9,    31,    31,   137,    75,   134,    10,    11,     7,     8,
     128,   135,   136,    30,    19,    12,    95,    10,    10,    10,
     142,   142,   111,   142,   109,    10,   109,    10,   109,    31,
     137,   107,   106,   123,   110,   130,    31,   137,    10,   130,
      10,     7,   140,     8,    31,   109,    79,    10,   111,   142,
      10,   111,   142,    10,   130,    10,     9,   130,    10,    10,
      30,    11,   142,    13,   111,   142,   111,   142,    10,   128,
      10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    90,    90,    90,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    94,    94,    94,    94,    94,    94,
      95,    95,    95,    95,    95,    95,    96,    96,    96,    96,
      97,    97,    97,    97,    97,    98,    98,    98,    99,    99,
      99,    99,    99,   100,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   109,   109,   110,   111,   111,   111,   111,   112,   112,
     112,   112,   112,   112,   112,   112,   113,   113,   114,   114,
     114,   115,   115,   115,   115,   115,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   117,   117,
     117,   118,   118,   119,   119,   119,   120,   120,   121,   121,
     121,   121,   122,   122,   123,   123,   123,   124,   124,   124,
     125,   125,   126,   126,   127,   127,   128,   128,   128,   128,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   130,   130,   130,   130,   131,   131,   132,   132,
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
     154,   154,   155,   155,   155,   155,   155
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     2,     3,
       4,     4,     4,     7,     2,     3,     4,     3,     3,     2,
       2,     4,     6,     7,     1,     3,     1,     2,     2,     2,
       2,     2,     4,     5,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     5,     5,     5,     3,     3,     3,     1,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     3,     5,     2,     1,     2,
       1,     2,     2,     3,     1,     2,     1,     3,     1,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     4,
       2,     1,     1,     1,     2,     2,     3,     3,     2,     1,
       2,     1,     1,     3,     1,     2,     3,     4,     5,     2,
       1,     3,     1,     3,     1,     1,     2,     1,     2,     3,
       1,     2,     2,     3,     3,     3,     3,     4,     3,     4,
       4,     3,     1,     2,     2,     3,     1,     1,     1,     2,
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
       1,     1,     4,     3,     3,     2,     4
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
#line 34 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s primary_expression: IDENTIFIER FINAL\n",linea, gramaticas );}
#line 2391 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 35 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: CONSTANT FINAL\n",linea,  gramaticas );}
#line 2397 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 36 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );}
#line 2403 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 37 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: LEFT_PARENTHESIS FINAL expression RIGHT_PARETHESIS\n",linea, gramaticas);}
#line 2409 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 38 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: INTEGER FINAL\n",linea, gramaticas );}
#line 2415 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 42 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression\n",linea, gramaticas );}
#line 2421 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 43 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: pointer primary_expression\n",linea, gramaticas);}
#line 2427 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 44 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );}
#line 2433 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 45 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );}
#line 2439 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 46 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );}
#line 2445 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 47 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
#line 2451 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 48 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);
}
#line 2458 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 49 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
#line 2464 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 50 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
#line 2470 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 51 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_PARENTHESIS argument_expression_list LEFT_PARENTHESIS\n",linea, gramaticas);}
#line 2476 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 53 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DOT IDENTIFIER\n",linea, gramaticas);}
#line 2482 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 54 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression PTR_OP IDENTIFIER\n",linea, gramaticas);}
#line 2488 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 55 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression INC_OP\n",linea, gramaticas );}
#line 2494 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 56 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DEC_OP\n",linea, gramaticas );}
#line 2500 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 57 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
#line 2506 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 58 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2512 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 59 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2518 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 64 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: assignment_expression\n",linea, gramaticas);}
#line 2524 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 65 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: argument_expression_list COMMA assignment_expression\n",linea, gramaticas);}
#line 2530 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 69 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: postfix_expression\n",linea, gramaticas );}
#line 2536 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 70 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression:pointer postfix_expression\n",linea, gramaticas);}
#line 2542 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 71 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: INC_OP unary_expression\n",linea, gramaticas );}
#line 2548 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 72 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: DEC_OP unary_expression\n",linea, gramaticas );}
#line 2554 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 73 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: unary_operator cast_expression\n",linea, gramaticas );}
#line 2560 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 74 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
#line 2566 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 75 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2572 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 76 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2578 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 80 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: BIT_AND\n",linea, gramaticas );}
#line 2584 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 81 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MUL\n",linea, gramaticas );}
#line 2590 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 82 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PLUS\n",linea, gramaticas );}
#line 2596 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 83 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MINUS\n",linea, gramaticas );}
#line 2602 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 84 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PRIME\n",linea, gramaticas );}
#line 2608 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 85 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: EXCLAMATION\n",linea, gramaticas);}
#line 2614 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 89 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: unary_expression\n",linea, gramaticas);}
#line 2620 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 90 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2626 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 91 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2632 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 92 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2638 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 93 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2644 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 94 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2650 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 101 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MUL cast_expression\n",linea, gramaticas );}
#line 2656 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 102 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression DIV cast_expression\n",linea, gramaticas );}
#line 2662 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 103 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MOD cast_expression\n",linea,gramaticas );}
#line 2668 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 104 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: cast_expression\n",linea, gramaticas);}
#line 2674 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 108 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: multiplicative_expression\n",linea,gramaticas );}
#line 2680 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 109 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression:multiplicative_expression UP_ARROW and_expression\n",linea,gramaticas );}
#line 2686 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 110 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression:multiplicative_expression OR_OP logical_and_expression\n",linea,gramaticas );}
#line 2692 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 111 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression PLUS multiplicative_expression\n",linea,gramaticas) ;}
#line 2698 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 112 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression MINUS multiplicative_expression\n",linea, gramaticas) ;}
#line 2704 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 116 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: additive_expression\n",linea, gramaticas );}
#line 2710 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 117 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);}
#line 2716 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 118 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression RIGHT_OP additive_expression \n",linea, gramaticas);}
#line 2722 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 122 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: shift_expression\n",linea, gramaticas);}
#line 2728 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 123 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LESS shift_expression\n",linea, gramaticas);}
#line 2734 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 124 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GREATER shift_expression\n",linea, gramaticas );}
#line 2740 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 125 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LE_OP shift_expression\n",linea, gramaticas);}
#line 2746 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 126 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GE_OP shift_expression\n",linea, gramaticas );}
#line 2752 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 130 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: relational_expression\n",linea, gramaticas);}
#line 2758 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 131 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression EQ_OP relational_expression\n",linea, gramaticas );}
#line 2764 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 132 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression NE_OP relational_expression\n",linea, gramaticas);}
#line 2770 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 136 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: equality_expression\n",linea, gramaticas );}
#line 2776 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 137 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: and_expression BIT_AND equality_expression\n",linea, gramaticas);}
#line 2782 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 141 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: and_expression\n",linea, gramaticas );}
#line 2788 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 142 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: exclusive_or_expression UP_ARROW and_expression\n",linea, gramaticas );}
#line 2794 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 146 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: exclusive_or_expression\n",linea, gramaticas);}
#line 2800 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 147 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression\n",linea, gramaticas );}
#line 2806 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 151 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: inclusive_or_expression\n",linea,gramaticas );}
#line 2812 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 152 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n",linea, gramaticas);}
#line 2818 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 156 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_and_expression\n",linea,gramaticas);}
#line 2824 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 157 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_or_expression OR_OP logical_and_expression\n",linea, gramaticas );}
#line 2830 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 161 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression\n",linea, gramaticas);}
#line 2836 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 162 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression INTERROGATION expression COLON conditional_expression\n",linea,gramaticas);}
#line 2842 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 166 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: conditional_expression\n",linea, gramaticas);}
#line 2848 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 167 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: unary_expression assignment_operator assignment_expression\n",linea,gramaticas);}
#line 2854 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 171 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: EQU\n",linea, gramaticas);}
#line 2860 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 172 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MUL_ASSIGN\n",linea,gramaticas );}
#line 2866 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 173 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: DIV_ASSIGN\n",linea,gramaticas);}
#line 2872 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 174 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MOD_ASSIGN\n",linea,gramaticas);}
#line 2878 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 175 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: ADD_ASSIGN\n",linea, gramaticas);}
#line 2884 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 176 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: SUB_ASSIGN\n",linea, gramaticas);}
#line 2890 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 177 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: LEFT_ASSIGN\n",linea, gramaticas);}
#line 2896 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 178 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: RIGHT_ASSIGN\n",linea,gramaticas);}
#line 2902 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 179 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: AND_ASSIGN\n",linea, gramaticas);}
#line 2908 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 180 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: XOR_ASSIGN\n",linea, gramaticas);}
#line 2914 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 181 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: OR_ASSIGN\n",linea, gramaticas);}
#line 2920 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 185 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: assignment_expression\n",linea, gramaticas);}
#line 2926 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: expression COMMA assignment_expression\n",linea,gramaticas);}
#line 2932 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 190 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  constant_expression: conditional_expression\n",linea, gramaticas );}
#line 2938 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 194 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 2944 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 195 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers init_declarator_list SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 2950 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 196 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: LEFT_PARENTHESIS declaration_specifiers RIGHT_PARENTHESIS init_declarator_list SEMICOLON \n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 2956 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 197 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  declaration: LEFT_PARENTHESIS declaration_specifiers RIGHT_PARENTHESIS init_declarator_list SEMICOLON \n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 2962 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 201 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier \n",linea, gramaticas);}
#line 2968 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 202 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier declaration_specifiers\n",linea, gramaticas);}
#line 2974 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 203 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);}
#line 2980 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 204 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
#line 2986 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 205 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);}
#line 2992 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 206 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
#line 2998 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 208 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier\n",linea, gramaticas );}
#line 3004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 209 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier declaration_specifiers\n",linea, gramaticas );}
#line 3010 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 214 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator\n",linea, gramaticas );}
#line 3016 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 215 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator_list COMMA init_declarator\n",linea,gramaticas);}
#line 3022 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 219 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator\n",linea, gramaticas );}
#line 3028 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 220 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator EQU initializer\n",linea, gramaticas );}
#line 3034 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 221 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: multiplicative_expression\n",linea, gramaticas );}
#line 3040 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 225 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: TYPEDEF\n",linea, gramaticas);}
#line 3046 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 226 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: EXTERN\n",linea, gramaticas);}
#line 3052 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 227 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: STATIC\n",linea,gramaticas);}
#line 3058 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 228 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: AUTO\n",linea, gramaticas);}
#line 3064 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 229 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: REGISTER\n",linea, gramaticas);}
#line 3070 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 233 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: VOID\n",linea, gramaticas);}
#line 3076 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 234 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: CHAR\n",linea, gramaticas);}
#line 3082 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 235 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SHORT\n",linea, gramaticas);}
#line 3088 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 236 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: INT\n",linea, gramaticas);}
#line 3094 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 237 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: LONG\n",linea, gramaticas);}
#line 3100 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 238 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: FLOAT\n",linea, gramaticas);}
#line 3106 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 239 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: DOUBLE\n",linea, gramaticas);}
#line 3112 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 240 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SIGNED\n",linea, gramaticas);}
#line 3118 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 241 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: UNSIGNED\n",linea, gramaticas);}
#line 3124 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 242 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: struct_or_union_specifier\n",linea, gramaticas );}
#line 3130 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 243 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: enum_specifier\n",linea, gramaticas );}
#line 3136 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 244 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: TYPE_NAME\n",linea,gramaticas);}
#line 3142 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 248 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET \n",linea, gramaticas );}
#line 3148 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 249 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET\n",linea,gramaticas );}
#line 3154 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 250 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER\n",linea, gramaticas);}
#line 3160 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 254 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: STRUCT\n",linea, gramaticas);}
#line 3166 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 255 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: UNION\n",linea, gramaticas);}
#line 3172 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 259 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration\n",linea, gramaticas );}
#line 3178 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 260 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration_list struct_declaration\n",linea, gramaticas );}
#line 3184 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 261 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list:  struct_declaration_list declaration_list\n",linea, gramaticas );}
#line 3190 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 265 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3196 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 266 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration: IDENTIFIER struct_declarator_list SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3202 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 270 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier specifier_qualifier_list\n",linea, gramaticas );}
#line 3208 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 271 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier\n",linea, gramaticas );}
#line 3214 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 272 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier specifier_qualifier_list\n",linea,gramaticas);}
#line 3220 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 273 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier\n",linea, gramaticas );}
#line 3226 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 278 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator\n",linea, gramaticas );}
#line 3232 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 279 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator_list COMMA struct_declarator\n",linea, gramaticas );}
#line 3238 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 283 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator\n",linea, gramaticas );}
#line 3244 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 284 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: COLON constant_expression \n",linea, gramaticas );}
#line 3250 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 285 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator COLON constant_expression \n",linea, gramaticas);}
#line 3256 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 289 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3262 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 290 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET \n",linea,gramaticas);}
#line 3268 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 291 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER\n",linea, gramaticas );}
#line 3274 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 295 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator\n",linea, gramaticas);}
#line 3280 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 296 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator_list COMMA enumerator\n",linea, gramaticas );}
#line 3286 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 300 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER\n",linea, gramaticas);}
#line 3292 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 301 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER EQU constant_expression\n",linea,gramaticas);}
#line 3298 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 305 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: CONST\n",linea,gramaticas);}
#line 3304 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 306 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: VOLATILE\n",linea, gramaticas);}
#line 3310 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 310 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: pointer direct_declarator \n",linea, gramaticas );}
#line 3316 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 311 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: direct_declarator\n",linea, gramaticas );}
#line 3322 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 312 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: declarator direct_declarator\n",linea, gramaticas );}
#line 3328 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 313 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: direct_declarator EQU initializer \n",linea, gramaticas );}
#line 3334 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 318 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: IDENTIFIER\n",linea, gramaticas);}
#line 3340 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 319 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator INC_OP\n",linea, gramaticas);}
#line 3346 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 320 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator DEC_OP\n",linea, gramaticas);}
#line 3352 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 321 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator DOT direct_declarator\n",linea, gramaticas);}
#line 3358 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 322 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator PTR_OP direct_declarator\n",linea, gramaticas);}
#line 3364 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 323 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3370 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 324 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3376 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 325 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET\n",linea,gramaticas);}
#line 3382 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 326 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
#line 3388 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 328 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3394 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 329 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3400 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 331 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
#line 3406 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 335 "parser.y" /* yacc.c:1646  */
    { printf("%d con %s  pointer: pointer_type\n",linea, gramaticas);}
#line 3412 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 336 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: pointer_type type_qualifier_list\n",linea, gramaticas );}
#line 3418 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 337 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: pointer_type pointer\n",linea, gramaticas );}
#line 3424 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 338 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: pointer_type type_qualifier_list pointer\n",linea,gramaticas);}
#line 3430 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 342 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: MUL\n",linea,gramaticas);}
#line 3436 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 343 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer_type: BIT_AND\n",linea,gramaticas);}
#line 3442 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 347 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier\n",linea,gramaticas );}
#line 3448 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 348 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier_list type_qualifier\n",linea, gramaticas );}
#line 3454 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 353 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list\n",linea, gramaticas );}
#line 3460 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 354 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list COMMA ELLIPSIS\n",linea, gramaticas);}
#line 3466 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 360 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers declarator\n",linea, gramaticas );}
#line 3472 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 361 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas );}
#line 3478 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 362 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers\n",linea, gramaticas );}
#line 3484 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 363 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declarator\n",linea, gramaticas );}
#line 3490 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 364 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: IDENTIFIER abstract_declarator\n",linea, gramaticas );}
#line 3496 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 365 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: IDENTIFIER abstract_declarator\n",linea, gramaticas
	 );}
#line 3503 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 367 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3509 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 368 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS IDENTIFIER pointer RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3515 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 369 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS IDENTIFIER RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3521 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 374 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER COMMA identifier_list\n",linea, gramaticas);}
#line 3527 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 375 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER COMMA parameter_list\n",linea, gramaticas);}
#line 3533 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 378 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_declaration\n",linea, gramaticas);}
#line 3539 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 379 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_list COMMA parameter_declaration\n",linea, gramaticas);}
#line 3545 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 382 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list\n",linea, gramaticas);}
#line 3551 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 383 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list abstract_declarator\n",linea, gramaticas);}
#line 3557 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 388 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer\n",linea, gramaticas);}
#line 3563 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 389 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: direct_abstract_declarator\n",linea, gramaticas );}
#line 3569 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 390 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer direct_abstract_declarator\n",linea, gramaticas);}
#line 3575 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 394 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS \n",linea, gramaticas );}
#line 3581 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 395 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator:  LEFT_SBRACKET RIGHT_SBRACKET \n",linea, gramaticas);}
#line 3587 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 396 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
#line 3593 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 397 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
#line 3599 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 398 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
#line 3605 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 399 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea, gramaticas);}
#line 3611 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 400 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS \n",linea, gramaticas );}
#line 3617 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 401 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas );}
#line 3623 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 402 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea,  gramaticas  );}
#line 3629 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 406 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: assignment_expression\n",linea, gramaticas );}
#line 3635 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 407 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list RIGHT_BRACKET\n",linea,  gramaticas );}
#line 3641 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 408 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET\n",linea, gramaticas );}
#line 3647 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 412 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer\n",linea, gramaticas);}
#line 3653 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 413 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer_list COMMA initializer \n",linea, gramaticas);}
#line 3659 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 417 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: labeled_statement\n",linea, gramaticas );}
#line 3665 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 418 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: compound_statement\n",linea, gramaticas);}
#line 3671 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 419 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: expression_statement\n",linea,gramaticas );}
#line 3677 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 420 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: selection_statement\n",linea, gramaticas);}
#line 3683 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 421 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: iteration_statement\n",linea, gramaticas );}
#line 3689 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 422 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: jump_statement\n",linea, gramaticas );}
#line 3695 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 426 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: IDENTIFIER COLON statement \n",linea, gramaticas );}
#line 3701 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 427 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: CASE constant_expression COLON statement\n",linea, gramaticas );}
#line 3707 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 428 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: DEFAULT COLON statement\n",linea, gramaticas );}
#line 3713 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 432 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET RIGHT_BRACKET\n",linea, gramaticas);}
#line 3719 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 433 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET statement_list RIGHT_BRACKET\n",linea, gramaticas );}
#line 3725 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 434 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3731 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 435 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3737 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 439 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration\n",linea, gramaticas );}
#line 3743 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 440 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration_list declaration\n",linea, gramaticas);}
#line 3749 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 441 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration_list statement_list\n",linea, gramaticas);}
#line 3755 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 445 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement\n",linea, gramaticas );}
#line 3761 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 446 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: statement DEFINE define\n",linea, gramaticas);}
#line 3767 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 447 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement_list statement\n",linea, gramaticas);}
#line 3773 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 448 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement_list declaration_list\n",linea, gramaticas);}
#line 3779 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 452 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3785 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 453 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: expression SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3791 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 457 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea,gramaticas);}
#line 3797 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 458 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement\n",linea, gramaticas);}
#line 3803 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 459 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 3809 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 463 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3815 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 464 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3821 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 465 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 3827 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 466 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3833 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 467 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3839 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 468 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3845 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 469 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3851 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 470 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 3857 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 471 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3863 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 472 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3869 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 473 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3875 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 477 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: GOTO IDENTIFIER SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3881 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 478 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: CONTINUE SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3887 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 479 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: BREAK SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3893 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 480 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3899 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 481 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN expression SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3905 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 485 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a external_declaration\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3911 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 486 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a ciclo translation_unit\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3917 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 487 "parser.y" /* yacc.c:1646  */
    {printf("%d  translation_unit: Archivo Vacío\n",linea );memset(gramaticas,0,sizeof(gramaticas));}
#line 3923 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 492 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: function_definition\n",linea, gramaticas);}
#line 3929 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 493 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: declaration\n",linea, gramaticas);}
#line 3935 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 494 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas)); printf("%d con %s  external_declaration: DEFINE define\n",linea, gramaticas);}
#line 3941 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 495 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 3947 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 496 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 3953 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 497 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 3959 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 498 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: \\n \n",linea, gramaticas);}
#line 3965 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 499 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: SEMICOLON\n",linea, gramaticas);}
#line 3971 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 500 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: compound_statement\n",linea, gramaticas);}
#line 3977 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 504 "parser.y" /* yacc.c:1646  */
    {printf("Sigue");}
#line 3983 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 505 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define: IDENTIFIER define\n",linea, gramaticas);}
#line 3989 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 593 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator declaration_list compound_statement\n",linea,gramaticas);}
#line 3995 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 594 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator compound_statement \n",linea, gramaticas);}
#line 4001 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 595 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator declaration_list compound_statement\n",linea, gramaticas );}
#line 4007 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 596 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator compound_statement\n",linea,gramaticas);}
#line 4013 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 597 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator declaration_list compound_statement function_definition\n",linea,gramaticas);}
#line 4019 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 4023 "parser.tab.c" /* yacc.c:1646  */
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
#line 600 "parser.y" /* yacc.c:1906  */


#include<stdio.h>
