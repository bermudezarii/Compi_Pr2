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
	extern char* yytext;
	char* gramaticas[50000];


#line 75 "parser.tab.c" /* yacc.c:339  */

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

#line 214 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  83
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2062

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  237
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  410

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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    33,    33,    34,    35,    36,    37,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    55,    56,
      60,    61,    62,    63,    64,    65,    66,    70,    71,    72,
      73,    74,    75,    79,    80,    81,    84,    89,    90,    91,
      92,    96,    97,    98,   102,   103,   104,   108,   109,   110,
     111,   112,   116,   117,   118,   122,   123,   127,   128,   132,
     133,   137,   138,   142,   143,   147,   148,   152,   153,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     171,   172,   176,   180,   181,   182,   186,   187,   188,   189,
     190,   191,   195,   196,   200,   201,   205,   206,   207,   208,
     209,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   228,   229,   230,   234,   235,   239,   240,
     244,   248,   249,   250,   251,   256,   257,   261,   262,   263,
     267,   268,   269,   273,   274,   278,   279,   283,   284,   288,
     289,   290,   294,   295,   296,   297,   298,   299,   300,   304,
     305,   306,   307,   311,   312,   316,   317,   322,   323,   327,
     328,   332,   333,   334,   335,   339,   340,   344,   345,   349,
     350,   351,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   367,   368,   369,   373,   374,   378,   379,   380,   381,
     382,   383,   387,   388,   389,   393,   394,   395,   396,   401,
     402,   406,   407,   408,   412,   413,   417,   418,   419,   423,
     424,   425,   426,   427,   431,   432,   433,   434,   435,   439,
     440,   441,   446,   447,   448,   449,   450,   451,   454,   455,
     458,   459,   460,   461,   465,   466,   467,   468
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
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "type_identifier", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
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
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "initializer", "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration", "define",
  "define_continue", "function_definition", YY_NULLPTR
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
     335,   336,   337,   338,   339,   340,   341,   342
};
# endif

#define YYPACT_NINF -249

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-249)))

