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
#define YYFINAL  170
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3096

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  334
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  543

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
      46,    47,    48,    49,    51,    52,    53,    54,    55,    56,
      57,    61,    62,    66,    67,    68,    69,    70,    71,    72,
      73,    77,    78,    79,    80,    81,    82,    86,    87,    88,
      89,    90,    91,    97,    98,    99,   100,   104,   105,   106,
     110,   111,   112,   116,   117,   118,   119,   120,   124,   125,
     126,   130,   131,   135,   136,   140,   141,   145,   146,   150,
     151,   155,   156,   160,   161,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   179,   180,   184,   188,
     189,   190,   194,   195,   196,   197,   198,   199,   204,   205,
     209,   210,   214,   215,   216,   217,   218,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   237,
     238,   239,   243,   244,   248,   249,   250,   254,   258,   259,
     260,   261,   266,   267,   271,   272,   273,   277,   278,   279,
     283,   284,   288,   289,   293,   294,   298,   299,   300,   304,
     305,   306,   307,   308,   309,   311,   312,   314,   318,   319,
     320,   321,   325,   326,   330,   331,   336,   337,   343,   344,
     345,   346,   347,   348,   350,   351,   352,   353,   357,   358,
     361,   362,   365,   366,   371,   372,   373,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   389,   390,   391,   395,
     396,   400,   401,   402,   403,   404,   405,   409,   410,   411,
     415,   416,   417,   418,   422,   423,   424,   428,   429,   430,
     434,   435,   439,   440,   441,   445,   446,   447,   448,   449,
     450,   454,   455,   456,   457,   458,   462,   463,   464,   469,
     470,   471,   472,   473,   474,   475,   476,   479,   480,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   568,   569,   570,   571
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

#define YYPACT_NINF -360

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-360)))

