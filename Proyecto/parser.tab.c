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
#define YYLAST   3054

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  335
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  545

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
      45,    46,    47,    48,    49,    51,    52,    53,    54,    55,
      56,    57,    61,    62,    66,    67,    68,    69,    70,    71,
      72,    73,    77,    78,    79,    80,    81,    82,    86,    87,
      88,    89,    90,    91,    97,    98,    99,   100,   104,   105,
     106,   110,   111,   112,   116,   117,   118,   119,   120,   124,
     125,   126,   130,   131,   135,   136,   140,   141,   145,   146,
     150,   151,   155,   156,   160,   161,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   179,   180,   184,
     188,   189,   190,   194,   195,   196,   197,   198,   199,   204,
     205,   209,   210,   214,   215,   216,   217,   218,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     237,   238,   239,   243,   244,   248,   249,   250,   254,   258,
     259,   260,   261,   266,   267,   271,   272,   273,   277,   278,
     279,   283,   284,   288,   289,   293,   294,   298,   299,   300,
     304,   305,   306,   307,   308,   309,   311,   312,   314,   318,
     319,   320,   321,   325,   326,   330,   331,   336,   337,   343,
     344,   345,   346,   347,   348,   350,   351,   352,   353,   357,
     358,   361,   362,   365,   366,   371,   372,   373,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   389,   390,   391,
     395,   396,   400,   401,   402,   403,   404,   405,   409,   410,
     411,   415,   416,   417,   418,   422,   423,   424,   428,   429,
     430,   434,   435,   439,   440,   441,   445,   446,   447,   448,
     449,   450,   454,   455,   456,   457,   458,   462,   463,   464,
     469,   470,   471,   472,   473,   474,   475,   476,   479,   480,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   568,   569,   570,   571
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

#define YYPACT_NINF -350

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-350)))