#define YYTABLE_NINF -155

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1176,    20,    -3,    47,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,    10,  -249,   321,    58,  -249,
    1988,  1988,  -249,    19,   491,  -249,  1988,  1245,   335,    22,
      -9,  -249,   867,  -249,  -249,  -249,    17,   278,  -249,    82,
      68,    99,  -249,   120,  1245,    47,  -249,  -249,  -249,   491,
     469,   107,  1351,  1512,    21,  -249,   175,  -249,   491,   407,
    1878,  -249,   321,    98,  -249,  1265,  1417,  1622,  -249,   211,
    -249,  -249,    -9,  -249,  -249,    39,    11,    11,    11,  -249,
    -249,  -249,   102,   186,  -249,    68,  -249,  -249,  1265,  -249,
     469,   333,  -249,   237,   469,   469,  1351,  -249,   406,  -249,
      92,   139,   151,  -249,   153,  -249,   178,  1011,  -249,  -249,
    -249,   100,  -249,  -249,   167,   336,  -249,  -249,  1910,  -249,
    1942,  1942,    12,   145,  -249,  1974,  -249,   357,   235,   257,
     187,   273,   199,   206,   226,   188,     7,  -249,   250,   106,
     175,  1436,  1654,   492,  -249,  1083,  -249,    15,  1974,   285,
     314,   319,   322,   832,   326,   315,   291,   341,  1686,   401,
    -249,  -249,   131,   251,  -249,  -249,  -249,   577,   662,  -249,
    -249,  -249,  -249,  1718,  -249,  -249,  -249,  -249,  -249,   349,
      82,   350,   359,  -249,   366,  1417,  -249,  -249,   354,   360,
    -249,  -249,  -249,  1974,  -249,    68,   343,  -249,  -249,  -249,
    1974,   137,  -249,   394,  1060,  -249,  -249,  -249,  1331,  -249,
    -249,   390,   409,   166,   411,  1974,   145,  1155,  -249,  -249,
    -249,   106,  1750,  1974,   397,   405,  -249,  -249,  -249,  1974,
    1974,  1974,  1974,  1974,  1974,  1974,  1974,  1974,  1974,  1974,
    1974,  1974,  1974,  1974,  1974,  1974,  1974,  1974,  -249,  -249,
    -249,   432,  -249,   434,  1569,    93,   832,   446,   832,  1974,
    1974,  1974,   447,   381,   939,   473,  -249,  -249,  -249,   154,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  1974,  1974,  -249,  2006,   451,  -249,   747,  -249,  -249,
    1502,  -249,   365,   465,  -249,  -249,  -249,   467,   483,  -249,
    -249,  -249,  -249,   344,  -249,  1974,  -249,  -249,  -249,  -249,
    1974,  -249,  1974,   494,  -249,  -249,   233,  -249,   244,  -249,
    -249,  -249,  -249,  -249,   357,   357,   235,   235,   257,   257,
     257,   257,   187,   187,   273,   199,   206,   226,    65,   188,
    -249,  -249,  -249,   832,  -249,   276,   283,   295,   497,   939,
    1782,  -249,  -249,  -249,  -249,  -249,  -249,  1814,   349,  -249,
    -249,   478,  -249,  -249,  -249,  -249,  -249,  1974,  -249,  -249,
    1974,  -249,   832,   832,   832,  1974,  1974,  1846,  -249,  -249,
     480,  -249,  -249,   435,  -249,  -249,   316,   378,   832,   382,
    -249,   832,   500,   832,  -249,   832,  -249,  -249,  -249,  -249
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     221,     0,     0,     0,   154,   153,   142,    96,    97,    98,
      99,   100,   102,   103,   104,   105,   108,   109,   106,   107,
     137,   138,   101,   116,   117,     0,   223,     0,     0,    92,
      86,    88,   110,     0,   167,   111,    90,    94,   140,     0,
     149,   112,     0,   219,   222,   225,     0,   233,   224,     0,
       0,   132,    83,     0,    94,     0,    85,    87,    89,   121,
       0,   115,     0,     0,   169,   168,   170,    91,   123,     0,
       0,   199,     0,    94,   237,     0,     0,     0,   141,   139,
     155,   151,   150,     1,   220,     0,   233,   233,   233,   228,
     229,   143,   135,     0,   133,     0,    84,   235,     0,    93,
     122,     0,   118,   167,   124,     0,     0,   177,   163,   164,
     169,     0,   157,   159,     0,     4,     0,     0,   173,    32,
      31,    27,    29,    30,    28,     0,     2,     3,     0,     6,
       0,     0,     7,    20,    33,     0,    37,    41,    44,    47,
      52,    55,    57,    59,    61,    63,    65,    82,     0,     0,
     171,     0,     0,     0,   195,     0,   204,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      67,    80,     0,     0,   201,   186,   187,     0,     0,   188,
     189,   190,   191,     0,   181,    95,   200,   236,   148,   142,
     164,     0,     0,   145,     0,     0,   156,   152,     0,     0,
     230,   231,   232,     0,   130,     0,     0,   234,   114,   119,
       0,     0,   125,   127,     0,   161,   162,   178,     0,   172,
      11,     2,     0,     0,   112,     0,    21,     0,    25,    22,
      23,     0,     0,     0,     0,     0,    16,    17,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   174,     8,
     179,     0,   175,     0,   195,     2,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     0,   215,   216,   217,     0,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,     0,     0,   205,     0,     2,   197,     0,   196,   202,
     203,   184,     0,     0,   146,   147,   144,     0,     0,   136,
     134,   131,   128,     0,   120,     0,   113,   158,   160,    36,
       0,     5,     0,   112,     9,    12,     0,    18,     0,    14,
      15,    39,    40,    38,    42,    43,    45,    46,    48,    49,
      50,    51,    53,    54,    56,    58,    60,    62,     0,    64,
     180,   176,   192,     0,   194,     0,     0,     0,     0,     0,
       0,   214,   218,    68,    81,   198,   182,     0,   166,   165,
     226,     0,   126,   129,    35,    34,    26,     0,    13,    10,
       0,   193,     0,     0,     0,     0,     0,     0,   183,   185,
       0,    19,    66,   206,   208,   209,     0,     0,     0,     0,
     227,     0,     0,     0,   211,     0,   207,   210,   213,   212
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -249,  -137,   392,  -249,   -42,  -249,    -1,  -249,   169,   180,
     132,   207,   269,   274,   268,   289,   288,  -249,   -62,   -66,
    -249,   -98,   -67,     2,   214,    -7,   512,  -249,   162,  -249,
    -249,   441,   -93,   129,  -249,   234,  -249,   476,   376,   232,
      80,   -26,     0,  -249,  -249,   -70,  -249,   364,   282,  -108,
     -11,   -47,  -176,  -249,   -76,  -249,    77,   -32,   410,  -248,
    -249,  -249,  -249,  -249,   546,   542,   183,  -249
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   132,   133,   326,   169,   135,   136,   222,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   170,   171,
     291,   172,   148,    71,    72,    28,    29,    30,    31,    32,
      33,   101,   102,    34,   211,   212,    35,    93,    94,    36,
      73,    38,   149,    40,    82,   111,   112,   113,   192,    41,
      65,    66,   185,   302,   174,   175,   176,   177,   178,   179,
     180,   181,   182,    42,    43,    48,    90,    44
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,   147,    26,    39,   184,    75,   191,   301,   209,   224,
     194,     4,   259,    79,    86,   147,    50,   150,     5,   223,
      53,   134,    98,    45,   256,    60,   360,    39,    47,   266,
      62,     3,     4,    63,    64,   134,   259,    39,    39,     5,
      81,    51,    39,    87,    26,    88,  -142,   224,    85,    46,
      61,   114,   257,     6,    39,    39,     3,   223,   198,    64,
      20,    21,   110,   150,   199,    53,    55,     4,    64,   173,
     279,    56,    39,   292,     5,    39,    39,   186,     6,   380,
      37,   261,   197,    49,    79,   263,   228,   273,   229,   230,
     147,   267,    91,   134,   324,   114,   147,   216,    39,    92,
     186,   106,   299,   110,    63,    95,   110,    54,   110,   115,
     134,   386,   387,   105,    74,   225,   134,   184,    78,   323,
     319,   209,    37,     6,  -142,   191,    70,   223,    55,   223,
     203,    97,   231,    96,   238,   328,   309,   126,   127,   292,
     129,   147,   109,   312,   293,   313,   300,    79,   147,   217,
     314,    39,   187,   173,   232,   173,   190,   233,   348,   218,
      59,   134,   292,   219,   234,    68,   327,   362,   134,  -154,
    -154,   355,   356,   357,   292,   207,   321,   173,   173,   186,
     235,   236,   237,   213,   151,   220,   190,   152,   215,   103,
     352,   389,   354,   204,   205,    39,   223,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,    27,   134,   246,   247,    39,   252,
     195,   299,   100,    77,   253,   363,   364,   248,   249,    59,
     103,   109,   255,    68,   103,    49,  -153,  -153,   331,   332,
     333,   377,   359,   378,    57,    58,   106,   254,   373,    63,
      67,   210,   292,   147,   115,   379,    27,     4,   242,   243,
     294,   258,   100,   100,     5,   300,   100,   100,     6,   200,
     201,   202,    80,   134,   173,   109,   108,   381,   134,   100,
     134,    86,   295,   127,   292,   129,   382,   396,   397,   399,
     108,   292,   104,   383,   173,   244,   245,   173,   109,   268,
      39,   184,   186,   292,   276,   384,   393,   394,   395,    47,
      87,   391,    88,    39,   196,   250,   251,   100,   392,   374,
     108,   375,   404,   269,   292,   406,   402,   408,   270,   409,
       3,   271,   104,   104,    52,   274,   104,   104,   134,   115,
     208,     4,   116,   103,    76,   225,   275,    77,     5,   104,
     311,   205,     6,     3,   277,     4,     4,   303,   210,   173,
     304,   186,     5,     5,     4,   108,     6,   126,   127,   305,
     129,     5,   366,   367,    49,     6,   100,   306,   338,   339,
     340,   341,   239,   240,   241,   307,   292,   104,   403,   100,
     292,   308,   405,   213,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   315,   108,
     115,   334,   335,   153,   154,   106,   155,   319,    63,   320,
     156,   322,   119,   120,   336,   337,     4,   121,   329,   280,
     122,   123,   108,     5,   124,   125,   330,     6,   157,   127,
     128,   129,   350,   130,   131,   351,   104,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   342,   343,   104,
     353,   266,   358,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,  -142,   158,   159,   160,   361,   161,   162,   163,
     164,   165,   166,   167,   168,   115,   368,   370,   153,   264,
      62,   155,   371,    63,   376,   156,   385,   119,   120,   390,
     400,     4,   121,   407,   401,   122,   123,   226,     5,   124,
     125,   344,   346,   157,   127,   128,   129,   345,   130,   131,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   347,   349,   214,   372,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    99,   158,   159,
     160,   206,   161,   162,   163,   164,   165,   166,   167,   168,
     115,   310,   318,   153,   296,   369,   155,   297,    84,    89,
     156,     0,   119,   120,     0,     0,     0,   121,     0,     0,
     122,   123,     0,     0,   124,   125,     0,     0,   157,   127,
     128,   129,     0,   130,   131,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,   158,   159,   160,     0,   161,   162,   163,
     164,   165,   166,   167,   168,   115,     0,     0,   153,   298,
       0,   155,     0,     0,     0,   156,     0,   119,   120,     0,
       0,     0,   121,     0,     0,   122,   123,     0,     0,   124,
     125,     0,     0,   157,   127,   128,   129,     0,   130,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,   158,   159,
     160,     0,   161,   162,   163,   164,   165,   166,   167,   168,
     115,     0,     0,   153,   365,     0,   155,     0,     0,     0,
     156,     0,   119,   120,     0,     0,     0,   121,     0,     0,
     122,   123,     0,     0,   124,   125,     0,     0,   157,   127,
     128,   129,     0,   130,   131,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,   158,   159,   160,     0,   161,   162,   163,
     164,   165,   166,   167,   168,   115,     0,     0,   153,     0,
       0,   117,     0,     0,     0,   156,     0,   119,   120,     0,
       0,     0,   121,     0,     0,   122,   123,     0,     0,   124,
     125,     0,     0,   272,   127,   128,   129,    83,   130,   131,
       0,     1,     2,     0,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   158,   159,
     160,     0,   161,   162,   163,   164,   165,   166,   167,   168,
       0,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   115,     0,     0,   116,     0,     0,   155,     0,
       0,     0,   156,     0,   119,   120,     0,     0,     0,   121,
       0,     0,   122,   123,     0,     0,   124,   125,     0,     0,
     295,   127,   128,   129,     0,   130,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   115,     0,     0,   116,     0,     0,
     117,     0,     0,     0,     0,     0,   119,   120,     0,     0,
       0,   121,     0,     0,   122,   123,     0,     0,   124,   125,
       0,     0,   221,   127,   128,   129,     0,   130,   131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   316,     0,     0,
       0,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   115,     0,     0,   116,
       0,     0,   155,     0,     0,     0,     0,     0,   119,   120,
       0,     0,     0,   121,     0,     0,   122,   123,     0,     0,
     124,   125,     0,     0,   265,   127,   128,   129,     0,   130,
     131,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   115,     0,
       0,   116,     0,     0,   117,     0,     0,     0,     0,     0,
     119,   120,     0,     0,     0,   121,     0,     0,   122,   123,
       1,     2,   124,   125,     0,     3,   126,   127,   128,   129,
       0,   130,   131,     0,     0,     0,     4,     0,     0,     0,
       0,     0,     0,     5,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    69,     0,     0,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,    69,     5,    70,     3,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     5,     0,     0,     0,     6,     0,     0,     0,
       0,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     5,     0,
     106,   107,     6,    63,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     5,     0,
       0,     0,     6,     0,     0,     0,     0,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   317,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     3,   188,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     0,     0,     5,     3,   260,     0,   189,     0,
       0,     0,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     0,     0,     5,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     3,     0,     0,     0,   115,     0,     0,   116,     0,
       0,   117,     4,   118,     0,     0,     0,   119,   120,     5,
       0,     0,   121,     6,     0,   122,   123,     0,     0,   124,
     125,     0,     0,   126,   127,   128,   129,     0,   130,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   -11,   -11,     0,
       0,   -11,   -11,     0,     0,     0,   -11,   -11,   -11,   -11,
     -11,     0,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
       0,     0,     0,     0,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   115,     0,     0,   116,     0,
       0,   117,     0,   193,     0,     0,     0,   119,   120,     0,
       0,     0,   121,     0,     0,   122,   123,     0,     0,   124,
     125,     0,     0,   126,   127,   128,   129,   115,   130,   131,
     116,     0,     0,   117,     0,   262,     0,     0,     0,   119,
     120,     0,     0,     0,   121,     0,     0,   122,   123,     0,
       0,   124,   125,     0,     0,   126,   127,   128,   129,   115,
     130,   131,   116,     0,     0,   117,     0,     0,     0,   278,
       0,   119,   120,     0,     0,     0,   121,     0,     0,   122,
     123,     0,     0,   124,   125,     0,     0,   126,   127,   128,
     129,   115,   130,   131,   183,   220,     0,   117,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,   121,     0,
       0,   122,   123,     0,     0,   124,   125,     0,     0,   126,
     127,   128,   129,   115,   130,   131,   116,     0,     0,   117,
     325,     0,     0,     0,     0,   119,   120,     0,     0,     0,
     121,     0,     0,   122,   123,     0,     0,   124,   125,     0,
       0,   126,   127,   128,   129,   115,   130,   131,   116,     0,
       0,   117,     0,     0,     0,   156,     0,   119,   120,     0,
       0,     0,   121,     0,     0,   122,   123,     0,     0,   124,
     125,     0,     0,   126,   127,   128,   129,   115,   130,   131,
     183,   388,     0,   117,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,   121,     0,     0,   122,   123,     0,
       0,   124,   125,     0,     0,   126,   127,   128,   129,   115,
     130,   131,   116,     0,     0,   117,   398,     0,     0,     0,
       0,   119,   120,     0,     0,     0,   121,     0,     0,   122,
     123,     0,     0,   124,   125,     0,     0,   126,   127,   128,
     129,   115,   130,   131,   183,     0,     0,   117,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,   121,     0,
       0,   122,   123,     0,     0,   124,   125,     0,     0,   126,
     127,   128,   129,   115,   130,   131,   116,     0,     0,   227,
       0,     0,     0,     0,     0,   119,   120,     0,     0,     0,
     121,     0,     0,   122,   123,     0,     0,   124,   125,     0,
       0,   126,   127,   128,   129,   115,   130,   131,   116,     0,
       0,   225,     0,     0,     0,     0,     0,   119,   120,     0,
       0,     0,   121,     0,     0,   122,   123,     0,     0,   124,
     125,     0,     0,   126,   127,   128,   129,   115,   130,   131,
     116,     0,     0,   117,     0,     0,     0,     0,     0,   119,
     120,     0,     0,     0,   121,     0,     0,   122,   123,     0,
       0,   124,   125,     0,     0,   126,   127,   128,   129,   115,
     130,   131,   116,     0,     0,   155,     0,     0,     0,     0,
       0,   119,   120,     0,     0,     0,   121,     0,     0,   122,
     123,     0,     0,   124,   125,     0,     0,   295,   127,   128,
     129,     0,   130,   131,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25
};