#define YYTABLE_NINF -334

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1439,    17,   724,    60,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,    21,  -360,  -360,   231,
      58,  -360,  1490,   516,  -360,    57,   419,  -360,  2395,  2289,
     463,   222,     6,  -360,   641,  -360,  -360,  -360,   -17,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,   724,     8,    -9,    64,  -360,   119,  2289,
      60,  -360,  -360,  -360,   419,   787,    91,  2088,  2547,    81,
    -360,   211,  -360,   419,   810,  2867,  -360,   231,    61,  -360,
    1320,  2107,  2579,   222,   222,  -360,   333,  -360,  -360,     6,
    -360,  -360,    -6,  -360,  -360,   108,   172,  -360,    -9,  -360,
    -360,  1320,  -360,   787,  2357,  -360,   490,   787,   787,  -360,
    1584,  -360,   583,  -360,   206,  -360,  -360,   584,  -360,    92,
     212,  -360,   240,   246,   266,  1800,  -360,  -360,  -360,    95,
    -360,  -360,   214,   323,  -360,  2899,  2931,  2931,    38,   366,
    -360,  2963,  -360,   314,   180,   197,   342,   288,   275,   292,
     302,   305,    32,  -360,   359,    83,   211,  2179,  2611,   895,
    -360,  1800,  -360,    82,  2963,   330,   344,   365,   387,  1405,
     391,   379,   427,   432,  2643,   635,  -360,  -360,   239,   293,
    -360,  -360,  -360,   980,  1065,  -360,  -360,  -360,  -360,  2675,
    -360,  -360,  -360,    43,  1320,  2995,  -360,   417,     8,   457,
     458,  -360,   459,   333,   333,  2107,  -360,  -360,   438,   440,
    2963,  -360,    -9,   326,    78,  -360,  -360,  1320,  2088,  2963,
     259,  -360,   460,  2376,  1656,  3027,    38,   116,   256,   442,
     386,  -360,  -360,  -360,  1511,  -360,  -360,   280,   271,   469,
    2963,   366,  1872,  -360,  -360,  -360,   355,  2707,  2963,   450,
     453,  -360,  -360,  -360,  2963,  2963,  2963,  2963,  2963,  2963,
    2963,  2963,  2963,  2963,  2963,  2963,  2963,  2963,  2963,  2963,
    2963,  2963,  2963,  -360,  -360,  -360,   477,  -360,   478,  2462,
      51,  1405,   481,  1405,  2963,  2963,  2963,   482,   411,  1728,
     488,  -360,  -360,  -360,   300,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  2963,  2963,  -360,   480,
    -360,  1150,  -360,  -360,  1320,  -360,   397,  2198,  -360,  -360,
    -360,   461,   493,  -360,  -360,  -360,  -360,   353,  -360,  2963,
    -360,   583,    51,  1944,  -360,  -360,   118,   503,  -360,  -360,
    2739,  2963,  2963,    38,   506,  3059,  -360,  -360,   382,  -360,
     249,  -360,  -360,  -360,  -360,  -360,   314,   314,   180,   180,
     197,   197,   197,   197,   342,   342,   288,   275,   292,   302,
     213,   305,  -360,  -360,  -360,  1405,  -360,   385,   410,   414,
     509,  1320,  2771,  -360,  -360,  -360,  -360,  -360,  -360,  2803,
    -360,   511,  -360,   489,  -360,  -360,  2515,   118,   515,  -360,
     517,  -360,  2963,   207,    75,  -360,  -360,   518,  -360,  2016,
    -360,  2963,  -360,  -360,  2963,  -360,  1405,  1405,  1405,  2963,
    1235,  2963,  2835,  -360,  -360,  2270,   496,  1656,   539,  -360,
    -360,  -360,  -360,  -360,  -360,    38,   541,  -360,  -360,   473,
    -360,  -360,   422,  1405,   433,  1405,   456,  -360,    61,  -360,
     543,  -360,  1405,   542,  -360,  1405,  -360,  1405,  -360,  -360,
    -360,  -360,  -360
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     238,     0,     0,     0,   246,   163,   162,   149,   102,   103,
     104,   105,   106,   108,   109,   110,   111,   114,   115,   112,
     113,   144,   145,   107,   122,   123,     0,   245,   240,     0,
       0,    98,    92,    94,   116,     0,   182,   117,    96,   100,
     147,     0,   158,   118,     0,   236,   239,   242,     0,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   247,   241,     0,     0,     0,   139,    89,     0,   100,
       0,    91,    93,    95,   128,     0,   121,     0,     0,   184,
     183,   185,    97,   130,     0,     0,   214,     0,   100,   334,
       0,     0,     0,     0,     0,   148,   146,   164,   160,   159,
       1,   237,     0,   248,   152,   142,     0,   140,     0,    90,
     332,     0,    99,   129,     0,   124,   182,   131,     0,     4,
       0,   192,     2,     3,     0,     6,   177,   170,   171,   184,
       0,   180,   166,     0,     0,     0,   188,    36,    35,    31,
      33,    34,    32,     0,     2,     0,     0,     0,     7,    23,
      37,     0,    46,    47,    50,    53,    58,    61,    63,    65,
      67,    69,    71,    88,     0,     0,   186,     0,     0,     0,
     210,     0,   220,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,    73,    86,     0,     0,
     217,   201,   202,     0,     0,   203,   204,   205,   206,     0,
     196,   101,   215,   202,   216,     0,   157,   149,   171,     0,
       0,   154,     0,   150,   151,     0,   165,   161,     0,     0,
       0,   137,     0,     0,   202,   120,   125,   126,     0,     0,
       0,   132,   134,     0,     0,     0,     7,     0,   184,   172,
       0,   168,   169,   193,     0,   187,    11,     2,     0,   118,
       0,    24,     0,    28,    25,    26,     0,     0,     0,     0,
       0,    16,    17,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   189,     8,   194,     0,   190,     0,   210,
     100,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       0,   232,   233,   234,     0,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,     0,     0,   221,     2,
     212,     0,   211,   218,   219,   199,     0,     0,   155,   156,
     153,     0,     0,   143,   141,   138,   135,     0,   127,     0,
     119,     2,   100,     0,     5,   173,     0,   118,   167,   181,
       0,     0,     0,     2,   118,     0,     9,    12,     0,    21,
       0,    14,    15,    44,    45,    43,    48,    49,    51,    52,
      54,    55,    56,    57,    59,    60,    62,    64,    66,    68,
       0,    70,   195,   191,   207,     0,   209,     0,     0,     0,
       0,     0,     0,   231,   235,    74,    87,   213,   197,     0,
     178,   179,   243,     0,   133,   136,   184,     2,   118,   176,
       0,   174,     0,    47,     0,    39,    38,     0,    29,     0,
      18,     0,    13,    10,     0,   208,     0,     0,     0,     0,
       0,   203,     0,   198,   200,     0,     0,     0,     0,    29,
     175,    40,    41,    42,    30,     2,   118,    22,    72,   222,
     224,   225,     0,     0,     0,     0,     0,   244,   100,    30,
       0,    19,     0,     0,   230,     0,   227,     0,    20,   223,
     226,   229,   228
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -360,  -126,   341,  -360,   198,  -360,  -193,  -300,  -308,   -50,
      89,   209,   210,   215,   216,   208,  -360,   -88,  -132,  -360,
     158,   -89,    15,    24,   -22,   421,  -360,  -133,  -360,  -360,
     371,  -173,    62,  -360,   155,  -360,   389,   273,    25,     1,
      10,     0,  -360,  -360,  -156,  -306,   166,   171,  -188,   -34,
    -115,  -253,  -360,   102,  -360,   -14,   -33,  -145,  -359,  -360,
    -360,  -360,  -360,   525,   437,  -360,  -360
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   218,   219,   428,   255,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   256,   257,   386,
     258,   234,   156,   157,    30,    31,    32,    33,    34,    35,
     184,   185,    36,   300,   301,    37,   176,   177,    38,   158,
      40,   235,    42,   169,   200,   201,   280,   202,    43,   203,
     151,   271,   396,   260,   261,   262,   394,   274,   265,   266,
     267,   268,    44,    45,   132,   133,    46
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    39,   150,    41,   134,   279,   160,   138,   419,   264,
     462,   296,   183,   288,   172,    28,   395,   319,   174,   289,
      47,   196,   175,   270,    29,   159,     5,   135,   333,    41,
     139,   438,   439,     6,   236,   196,   149,   436,   437,    41,
      41,   165,   168,  -333,    41,    39,    48,  -333,  -333,   351,
     183,   166,   136,   319,   183,   183,   142,   143,     5,    28,
     233,   174,   152,   145,   306,     6,   140,   167,    29,     3,
     178,   141,   183,   282,   233,    21,    22,   352,  -331,   155,
       5,   356,  -331,  -331,   236,   513,   189,     6,   146,   155,
     147,     7,   320,   148,   264,   144,   361,   188,   337,   338,
     153,   298,   501,   502,   148,  -163,   181,  -163,   183,   354,
     150,   196,   484,  -149,   214,   193,   319,   195,   391,   150,
     483,   263,   417,     7,   387,   180,   414,   140,   479,   279,
     296,  -333,   179,   354,   424,   138,   290,   270,     5,    41,
      41,   433,   434,   435,   149,     6,   273,   199,   198,   358,
     233,   297,   150,   149,   259,   362,   233,    41,   309,   196,
     259,    41,   278,   312,  -163,  -163,  -331,   294,   484,   287,
     187,   197,   196,   283,   284,   272,   483,   183,   306,   291,
     292,   259,   354,   318,    41,   197,   199,   302,   196,   183,
     308,   278,   149,   236,   286,   429,   272,   199,   311,   419,
     426,   403,   233,   337,   338,   259,   263,   186,   187,   166,
     406,   233,   187,   187,   197,   310,   504,   512,   326,   318,
     237,   387,   313,   238,  -162,   478,  -162,   494,   485,   486,
     187,     3,   334,   335,   336,   339,   340,    41,   198,   259,
       3,   259,   360,   309,   137,   144,   186,   387,   314,   153,
     186,     5,   388,     7,   465,   466,   315,   387,     6,   189,
     493,   197,     7,   259,   259,   190,   187,   407,   148,   166,
     297,   196,   408,   316,   259,   259,   134,   149,   272,   140,
     183,   421,   318,  -162,  -162,    41,   198,   389,   193,   511,
     195,   440,   441,   442,   443,   347,   189,   259,   199,   278,
       5,   516,   275,    41,   308,   412,   326,     6,   387,   197,
     348,  -149,   272,   464,    41,   198,   500,   420,   166,   319,
     475,   233,   197,   349,   389,   193,   189,   195,   197,   204,
     345,   346,   320,   405,   292,   187,   461,   270,   197,   334,
     335,   336,   285,     5,   363,   162,   220,   187,   307,   350,
       6,   368,   163,   364,   214,   193,   183,   195,   189,   517,
     220,   236,     3,   307,   320,   186,   393,   299,   164,   259,
     353,   341,   342,     5,   365,   327,   393,   309,   328,   196,
       6,   306,   343,   344,     7,   329,   214,   193,   425,   195,
     491,   259,   492,   387,   259,   496,   366,    41,   198,   307,
     369,   330,   331,   332,   468,   469,   518,    41,   302,   272,
     370,   476,   374,   323,   324,   325,   480,   416,   387,   220,
     497,   197,   387,   487,   498,   397,   147,    -2,   147,   148,
     387,   148,   533,   307,   444,   445,   220,     5,   187,     5,
     371,   387,   220,   535,     6,   372,     6,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   259,   307,   454,   387,   456,   537,   398,   399,   401,
     400,   402,   161,   415,   409,   162,   272,   508,   307,   422,
     307,   431,   163,     5,   432,   318,   430,   452,   220,   453,
       6,   472,   460,   393,     7,   455,   361,   220,   164,   298,
     259,   463,   148,   323,   299,    41,   198,   308,   528,   450,
       5,  -149,   473,   481,   187,   530,   488,     6,   499,   505,
     506,     7,   457,   458,   459,   509,   527,   510,   514,   197,
    -129,   197,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   529,
     220,   531,   532,   538,   321,   540,   446,   495,   447,   303,
     451,   182,   474,   470,   448,   404,   449,   293,   471,   171,
     173,   307,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,   147,   298,     0,   148,   148,     0,   519,   520,
     521,     0,   393,     5,     5,     0,     0,   220,     0,     0,
       6,     6,     0,     0,  -149,     7,     0,     0,   220,   220,
     220,     0,     0,   490,     0,   534,     0,   536,     0,     0,
       0,     0,     0,     0,   539,     0,     0,   541,     0,   542,
       0,   170,     0,     0,     0,     1,     2,   307,     0,     0,
       3,     0,     0,     0,     4,     0,     0,   522,     0,   524,
     526,     5,     0,   375,     0,   307,     0,     0,     6,     0,
       0,     0,     7,     0,   220,     0,     0,     0,     0,     0,
     220,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,     0,   220,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,    27,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   189,     0,     0,   239,   240,     0,   241,
       0,     0,     0,   242,     0,   207,   208,     0,     0,     0,
     209,     0,     0,   210,   211,     0,     0,   212,   213,     0,
       0,   243,   193,   215,   195,     0,   216,   217,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,   244,   245,   246,     0,
     247,   248,   249,   250,   251,   252,   253,   254,   189,     0,
       0,   239,   359,     0,   241,     0,     0,     0,   242,     0,
     207,   208,     0,     0,     0,   209,     0,     0,   210,   211,
       0,     0,   212,   213,     0,     0,   243,   193,   215,   195,
       0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,   244,   245,   246,     0,   247,   248,   249,   250,   251,
     252,   253,   254,   189,     0,     0,   239,   390,     0,   241,
       0,     0,     0,   242,     0,   207,   208,     0,     0,     0,
     209,     0,     0,   210,   211,     0,     0,   212,   213,     0,
       0,   243,   193,   215,   195,     0,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,   244,   245,   246,     0,
     247,   248,   249,   250,   251,   252,   253,   254,   189,     0,
       0,   239,   392,     0,   241,     0,     0,     0,   242,     0,
     207,   208,     0,     0,     0,   209,     0,     0,   210,   211,
       0,     0,   212,   213,     0,     0,   243,   193,   215,   195,
       0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,   244,   245,   246,     0,   247,   248,   249,   250,   251,
     252,   253,   254,   189,     0,     0,   239,   467,     0,   241,
       0,     0,     0,   242,     0,   207,   208,     0,     0,     0,
     209,     0,     0,   210,   211,     0,     0,   212,   213,     0,
       0,   243,   193,   215,   195,     0,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,   244,   245,   246,     0,
     247,   248,   249,   250,   251,   252,   253,   254,   189,     0,
       0,   239,     0,     0,   241,   523,     0,     0,   242,     0,
     207,   208,     0,     0,     0,   209,     0,     0,   210,   211,
       0,     0,   212,   213,     0,     0,   243,   193,   215,   195,
       0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,   244,   245,   246,     0,   247,   248,   249,   250,   251,
     252,   253,   254,   189,     0,     0,   239,     0,     0,   241,
       0,     0,     0,   242,     0,   207,   208,     0,     0,     0,
     209,     0,     0,   210,   211,     0,     0,   212,   213,     0,
       0,   243,   193,   215,   195,     0,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,   244,   245,   246,     0,
     247,   248,   249,   250,   251,   252,   253,   254,   189,     0,
       0,   239,     0,     0,   205,     0,     0,     0,   242,     0,
     207,   208,     0,     0,     0,   209,     0,     0,   210,   211,
       0,     0,   212,   213,     0,     0,   367,   193,   215,   195,
       0,   216,   217,     1,     2,     0,     0,     0,     3,     0,
       0,     0,     4,     0,     0,     0,     0,     0,     0,     5,
       0,     0,     0,     0,     0,     0,     6,     0,     0,     0,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,   245,   246,     0,   247,   248,   249,   250,   251,
     252,   253,   254,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   189,     0,     0,     0,     0,     0,
     275,     0,     0,     0,     0,     0,     0,    27,     0,     0,
       0,     5,     0,     0,     0,     0,     0,     0,     6,     0,
       0,     0,   192,   193,   194,   195,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   418,   189,     0,     0,
     204,     0,     0,   304,   191,     0,   148,     0,     0,   207,
     208,     0,     0,     0,   209,     0,     0,   210,   211,     0,
       0,   212,   213,     0,     0,   192,   193,   305,   195,     0,
     216,   217,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   189,
       0,     0,   204,     0,     0,   304,   191,     0,   148,     0,
       0,   207,   208,     0,     0,     0,   209,     0,     0,   210,
     211,     0,     0,   212,   213,     0,     0,   411,   193,   305,
     195,     0,   216,   217,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   189,     0,     0,   204,     0,     0,   241,     0,     0,
       0,   242,     0,   207,   208,     0,     0,     0,   209,     0,
       0,   210,   211,     0,     0,   212,   213,     0,     0,   389,
     193,   215,   195,     0,   216,   217,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   189,     0,     0,   204,     0,     0,   241,
       0,     0,     0,     0,     0,   207,   208,     0,     0,     0,
     209,     0,     0,   210,   211,     0,     0,   212,   213,     0,
       0,   317,   193,   215,   195,     0,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   189,     0,     0,   204,     0,
       0,   205,     0,     0,     0,     0,     0,   207,   208,     0,
       0,     0,   209,     0,     0,   210,   211,     0,     0,   212,
     213,     0,     0,   423,   193,   215,   195,     0,   216,   217,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   189,     0,     0,
     204,     0,     0,   205,     0,     0,     0,     0,     0,   207,
     208,     0,     0,     0,   209,     0,     0,   210,   211,     0,
       0,   212,   213,     0,     0,   477,   193,   215,   195,     0,
     216,   217,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   189,
       0,     0,   204,     0,     0,   205,     0,     0,     0,     0,
       0,   207,   208,     0,     0,     0,   209,     0,     0,   210,
     211,     0,     0,   212,   213,     0,     0,   515,   193,   215,
     195,     0,   216,   217,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   189,     0,     0,     0,     0,     0,   190,   191,     0,
     148,     0,     0,     0,     0,     0,     0,     0,     5,     0,
     189,     0,     0,     0,     0,     6,   275,   276,     0,   192,
     193,   194,   195,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     6,     0,     0,     0,   277,   193,
     194,   195,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   189,     0,     0,     0,     0,     0,   275,   355,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,   189,     0,     0,     0,     0,     6,   275,     0,     0,
     192,   193,   194,   195,     0,     0,     0,     0,     5,     0,
       0,     0,     0,     0,     0,     6,     0,     0,     0,   277,
     193,   194,   195,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   189,     0,     0,     0,     0,     0,   275,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     0,     0,     0,     0,   154,     0,     6,     3,     0,
       0,   192,   193,   194,   195,     0,     0,     0,     0,     5,
       0,     0,     0,     0,     0,     0,     6,   155,     0,     0,
       7,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   295,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,   410,     6,     3,     0,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     5,     0,     0,     0,
       0,     0,     0,     6,     0,     0,     0,     7,     0,  -131,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     -11,   -11,     0,     0,   -11,   -11,     0,     0,     0,   -11,
     -11,   -11,   -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,     0,     0,     0,     0,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   189,     0,
       0,   204,     0,     0,   507,   482,     0,   148,     0,     0,
     207,   208,     0,     0,     0,   209,     0,     0,   210,   211,
       0,     0,   212,   213,     0,     0,   214,   193,   215,   195,
     189,   216,   217,   204,     0,     0,   205,     0,   206,     0,
       0,     0,   207,   208,     0,     0,     0,   209,     0,     0,
     210,   211,     0,     0,   212,   213,     0,     0,   214,   193,
     215,   195,   189,   216,   217,   204,     0,     0,   205,     0,
     281,     0,     0,     0,   207,   208,     0,     0,     0,   209,
       0,     0,   210,   211,     0,     0,   212,   213,     0,     0,
     214,   193,   215,   195,   189,   216,   217,   204,     0,     0,
     205,     0,   357,     0,     0,     0,   207,   208,     0,     0,
       0,   209,     0,     0,   210,   211,     0,     0,   212,   213,
       0,     0,   214,   193,   215,   195,   189,   216,   217,   204,
       0,     0,   205,     0,     0,     0,   373,     0,   207,   208,
       0,     0,     0,   209,     0,     0,   210,   211,     0,     0,
     212,   213,     0,     0,   214,   193,   215,   195,   189,   216,
     217,   269,   316,     0,   205,     0,     0,     0,     0,     0,
     207,   208,     0,     0,     0,   209,     0,     0,   210,   211,
       0,     0,   212,   213,     0,     0,   214,   193,   215,   195,
     189,   216,   217,   204,     0,     0,   205,   427,     0,     0,
       0,     0,   207,   208,     0,     0,     0,   209,     0,     0,
     210,   211,     0,     0,   212,   213,     0,     0,   214,   193,
     215,   195,   189,   216,   217,   204,     0,     0,   205,   482,
       0,     0,     0,     0,   207,   208,     0,     0,     0,   209,
       0,     0,   210,   211,     0,     0,   212,   213,     0,     0,
     214,   193,   215,   195,   189,   216,   217,   204,     0,     0,
     205,     0,     0,     0,   242,     0,   207,   208,     0,     0,
       0,   209,     0,     0,   210,   211,     0,     0,   212,   213,
       0,     0,   214,   193,   215,   195,   189,   216,   217,   269,
     503,     0,   205,     0,     0,     0,     0,     0,   207,   208,
       0,     0,     0,   209,     0,     0,   210,   211,     0,     0,
     212,   213,     0,     0,   214,   193,   215,   195,   189,   216,
     217,   204,     0,     0,   205,   525,     0,     0,     0,     0,
     207,   208,     0,     0,     0,   209,     0,     0,   210,   211,
       0,     0,   212,   213,     0,     0,   214,   193,   215,   195,
     189,   216,   217,   269,     0,     0,   205,     0,     0,     0,
       0,     0,   207,   208,     0,     0,     0,   209,     0,     0,
     210,   211,     0,     0,   212,   213,     0,     0,   214,   193,
     215,   195,   189,   216,   217,   204,     0,     0,   322,     0,
       0,     0,     0,     0,   207,   208,     0,     0,     0,   209,
       0,     0,   210,   211,     0,     0,   212,   213,     0,     0,
     214,   193,   215,   195,   189,   216,   217,   204,     0,     0,
     320,     0,     0,     0,     0,     0,   207,   208,     0,     0,
       0,   209,     0,     0,   210,   211,     0,     0,   212,   213,
       0,     0,   214,   193,   215,   195,   189,   216,   217,   204,
       0,     0,   205,     0,     0,     0,     0,     0,   207,   208,
       0,     0,     0,   209,     0,     0,   210,   211,     0,     0,
     212,   213,     0,     0,   214,   193,   215,   195,   189,   216,
     217,   204,     0,     0,   241,     0,     0,     0,     0,     0,
     207,   208,     0,     0,     0,   209,     0,     0,   210,   211,
       0,     0,   212,   213,     0,     0,   389,   193,   215,   195,
     189,   216,   217,   204,     0,     0,   413,     0,     0,     0,
       0,     0,   207,   208,     0,     0,     0,   209,     0,     0,
     210,   211,     0,     0,   212,   213,     0,     0,   214,   193,
     215,   195,   189,   216,   217,   204,     0,     0,   489,     0,
       0,     0,     0,     0,   207,   208,     0,     0,     0,   209,
       0,     0,   210,   211,     0,     0,   212,   213,     0,     0,
     214,   193,   215,   195,     0,   216,   217
};