#define YYTABLE_NINF -335

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1461,     9,   746,   314,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,    52,  -350,  -350,   317,
      39,  -350,  1512,   525,  -350,    69,    61,  -350,  2417,  2311,
     509,    12,     8,  -350,   663,  -350,  -350,  -350,    55,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,   746,   102,    71,   123,  -350,   112,  2311,
     314,  -350,  -350,  -350,    61,   894,   149,  2110,   622,     4,
    -350,   337,  -350,    61,   832,  2825,  -350,   317,   137,  -350,
    1342,  2129,  2537,    12,    12,  -350,    60,  -350,  -350,     8,
    -350,  -350,    41,  -350,  -350,   145,   138,  -350,    71,  -350,
    -350,  1342,  -350,   894,  2379,  -350,   195,   894,   894,  -350,
    1606,  -350,   448,  -350,   184,  -350,  -350,   599,  -350,    96,
     189,  -350,   209,   218,   240,  1822,  -350,  -350,  -350,    21,
    -350,  -350,    53,   355,  -350,  2857,  2889,  2889,    74,   408,
    -350,  2921,  -350,   347,   271,   262,   330,   371,   247,   255,
     259,   272,     6,  -350,   278,    84,   337,  2201,  2569,   917,
    -350,  1822,  -350,    97,  2921,   311,   322,   344,   354,  1427,
     356,   349,   379,   383,  2601,   444,  -350,  -350,   187,   287,
    -350,  -350,  -350,  1002,  1087,  -350,  -350,  -350,  -350,  2633,
    -350,  -350,  -350,    80,  1342,  2953,  -350,   612,   102,   390,
     395,  -350,   407,    60,    60,  2129,  -350,  -350,   406,   411,
    2921,  -350,    71,   446,    92,  -350,  -350,  1342,  2110,  2921,
     212,  -350,   412,  2398,  1678,  2985,    74,    66,   416,   415,
     809,  -350,  -350,  -350,  1533,  -350,  -350,   323,   300,   423,
    2921,   408,  1894,  -350,  -350,  -350,   220,  2665,  2921,   428,
     430,  -350,  -350,  -350,  2921,  2921,  2921,  2921,  2921,  2921,
    2921,  2921,  2921,  2921,  2921,  2921,  2921,  2921,  2921,  2921,
    2921,  2921,  2921,  -350,  -350,  -350,   457,  -350,   455,  2484,
      36,  1427,   459,  1427,  2921,  2921,  2921,   460,   389,  1750,
     458,  -350,  -350,  -350,   223,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,  -350,  -350,  -350,  2921,  2921,  -350,   445,
    -350,  1172,  -350,  -350,  1342,  -350,   456,  2220,  -350,  -350,
    -350,   450,   463,  -350,  -350,  -350,  -350,   293,  -350,  2921,
    -350,   448,    36,  1966,  -350,  -350,   245,   474,  -350,  -350,
    2697,  2921,  2921,    74,   475,    84,  3017,  -350,  -350,   380,
    -350,    26,  -350,  -350,  -350,  -350,  -350,   347,   347,   271,
     271,   262,   262,   262,   262,   330,   330,   371,   247,   255,
     259,   135,   272,  -350,  -350,  -350,  1427,  -350,   385,   391,
     396,   477,  1342,  2729,  -350,  -350,  -350,  -350,  -350,  -350,
    2761,  -350,   480,  -350,   469,  -350,  -350,   672,   245,   491,
    -350,   493,  -350,  2921,   358,   211,  -350,  -350,   495,  -350,
    -350,  2038,  -350,  2921,  -350,  -350,  2921,  -350,  1427,  1427,
    1427,  2921,  1257,  2921,  2793,  -350,  -350,  2292,   476,  1678,
     501,  -350,  -350,  -350,  -350,  -350,  -350,    74,   504,  -350,
    -350,   436,  -350,  -350,   402,  1427,   414,  1427,   424,  -350,
     137,  -350,   510,  -350,  1427,   511,  -350,  1427,  -350,  1427,
    -350,  -350,  -350,  -350,  -350
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     239,     0,     0,     0,   247,   164,   163,   150,   103,   104,
     105,   106,   107,   109,   110,   111,   112,   115,   116,   113,
     114,   145,   146,   108,   123,   124,     0,   246,   241,     0,
       0,    99,    93,    95,   117,     0,   183,   118,    97,   101,
     148,     0,   159,   119,     0,   237,   240,   243,     0,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   248,   242,     0,     0,     0,   140,    90,     0,   101,
       0,    92,    94,    96,   129,     0,   122,     0,     0,   185,
     184,   186,    98,   131,     0,     0,   215,     0,   101,   335,
       0,     0,     0,     0,     0,   149,   147,   165,   161,   160,
       1,   238,     0,   249,   153,   143,     0,   141,     0,    91,
     333,     0,   100,   130,     0,   125,   183,   132,     0,     4,
       0,   193,     2,     3,     0,     6,   178,   171,   172,   185,
       0,   181,   167,     0,     0,     0,   189,    37,    36,    32,
      34,    35,    33,     0,     2,     0,     0,     0,     7,    24,
      38,     0,    47,    48,    51,    54,    59,    62,    64,    66,
      68,    70,    72,    89,     0,     0,   187,     0,     0,     0,
     211,     0,   221,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,    74,    87,     0,     0,
     218,   202,   203,     0,     0,   204,   205,   206,   207,     0,
     197,   102,   216,   203,   217,     0,   158,   150,   172,     0,
       0,   155,     0,   151,   152,     0,   166,   162,     0,     0,
       0,   138,     0,     0,   203,   121,   126,   127,     0,     0,
       0,   133,   135,     0,     0,     0,     7,     0,   185,   173,
       0,   169,   170,   194,     0,   188,    12,     2,     0,   119,
       0,    25,     0,    29,    26,    27,     0,     0,     0,     0,
       0,    17,    18,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   190,     8,   195,     0,   191,     0,   211,
     101,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       0,   233,   234,   235,     0,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,     0,     0,   222,     2,
     213,     0,   212,   219,   220,   200,     0,     0,   156,   157,
     154,     0,     0,   144,   142,   139,   136,     0,   128,     0,
     120,     2,   101,     0,     5,   174,     0,   119,   168,   182,
       0,     0,     0,     2,   119,     0,     0,     9,    13,     0,
      22,     0,    15,    16,    45,    46,    44,    49,    50,    52,
      53,    55,    56,    57,    58,    60,    61,    63,    65,    67,
      69,     0,    71,   196,   192,   208,     0,   210,     0,     0,
       0,     0,     0,     0,   232,   236,    75,    88,   214,   198,
       0,   179,   180,   244,     0,   134,   137,   185,     2,   119,
     177,     0,   175,     0,    48,     0,    40,    39,     0,    30,
      10,     0,    19,     0,    14,    11,     0,   209,     0,     0,
       0,     0,     0,   204,     0,   199,   201,     0,     0,     0,
       0,    30,   176,    41,    42,    43,    31,     2,   119,    23,
      73,   223,   225,   226,     0,     0,     0,     0,     0,   245,
     101,    31,     0,    20,     0,     0,   231,     0,   228,     0,
      21,   224,   227,   230,   229
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -350,   -58,   309,  -350,   214,  -350,   -43,  -311,  -321,   -84,
     110,   176,   182,   183,   185,   186,  -350,  -140,  -138,  -350,
     161,   -28,    15,    24,   -22,   397,  -350,  -134,  -350,  -350,
     353,  -136,   100,  -350,   136,  -350,   364,   253,    25,     1,
     -27,     0,  -350,  -350,  -111,  -305,   150,   168,  -180,   -34,
    -144,  -259,  -350,    78,  -350,    43,   -33,  -122,  -349,  -350,
    -350,  -350,  -350,   502,   434,  -350,  -350
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   218,   219,   429,   255,   221,   222,   223,   224,   225,
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
      41,    39,   150,    41,   134,   236,   160,   138,   233,   419,
     395,   183,    47,   147,   166,    28,   148,   270,   439,   440,
     463,     3,   233,   351,    29,   319,   437,   438,     5,    41,
     139,  -164,   264,  -164,   387,     6,   149,   495,    48,    41,
      41,   165,   168,     7,    41,    39,   174,   140,   296,   183,
     279,   352,   141,   183,   183,   236,   142,   143,   135,    28,
     288,   319,   152,  -163,   155,  -163,   289,   167,    29,   285,
     147,   183,   162,   148,   387,   145,   414,    21,    22,   163,
    -334,     5,   159,   136,  -334,  -334,   172,   189,     6,   196,
    -164,  -164,  -332,   320,     5,   164,  -332,  -332,   233,   485,
     146,     6,   175,   196,   233,   298,   181,   183,   148,   484,
     150,   361,   174,   503,   504,   214,   193,   264,   195,   150,
     140,   263,  -163,  -163,   319,   179,   356,     7,  -150,   178,
     417,   270,   306,   144,   282,   138,   283,   284,   153,    41,
      41,   391,   424,   387,   149,   291,   292,   199,   198,   496,
     233,   297,   150,   149,   259,   188,   485,    41,   309,   233,
     259,    41,   278,   312,   236,   155,   484,   296,  -334,   287,
     187,   197,   166,   290,   279,   272,   183,   354,   333,   196,
    -332,   259,   180,   318,    41,   197,   199,   302,   183,   430,
     308,   278,   149,   310,   286,   387,   272,   199,   311,   313,
     388,   354,   419,   273,   298,   259,   263,   148,   187,   299,
     358,   506,   187,   187,   197,     5,   362,   314,   326,   318,
     407,   515,     6,   189,   294,   408,     7,   196,   315,   320,
     187,   387,   166,   479,   337,   338,   465,    41,   198,   259,
     196,   259,   360,   309,   425,   186,   306,   316,   466,   467,
     354,   214,   193,   426,   195,   480,   196,   441,   442,   443,
     444,   197,   403,   259,   259,     5,   187,   347,   427,   233,
     297,   406,     6,   348,   259,   259,   134,   149,   272,   183,
     349,   166,   318,   144,   186,    41,   198,   153,   186,   353,
     189,   434,   435,   436,   337,   338,   275,   259,   199,   278,
     339,   340,     3,    41,   308,   412,   326,   299,   140,   197,
     421,   518,   272,     5,    41,   198,   350,   420,   389,   193,
       6,   195,   197,     3,     7,   363,     3,   368,   197,   319,
     137,   364,   270,   236,     5,   187,   462,     5,   197,   196,
     502,     6,   393,     5,     6,     7,   237,   187,     7,   238,
       6,   307,   393,   365,  -150,   519,   520,   183,   189,   341,
     342,   204,   220,   366,   320,   369,   307,   490,   514,   259,
     343,   344,   334,   335,   336,     5,   220,   309,   486,   487,
     370,   476,     6,   334,   335,   336,   214,   193,   493,   195,
     494,   259,   371,   387,   259,   498,   372,    41,   198,   387,
     398,   499,   307,   186,   387,   399,   500,    41,   302,   272,
     387,   477,   535,   345,   346,   374,   481,   327,   400,   189,
     328,   197,   387,   488,   537,   190,   409,   329,   148,   323,
     324,   325,   387,   422,   539,   220,   307,   401,   187,   455,
     513,   457,   402,   330,   331,   332,   415,   389,   193,   196,
     195,   306,   220,   405,   292,   445,   446,   147,   220,   432,
     148,   433,   259,   469,   470,   307,   454,   453,     5,   393,
     461,   464,   375,   456,   361,     6,  -150,   272,   510,  -150,
     473,   307,   474,   307,   482,   489,   501,   318,   507,   431,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     508,   511,   259,   512,   220,   516,   529,    41,   198,   308,
     530,   531,   451,   220,   533,   534,   187,   532,   161,   323,
     540,   162,   321,   447,   542,   458,   459,   460,   163,     5,
     448,   197,   449,   197,   497,   450,     6,   182,   452,  -130,
       7,   303,   293,   475,   164,   404,   171,   471,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   472,   220,   173,     0,     0,
       0,     0,     0,     0,   307,     0,   521,   522,   523,     0,
     393,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,   536,     0,   538,     0,     0,   298,     0,
       0,   148,   541,     0,     0,   543,     0,   544,     0,     5,
     397,   147,    -2,   220,   148,   189,     6,     0,   204,     0,
       7,   205,     5,   206,   220,   220,   220,   207,   208,     6,
     492,     0,   209,     0,     0,   210,   211,     0,     0,   212,
     213,     0,   307,   214,   193,   215,   195,     0,   216,   217,
       0,     0,   524,   170,   526,   528,     0,     1,     2,     0,
     307,     0,     3,     0,     0,   189,     4,     0,   204,     0,
       0,   509,   483,     5,   148,     0,     0,   207,   208,     0,
       6,   220,   209,     0,     7,   210,   211,   220,     0,   212,
     213,     0,     0,   214,   193,   215,   195,     0,   216,   217,
     220,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,    27,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   189,     0,     0,   239,   240,
     416,   241,     0,     0,     0,   242,     0,   207,   208,     0,
       0,     0,   209,     0,     0,   210,   211,     0,     0,   212,
     213,     0,     0,   243,   193,   215,   195,     0,   216,   217,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,   244,   245,
     246,     0,   247,   248,   249,   250,   251,   252,   253,   254,
     189,     0,     0,   239,   359,     0,   241,     0,     0,     0,
     242,     0,   207,   208,     0,     0,     0,   209,     0,     0,
     210,   211,     0,     0,   212,   213,     0,     0,   243,   193,
     215,   195,     0,   216,   217,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,   244,   245,   246,     0,   247,   248,   249,
     250,   251,   252,   253,   254,   189,     0,     0,   239,   390,
       0,   241,     0,     0,     0,   242,     0,   207,   208,     0,
       0,     0,   209,     0,     0,   210,   211,     0,     0,   212,
     213,     0,     0,   243,   193,   215,   195,     0,   216,   217,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,   244,   245,
     246,     0,   247,   248,   249,   250,   251,   252,   253,   254,
     189,     0,     0,   239,   392,     0,   241,     0,     0,     0,
     242,     0,   207,   208,     0,     0,     0,   209,     0,     0,
     210,   211,     0,     0,   212,   213,     0,     0,   243,   193,
     215,   195,     0,   216,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,   244,   245,   246,     0,   247,   248,   249,
     250,   251,   252,   253,   254,   189,     0,     0,   239,   468,
       0,   241,     0,     0,     0,   242,     0,   207,   208,     0,
       0,     0,   209,     0,     0,   210,   211,     0,     0,   212,
     213,     0,     0,   243,   193,   215,   195,     0,   216,   217,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,   244,   245,
     246,     0,   247,   248,   249,   250,   251,   252,   253,   254,
     189,     0,     0,   239,     0,     0,   241,   525,     0,     0,
     242,     0,   207,   208,     0,     0,     0,   209,     0,     0,
     210,   211,     0,     0,   212,   213,     0,     0,   243,   193,
     215,   195,     0,   216,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,   244,   245,   246,     0,   247,   248,   249,
     250,   251,   252,   253,   254,   189,     0,     0,   239,     0,
       0,   241,     0,     0,     0,   242,     0,   207,   208,     0,
       0,     0,   209,     0,     0,   210,   211,     0,     0,   212,
     213,     0,     0,   243,   193,   215,   195,     0,   216,   217,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,   244,   245,
     246,     0,   247,   248,   249,   250,   251,   252,   253,   254,
     189,     0,     0,   239,     0,     0,   205,     0,     0,     0,
     242,     0,   207,   208,     0,     0,     0,   209,     0,     0,
     210,   211,     0,     0,   212,   213,     0,     0,   367,   193,
     215,   195,     0,   216,   217,     1,     2,     0,     0,     0,
       3,     0,     0,     0,     4,     0,     0,     0,     0,     0,
       0,     5,     0,     0,     0,     0,     0,     0,     6,     0,
       0,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   244,   245,   246,     0,   247,   248,   249,
     250,   251,   252,   253,   254,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   189,     0,     0,     0,
       0,     0,   275,     0,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     5,     0,     0,     0,     0,     0,     0,
       6,     0,     0,     0,   192,   193,   194,   195,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   418,   189,
       0,     0,   204,     0,     0,   304,   191,     0,   148,     0,
       0,   207,   208,     0,     0,     0,   209,     0,     0,   210,
     211,     0,     0,   212,   213,     0,     0,   192,   193,   305,
     195,     0,   216,   217,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   189,     0,     0,   204,     0,     0,   304,   191,     0,
     148,     0,     0,   207,   208,     0,     0,     0,   209,     0,
       0,   210,   211,     0,     0,   212,   213,     0,     0,   411,
     193,   305,   195,     0,   216,   217,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   189,     0,     0,   204,     0,     0,   241,
       0,     0,     0,   242,     0,   207,   208,     0,     0,     0,
     209,     0,     0,   210,   211,     0,     0,   212,   213,     0,
       0,   389,   193,   215,   195,     0,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   189,     0,     0,   204,     0,
       0,   241,     0,     0,     0,     0,     0,   207,   208,     0,
       0,     0,   209,     0,     0,   210,   211,     0,     0,   212,
     213,     0,     0,   317,   193,   215,   195,     0,   216,   217,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   189,     0,     0,
     204,     0,     0,   205,     0,     0,     0,     0,     0,   207,
     208,     0,     0,     0,   209,     0,     0,   210,   211,     0,
       0,   212,   213,     0,     0,   423,   193,   215,   195,     0,
     216,   217,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   189,
       0,     0,   204,     0,     0,   205,     0,     0,     0,     0,
       0,   207,   208,     0,     0,     0,   209,     0,     0,   210,
     211,     0,     0,   212,   213,     0,     0,   478,   193,   215,
     195,     0,   216,   217,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   189,     0,     0,   204,     0,     0,   205,     0,     0,
       0,     0,     0,   207,   208,     0,     0,     0,   209,     0,
       0,   210,   211,     0,     0,   212,   213,     0,     0,   517,
     193,   215,   195,     0,   216,   217,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   189,     0,     0,     0,     0,     0,   190,
     191,     0,   148,     0,     0,     0,     0,     0,     0,     0,
       5,     0,   189,     0,     0,     0,     0,     6,   275,   276,
       0,   192,   193,   194,   195,     0,     0,     0,     0,     5,
       0,     0,     0,     0,     0,     0,     6,     0,     0,     0,
     277,   193,   194,   195,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   189,     0,     0,     0,     0,     0,
     275,   355,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     0,   189,     0,     0,     0,     0,     6,   275,
       0,     0,   192,   193,   194,   195,     0,     0,     0,     0,
       5,     0,     0,     0,     0,     0,     0,     6,     0,     0,
       0,   277,   193,   194,   195,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   189,     0,     0,     0,     0,
       0,   275,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     0,     0,     0,     0,   154,     0,     6,
       3,     0,     0,   192,   193,   194,   195,     0,     0,     0,
       0,     5,     0,     0,     0,     0,     0,     0,     6,   155,
       0,     0,     7,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   295,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,     0,     0,     0,     0,   410,     6,     3,     0,     0,
       7,     0,     0,     0,     0,     0,     0,     0,     5,     0,
       0,     0,     0,     0,     0,     6,     0,     0,     0,     7,
       0,  -132,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   -12,   -12,     0,     0,   -12,   -12,     0,     0,
       0,   -12,   -12,   -12,   -12,   -12,     0,   -12,   -12,   -12,
     -12,   -12,   -12,   -12,   -12,     0,     0,     0,     0,   -12,
     -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,
     -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,
     189,     0,     0,   204,     0,     0,   205,     0,   281,     0,
       0,     0,   207,   208,     0,     0,     0,   209,     0,     0,
     210,   211,     0,     0,   212,   213,     0,     0,   214,   193,
     215,   195,   189,   216,   217,   204,     0,     0,   205,     0,
     357,     0,     0,     0,   207,   208,     0,     0,     0,   209,
       0,     0,   210,   211,     0,     0,   212,   213,     0,     0,
     214,   193,   215,   195,   189,   216,   217,   204,     0,     0,
     205,     0,     0,     0,   373,     0,   207,   208,     0,     0,
       0,   209,     0,     0,   210,   211,     0,     0,   212,   213,
       0,     0,   214,   193,   215,   195,   189,   216,   217,   269,
     316,     0,   205,     0,     0,     0,     0,     0,   207,   208,
       0,     0,     0,   209,     0,     0,   210,   211,     0,     0,
     212,   213,     0,     0,   214,   193,   215,   195,   189,   216,
     217,   204,     0,     0,   205,   428,     0,     0,     0,     0,
     207,   208,     0,     0,     0,   209,     0,     0,   210,   211,
       0,     0,   212,   213,     0,     0,   214,   193,   215,   195,
     189,   216,   217,   204,     0,     0,   205,   483,     0,     0,
       0,     0,   207,   208,     0,     0,     0,   209,     0,     0,
     210,   211,     0,     0,   212,   213,     0,     0,   214,   193,
     215,   195,   189,   216,   217,   204,     0,     0,   205,     0,
       0,     0,   242,     0,   207,   208,     0,     0,     0,   209,
       0,     0,   210,   211,     0,     0,   212,   213,     0,     0,
     214,   193,   215,   195,   189,   216,   217,   269,   505,     0,
     205,     0,     0,     0,     0,     0,   207,   208,     0,     0,
       0,   209,     0,     0,   210,   211,     0,     0,   212,   213,
       0,     0,   214,   193,   215,   195,   189,   216,   217,   204,
       0,     0,   205,   527,     0,     0,     0,     0,   207,   208,
       0,     0,     0,   209,     0,     0,   210,   211,     0,     0,
     212,   213,     0,     0,   214,   193,   215,   195,   189,   216,
     217,   269,     0,     0,   205,     0,     0,     0,     0,     0,
     207,   208,     0,     0,     0,   209,     0,     0,   210,   211,
       0,     0,   212,   213,     0,     0,   214,   193,   215,   195,
     189,   216,   217,   204,     0,     0,   322,     0,     0,     0,
       0,     0,   207,   208,     0,     0,     0,   209,     0,     0,
     210,   211,     0,     0,   212,   213,     0,     0,   214,   193,
     215,   195,   189,   216,   217,   204,     0,     0,   320,     0,
       0,     0,     0,     0,   207,   208,     0,     0,     0,   209,
       0,     0,   210,   211,     0,     0,   212,   213,     0,     0,
     214,   193,   215,   195,   189,   216,   217,   204,     0,     0,
     205,     0,     0,     0,     0,     0,   207,   208,     0,     0,
       0,   209,     0,     0,   210,   211,     0,     0,   212,   213,
       0,     0,   214,   193,   215,   195,   189,   216,   217,   204,
       0,     0,   241,     0,     0,     0,     0,     0,   207,   208,
       0,     0,     0,   209,     0,     0,   210,   211,     0,     0,
     212,   213,     0,     0,   389,   193,   215,   195,   189,   216,
     217,   204,     0,     0,   413,     0,     0,     0,     0,     0,
     207,   208,     0,     0,     0,   209,     0,     0,   210,   211,
       0,     0,   212,   213,     0,     0,   214,   193,   215,   195,
     189,   216,   217,   204,     0,     0,   491,     0,     0,     0,
       0,     0,   207,   208,     0,     0,     0,   209,     0,     0,
     210,   211,     0,     0,   212,   213,     0,     0,   214,   193,
     215,   195,     0,   216,   217
};