static const yytype_int16 yycheck[] =
{
       0,    63,     0,     3,    70,    37,    76,   183,   101,   117,
      77,    20,   149,    39,     3,    77,     6,    64,    27,   117,
      27,    63,    54,     3,    17,     6,   274,    27,    31,    14,
       9,     9,    20,    12,    34,    77,   173,    37,    38,    27,
      40,    31,    42,    32,    42,    34,    31,   155,    31,    29,
      31,    62,    45,    31,    54,    55,     9,   155,    19,    59,
      69,    70,    62,   110,    25,    72,     8,    20,    68,    69,
     168,    13,    72,     8,    27,    75,    76,    75,    31,    14,
       0,   151,    82,     3,   110,   152,   128,   163,   130,   131,
     152,   158,    10,   135,   231,   106,   158,   108,    98,    31,
      98,     9,   178,   103,    12,     6,   106,    27,   108,     3,
     152,   359,   360,     6,    37,     9,   158,   183,    38,   227,
      27,   214,    42,    31,    31,   195,    28,   225,     8,   227,
      28,    54,   132,    13,   135,   233,   203,    31,    32,     8,
      34,   203,    62,   210,    13,     8,   178,   173,   210,    10,
      13,   151,    75,   153,     9,   155,    76,    12,   256,     8,
      31,   203,     8,    10,    19,    36,   232,    13,   210,    69,
      70,   269,   270,   271,     8,    98,    10,   177,   178,   177,
      35,    36,    37,   103,     9,     7,   106,    12,   108,    60,
     266,   367,   268,     7,     8,   195,   294,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,     0,   257,    29,    30,   218,    20,
       9,   297,    60,    12,    18,   291,   292,    40,    41,   100,
     101,   151,    44,   104,   105,   155,    69,    70,   239,   240,
     241,     8,   274,    10,    30,    31,     9,    21,   315,    12,
      36,    14,     8,   315,     3,    11,    42,    20,    23,    24,
       9,    11,   100,   101,    27,   297,   104,   105,    31,    86,
      87,    88,    40,   315,   274,   195,    62,   353,   320,   117,
     322,     3,    31,    32,     8,    34,    10,   385,   386,   387,
      76,     8,    60,    10,   294,    38,    39,   297,   218,    14,
     300,   367,   300,     8,    13,    10,   382,   383,   384,    31,
      32,   377,    34,   313,    82,    42,    43,   155,   380,   320,
     106,   322,   398,     9,     8,   401,    10,   403,     9,   405,
       9,     9,   100,   101,    13,     9,   104,   105,   380,     3,
       7,    20,     6,   214,     9,     9,    31,    12,    27,   117,
       7,     8,    31,     9,    13,    20,    20,     8,    14,   359,
      10,   359,    27,    27,    20,   151,    31,    31,    32,    10,
      34,    27,     7,     8,   294,    31,   214,    11,   246,   247,
     248,   249,    25,    26,    27,    31,     8,   155,    10,   227,
       8,    31,    10,   313,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    14,   195,
       3,   242,   243,     6,     7,     9,     9,    27,    12,    10,
      13,    10,    15,    16,   244,   245,    20,    20,    31,    28,
      23,    24,   218,    27,    27,    28,    31,    31,    31,    32,
      33,    34,    10,    36,    37,    11,   214,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,   250,   251,   227,
      14,    14,    81,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    31,    76,    77,    78,    13,    80,    81,    82,
      83,    84,    85,    86,    87,     3,    31,    30,     6,     7,
       9,     9,    19,    12,    10,    13,     9,    15,    16,    31,
      30,    20,    20,    13,    79,    23,    24,   125,    27,    27,
      28,   252,   254,    31,    32,    33,    34,   253,    36,    37,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,   255,   257,   105,   313,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    55,    76,    77,
      78,    95,    80,    81,    82,    83,    84,    85,    86,    87,
       3,   205,   218,     6,     7,   303,     9,   177,    42,    47,
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
       3,    -1,    -1,     6,     7,    -1,     9,    -1,    -1,    -1,
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
      28,    -1,    -1,    31,    32,    33,    34,     0,    36,    37,
      -1,     4,     5,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,     3,    -1,    -1,     6,    -1,    -1,     9,    -1,
      -1,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,    33,    34,    -1,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,     3,    -1,    -1,     6,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,
      -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,
      -1,    -1,    31,    32,    33,    34,    -1,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,     3,    -1,    -1,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    34,    -1,    36,
      37,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     3,    -1,
      -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,
       4,     5,    27,    28,    -1,     9,    31,    32,    33,    34,
      -1,    36,    37,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,     6,    27,    28,     9,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
       9,    10,    31,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,     9,    10,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     9,    -1,    -1,    -1,     3,    -1,    -1,     6,    -1,
      -1,     9,    20,    11,    -1,    -1,    -1,    15,    16,    27,
      -1,    -1,    20,    31,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     8,     9,    -1,
      -1,    12,    13,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     3,    -1,    -1,     6,    -1,
      -1,     9,    -1,    11,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,     3,    36,    37,
       6,    -1,    -1,     9,    -1,    11,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,     3,
      36,    37,     6,    -1,    -1,     9,    -1,    -1,    -1,    13,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,     3,    36,    37,     6,     7,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    34,     3,    36,    37,     6,    -1,    -1,     9,
      10,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,     3,    36,    37,     6,    -1,
      -1,     9,    -1,    -1,    -1,    13,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,     3,    36,    37,
       6,     7,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,     3,
      36,    37,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,
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
      34,    -1,    36,    37,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     9,    20,    27,    31,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,   111,   112,   113,   114,
     115,   116,   117,   118,   121,   124,   127,   128,   129,   130,
     131,   137,   151,   152,   155,     3,    29,    31,   153,   128,
       6,    31,    13,   113,   128,     8,    13,   112,   112,   121,
       6,    31,     9,    12,   130,   138,   139,   112,   121,     6,
      28,   111,   112,   128,   144,   145,     9,    12,   128,   129,
     127,   130,   132,     0,   152,    31,     3,    32,    34,   153,
     154,    10,    31,   125,   126,     6,    13,   144,   145,   114,
     116,   119,   120,   121,   127,     6,     9,    10,   112,   128,
     130,   133,   134,   135,   138,     3,     6,     9,    11,    15,
      16,    20,    23,    24,    27,    28,    31,    32,    33,    34,
      36,    37,    89,    90,    92,    93,    94,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   110,   130,
     139,     9,    12,     6,     7,     9,    13,    31,    76,    77,
      78,    80,    81,    82,    83,    84,    85,    86,    87,    92,
     106,   107,   109,   130,   142,   143,   144,   145,   146,   147,
     148,   149,   150,     6,   107,   140,   111,   144,    10,    31,
     128,   133,   136,    11,   110,     9,   127,   130,    19,    25,
     154,   154,   154,    28,     7,     8,   125,   144,     7,   120,
      14,   122,   123,   128,   119,   128,   138,    10,     8,    10,
       7,    31,    95,   109,   137,     9,    90,     9,    92,    92,
      92,   130,     9,    12,    19,    35,    36,    37,    94,    25,
      26,    27,    23,    24,    38,    39,    29,    30,    40,    41,
      42,    43,    20,    18,    21,    44,    17,    45,    11,    89,
      10,   133,    11,   110,     7,    31,    14,   110,    14,     9,
       9,     9,    31,   142,     9,    31,    13,    13,    13,   109,
      28,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,   108,     8,    13,     9,    31,     7,   146,     7,   142,
     145,   140,   141,     8,    10,    10,    11,    31,    31,   110,
     126,     7,   110,     8,    13,    14,     7,    75,   135,    27,
      10,    10,    10,   137,    89,    10,    91,   107,   109,    31,
      31,    94,    94,    94,    96,    96,    97,    97,    98,    98,
      98,    98,    99,    99,   100,   101,   102,   103,   109,   104,
      10,    11,   142,    14,   142,   109,   109,   109,    81,   145,
     147,    13,    13,   107,   107,     7,     7,     8,    31,   136,
      30,    19,   123,   110,    94,    94,    10,     8,    10,    11,
      14,   142,    10,    10,    10,     9,   147,   147,     7,   140,
      31,   107,   106,   142,   142,   142,   109,   109,    10,   109,
      30,    79,    10,    10,   142,    10,   142,    13,   142,   142
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    89,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      92,    92,    92,    92,    92,    92,    92,    93,    93,    93,
      93,    93,    93,    94,    94,    94,    95,    96,    96,    96,
      96,    97,    97,    97,    98,    98,    98,    99,    99,    99,
      99,    99,   100,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     109,   109,   110,   111,   111,   111,   112,   112,   112,   112,
     112,   112,   113,   113,   114,   114,   115,   115,   115,   115,
     115,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   117,   117,   117,   118,   118,   119,   119,
     120,   121,   121,   121,   121,   122,   122,   123,   123,   123,
     124,   124,   124,   125,   125,   126,   126,   127,   127,   128,
     128,   128,   129,   129,   129,   129,   129,   129,   129,   130,
     130,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     134,   135,   135,   135,   135,   136,   136,   137,   137,   138,
     138,   138,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   140,   140,   140,   141,   141,   142,   142,   142,   142,
     142,   142,   143,   143,   143,   144,   144,   144,   144,   145,
     145,   146,   146,   146,   147,   147,   148,   148,   148,   149,
     149,   149,   149,   149,   150,   150,   150,   150,   150,   151,
     151,   151,   152,   152,   152,   152,   152,   152,   153,   153,
     154,   154,   154,   154,   155,   155,   155,   155
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     2,     3,
       4,     2,     3,     4,     3,     3,     2,     2,     1,     3,
       1,     2,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     2,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     3,     2,     1,     2,     1,     2,
       1,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     4,     2,     1,     1,     1,     2,
       3,     2,     1,     2,     1,     1,     3,     1,     2,     3,
       4,     5,     2,     1,     3,     1,     3,     1,     1,     2,
       1,     2,     1,     3,     4,     3,     4,     4,     3,     1,
       2,     2,     3,     1,     1,     1,     2,     1,     3,     1,
       3,     2,     2,     1,     1,     3,     1,     1,     2,     1,
       1,     2,     3,     2,     3,     3,     4,     2,     3,     3,
       4,     1,     3,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     2,     3,     3,     4,     1,
       2,     1,     2,     2,     1,     2,     5,     7,     5,     5,
       7,     6,     7,     7,     3,     2,     2,     2,     3,     1,
       2,     0,     1,     1,     2,     2,     6,     8,     2,     2,
       2,     2,     2,     0,     4,     3,     3,     2
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
#line 33 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s primary_expression: IDENTIFIER FINAL\n",linea, yytext );(yyval)=strdup(yytext);}
#line 1943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 34 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: CONSTANT FINAL\n",linea,  yytext );}
#line 1949 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 35 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, yytext );}
#line 1955 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 36 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: LEFT_PARENTHESIS FINAL expression RIGHT_PARETHESIS\n",linea, yytext);}
#line 1961 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 37 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: INTEGER FINAL\n",linea, yytext );}
#line 1967 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 41 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression\n",linea, yytext );}
#line 1973 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 42 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: pointer primary_expression\n",linea, yytext);}
#line 1979 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 43 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, yytext );}
#line 1985 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 44 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, yytext);}
#line 1991 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 45 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, yytext);}
#line 1997 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 46 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,yytext);}
#line 2003 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 47 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_PARENTHESIS argument_expression_list LEFT_PARENTHESIS\n",linea, yytext);}
#line 2009 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 48 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DOT IDENTIFIER\n",linea, yytext);}
#line 2015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 49 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression PTR_OP IDENTIFIER\n",linea, yytext);}
#line 2021 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 50 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression INC_OP\n",linea, yytext );}
#line 2027 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 51 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DEC_OP\n",linea, yytext );}
#line 2033 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 55 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: assignment_expression\n",linea, yytext);}
#line 2039 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 56 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: argument_expression_list COMMA assignment_expression\n",linea, yytext);}
#line 2045 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 60 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: postfix_expression\n",linea, yytext );}
#line 2051 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 61 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression:pointer postfix_expression\n",linea, yytext);}
#line 2057 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 62 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: INC_OP unary_expression\n",linea, yytext );}
#line 2063 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 63 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: DEC_OP unary_expression\n",linea, yytext );}
#line 2069 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 64 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: unary_operator cast_expression\n",linea, yytext );}
#line 2075 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 65 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, yytext );}
#line 2081 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 66 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, yytext );}
#line 2087 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 70 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: BIT_AND\n",linea, yytext );}
#line 2093 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 71 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MUL\n",linea, yytext );}
#line 2099 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 72 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PLUS\n",linea, yytext );}
#line 2105 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 73 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MINUS\n",linea, yytext );}
#line 2111 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 74 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PRIME\n",linea, yytext );}
#line 2117 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 75 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: EXCLAMATION\n",linea, yytext);}
#line 2123 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 79 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: unary_expression\n",linea, yytext);}
#line 2129 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 80 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, yytext);}
#line 2135 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 81 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, yytext);}
#line 2141 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 89 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: cast_expression\n",linea, yytext);}
#line 2147 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 90 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MUL cast_expression\n",linea, yytext );}
#line 2153 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 91 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression DIV cast_expression\n",linea, yytext );}
#line 2159 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 92 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MOD cast_expression\n",linea,yytext );}
#line 2165 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 96 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: multiplicative_expression\n",linea,yytext );}
#line 2171 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 97 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression PLUS multiplicative_expression\n",linea,yytext) ;}
#line 2177 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 98 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression MINUS multiplicative_expression\n",linea, yytext) ;}
#line 2183 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 102 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: additive_expression\n",linea, yytext );}
#line 2189 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 103 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, yytext);}
#line 2195 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 104 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression RIGHT_OP additive_expression \n",linea, yytext);}
#line 2201 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 108 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: shift_expression\n",linea, yytext);}
#line 2207 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 109 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LESS shift_expression\n",linea, yytext);}
#line 2213 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 110 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GREATER shift_expression\n",linea, yytext );}
#line 2219 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 111 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LE_OP shift_expression\n",linea, yytext);}
#line 2225 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 112 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GE_OP shift_expression\n",linea, yytext );}
#line 2231 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 116 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: relational_expression\n",linea, yytext);}
#line 2237 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 117 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression EQ_OP relational_expression\n",linea, yytext );}
#line 2243 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 118 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression NE_OP relational_expression\n",linea, yytext);}
#line 2249 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 122 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: equality_expression\n",linea, yytext );}
#line 2255 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 123 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: and_expression BIT_AND equality_expression\n",linea, yytext);}
#line 2261 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 127 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: and_expression\n",linea, yytext );}
#line 2267 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 128 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: exclusive_or_expression UP_ARROW and_expression\n",linea, yytext );}
#line 2273 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 132 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: exclusive_or_expression\n",linea, yytext);}
#line 2279 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 133 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression\n",linea, yytext );}
#line 2285 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 137 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: inclusive_or_expression\n",linea,yytext );}
#line 2291 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 138 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n",linea, yytext);}
#line 2297 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 142 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_and_expression\n",linea,yytext);}
#line 2303 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 143 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_or_expression OR_OP logical_and_expression\n",linea, yytext );}
#line 2309 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 147 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression\n",linea, yytext);}
#line 2315 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 148 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression INTERROGATION expression COLON conditional_expression\n",linea,yytext);}
#line 2321 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 152 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: conditional_expression\n",linea, yytext);}
#line 2327 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 153 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: unary_expression assignment_operator assignment_expression\n",linea,yytext);}
#line 2333 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 157 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: EQU\n",linea, yytext);}
#line 2339 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 158 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MUL_ASSIGN\n",linea,yytext );}
#line 2345 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 159 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: DIV_ASSIGN\n",linea,yytext);}
#line 2351 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 160 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MOD_ASSIGN\n",linea,yytext);}
#line 2357 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 161 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: ADD_ASSIGN\n",linea, yytext);}
#line 2363 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 162 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: SUB_ASSIGN\n",linea, yytext);}
#line 2369 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 163 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: LEFT_ASSIGN\n",linea, yytext);}
#line 2375 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 164 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: RIGHT_ASSIGN\n",linea,yytext);}
#line 2381 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 165 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: AND_ASSIGN\n",linea, yytext);}
#line 2387 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 166 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: XOR_ASSIGN\n",linea, yytext);}
#line 2393 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 167 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: OR_ASSIGN\n",linea, yytext);}
#line 2399 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 171 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: assignment_expression\n",linea, yytext);}
#line 2405 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 172 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: expression COMMA assignment_expression\n",linea,yytext);}
#line 2411 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 176 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  constant_expression: conditional_expression\n",linea, yytext );}
#line 2417 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 180 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers SEMICOLON \n",linea, yytext );}
#line 2423 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 181 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers init_declarator_list SEMICOLON\n",linea, yytext);}
#line 2429 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier \n",linea, yytext);}
#line 2435 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 187 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier declaration_specifiers\n",linea, yytext);}
#line 2441 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 188 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier\n",linea, yytext);}
#line 2447 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 189 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, yytext);}
#line 2453 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 190 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier\n",linea, yytext );}
#line 2459 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 191 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier declaration_specifiers\n",linea, yytext );}
#line 2465 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 195 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator\n",linea, yytext );}
#line 2471 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 196 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator_list COMMA init_declarator\n",linea,yytext);}
#line 2477 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 200 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator\n",linea, yytext );}
#line 2483 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 201 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator EQU initializer\n",linea, yytext );}
#line 2489 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 205 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: TYPEDEF\n",linea, yytext);}
#line 2495 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 206 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: EXTERN\n",linea, yytext);}
#line 2501 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 207 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: STATIC\n",linea,yytext);}
#line 2507 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 208 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: AUTO\n",linea, yytext);}
#line 2513 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 209 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: REGISTER\n",linea, yytext);}
#line 2519 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 213 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: VOID\n",linea, yytext);}
#line 2525 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 214 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: CHAR\n",linea, yytext);}
#line 2531 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 215 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SHORT\n",linea, yytext);}
#line 2537 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 216 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: INT\n",linea, yytext);}
#line 2543 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 217 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: LONG\n",linea, yytext);}
#line 2549 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 218 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: FLOAT\n",linea, yytext);}
#line 2555 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 219 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: DOUBLE\n",linea, yytext);}
#line 2561 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 220 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SIGNED\n",linea, yytext);}
#line 2567 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 221 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: UNSIGNED\n",linea, yytext);}
#line 2573 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 222 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: struct_or_union_specifier\n",linea, yytext );}
#line 2579 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 223 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: enum_specifier\n",linea, yytext );}
#line 2585 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 224 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: TYPE_NAME\n",linea,yytext);}
#line 2591 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 228 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET \n",linea, yytext );}
#line 2597 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 229 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET\n",linea,yytext );}
#line 2603 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 230 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER\n",linea, yytext);}
#line 2609 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 234 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: STRUCT\n",linea, yytext);}
#line 2615 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 235 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: UNION\n",linea, yytext);}
#line 2621 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 239 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration\n",linea, yytext );}
#line 2627 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 240 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration_list struct_declaration\n",linea, yytext );}
#line 2633 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 244 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON\n",linea, yytext );}
#line 2639 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 248 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier specifier_qualifier_list\n",linea, yytext );}
#line 2645 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 249 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier\n",linea, yytext );}
#line 2651 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 250 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier specifier_qualifier_list\n",linea,yytext);}
#line 2657 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 251 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier\n",linea, yytext );}
#line 2663 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 256 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator\n",linea, yytext );}
#line 2669 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 257 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator_list COMMA struct_declarator\n",linea, yytext );}
#line 2675 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 261 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator\n",linea, yytext );}
#line 2681 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 262 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: COLON constant_expression \n",linea, yytext );}
#line 2687 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 263 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator COLON constant_expression \n",linea, yytext);}
#line 2693 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 267 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET\n",linea, yytext);}
#line 2699 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 268 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET \n",linea,yytext);}
#line 2705 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 269 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER\n",linea, yytext );}
#line 2711 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 273 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator\n",linea, yytext);}
#line 2717 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 274 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator_list COMMA enumerator\n",linea, yytext );}
#line 2723 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 278 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER\n",linea, gramaticas);}
#line 2729 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 279 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER EQU constant_expression\n",linea,gramaticas);}
#line 2735 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 283 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: CONST\n",linea,yytext);}
#line 2741 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 284 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: VOLATILE\n",linea, yytext);}
#line 2747 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 288 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: pointer direct_declarator \n",linea, gramaticas );}
#line 2753 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 289 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: direct_declarator\n",linea, gramaticas );}
#line 2759 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 290 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: declarator direct_declarator\n",linea, gramaticas );}
#line 2765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 294 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: IDENTIFIER\n",linea, gramaticas);}
#line 2771 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 295 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, yytext );}
#line 2777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 296 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET\n",linea,yytext);}
#line 2783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 297 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, yytext );}
#line 2789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 298 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea, yytext );}
#line 2795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 299 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS\n",linea, yytext );}
#line 2801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 300 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,yytext);}
#line 2807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 304 "parser.y" /* yacc.c:1646  */
    { printf("%d con %s  pointer: MUL\n",linea, gramaticas);}
#line 2813 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 305 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: MUL type_qualifier_list\n",linea, gramaticas );}
#line 2819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 306 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: MUL pointer\n",linea, gramaticas );}
#line 2825 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 307 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: MUL type_qualifier_list pointer\n",linea,gramaticas);}
#line 2831 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 316 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier\n",linea,yytext );}
#line 2837 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 317 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier_list type_qualifier\n",linea, yytext );}
#line 2843 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 322 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list\n",linea, yytext );}
#line 2849 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 323 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list COMMA ELLIPSIS\n",linea, yytext);}
#line 2855 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 327 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_declaration\n",linea, yytext);}
#line 2861 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 328 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_list COMMA parameter_declaration\n",linea, yytext);}
#line 2867 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 332 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers declarator\n",linea, yytext );}
#line 2873 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 333 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, yytext );}
#line 2879 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 334 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers\n",linea, yytext );}
#line 2885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 339 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER\n",linea, yytext);(yyval)=strdup(yytext);}
#line 2891 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 344 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list\n",linea, yytext);}
#line 2897 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 345 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list abstract_declarator\n",linea, yytext);}
#line 2903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 349 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer\n",linea, yytext);}
#line 2909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 350 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: direct_abstract_declarator\n",linea, yytext );}
#line 2915 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 351 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer direct_abstract_declarator\n",linea, yytext);}
#line 2921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 355 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS \n",linea, yytext );}
#line 2927 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 356 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator:  LEFT_SBRACKET RIGHT_SBRACKET \n",linea, yytext);}
#line 2933 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 357 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, yytext );}
#line 2939 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 358 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, yytext );}
#line 2945 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 359 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, yytext );}
#line 2951 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 360 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea, yytext);}
#line 2957 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 361 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS \n",linea, yytext );}
#line 2963 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 362 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,yytext );}
#line 2969 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 363 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea,  yytext  );}
#line 2975 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 367 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: assignment_expression\n",linea, yytext );}
#line 2981 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 368 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list RIGHT_BRACKET\n",linea,  yytext );}
#line 2987 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 369 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET\n",linea, yytext );}
#line 2993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 373 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer\n",linea, yytext);}
#line 2999 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 374 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer_list COMMA initializer \n",linea, yytext);}
#line 3005 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 378 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: labeled_statement\n",linea, yytext );}
#line 3011 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 379 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: compound_statement\n",linea, yytext);}
#line 3017 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 380 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: expression_statement\n",linea,yytext );}
#line 3023 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 381 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: selection_statement\n",linea, yytext);}
#line 3029 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 382 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: iteration_statement\n",linea, yytext );}
#line 3035 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 383 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: jump_statement\n",linea, yytext );}
#line 3041 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 387 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: IDENTIFIER COLON statement \n",linea, yytext );}
#line 3047 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 388 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: CASE constant_expression COLON statement\n",linea, yytext );}
#line 3053 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 389 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: DEFAULT COLON statement\n",linea, yytext );}
#line 3059 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 393 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET RIGHT_BRACKET\n",linea, yytext);}
#line 3065 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 394 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET statement_list RIGHT_BRACKET\n",linea, yytext );}
#line 3071 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 395 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list RIGHT_BRACKET\n",linea, yytext);}
#line 3077 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 396 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET\n",linea, yytext);}
#line 3083 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 401 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration\n",linea, yytext );}
#line 3089 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 402 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration_list declaration\n",linea, yytext);}
#line 3095 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 406 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement\n",linea, yytext );}
#line 3101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 407 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement_list statement\n",linea, yytext);}
#line 3107 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 412 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: SEMICOLON\n",linea, yytext );}
#line 3113 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 413 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: expression SEMICOLON \n",linea, yytext );}
#line 3119 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 417 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea,yytext);}
#line 3125 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 418 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement\n",linea, yytext);}
#line 3131 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 419 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, yytext );}
#line 3137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 423 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, yytext);}
#line 3143 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 424 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON\n",linea, yytext);}
#line 3149 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 425 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, yytext );}
#line 3155 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 426 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, yytext);}
#line 3161 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 427 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, yytext);}
#line 3167 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 431 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: GOTO IDENTIFIER SEMICOLON\n",linea, yytext );}
#line 3173 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 432 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: CONTINUE SEMICOLON\n",linea, yytext);}
#line 3179 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 433 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: BREAK SEMICOLON\n",linea, yytext);}
#line 3185 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 434 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN SEMICOLON\n",linea, yytext);}
#line 3191 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 435 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN expression SEMICOLON\n",linea, yytext);}
#line 3197 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 439 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a external_declaration\n",linea, yytext);memset(gramaticas,0,sizeof(gramaticas));}
#line 3203 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 440 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a ciclo translation_unit\n",linea, yytext );memset(gramaticas,0,sizeof(gramaticas));}
#line 3209 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 441 "parser.y" /* yacc.c:1646  */
    {printf("%d  translation_unit: Archivo Vacío\n",linea );memset(gramaticas,0,sizeof(gramaticas));}
#line 3215 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 446 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: function_definition\n",linea, yytext);}
#line 3221 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 447 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: declaration\n",linea, yytext);}
#line 3227 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 448 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: DEFINE define\n",linea, yytext);}
#line 3233 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 449 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, yytext);}
#line 3239 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 450 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, yytext);}
#line 3245 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 451 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, yytext);}
#line 3251 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 454 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define: IDENTIFIER define\n",linea, yytext);(yyval)=strdup(yytext);}
#line 3257 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 455 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define: IDENTIFIER define_continue\n",linea, yytext);}
#line 3263 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 458 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define_continue: LITERAL define_continue\n",linea, yytext);}
#line 3269 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 459 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define_continue:CONSTANT define_continue\n",linea, yytext);}
#line 3275 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 460 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define_continue:  INTEGER define_continue\n",linea, yytext);}
#line 3281 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 465 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator declaration_list compound_statement\n",linea,yytext);}
#line 3287 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 466 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator compound_statement \n",linea, yytext);}
#line 3293 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 467 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator declaration_list compound_statement\n",linea, yytext );}
#line 3299 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 468 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator compound_statement\n",linea,yytext);}
#line 3305 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 3309 "parser.tab.c" /* yacc.c:1646  */
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
#line 471 "parser.y" /* yacc.c:1906  */


#include<stdio.h>