static const yytype_int16 yycheck[] =
{
       0,     0,    36,     3,     3,   161,    39,    29,   314,   154,
     369,   184,   145,    19,    31,     0,   269,   205,    10,    25,
       3,   147,    31,   155,     0,    39,    20,     6,   221,    29,
      29,   339,   340,    27,   149,   161,    36,   337,   338,    39,
      40,    40,    42,     0,    44,    44,    29,     4,     5,    17,
     183,    41,    31,   241,   187,   188,    32,    33,    20,    44,
     148,    10,    38,     6,   190,    27,     8,    42,    44,     9,
       6,    13,   205,   162,   162,    69,    70,    45,     0,    28,
      20,   237,     4,     5,   199,    10,     3,    27,    31,    28,
       9,    31,     9,    12,   239,    33,    14,     6,    23,    24,
      38,     9,   461,   462,    12,    10,   139,    12,   241,   235,
     144,   237,   420,    31,    31,    32,   304,    34,   263,   153,
     420,   154,   310,    31,     8,   139,    10,     8,    10,   285,
     303,    88,    13,   259,   322,   157,    28,   269,    20,   139,
     140,   334,   335,   336,   144,    27,   160,   147,   147,   238,
     238,   184,   186,   153,   154,   244,   244,   157,   192,   285,
     160,   161,   161,   197,    69,    70,    88,   181,   476,   169,
     145,   147,   298,   163,   164,   160,   476,   310,   304,     7,
       8,   181,   308,   205,   184,   161,   186,   186,   314,   322,
     190,   190,   192,   308,   169,   327,   181,   197,   197,   505,
     326,   290,   290,    23,    24,   205,   239,   145,   183,   199,
     299,   299,   187,   188,   190,     9,   469,    10,   218,   241,
       9,     8,    10,    12,    10,   413,    12,    14,   421,   422,
     205,     9,    25,    26,    27,    38,    39,   237,   237,   239,
       9,   241,   241,   277,    13,   183,   184,     8,     8,   187,
     188,    20,    13,    31,   386,   387,    10,     8,    27,     3,
      11,   237,    31,   263,   264,     9,   241,     8,    12,   259,
     303,   397,    13,     7,   274,   275,   275,   277,   263,     8,
     413,    10,   304,    69,    70,   285,   285,    31,    32,   482,
      34,   341,   342,   343,   344,    20,     3,   297,   298,   298,
      20,   489,     9,   303,   304,   304,   306,    27,     8,   285,
      18,    31,   297,    13,   314,   314,   461,   317,   308,   507,
     409,   409,   298,    21,    31,    32,     3,    34,   304,     6,
      42,    43,     9,     7,     8,   310,   369,   469,   314,    25,
      26,    27,     9,    20,    14,    12,   148,   322,   190,    44,
      27,   249,    19,     9,    31,    32,   489,    34,     3,   491,
     162,   476,     9,   205,     9,   303,   264,    14,    35,   369,
      11,    29,    30,    20,     9,     9,   274,   411,    12,   505,
      27,   507,    40,    41,    31,    19,    31,    32,    33,    34,
       8,   391,    10,     8,   394,    10,     9,   397,   397,   241,
       9,    35,    36,    37,     7,     8,   494,   407,   407,   394,
      31,   411,   254,   215,   216,   217,   416,    31,     8,   221,
      10,   397,     8,   423,    10,     8,     9,    10,     9,    12,
       8,    12,    10,   275,   345,   346,   238,    20,   413,    20,
      13,     8,   244,    10,    27,    13,    27,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,   461,   304,   361,     8,   363,    10,    10,    10,    31,
      11,    31,     9,    31,    14,    12,   461,   477,   320,    10,
     322,    31,    19,    20,    31,   507,   328,    10,   290,    11,
      27,    30,    81,   391,    31,    14,    14,   299,    35,     9,
     500,    13,    12,   305,    14,   505,   505,   507,   507,   351,
      20,    31,    19,    10,   489,   515,    10,    27,     9,     8,
      31,    31,   364,   365,   366,    10,    30,    10,    10,   505,
      14,   507,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,    10,
     352,    10,    79,    10,   213,    13,   347,   455,   348,   188,
     352,   140,   407,   397,   349,   292,   350,   178,   397,    44,
     133,   413,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,     9,     9,    -1,    12,    12,    -1,   496,   497,
     498,    -1,   500,    20,    20,    -1,    -1,   409,    -1,    -1,
      27,    27,    -1,    -1,    31,    31,    -1,    -1,   420,   421,
     422,    -1,    -1,   425,    -1,   523,    -1,   525,    -1,    -1,
      -1,    -1,    -1,    -1,   532,    -1,    -1,   535,    -1,   537,
      -1,     0,    -1,    -1,    -1,     4,     5,   489,    -1,    -1,
       9,    -1,    -1,    -1,    13,    -1,    -1,   499,    -1,   501,
     502,    20,    -1,    28,    -1,   507,    -1,    -1,    27,    -1,
      -1,    -1,    31,    -1,   476,    -1,    -1,    -1,    -1,    -1,
     482,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,   494,    -1,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    88,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,     3,    -1,    -1,     6,     7,    -1,     9,
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
      85,    86,    87,     3,    -1,    -1,     6,     7,    -1,     9,
      -1,    -1,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,    -1,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
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
      85,    86,    87,     3,    -1,    -1,     6,     7,    -1,     9,
      -1,    -1,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,    -1,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,     3,    -1,
      -1,     6,    -1,    -1,     9,    10,    -1,    -1,    13,    -1,
      15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,    34,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    77,    78,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,     3,    -1,    -1,     6,    -1,    -1,     9,
      -1,    -1,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,
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
      -1,    36,    37,     4,     5,    -1,    -1,    -1,     9,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,     3,    -1,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    31,    32,    33,    34,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,     3,    -1,    -1,
       6,    -1,    -1,     9,    10,    -1,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,     3,
      -1,    -1,     6,    -1,    -1,     9,    10,    -1,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     3,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,
      -1,    13,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
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
      74,     3,    -1,    -1,    -1,    -1,    -1,     9,    10,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
       3,    -1,    -1,    -1,    -1,    27,     9,    10,    -1,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31,    32,
      33,    34,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,     3,    -1,    -1,    -1,    -1,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,     3,    -1,    -1,    -1,    -1,    27,     9,    -1,    -1,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31,
      32,    33,    34,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     3,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,     6,    -1,    27,     9,    -1,
      -1,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,     7,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,     7,    27,     9,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    31,    -1,    14,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
       8,     9,    -1,    -1,    12,    13,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     3,    -1,
      -1,     6,    -1,    -1,     9,    10,    -1,    12,    -1,    -1,
      15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,    34,
       3,    36,    37,     6,    -1,    -1,     9,    -1,    11,    -1,
      -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,
      33,    34,     3,    36,    37,     6,    -1,    -1,     9,    -1,
      11,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,    33,    34,     3,    36,    37,     6,    -1,    -1,
       9,    -1,    11,    -1,    -1,    -1,    15,    16,    -1,    -1,
      -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,
      -1,    -1,    31,    32,    33,    34,     3,    36,    37,     6,
      -1,    -1,     9,    -1,    -1,    -1,    13,    -1,    15,    16,
      -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    34,     3,    36,
      37,     6,     7,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,    34,
       3,    36,    37,     6,    -1,    -1,     9,    10,    -1,    -1,
      -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,
      33,    34,     3,    36,    37,     6,    -1,    -1,     9,    10,
      -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,    33,    34,     3,    36,    37,     6,    -1,    -1,
       9,    -1,    -1,    -1,    13,    -1,    15,    16,    -1,    -1,
      -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,
      -1,    -1,    31,    32,    33,    34,     3,    36,    37,     6,
       7,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    34,     3,    36,
      37,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,
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
       3,    36,    37,     6,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,
      33,    34,     3,    36,    37,     6,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,    33,    34,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     9,    13,    20,    27,    31,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    88,   111,   112,
     113,   114,   115,   116,   117,   118,   121,   124,   127,   128,
     129,   130,   131,   137,   151,   152,   155,     3,    29,     3,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,   153,   154,   128,     6,    31,    13,   113,   128,
       8,    13,   112,   112,   121,     6,    31,     9,    12,   130,
     138,   139,   112,   121,     6,    28,   111,   112,   128,   144,
     145,     9,    12,    19,    35,   128,   129,   127,   130,   132,
       0,   152,    31,   153,    10,    31,   125,   126,     6,    13,
     144,   145,   114,   116,   119,   120,   121,   127,     6,     3,
       9,    10,    31,    32,    33,    34,    90,   112,   128,   130,
     133,   134,   136,   138,     6,     9,    11,    15,    16,    20,
      23,    24,    27,    28,    31,    33,    36,    37,    90,    91,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   110,   130,   139,     9,    12,     6,
       7,     9,    13,    31,    76,    77,    78,    80,    81,    82,
      83,    84,    85,    86,    87,    93,   106,   107,   109,   130,
     142,   143,   144,   145,   146,   147,   148,   149,   150,     6,
     107,   140,   111,   144,   146,     9,    10,    31,   128,   133,
     135,    11,   110,   129,   129,     9,   127,   130,    19,    25,
      28,     7,     8,   125,   144,     7,   120,   145,     9,    14,
     122,   123,   128,   119,     9,    33,    90,   109,   130,   138,
       9,   128,   138,    10,     8,    10,     7,    31,   113,   137,
       9,    91,     9,    93,    93,    93,   130,     9,    12,    19,
      35,    36,    37,    95,    25,    26,    27,    23,    24,    38,
      39,    29,    30,    40,    41,    42,    43,    20,    18,    21,
      44,    17,    45,    11,    90,    10,   133,    11,   110,     7,
     128,    14,   110,    14,     9,     9,     9,    31,   142,     9,
      31,    13,    13,    13,   109,    28,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,   108,     8,    13,    31,
       7,   146,     7,   142,   145,   140,   141,     8,    10,    10,
      11,    31,    31,   110,   126,     7,   110,     8,    13,    14,
       7,    31,   128,     9,    10,    31,    31,   137,    75,   134,
     130,    10,    10,    31,   137,    33,    90,    10,    92,   107,
     109,    31,    31,    95,    95,    95,    96,    96,    97,    97,
      98,    98,    98,    98,    99,    99,   100,   101,   102,   103,
     109,   104,    10,    11,   142,    14,   142,   109,   109,   109,
      81,   145,   147,    13,    13,   107,   107,     7,     7,     8,
     135,   136,    30,    19,   123,   110,   130,    31,   137,    10,
     130,    10,    10,    96,    97,    95,    95,   130,    10,     9,
      93,     8,    10,    11,    14,   142,    10,    10,    10,     9,
     146,   147,   147,     7,   140,     8,    31,     9,   130,    10,
      10,    95,    10,    10,    10,    31,   137,   107,   106,   142,
     142,   142,   109,    10,   109,    10,   109,    30,   128,    10,
     130,    10,    79,    10,   142,    10,   142,    10,    10,   142,
      13,   142,   142
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    90,    90,    90,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    92,    92,    93,    93,    93,    93,    93,    93,    93,
      93,    94,    94,    94,    94,    94,    94,    95,    95,    95,
      95,    95,    95,    96,    96,    96,    96,    97,    97,    97,
      98,    98,    98,    99,    99,    99,    99,    99,   100,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   109,   109,   110,   111,
     111,   111,   112,   112,   112,   112,   112,   112,   113,   113,
     114,   114,   115,   115,   115,   115,   115,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   117,
     117,   117,   118,   118,   119,   119,   119,   120,   121,   121,
     121,   121,   122,   122,   123,   123,   123,   124,   124,   124,
     125,   125,   126,   126,   127,   127,   128,   128,   128,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   130,   130,
     130,   130,   131,   131,   132,   132,   133,   133,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   138,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   140,   140,   140,   141,
     141,   142,   142,   142,   142,   142,   142,   143,   143,   143,
     144,   144,   144,   144,   145,   145,   145,   146,   146,   146,
     147,   147,   148,   148,   148,   149,   149,   149,   149,   149,
     149,   150,   150,   150,   150,   150,   151,   151,   151,   152,
     152,   152,   152,   152,   152,   152,   152,   153,   153,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   155,   155,   155,   155
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     2,     3,
       4,     2,     3,     4,     3,     3,     2,     2,     4,     6,
       7,     1,     3,     1,     2,     2,     2,     2,     2,     4,
       5,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       5,     5,     5,     3,     3,     3,     1,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     2,
       3,     2,     1,     2,     1,     2,     1,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       4,     2,     1,     1,     1,     2,     2,     3,     2,     1,
       2,     1,     1,     3,     1,     2,     3,     4,     5,     2,
       1,     3,     1,     3,     1,     1,     2,     1,     2,     1,
       3,     3,     3,     4,     3,     4,     4,     3,     1,     2,
       2,     3,     1,     1,     1,     2,     1,     3,     2,     2,
       1,     1,     2,     3,     4,     5,     4,     1,     3,     3,
       1,     3,     1,     2,     1,     1,     2,     3,     2,     3,
       3,     4,     2,     3,     3,     4,     1,     3,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     3,     3,     4,     1,     2,     2,     1,     2,     2,
       1,     2,     5,     7,     5,     5,     7,     6,     7,     7,
       6,     3,     2,     2,     2,     3,     1,     2,     0,     1,
       1,     2,     2,     6,     8,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     3,     2
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
#line 2222 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 35 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: CONSTANT FINAL\n",linea,  gramaticas );}
#line 2228 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 36 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );}
#line 2234 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 37 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: LEFT_PARENTHESIS FINAL expression RIGHT_PARETHESIS\n",linea, gramaticas);}
#line 2240 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 38 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: INTEGER FINAL\n",linea, gramaticas );}
#line 2246 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 42 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression\n",linea, gramaticas );}
#line 2252 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 43 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: pointer primary_expression\n",linea, gramaticas);}
#line 2258 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 44 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );}
#line 2264 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 46 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
#line 2270 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 47 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
#line 2276 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 48 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
#line 2282 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 49 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_PARENTHESIS argument_expression_list LEFT_PARENTHESIS\n",linea, gramaticas);}
#line 2288 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 51 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DOT IDENTIFIER\n",linea, gramaticas);}
#line 2294 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 52 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression PTR_OP IDENTIFIER\n",linea, gramaticas);}
#line 2300 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 53 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression INC_OP\n",linea, gramaticas );}
#line 2306 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 54 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DEC_OP\n",linea, gramaticas );}
#line 2312 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 55 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
#line 2318 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 56 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2324 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 57 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2330 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 61 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: assignment_expression\n",linea, gramaticas);}
#line 2336 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 62 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: argument_expression_list COMMA assignment_expression\n",linea, gramaticas);}
#line 2342 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 66 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: postfix_expression\n",linea, gramaticas );}
#line 2348 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 67 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression:pointer postfix_expression\n",linea, gramaticas);}
#line 2354 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 68 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: INC_OP unary_expression\n",linea, gramaticas );}
#line 2360 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 69 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: DEC_OP unary_expression\n",linea, gramaticas );}
#line 2366 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 70 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: unary_operator cast_expression\n",linea, gramaticas );}
#line 2372 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 71 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
#line 2378 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 72 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2384 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 73 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2390 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 77 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: BIT_AND\n",linea, gramaticas );}
#line 2396 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 78 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MUL\n",linea, gramaticas );}
#line 2402 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 79 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PLUS\n",linea, gramaticas );}
#line 2408 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 80 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MINUS\n",linea, gramaticas );}
#line 2414 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 81 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PRIME\n",linea, gramaticas );}
#line 2420 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 82 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: EXCLAMATION\n",linea, gramaticas);}
#line 2426 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 86 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: unary_expression\n",linea, gramaticas);}
#line 2432 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 87 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2438 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 88 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2444 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 89 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2450 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 90 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2456 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 91 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2462 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 97 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MUL cast_expression\n",linea, gramaticas );}
#line 2468 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 98 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression DIV cast_expression\n",linea, gramaticas );}
#line 2474 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 99 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MOD cast_expression\n",linea,gramaticas );}
#line 2480 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 100 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: cast_expression\n",linea, gramaticas);}
#line 2486 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 104 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: multiplicative_expression\n",linea,gramaticas );}
#line 2492 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 105 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression PLUS multiplicative_expression\n",linea,gramaticas) ;}
#line 2498 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 106 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression MINUS multiplicative_expression\n",linea, gramaticas) ;}
#line 2504 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 110 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: additive_expression\n",linea, gramaticas );}
#line 2510 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 111 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);}
#line 2516 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 112 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression RIGHT_OP additive_expression \n",linea, gramaticas);}
#line 2522 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 116 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: shift_expression\n",linea, gramaticas);}
#line 2528 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 117 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LESS shift_expression\n",linea, gramaticas);}
#line 2534 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 118 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GREATER shift_expression\n",linea, gramaticas );}
#line 2540 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 119 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LE_OP shift_expression\n",linea, gramaticas);}
#line 2546 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 120 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GE_OP shift_expression\n",linea, gramaticas );}
#line 2552 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 124 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: relational_expression\n",linea, gramaticas);}
#line 2558 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 125 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression EQ_OP relational_expression\n",linea, gramaticas );}
#line 2564 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 126 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression NE_OP relational_expression\n",linea, gramaticas);}
#line 2570 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 130 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: equality_expression\n",linea, gramaticas );}
#line 2576 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 131 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: and_expression BIT_AND equality_expression\n",linea, gramaticas);}
#line 2582 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 135 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: and_expression\n",linea, gramaticas );}
#line 2588 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 136 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: exclusive_or_expression UP_ARROW and_expression\n",linea, gramaticas );}
#line 2594 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 140 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: exclusive_or_expression\n",linea, gramaticas);}
#line 2600 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 141 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression\n",linea, gramaticas );}
#line 2606 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 145 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: inclusive_or_expression\n",linea,gramaticas );}
#line 2612 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 146 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n",linea, gramaticas);}
#line 2618 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 150 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_and_expression\n",linea,gramaticas);}
#line 2624 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 151 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_or_expression OR_OP logical_and_expression\n",linea, gramaticas );}
#line 2630 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 155 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression\n",linea, gramaticas);}
#line 2636 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 156 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression INTERROGATION expression COLON conditional_expression\n",linea,gramaticas);}
#line 2642 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 160 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: conditional_expression\n",linea, gramaticas);}
#line 2648 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 161 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: unary_expression assignment_operator assignment_expression\n",linea,gramaticas);}
#line 2654 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 165 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: EQU\n",linea, gramaticas);}
#line 2660 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 166 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MUL_ASSIGN\n",linea,gramaticas );}
#line 2666 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 167 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: DIV_ASSIGN\n",linea,gramaticas);}
#line 2672 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 168 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MOD_ASSIGN\n",linea,gramaticas);}
#line 2678 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 169 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: ADD_ASSIGN\n",linea, gramaticas);}
#line 2684 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 170 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: SUB_ASSIGN\n",linea, gramaticas);}
#line 2690 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 171 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: LEFT_ASSIGN\n",linea, gramaticas);}
#line 2696 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 172 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: RIGHT_ASSIGN\n",linea,gramaticas);}
#line 2702 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 173 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: AND_ASSIGN\n",linea, gramaticas);}
#line 2708 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 174 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: XOR_ASSIGN\n",linea, gramaticas);}
#line 2714 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 175 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: OR_ASSIGN\n",linea, gramaticas);}
#line 2720 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 179 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: assignment_expression\n",linea, gramaticas);}
#line 2726 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 180 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: expression COMMA assignment_expression\n",linea,gramaticas);}
#line 2732 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 184 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  constant_expression: conditional_expression\n",linea, gramaticas );}
#line 2738 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 188 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 2744 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 189 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers init_declarator_list SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 2750 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 190 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));}
#line 2756 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 194 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier \n",linea, gramaticas);}
#line 2762 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 195 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier declaration_specifiers\n",linea, gramaticas);}
#line 2768 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 196 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);}
#line 2774 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 197 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
#line 2780 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 198 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier\n",linea, gramaticas );}
#line 2786 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 199 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier declaration_specifiers\n",linea, gramaticas );}
#line 2792 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 204 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator\n",linea, gramaticas );}
#line 2798 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 205 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator_list COMMA init_declarator\n",linea,gramaticas);}
#line 2804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 209 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator\n",linea, gramaticas );}
#line 2810 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 210 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator EQU initializer\n",linea, gramaticas );}
#line 2816 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 214 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: TYPEDEF\n",linea, gramaticas);}
#line 2822 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 215 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: EXTERN\n",linea, gramaticas);}
#line 2828 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 216 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: STATIC\n",linea,gramaticas);}
#line 2834 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 217 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: AUTO\n",linea, gramaticas);}
#line 2840 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 218 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: REGISTER\n",linea, gramaticas);}
#line 2846 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 222 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: VOID\n",linea, gramaticas);}
#line 2852 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 223 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: CHAR\n",linea, gramaticas);}
#line 2858 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 224 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SHORT\n",linea, gramaticas);}
#line 2864 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 225 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: INT\n",linea, gramaticas);}
#line 2870 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 226 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: LONG\n",linea, gramaticas);}
#line 2876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 227 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: FLOAT\n",linea, gramaticas);}
#line 2882 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 228 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: DOUBLE\n",linea, gramaticas);}
#line 2888 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 229 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SIGNED\n",linea, gramaticas);}
#line 2894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 230 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: UNSIGNED\n",linea, gramaticas);}
#line 2900 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 231 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: struct_or_union_specifier\n",linea, gramaticas );}
#line 2906 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 232 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: enum_specifier\n",linea, gramaticas );}
#line 2912 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 233 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: TYPE_NAME\n",linea,gramaticas);}
#line 2918 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 237 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET \n",linea, gramaticas );}
#line 2924 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 238 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET\n",linea,gramaticas );}
#line 2930 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 239 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER\n",linea, gramaticas);}
#line 2936 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 243 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: STRUCT\n",linea, gramaticas);}
#line 2942 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 244 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: UNION\n",linea, gramaticas);}
#line 2948 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 248 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration\n",linea, gramaticas );}
#line 2954 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 249 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration_list struct_declaration\n",linea, gramaticas );}
#line 2960 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 254 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 2966 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 258 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier specifier_qualifier_list\n",linea, gramaticas );}
#line 2972 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 259 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier\n",linea, gramaticas );}
#line 2978 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 260 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier specifier_qualifier_list\n",linea,gramaticas);}
#line 2984 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 261 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier\n",linea, gramaticas );}
#line 2990 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 266 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator\n",linea, gramaticas );}
#line 2996 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 267 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator_list COMMA struct_declarator\n",linea, gramaticas );}
#line 3002 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 271 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator\n",linea, gramaticas );}
#line 3008 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 272 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: COLON constant_expression \n",linea, gramaticas );}
#line 3014 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 273 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator COLON constant_expression \n",linea, gramaticas);}
#line 3020 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 277 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3026 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 278 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET \n",linea,gramaticas);}
#line 3032 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 279 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER\n",linea, gramaticas );}
#line 3038 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 283 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator\n",linea, gramaticas);}
#line 3044 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 284 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator_list COMMA enumerator\n",linea, gramaticas );}
#line 3050 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 288 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER\n",linea, gramaticas);}
#line 3056 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 289 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER EQU constant_expression\n",linea,gramaticas);}
#line 3062 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 293 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: CONST\n",linea,gramaticas);}
#line 3068 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 294 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: VOLATILE\n",linea, gramaticas);}
#line 3074 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 298 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: pointer direct_declarator \n",linea, gramaticas );}
#line 3080 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 299 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: direct_declarator\n",linea, gramaticas );}
#line 3086 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 300 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: declarator direct_declarator\n",linea, gramaticas );}
#line 3092 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 304 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: IDENTIFIER\n",linea, gramaticas);}
#line 3098 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 307 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3104 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 308 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET\n",linea,gramaticas);}
#line 3110 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 309 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
#line 3116 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 311 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3122 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 312 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3128 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 314 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
#line 3134 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 318 "parser.y" /* yacc.c:1646  */
    { printf("%d con %s  pointer: MUL\n",linea, gramaticas);}
#line 3140 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 319 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: MUL type_qualifier_list\n",linea, gramaticas );}
#line 3146 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 320 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: MUL pointer\n",linea, gramaticas );}
#line 3152 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 321 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: MUL type_qualifier_list pointer\n",linea,gramaticas);}
#line 3158 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 330 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier\n",linea,gramaticas );}
#line 3164 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 331 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier_list type_qualifier\n",linea, gramaticas );}
#line 3170 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 336 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list\n",linea, gramaticas );}
#line 3176 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 337 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list COMMA ELLIPSIS\n",linea, gramaticas);}
#line 3182 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 343 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers declarator\n",linea, gramaticas );}
#line 3188 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 344 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas );}
#line 3194 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 345 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers\n",linea, gramaticas );}
#line 3200 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 347 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas );}
#line 3206 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 348 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas
	 );}