static const yytype_int16 yycheck[] =
{
       0,     0,    36,     3,     3,   149,    39,    29,   148,   314,
     269,   145,     3,     9,    41,     0,    12,   155,   339,   340,
     369,     9,   162,    17,     0,   205,   337,   338,    20,    29,
      29,    10,   154,    12,     8,    27,    36,    11,    29,    39,
      40,    40,    42,    31,    44,    44,    10,     8,   184,   183,
     161,    45,    13,   187,   188,   199,    32,    33,     6,    44,
      19,   241,    38,    10,    28,    12,    25,    42,    44,     9,
       9,   205,    12,    12,     8,     6,    10,    69,    70,    19,
       0,    20,    39,    31,     4,     5,    31,     3,    27,   147,
      69,    70,     0,     9,    20,    35,     4,     5,   238,   420,
      31,    27,    31,   161,   244,     9,   139,   241,    12,   420,
     144,    14,    10,   462,   463,    31,    32,   239,    34,   153,
       8,   154,    69,    70,   304,    13,   237,    31,    31,     6,
     310,   269,   190,    33,   162,   157,   163,   164,    38,   139,
     140,   263,   322,     8,   144,     7,     8,   147,   147,    14,
     290,   184,   186,   153,   154,     6,   477,   157,   192,   299,
     160,   161,   161,   197,   308,    28,   477,   303,    88,   169,
     145,   147,   199,    28,   285,   160,   310,   235,   221,   237,
      88,   181,   139,   205,   184,   161,   186,   186,   322,   327,
     190,   190,   192,     9,   169,     8,   181,   197,   197,    10,
      13,   259,   507,   160,     9,   205,   239,    12,   183,    14,
     238,   470,   187,   188,   190,    20,   244,     8,   218,   241,
       8,    10,    27,     3,   181,    13,    31,   285,    10,     9,
     205,     8,   259,   413,    23,    24,    13,   237,   237,   239,
     298,   241,   241,   277,    24,   145,   304,     7,   386,   387,
     308,    31,    32,    33,    34,    10,   314,   341,   342,   343,
     344,   237,   290,   263,   264,    20,   241,    20,   326,   409,
     303,   299,    27,    18,   274,   275,   275,   277,   263,   413,
      21,   308,   304,   183,   184,   285,   285,   187,   188,    11,
       3,   334,   335,   336,    23,    24,     9,   297,   298,   298,
      38,    39,     9,   303,   304,   304,   306,    14,     8,   285,
      10,   491,   297,    20,   314,   314,    44,   317,    31,    32,
      27,    34,   298,     9,    31,    14,     9,   249,   304,   509,
      13,     9,   470,   477,    20,   310,   369,    20,   314,   397,
     462,    27,   264,    20,    27,    31,     9,   322,    31,    12,
      27,   190,   274,     9,    31,   493,   496,   491,     3,    29,
      30,     6,   148,     9,     9,     9,   205,   425,    10,   369,
      40,    41,    25,    26,    27,    20,   162,   411,   421,   422,
      31,   409,    27,    25,    26,    27,    31,    32,     8,    34,
      10,   391,    13,     8,   394,    10,    13,   397,   397,     8,
      10,    10,   241,   303,     8,    10,    10,   407,   407,   394,
       8,   411,    10,    42,    43,   254,   416,     9,    11,     3,
      12,   397,     8,   423,    10,     9,    14,    19,    12,   215,
     216,   217,     8,    10,    10,   221,   275,    31,   413,   361,
     483,   363,    31,    35,    36,    37,    31,    31,    32,   507,
      34,   509,   238,     7,     8,   345,   346,     9,   244,    31,
      12,    31,   462,     7,     8,   304,    11,    10,    20,   391,
      81,    13,    28,    14,    14,    27,    31,   462,   478,    31,
      30,   320,    19,   322,    10,    10,     9,   509,     8,   328,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      31,    10,   502,    10,   290,    10,    30,   507,   507,   509,
     509,    10,   351,   299,    10,    79,   491,   517,     9,   305,
      10,    12,   213,   347,    13,   364,   365,   366,    19,    20,
     348,   507,   349,   509,   456,   350,    27,   140,   352,    14,
      31,   188,   178,   407,    35,   292,    44,   397,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   397,   352,   133,    -1,    -1,
      -1,    -1,    -1,    -1,   413,    -1,   498,   499,   500,    -1,
     502,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,   525,    -1,   527,    -1,    -1,     9,    -1,
      -1,    12,   534,    -1,    -1,   537,    -1,   539,    -1,    20,
       8,     9,    10,   409,    12,     3,    27,    -1,     6,    -1,
      31,     9,    20,    11,   420,   421,   422,    15,    16,    27,
     426,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,   491,    31,    32,    33,    34,    -1,    36,    37,
      -1,    -1,   501,     0,   503,   504,    -1,     4,     5,    -1,
     509,    -1,     9,    -1,    -1,     3,    13,    -1,     6,    -1,
      -1,     9,    10,    20,    12,    -1,    -1,    15,    16,    -1,
      27,   477,    20,    -1,    31,    23,    24,   483,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,    -1,    36,    37,
     496,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    88,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,     3,    -1,    -1,     6,     7,
      31,     9,    -1,    -1,    -1,    13,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,    -1,    36,    37,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    77,
      78,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
       3,    -1,    -1,     6,     7,    -1,     9,    -1,    -1,    -1,
      13,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,
      33,    34,    -1,    36,    37,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    78,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,     3,    -1,    -1,     6,     7,
      -1,     9,    -1,    -1,    -1,    13,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    77,
      78,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
       3,    -1,    -1,     6,     7,    -1,     9,    -1,    -1,    -1,
      13,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,
      33,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    78,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,     3,    -1,    -1,     6,     7,
      -1,     9,    -1,    -1,    -1,    13,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    77,
      78,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
       3,    -1,    -1,     6,    -1,    -1,     9,    10,    -1,    -1,
      13,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,
      33,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    78,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,     3,    -1,    -1,     6,    -1,
      -1,     9,    -1,    -1,    -1,    13,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    77,
      78,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
       3,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,
      13,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,
      33,    34,    -1,    36,    37,     4,     5,    -1,    -1,    -1,
       9,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,     3,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    31,    32,    33,    34,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    -1,    56,
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
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,     7,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,     7,    27,     9,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31,
      -1,    14,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,     8,     9,    -1,    -1,    12,    13,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       3,    -1,    -1,     6,    -1,    -1,     9,    -1,    11,    -1,
      -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,
      33,    34,     3,    36,    37,     6,    -1,    -1,     9,    -1,
      11,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,
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
       3,    36,    37,     6,    -1,    -1,     9,    10,    -1,    -1,
      -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,
      33,    34,     3,    36,    37,     6,    -1,    -1,     9,    -1,
      -1,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,    33,    34,     3,    36,    37,     6,     7,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,
      -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,
      -1,    -1,    31,    32,    33,    34,     3,    36,    37,     6,
      -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    15,    16,
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
       3,    36,    37,     6,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,
      33,    34,    -1,    36,    37
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
     130,    10,    10,    31,   137,    24,    33,    90,    10,    92,
     107,   109,    31,    31,    95,    95,    95,    96,    96,    97,
      97,    98,    98,    98,    98,    99,    99,   100,   101,   102,
     103,   109,   104,    10,    11,   142,    14,   142,   109,   109,
     109,    81,   145,   147,    13,    13,   107,   107,     7,     7,
       8,   135,   136,    30,    19,   123,   110,   130,    31,   137,
      10,   130,    10,    10,    96,    97,    95,    95,   130,    10,
      90,     9,    93,     8,    10,    11,    14,   142,    10,    10,
      10,     9,   146,   147,   147,     7,   140,     8,    31,     9,
     130,    10,    10,    95,    10,    10,    10,    31,   137,   107,
     106,   142,   142,   142,   109,    10,   109,    10,   109,    30,
     128,    10,   130,    10,    79,    10,   142,    10,   142,    10,
      10,   142,    13,   142,   142
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    90,    90,    90,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    92,    92,    93,    93,    93,    93,    93,    93,
      93,    93,    94,    94,    94,    94,    94,    94,    95,    95,
      95,    95,    95,    95,    96,    96,    96,    96,    97,    97,
      97,    98,    98,    98,    99,    99,    99,    99,    99,   100,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   107,   107,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   109,   109,   110,
     111,   111,   111,   112,   112,   112,   112,   112,   112,   113,
     113,   114,   114,   115,   115,   115,   115,   115,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   117,   118,   118,   119,   119,   119,   120,   121,
     121,   121,   121,   122,   122,   123,   123,   123,   124,   124,
     124,   125,   125,   126,   126,   127,   127,   128,   128,   128,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   130,
     130,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   135,
     135,   136,   136,   137,   137,   138,   138,   138,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   140,   140,   140,
     141,   141,   142,   142,   142,   142,   142,   142,   143,   143,
     143,   144,   144,   144,   144,   145,   145,   145,   146,   146,
     146,   147,   147,   148,   148,   148,   149,   149,   149,   149,
     149,   149,   150,   150,   150,   150,   150,   151,   151,   151,
     152,   152,   152,   152,   152,   152,   152,   152,   153,   153,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   155,   155,   155,   155
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     2,     3,
       4,     4,     2,     3,     4,     3,     3,     2,     2,     4,
       6,     7,     1,     3,     1,     2,     2,     2,     2,     2,
       4,     5,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     5,     5,     5,     3,     3,     3,     1,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       2,     3,     2,     1,     2,     1,     2,     1,     2,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     4,     2,     1,     1,     1,     2,     2,     3,     2,
       1,     2,     1,     1,     3,     1,     2,     3,     4,     5,
       2,     1,     3,     1,     3,     1,     1,     2,     1,     2,
       1,     3,     3,     3,     4,     3,     4,     4,     3,     1,
       2,     2,     3,     1,     1,     1,     2,     1,     3,     2,
       2,     1,     1,     2,     3,     4,     5,     4,     1,     3,
       3,     1,     3,     1,     2,     1,     1,     2,     3,     2,
       3,     3,     4,     2,     3,     3,     4,     1,     3,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     2,     3,     3,     4,     1,     2,     2,     1,     2,
       2,     1,     2,     5,     7,     5,     5,     7,     6,     7,
       7,     6,     3,     2,     2,     2,     3,     1,     2,     0,
       1,     1,     2,     2,     6,     8,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     3,     2
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
#line 2214 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 35 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: CONSTANT FINAL\n",linea,  gramaticas );}
#line 2220 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 36 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );}
#line 2226 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 37 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: LEFT_PARENTHESIS FINAL expression RIGHT_PARETHESIS\n",linea, gramaticas);}
#line 2232 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 38 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: INTEGER FINAL\n",linea, gramaticas );}
#line 2238 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 42 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression\n",linea, gramaticas );}
#line 2244 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 43 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: pointer primary_expression\n",linea, gramaticas);}
#line 2250 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 44 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );}
#line 2256 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 45 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );}
#line 2262 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 46 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
#line 2268 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 47 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
#line 2274 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 48 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
#line 2280 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 49 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_PARENTHESIS argument_expression_list LEFT_PARENTHESIS\n",linea, gramaticas);}
#line 2286 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 51 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DOT IDENTIFIER\n",linea, gramaticas);}
#line 2292 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 52 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression PTR_OP IDENTIFIER\n",linea, gramaticas);}
#line 2298 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 53 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression INC_OP\n",linea, gramaticas );}
#line 2304 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 54 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DEC_OP\n",linea, gramaticas );}
#line 2310 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 55 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
#line 2316 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 56 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2322 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 57 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2328 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 61 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: assignment_expression\n",linea, gramaticas);}
#line 2334 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 62 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: argument_expression_list COMMA assignment_expression\n",linea, gramaticas);}
#line 2340 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 66 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: postfix_expression\n",linea, gramaticas );}
#line 2346 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 67 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression:pointer postfix_expression\n",linea, gramaticas);}
#line 2352 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 68 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: INC_OP unary_expression\n",linea, gramaticas );}
#line 2358 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 69 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: DEC_OP unary_expression\n",linea, gramaticas );}
#line 2364 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 70 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: unary_operator cast_expression\n",linea, gramaticas );}
#line 2370 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 71 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
#line 2376 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 72 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2382 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 73 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2388 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 77 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: BIT_AND\n",linea, gramaticas );}
#line 2394 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 78 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MUL\n",linea, gramaticas );}
#line 2400 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 79 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PLUS\n",linea, gramaticas );}
#line 2406 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 80 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MINUS\n",linea, gramaticas );}
#line 2412 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 81 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PRIME\n",linea, gramaticas );}
#line 2418 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 82 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: EXCLAMATION\n",linea, gramaticas);}
#line 2424 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 86 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: unary_expression\n",linea, gramaticas);}
#line 2430 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 87 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2436 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 88 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2442 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 89 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2448 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 90 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2454 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 91 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2460 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 97 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MUL cast_expression\n",linea, gramaticas );}
#line 2466 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 98 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression DIV cast_expression\n",linea, gramaticas );}
#line 2472 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 99 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MOD cast_expression\n",linea,gramaticas );}
#line 2478 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 100 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: cast_expression\n",linea, gramaticas);}
#line 2484 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 104 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: multiplicative_expression\n",linea,gramaticas );}
#line 2490 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 105 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression PLUS multiplicative_expression\n",linea,gramaticas) ;}
#line 2496 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 106 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression MINUS multiplicative_expression\n",linea, gramaticas) ;}
#line 2502 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 110 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: additive_expression\n",linea, gramaticas );}
#line 2508 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 111 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);}
#line 2514 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 112 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression RIGHT_OP additive_expression \n",linea, gramaticas);}
#line 2520 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 116 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: shift_expression\n",linea, gramaticas);}
#line 2526 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 117 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LESS shift_expression\n",linea, gramaticas);}
#line 2532 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 118 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GREATER shift_expression\n",linea, gramaticas );}
#line 2538 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 119 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LE_OP shift_expression\n",linea, gramaticas);}
#line 2544 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 120 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GE_OP shift_expression\n",linea, gramaticas );}
#line 2550 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 124 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: relational_expression\n",linea, gramaticas);}
#line 2556 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 125 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression EQ_OP relational_expression\n",linea, gramaticas );}
#line 2562 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 126 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression NE_OP relational_expression\n",linea, gramaticas);}
#line 2568 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 130 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: equality_expression\n",linea, gramaticas );}
#line 2574 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 131 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: and_expression BIT_AND equality_expression\n",linea, gramaticas);}
#line 2580 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 135 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: and_expression\n",linea, gramaticas );}
#line 2586 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 136 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: exclusive_or_expression UP_ARROW and_expression\n",linea, gramaticas );}
#line 2592 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 140 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: exclusive_or_expression\n",linea, gramaticas);}
#line 2598 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 141 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression\n",linea, gramaticas );}
#line 2604 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 145 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: inclusive_or_expression\n",linea,gramaticas );}
#line 2610 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 146 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n",linea, gramaticas);}
#line 2616 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 150 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_and_expression\n",linea,gramaticas);}
#line 2622 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 151 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_or_expression OR_OP logical_and_expression\n",linea, gramaticas );}
#line 2628 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 155 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression\n",linea, gramaticas);}
#line 2634 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 156 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression INTERROGATION expression COLON conditional_expression\n",linea,gramaticas);}
#line 2640 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 160 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: conditional_expression\n",linea, gramaticas);}
#line 2646 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 161 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: unary_expression assignment_operator assignment_expression\n",linea,gramaticas);}
#line 2652 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 165 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: EQU\n",linea, gramaticas);}
#line 2658 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 166 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MUL_ASSIGN\n",linea,gramaticas );}
#line 2664 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 167 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: DIV_ASSIGN\n",linea,gramaticas);}
#line 2670 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 168 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MOD_ASSIGN\n",linea,gramaticas);}
#line 2676 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 169 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: ADD_ASSIGN\n",linea, gramaticas);}
#line 2682 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 170 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: SUB_ASSIGN\n",linea, gramaticas);}
#line 2688 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 171 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: LEFT_ASSIGN\n",linea, gramaticas);}
#line 2694 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 172 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: RIGHT_ASSIGN\n",linea,gramaticas);}
#line 2700 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 173 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: AND_ASSIGN\n",linea, gramaticas);}
#line 2706 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 174 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: XOR_ASSIGN\n",linea, gramaticas);}
#line 2712 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 175 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: OR_ASSIGN\n",linea, gramaticas);}
#line 2718 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 179 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: assignment_expression\n",linea, gramaticas);}
#line 2724 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 180 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: expression COMMA assignment_expression\n",linea,gramaticas);}
#line 2730 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 184 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  constant_expression: conditional_expression\n",linea, gramaticas );}
#line 2736 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 188 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 2742 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 189 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers init_declarator_list SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 2748 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 190 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));}
#line 2754 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 194 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier \n",linea, gramaticas);}
#line 2760 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 195 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier declaration_specifiers\n",linea, gramaticas);}
#line 2766 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 196 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);}
#line 2772 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 197 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
#line 2778 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 198 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier\n",linea, gramaticas );}
#line 2784 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 199 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier declaration_specifiers\n",linea, gramaticas );}
#line 2790 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 204 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator\n",linea, gramaticas );}
#line 2796 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 205 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator_list COMMA init_declarator\n",linea,gramaticas);}
#line 2802 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 209 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator\n",linea, gramaticas );}
#line 2808 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 210 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator EQU initializer\n",linea, gramaticas );}
#line 2814 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 214 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: TYPEDEF\n",linea, gramaticas);}
#line 2820 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 215 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: EXTERN\n",linea, gramaticas);}
#line 2826 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 216 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: STATIC\n",linea,gramaticas);}
#line 2832 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 217 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: AUTO\n",linea, gramaticas);}
#line 2838 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 218 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: REGISTER\n",linea, gramaticas);}
#line 2844 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 222 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: VOID\n",linea, gramaticas);}
#line 2850 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 223 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: CHAR\n",linea, gramaticas);}
#line 2856 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 224 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SHORT\n",linea, gramaticas);}
#line 2862 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 225 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: INT\n",linea, gramaticas);}
#line 2868 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 226 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: LONG\n",linea, gramaticas);}
#line 2874 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 227 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: FLOAT\n",linea, gramaticas);}
#line 2880 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 228 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: DOUBLE\n",linea, gramaticas);}
#line 2886 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 229 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SIGNED\n",linea, gramaticas);}
#line 2892 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 230 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: UNSIGNED\n",linea, gramaticas);}
#line 2898 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 231 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: struct_or_union_specifier\n",linea, gramaticas );}
#line 2904 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 232 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: enum_specifier\n",linea, gramaticas );}
#line 2910 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 233 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: TYPE_NAME\n",linea,gramaticas);}
#line 2916 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 237 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET \n",linea, gramaticas );}
#line 2922 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 238 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET\n",linea,gramaticas );}
#line 2928 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 239 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER\n",linea, gramaticas);}
#line 2934 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 243 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: STRUCT\n",linea, gramaticas);}
#line 2940 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 244 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: UNION\n",linea, gramaticas);}
#line 2946 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 248 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration\n",linea, gramaticas );}
#line 2952 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 249 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration_list struct_declaration\n",linea, gramaticas );}
#line 2958 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 254 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 2964 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 258 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier specifier_qualifier_list\n",linea, gramaticas );}
#line 2970 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 259 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier\n",linea, gramaticas );}
#line 2976 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 260 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier specifier_qualifier_list\n",linea,gramaticas);}
#line 2982 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 261 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier\n",linea, gramaticas );}
#line 2988 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 266 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator\n",linea, gramaticas );}
#line 2994 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 267 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator_list COMMA struct_declarator\n",linea, gramaticas );}
#line 3000 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 271 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator\n",linea, gramaticas );}
#line 3006 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 272 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: COLON constant_expression \n",linea, gramaticas );}
#line 3012 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 273 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator COLON constant_expression \n",linea, gramaticas);}
#line 3018 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 277 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3024 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 278 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET \n",linea,gramaticas);}
#line 3030 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 279 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER\n",linea, gramaticas );}
#line 3036 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 283 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator\n",linea, gramaticas);}
#line 3042 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 284 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator_list COMMA enumerator\n",linea, gramaticas );}
#line 3048 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 288 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER\n",linea, gramaticas);}
#line 3054 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 289 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER EQU constant_expression\n",linea,gramaticas);}
#line 3060 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 293 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: CONST\n",linea,gramaticas);}
#line 3066 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 294 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: VOLATILE\n",linea, gramaticas);}
#line 3072 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 298 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: pointer direct_declarator \n",linea, gramaticas );}
#line 3078 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 299 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: direct_declarator\n",linea, gramaticas );}
#line 3084 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 300 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: declarator direct_declarator\n",linea, gramaticas );}
#line 3090 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 304 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: IDENTIFIER\n",linea, gramaticas);}
#line 3096 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 307 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3102 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 308 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET\n",linea,gramaticas);}
#line 3108 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 309 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
#line 3114 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 311 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3120 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 312 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3126 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 314 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
#line 3132 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 318 "parser.y" /* yacc.c:1646  */
    { printf("%d con %s  pointer: MUL\n",linea, gramaticas);}
#line 3138 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 319 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: MUL type_qualifier_list\n",linea, gramaticas );}
#line 3144 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 320 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: MUL pointer\n",linea, gramaticas );}
#line 3150 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 321 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: MUL type_qualifier_list pointer\n",linea,gramaticas);}
#line 3156 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 330 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier\n",linea,gramaticas );}
#line 3162 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 331 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier_list type_qualifier\n",linea, gramaticas );}
#line 3168 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 336 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list\n",linea, gramaticas );}
#line 3174 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 337 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list COMMA ELLIPSIS\n",linea, gramaticas);}
#line 3180 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 343 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers declarator\n",linea, gramaticas );}
#line 3186 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 344 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas );}
#line 3192 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 345 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers\n",linea, gramaticas );}
#line 3198 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 347 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas );}
#line 3204 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 348 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas
	 );}
#line 3211 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 350 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3217 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 351 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3223 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 352 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3229 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 357 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER\n",linea, gramaticas);}
#line 3235 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 358 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER\n",linea, gramaticas);}
#line 3241 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 361 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_declaration\n",linea, gramaticas);}
#line 3247 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 362 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_list COMMA parameter_declaration\n",linea, gramaticas);}
#line 3253 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 365 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list\n",linea, gramaticas);}
#line 3259 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 366 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list abstract_declarator\n",linea, gramaticas);}
#line 3265 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 371 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer\n",linea, gramaticas);}
#line 3271 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 372 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: direct_abstract_declarator\n",linea, gramaticas );}
#line 3277 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 373 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer direct_abstract_declarator\n",linea, gramaticas);}
#line 3283 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 377 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS \n",linea, gramaticas );}
#line 3289 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 378 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator:  LEFT_SBRACKET RIGHT_SBRACKET \n",linea, gramaticas);}
#line 3295 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 379 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
#line 3301 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 380 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
#line 3307 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 381 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
#line 3313 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 382 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea, gramaticas);}
#line 3319 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 383 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS \n",linea, gramaticas );}
#line 3325 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 384 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas );}
#line 3331 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 385 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea,  gramaticas  );}
#line 3337 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 389 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: assignment_expression\n",linea, gramaticas );}
#line 3343 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 390 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list RIGHT_BRACKET\n",linea,  gramaticas );}
#line 3349 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 391 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET\n",linea, gramaticas );}
#line 3355 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 395 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer\n",linea, gramaticas);}
#line 3361 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 396 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer_list COMMA initializer \n",linea, gramaticas);}
#line 3367 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 400 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: labeled_statement\n",linea, gramaticas );}
#line 3373 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 401 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: compound_statement\n",linea, gramaticas);}
#line 3379 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 402 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: expression_statement\n",linea,gramaticas );}
#line 3385 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 403 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: selection_statement\n",linea, gramaticas);}
#line 3391 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 404 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: iteration_statement\n",linea, gramaticas );}
#line 3397 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 405 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: jump_statement\n",linea, gramaticas );}
#line 3403 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 409 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: IDENTIFIER COLON statement \n",linea, gramaticas );}
#line 3409 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 410 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: CASE constant_expression COLON statement\n",linea, gramaticas );}
#line 3415 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 411 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: DEFAULT COLON statement\n",linea, gramaticas );}
#line 3421 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 415 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET RIGHT_BRACKET\n",linea, gramaticas);}
#line 3427 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 416 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET statement_list RIGHT_BRACKET\n",linea, gramaticas );}
#line 3433 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 417 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3439 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 418 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3445 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 422 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration\n",linea, gramaticas );}
#line 3451 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 423 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration_list declaration\n",linea, gramaticas);}
#line 3457 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 428 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement\n",linea, gramaticas );}
#line 3463 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 429 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement_list statement\n",linea, gramaticas);}
#line 3469 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 434 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3475 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 435 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: expression SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3481 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 439 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea,gramaticas);}
#line 3487 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 440 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement\n",linea, gramaticas);}
#line 3493 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 441 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 3499 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 445 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3505 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 446 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3511 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 447 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 3517 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 448 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3523 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 449 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3529 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 450 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 454 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: GOTO IDENTIFIER SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3541 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 455 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: CONTINUE SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3547 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 456 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: BREAK SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3553 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 457 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 458 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN expression SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 462 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a external_declaration\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 463 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a ciclo translation_unit\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3577 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 464 "parser.y" /* yacc.c:1646  */
    {printf("%d  translation_unit: Archivo Vacío\n",linea );memset(gramaticas,0,sizeof(gramaticas));}
#line 3583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 469 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: function_definition\n",linea, gramaticas);}
#line 3589 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 470 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: declaration\n",linea, gramaticas);}
#line 3595 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 471 "parser.y" /* yacc.c:1646  */
    {lineaactual=linea; printf("%d con %s  external_declaration: DEFINE define\n",linea, gramaticas);}
#line 3601 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 472 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 3607 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 473 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 3613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 474 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 3619 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 479 "parser.y" /* yacc.c:1646  */
    {printf("Sigue");}
#line 3625 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 480 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define: IDENTIFIER define\n",linea, gramaticas);}
#line 3631 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 568 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator declaration_list compound_statement\n",linea,gramaticas);}
#line 3637 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 569 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator compound_statement \n",linea, gramaticas);}
#line 3643 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 570 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator declaration_list compound_statement\n",linea, gramaticas );}
#line 3649 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 571 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator compound_statement\n",linea,gramaticas);}
#line 3655 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 3659 "parser.tab.c" /* yacc.c:1646  */
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