#line 3213 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 350 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3219 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 351 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3225 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 352 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3231 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 357 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER\n",linea, gramaticas);}
#line 3237 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 358 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER\n",linea, gramaticas);}
#line 3243 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 361 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_declaration\n",linea, gramaticas);}
#line 3249 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 362 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_list COMMA parameter_declaration\n",linea, gramaticas);}
#line 3255 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 365 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list\n",linea, gramaticas);}
#line 3261 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 366 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list abstract_declarator\n",linea, gramaticas);}
#line 3267 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 371 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer\n",linea, gramaticas);}
#line 3273 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 372 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: direct_abstract_declarator\n",linea, gramaticas );}
#line 3279 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 373 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer direct_abstract_declarator\n",linea, gramaticas);}
#line 3285 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 377 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS \n",linea, gramaticas );}
#line 3291 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 378 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator:  LEFT_SBRACKET RIGHT_SBRACKET \n",linea, gramaticas);}
#line 3297 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 379 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
#line 3303 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 380 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
#line 3309 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 381 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
#line 3315 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 382 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea, gramaticas);}
#line 3321 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 383 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS \n",linea, gramaticas );}
#line 3327 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 384 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas );}
#line 3333 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 385 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea,  gramaticas  );}
#line 3339 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 389 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: assignment_expression\n",linea, gramaticas );}
#line 3345 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 390 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list RIGHT_BRACKET\n",linea,  gramaticas );}
#line 3351 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 391 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET\n",linea, gramaticas );}
#line 3357 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 395 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer\n",linea, gramaticas);}
#line 3363 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 396 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer_list COMMA initializer \n",linea, gramaticas);}
#line 3369 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 400 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: labeled_statement\n",linea, gramaticas );}
#line 3375 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 401 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: compound_statement\n",linea, gramaticas);}
#line 3381 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 402 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: expression_statement\n",linea,gramaticas );}
#line 3387 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 403 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: selection_statement\n",linea, gramaticas);}
#line 3393 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 404 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: iteration_statement\n",linea, gramaticas );}
#line 3399 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 405 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: jump_statement\n",linea, gramaticas );}
#line 3405 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 409 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: IDENTIFIER COLON statement \n",linea, gramaticas );}
#line 3411 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 410 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: CASE constant_expression COLON statement\n",linea, gramaticas );}
#line 3417 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 411 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: DEFAULT COLON statement\n",linea, gramaticas );}
#line 3423 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 415 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET RIGHT_BRACKET\n",linea, gramaticas);}
#line 3429 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 416 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET statement_list RIGHT_BRACKET\n",linea, gramaticas );}
#line 3435 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 417 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3441 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 418 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3447 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 422 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration\n",linea, gramaticas );}
#line 3453 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 423 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration_list declaration\n",linea, gramaticas);}
#line 3459 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 428 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement\n",linea, gramaticas );}
#line 3465 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 429 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement_list statement\n",linea, gramaticas);}
#line 3471 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 434 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3477 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 435 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: expression SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3483 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 439 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea,gramaticas);}
#line 3489 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 440 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement\n",linea, gramaticas);}
#line 3495 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 441 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 3501 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 445 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3507 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 446 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3513 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 447 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 3519 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 448 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3525 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 449 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3531 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 450 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3537 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 454 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: GOTO IDENTIFIER SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3543 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 455 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: CONTINUE SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3549 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 456 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: BREAK SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3555 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 457 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3561 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 458 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN expression SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3567 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 462 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a external_declaration\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3573 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 463 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a ciclo translation_unit\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3579 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 464 "parser.y" /* yacc.c:1646  */
    {printf("%d  translation_unit: Archivo Vacío\n",linea );memset(gramaticas,0,sizeof(gramaticas));}
#line 3585 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 469 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: function_definition\n",linea, gramaticas);}
#line 3591 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 470 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: declaration\n",linea, gramaticas);}
#line 3597 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 471 "parser.y" /* yacc.c:1646  */
    {lineaactual=linea; printf("%d con %s  external_declaration: DEFINE define\n",linea, gramaticas);}
#line 3603 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 472 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 3609 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 473 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 3615 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 474 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 3621 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 479 "parser.y" /* yacc.c:1646  */
    {printf("Sigue");}
#line 3627 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 480 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define: IDENTIFIER define\n",linea, gramaticas);}
#line 3633 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 568 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator declaration_list compound_statement\n",linea,gramaticas);}
#line 3639 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 569 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator compound_statement \n",linea, gramaticas);}
#line 3645 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 570 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator declaration_list compound_statement\n",linea, gramaticas );}
#line 3651 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 571 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator compound_statement\n",linea,gramaticas);}
#line 3657 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 3661 "parser.tab.c" /* yacc.c:1646  */
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
#line 574 "parser.y" /* yacc.c:1906  */


#include<stdio.h>
