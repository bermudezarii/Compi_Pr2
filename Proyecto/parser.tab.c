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
#define YYFINAL  85
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2947

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  254
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  465

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
      44,    45,    46,    47,    49,    50,    51,    52,    53,    54,
      55,    59,    60,    64,    65,    66,    67,    68,    69,    70,
      71,    75,    76,    77,    78,    79,    80,    84,    85,    86,
      87,    88,    89,    95,    96,    97,    98,   102,   103,   104,
     108,   109,   110,   114,   115,   116,   117,   118,   122,   123,
     124,   128,   129,   133,   134,   138,   139,   143,   144,   148,
     149,   153,   154,   158,   159,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   177,   178,   182,   186,
     187,   188,   192,   193,   194,   195,   196,   197,   202,   203,
     207,   208,   212,   213,   214,   215,   216,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   235,
     236,   237,   241,   242,   246,   247,   248,   252,   256,   257,
     258,   259,   264,   265,   269,   270,   271,   275,   276,   277,
     281,   282,   286,   287,   291,   292,   296,   297,   298,   302,
     303,   304,   305,   306,   307,   309,   310,   312,   316,   317,
     318,   319,   323,   324,   328,   329,   334,   335,   341,   342,
     343,   344,   345,   346,   348,   349,   350,   351,   355,   356,
     359,   360,   363,   364,   369,   370,   371,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   387,   388,   389,   393,
     394,   398,   399,   400,   401,   402,   403,   407,   408,   409,
     413,   414,   415,   416,   420,   421,   422,   426,   427,   428,
     432,   433,   437,   438,   439,   443,   444,   445,   446,   447,
     448,   452,   453,   454,   455,   456,   460,   461,   462,   467,
     468,   469,   470,   471,   472,   475,   476,   479,   480,   481,
     482,   486,   487,   488,   489
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

#define YYPACT_NINF -271

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-271)))

#define YYTABLE_NINF -254

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2067,    17,   -21,   283,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,    42,  -271,   529,   139,  -271,
    1268,   461,  -271,    47,   316,  -271,  2246,  2136,   441,    52,
     122,  -271,  1217,  -271,  -271,  -271,   -12,    33,  -271,    84,
      70,   102,  -271,   177,  2136,   283,  -271,  -271,  -271,   316,
     734,   113,  1866,  2398,    23,  -271,   236,  -271,   316,   587,
    2718,  -271,   529,    99,  -271,  1097,  1885,  2430,    52,    52,
    -271,    14,  -271,  -271,   122,  -271,  -271,   114,    53,    53,
      53,  -271,  -271,  -271,   127,   304,  -271,    70,  -271,  -271,
    1097,  -271,   734,  2159,  -271,   412,   734,   734,  -271,  1362,
    -271,   542,  -271,   172,  -271,  -271,   568,  -271,   136,   199,
    -271,   210,   221,   228,  1578,  -271,  -271,  -271,   108,  -271,
    -271,   118,  1222,  -271,  2750,  2782,  2782,     2,   315,  -271,
    2814,  -271,   368,   339,   347,   336,   332,   252,   256,   260,
     240,    -1,  -271,   277,   358,   236,  1957,  2462,   672,  -271,
    1578,  -271,   148,  2814,   293,   306,   344,   348,  1182,   359,
     301,   328,   396,  2494,   584,  -271,  -271,   249,   369,  -271,
    -271,  -271,   757,   842,  -271,  -271,  -271,  -271,  2526,  -271,
    -271,  -271,   166,  1097,  2846,  -271,   674,    84,   404,   431,
    -271,   448,    14,    14,  1885,  -271,  -271,   421,   439,  -271,
    -271,  -271,  2814,  -271,    70,   398,   247,  -271,  -271,  1097,
    1866,  2814,   292,  -271,   451,  2227,  1434,  2878,     2,   165,
     246,   440,   649,  -271,  -271,  -271,  1289,  -271,  -271,   244,
     334,   459,  2814,   315,  1650,  -271,  -271,  -271,   264,  2558,
    2814,   443,   447,  -271,  -271,  -271,  2814,  2814,  2814,  2814,
    2814,  2814,  2814,  2814,  2814,  2814,  2814,  2814,  2814,  2814,
    2814,  2814,  2814,  2814,  2814,  -271,  -271,  -271,   490,  -271,
     492,  2313,    60,  1182,   487,  1182,  2814,  2814,  2814,   491,
     425,  1506,   495,  -271,  -271,  -271,   296,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  2814,  2814,
    -271,   473,  -271,   927,  -271,  -271,  1097,  -271,   411,  1976,
    -271,  -271,  -271,   479,   493,  -271,  -271,  -271,  -271,   577,
    -271,  2814,  -271,   542,    60,  1722,  -271,  -271,   203,   500,
    -271,  -271,  2590,  2814,  2814,     2,   501,  2910,  -271,  -271,
     346,  -271,    63,  -271,  -271,  -271,  -271,  -271,   368,   368,
     339,   339,   347,   347,   347,   347,   336,   336,   332,   252,
     256,   260,   126,   240,  -271,  -271,  -271,  1182,  -271,   372,
     415,   423,   504,  1097,  2622,  -271,  -271,  -271,  -271,  -271,
    -271,  2654,  -271,   506,  -271,   484,  -271,  -271,  2366,   203,
     526,  -271,   527,  -271,  2814,   189,   259,  -271,  -271,   531,
    -271,  1794,  -271,  2814,  -271,  -271,  2814,  -271,  1182,  1182,
    1182,  2814,  1012,  2814,  2686,  -271,  -271,  2048,   509,  1434,
     536,  -271,  -271,  -271,  -271,  -271,  -271,     2,   538,  -271,
    -271,   478,  -271,  -271,   434,  1182,   438,  1182,   489,  -271,
      99,  -271,   549,  -271,  1182,   548,  -271,  1182,  -271,  1182,
    -271,  -271,  -271,  -271,  -271
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     238,     0,     0,     0,   163,   162,   149,   102,   103,   104,
     105,   106,   108,   109,   110,   111,   114,   115,   112,   113,
     144,   145,   107,   122,   123,     0,   240,     0,     0,    98,
      92,    94,   116,     0,   182,   117,    96,   100,   147,     0,
     158,   118,     0,   236,   239,   242,     0,   250,   241,     0,
       0,   139,    89,     0,   100,     0,    91,    93,    95,   128,
       0,   121,     0,     0,   184,   183,   185,    97,   130,     0,
       0,   214,     0,   100,   254,     0,     0,     0,     0,     0,
     148,   146,   164,   160,   159,     1,   237,     0,   250,   250,
     250,   245,   246,   152,   142,     0,   140,     0,    90,   252,
       0,    99,   129,     0,   124,   182,   131,     0,     4,     0,
     192,     2,     3,     0,     6,   177,   170,   171,   184,     0,
     180,   166,     0,     0,     0,   188,    36,    35,    31,    33,
      34,    32,     0,     2,     0,     0,     0,     7,    23,    37,
       0,    46,    47,    50,    53,    58,    61,    63,    65,    67,
      69,    71,    88,     0,     0,   186,     0,     0,     0,   210,
       0,   220,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,    73,    86,     0,     0,   217,
     201,   202,     0,     0,   203,   204,   205,   206,     0,   196,
     101,   215,   202,   216,     0,   157,   149,   171,     0,     0,
     154,     0,   150,   151,     0,   165,   161,     0,     0,   247,
     248,   249,     0,   137,     0,     0,   202,   120,   125,   126,
       0,     0,     0,   132,   134,     0,     0,     0,     7,     0,
     184,   172,     0,   168,   169,   193,     0,   187,    11,     2,
       0,   118,     0,    24,     0,    28,    25,    26,     0,     0,
       0,     0,     0,    16,    17,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   189,     8,   194,     0,   190,
       0,   210,   100,     0,     0,     0,     0,     0,     0,     2,
       0,     0,     0,   232,   233,   234,     0,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,     0,     0,
     221,     2,   212,     0,   211,   218,   219,   199,     0,     0,
     155,   156,   153,     0,     0,   143,   141,   138,   135,     0,
     127,     0,   119,     2,   100,     0,     5,   173,     0,   118,
     167,   181,     0,     0,     0,     2,   118,     0,     9,    12,
       0,    21,     0,    14,    15,    44,    45,    43,    48,    49,
      51,    52,    54,    55,    56,    57,    59,    60,    62,    64,
      66,    68,     0,    70,   195,   191,   207,     0,   209,     0,
       0,     0,     0,     0,     0,   231,   235,    74,    87,   213,
     197,     0,   178,   179,   243,     0,   133,   136,   184,     2,
     118,   176,     0,   174,     0,    47,     0,    39,    38,     0,
      29,     0,    18,     0,    13,    10,     0,   208,     0,     0,
       0,     0,     0,   203,     0,   198,   200,     0,     0,     0,
       0,    29,   175,    40,    41,    42,    30,     2,   118,    22,
      72,   222,   224,   225,     0,     0,     0,     0,     0,   244,
     100,    30,     0,    19,     0,     0,   230,     0,   227,     0,
      20,   223,   226,   229,   228
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -271,    20,   432,  -271,   224,  -271,     3,  -235,  -244,   192,
     167,   294,   295,   303,   309,   302,  -271,   -32,   -65,  -271,
     129,   -68,    15,    50,   -25,   520,  -271,   105,  -271,  -271,
     471,   -89,   360,  -271,   254,  -271,   508,   373,    62,     1,
     -27,     0,  -271,  -271,   -63,  -225,   270,   273,   -94,   174,
     -58,  -181,  -271,   125,  -271,     4,   163,   -61,  -270,  -271,
    -271,  -271,  -271,   556,   554,   323,  -271
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   137,   138,   350,   174,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   175,   176,   308,
     177,   153,    71,    72,    28,    29,    30,    31,    32,    33,
     103,   104,    34,   222,   223,    35,    95,    96,    36,    73,
      38,   154,    40,    84,   119,   120,   199,   121,    41,   122,
      66,   190,   318,   179,   180,   181,   316,   193,   184,   185,
     186,   187,    42,    43,    48,    92,    44
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    37,    53,    39,    49,   189,   155,   317,   183,   201,
      47,   341,    81,   198,   218,    26,   273,   360,   361,    87,
      45,   384,     4,   204,   358,   359,    77,    39,    54,     5,
     241,   152,    62,    78,    64,    63,    88,    39,    39,    80,
      83,    74,    39,    37,   274,   152,    46,    53,    50,    79,
      27,   202,   203,    60,    39,    39,    88,    26,    99,    64,
     155,     3,   118,   117,    47,    89,   241,    90,    64,   178,
      93,   309,    39,    51,   415,   178,    39,   197,    61,   192,
      57,    58,   115,     6,   206,    89,    67,    90,    70,   280,
     191,    81,    27,   278,    93,   284,   115,   183,   406,   240,
     178,    94,    82,    39,   216,   118,   224,   405,    97,   230,
     197,    64,   116,   423,   424,   191,   118,   233,  -163,   107,
    -163,   313,   106,   189,   178,   152,   116,    70,  -162,   228,
    -162,   152,   241,   207,   309,   240,   218,   248,   339,   208,
     416,   198,     4,   255,   325,   220,   205,    55,    63,     5,
     346,    81,    56,   328,   406,   212,    39,   117,   178,   116,
     178,   282,   283,   405,   106,   102,  -253,     6,   106,   106,
    -253,  -253,   155,   309,   276,   336,   115,  -163,  -163,  -149,
     152,   232,   178,   178,   351,    55,   106,  -162,  -162,   152,
      98,    20,    21,   178,   178,    49,    64,   191,   276,   434,
      75,   240,   341,    81,    39,   117,   116,   102,    65,   235,
     426,   102,   102,   401,   256,   257,   258,   100,   236,   178,
     118,   197,   106,     4,   115,    39,   230,   334,   248,   102,
       5,   237,   182,    65,   191,   238,    39,   117,   229,   342,
     115,   400,    65,   387,   388,   156,   228,  -251,   157,   108,
     276,  -251,  -251,   229,   116,   109,   115,   309,    63,   355,
     356,   357,   310,   397,     4,   102,   219,   108,   348,   435,
     116,     5,   269,   242,   270,  -149,   116,   311,   112,    65,
     114,   271,   259,   260,   272,   231,   116,   139,   275,   229,
     234,   178,     3,   290,   106,   133,   112,   347,   114,   152,
     329,   139,   296,     4,   309,   330,   106,   285,   315,   386,
       5,   213,   214,   178,     6,   286,   178,   438,   315,    39,
     117,   182,   422,   229,   249,    62,   189,   250,    63,    39,
     224,   191,   292,   398,   251,   241,     4,   102,   402,   115,
     155,   293,    55,     5,   343,   409,   407,   408,   439,   102,
     252,   253,   254,   287,   413,   229,   414,   288,   245,   246,
     247,   108,   259,   260,   139,   263,   264,   242,   291,   116,
     231,   229,   108,   229,   267,   268,   265,   266,   194,   352,
     309,   139,   418,   178,   440,   261,   262,   139,   219,   133,
     112,    59,   114,   256,   257,   258,    68,   106,   191,   430,
     311,   112,   372,   114,   240,   327,   214,   433,   376,   294,
     378,   209,   210,   211,   320,   379,   380,   381,   390,   391,
     105,   220,   178,   309,    63,   419,   221,    39,   117,   230,
     450,   309,     4,   420,   366,   367,   139,   452,   315,     5,
     102,   321,   309,     6,   455,   139,   309,   115,   457,   228,
      76,   245,   323,    77,   383,   362,   363,   364,   365,   322,
      78,     4,    59,   105,   229,   331,    68,   105,     5,   344,
     324,   337,     6,   106,   353,  -129,    79,   116,   354,   116,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   309,   139,   459,
     374,   377,   417,   375,  -149,   283,   382,   231,   385,   394,
     403,   410,   395,   421,   427,   428,   102,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   431,   432,     3,   449,
     229,   436,    52,   441,   442,   443,   451,   315,   453,     4,
     444,    62,   446,   448,    63,   139,     5,   454,   229,   460,
       6,   462,     4,   368,   243,   369,   139,   139,   139,     5,
     456,   412,   458,  -149,   370,   101,   373,   220,   225,   461,
      63,   371,   463,   396,   464,   105,     3,   326,     4,   392,
     108,   221,   393,   158,   159,     5,   160,     4,    86,     6,
     161,    91,   126,   127,     5,   215,     0,   128,     6,     0,
     129,   130,   297,     0,   131,   132,     0,     0,   162,   112,
     134,   114,   139,   135,   136,     0,     0,     0,   139,     0,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     139,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,   163,   164,   165,     0,   166,   167,   168,
     169,   170,   171,   172,   173,   108,     0,     0,   158,   281,
     338,   160,   319,    62,    -2,   161,    63,   126,   127,     0,
       0,     0,   128,     0,     4,   129,   130,     0,     0,   131,
     132,     5,     0,   162,   112,   134,   114,     0,   135,   136,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,   163,   164,
     165,     0,   166,   167,   168,   169,   170,   171,   172,   173,
     108,     0,     0,   158,   312,     0,   160,     0,     0,     0,
     161,     0,   126,   127,     0,     0,     0,   128,     0,     0,
     129,   130,     0,     0,   131,   132,     0,     0,   162,   112,
     134,   114,     0,   135,   136,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,   163,   164,   165,     0,   166,   167,   168,
     169,   170,   171,   172,   173,   108,     0,     0,   158,   314,
       0,   160,     0,     0,     0,   161,     0,   126,   127,     0,
       0,     0,   128,     0,     0,   129,   130,     0,     0,   131,
     132,     0,     0,   162,   112,   134,   114,     0,   135,   136,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,   163,   164,
     165,     0,   166,   167,   168,   169,   170,   171,   172,   173,
     108,     0,     0,   158,   389,     0,   160,     0,     0,     0,
     161,     0,   126,   127,     0,     0,     0,   128,     0,     0,
     129,   130,     0,     0,   131,   132,     0,     0,   162,   112,
     134,   114,     0,   135,   136,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,   163,   164,   165,     0,   166,   167,   168,
     169,   170,   171,   172,   173,   108,     0,     0,   158,     0,
       0,   160,   445,     0,     0,   161,     0,   126,   127,     0,
       0,     0,   128,     0,     0,   129,   130,     0,     0,   131,
     132,     0,     0,   162,   112,   134,   114,     0,   135,   136,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,   163,   164,
     165,     0,   166,   167,   168,   169,   170,   171,   172,   173,
     108,     0,     0,   158,     0,     0,   160,     0,     0,     0,
     161,     0,   126,   127,     0,     0,     0,   128,     0,     0,
     129,   130,     0,     0,   131,   132,     0,     0,   162,   112,
     134,   114,     0,   135,   136,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,   163,   164,   165,     0,   166,   167,   168,
     169,   170,   171,   172,   173,   108,     0,     0,   158,     0,
       0,   124,     0,     0,     0,   161,     0,   126,   127,     0,
       0,     0,   128,     0,     0,   129,   130,     0,     0,   131,
     132,     0,     0,   289,   112,   134,   114,    85,   135,   136,
       0,     1,     2,     0,     0,   108,     3,     0,   123,     0,
       0,   242,     0,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     4,     0,     5,     0,     0,     0,     6,     5,
       0,     0,     0,   133,   112,     0,   114,     0,   163,   164,
     165,     0,   166,   167,   168,   169,   170,   171,   172,   173,
       0,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   108,     0,     0,     0,     0,     0,   194,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     5,     0,     0,     0,
     111,   112,   113,   114,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   340,   108,     0,     0,   123,     0,
       0,   226,   110,     0,    63,     0,     0,   126,   127,     0,
       0,     0,   128,     0,     0,   129,   130,     0,     0,   131,
     132,     0,     0,   111,   112,   227,   114,     0,   135,   136,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   108,     0,     0,
     123,     0,     0,   226,   110,     0,    63,     0,     0,   126,
     127,     0,     0,     0,   128,     0,     0,   129,   130,     0,
       0,   131,   132,     0,     0,   333,   112,   227,   114,     0,
     135,   136,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   108,
       0,     0,   123,     0,     0,   160,     0,     0,     0,   161,
       0,   126,   127,     0,     0,     0,   128,     0,     0,   129,
     130,     0,     0,   131,   132,     0,     0,   311,   112,   134,
     114,     0,   135,   136,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   108,     0,     0,   123,     0,     0,   160,     0,     0,
       0,     0,     0,   126,   127,     0,     0,     0,   128,     0,
       0,   129,   130,     0,     0,   131,   132,     0,     0,   239,
     112,   134,   114,     0,   135,   136,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   108,     0,     0,   123,     0,     0,   124,
       0,     0,     0,     0,     0,   126,   127,     0,     0,     0,
     128,     0,     0,   129,   130,     0,     0,   131,   132,     0,
       0,   345,   112,   134,   114,     0,   135,   136,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   108,     0,     0,   123,     0,
       0,   124,     0,     0,     0,     0,     0,   126,   127,     0,
       0,     0,   128,     0,     0,   129,   130,     0,     0,   131,
     132,     0,     0,   399,   112,   134,   114,     0,   135,   136,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   108,     0,     0,
     123,     0,     0,   124,     0,     0,     0,     0,     0,   126,
     127,     0,     0,     0,   128,     0,     0,   129,   130,     0,
       0,   131,   132,     0,     0,   437,   112,   134,   114,     0,
     135,   136,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   108,
       0,     0,     0,     0,     0,   109,   110,     0,    63,     0,
       0,     0,     0,     0,     0,     0,     4,     0,   108,     0,
       0,     0,     0,     5,   194,   195,     0,   111,   112,   113,
     114,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     5,     0,     0,     0,   196,   112,   113,   114,
       0,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     108,     0,     0,     0,     0,     0,   194,   277,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     0,   108,
       0,     0,     0,     0,     5,   194,     0,     0,   111,   112,
     113,   114,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     0,     0,     5,     0,     0,     0,   196,   112,   113,
     114,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   108,     0,     0,     0,     0,     0,   194,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       0,     1,     2,     0,     0,     5,     3,     0,     0,   111,
     112,   113,   114,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    69,     0,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     0,     0,     5,    70,     0,   217,     6,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     5,     0,     0,     0,
       6,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   332,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     6,     0,
    -131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   -11,   -11,     0,     0,   -11,   -11,     0,     0,     0,
     -11,   -11,   -11,   -11,   -11,     0,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,     0,     0,     0,     0,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   108,
       0,     0,   123,     0,     0,   429,   404,     0,    63,     0,
       0,   126,   127,     0,     0,     0,   128,     0,     0,   129,
     130,     0,     0,   131,   132,     0,     0,   133,   112,   134,
     114,   108,   135,   136,   123,     0,     0,   124,     0,   125,
       0,     0,     0,   126,   127,     0,     0,     0,   128,     0,
       0,   129,   130,     0,     0,   131,   132,     0,     0,   133,
     112,   134,   114,   108,   135,   136,   123,     0,     0,   124,
       0,   200,     0,     0,     0,   126,   127,     0,     0,     0,
     128,     0,     0,   129,   130,     0,     0,   131,   132,     0,
       0,   133,   112,   134,   114,   108,   135,   136,   123,     0,
       0,   124,     0,   279,     0,     0,     0,   126,   127,     0,
       0,     0,   128,     0,     0,   129,   130,     0,     0,   131,
     132,     0,     0,   133,   112,   134,   114,   108,   135,   136,
     123,     0,     0,   124,     0,     0,     0,   295,     0,   126,
     127,     0,     0,     0,   128,     0,     0,   129,   130,     0,
       0,   131,   132,     0,     0,   133,   112,   134,   114,   108,
     135,   136,   188,   238,     0,   124,     0,     0,     0,     0,
       0,   126,   127,     0,     0,     0,   128,     0,     0,   129,
     130,     0,     0,   131,   132,     0,     0,   133,   112,   134,
     114,   108,   135,   136,   123,     0,     0,   124,   349,     0,
       0,     0,     0,   126,   127,     0,     0,     0,   128,     0,
       0,   129,   130,     0,     0,   131,   132,     0,     0,   133,
     112,   134,   114,   108,   135,   136,   123,     0,     0,   124,
     404,     0,     0,     0,     0,   126,   127,     0,     0,     0,
     128,     0,     0,   129,   130,     0,     0,   131,   132,     0,
       0,   133,   112,   134,   114,   108,   135,   136,   123,     0,
       0,   124,     0,     0,     0,   161,     0,   126,   127,     0,
       0,     0,   128,     0,     0,   129,   130,     0,     0,   131,
     132,     0,     0,   133,   112,   134,   114,   108,   135,   136,
     188,   425,     0,   124,     0,     0,     0,     0,     0,   126,
     127,     0,     0,     0,   128,     0,     0,   129,   130,     0,
       0,   131,   132,     0,     0,   133,   112,   134,   114,   108,
     135,   136,   123,     0,     0,   124,   447,     0,     0,     0,
       0,   126,   127,     0,     0,     0,   128,     0,     0,   129,
     130,     0,     0,   131,   132,     0,     0,   133,   112,   134,
     114,   108,   135,   136,   188,     0,     0,   124,     0,     0,
       0,     0,     0,   126,   127,     0,     0,     0,   128,     0,
       0,   129,   130,     0,     0,   131,   132,     0,     0,   133,
     112,   134,   114,   108,   135,   136,   123,     0,     0,   244,
       0,     0,     0,     0,     0,   126,   127,     0,     0,     0,
     128,     0,     0,   129,   130,     0,     0,   131,   132,     0,
       0,   133,   112,   134,   114,   108,   135,   136,   123,     0,
       0,   242,     0,     0,     0,     0,     0,   126,   127,     0,
       0,     0,   128,     0,     0,   129,   130,     0,     0,   131,
     132,     0,     0,   133,   112,   134,   114,   108,   135,   136,
     123,     0,     0,   124,     0,     0,     0,     0,     0,   126,
     127,     0,     0,     0,   128,     0,     0,   129,   130,     0,
       0,   131,   132,     0,     0,   133,   112,   134,   114,   108,
     135,   136,   123,     0,     0,   160,     0,     0,     0,     0,
       0,   126,   127,     0,     0,     0,   128,     0,     0,   129,
     130,     0,     0,   131,   132,     0,     0,   311,   112,   134,
     114,   108,   135,   136,   123,     0,     0,   335,     0,     0,
       0,     0,     0,   126,   127,     0,     0,     0,   128,     0,
       0,   129,   130,     0,     0,   131,   132,     0,     0,   133,
     112,   134,   114,   108,   135,   136,   123,     0,     0,   411,
       0,     0,     0,     0,     0,   126,   127,     0,     0,     0,
     128,     0,     0,   129,   130,     0,     0,   131,   132,     0,
       0,   133,   112,   134,   114,     0,   135,   136
};

static const yytype_int16 yycheck[] =
{
       0,     0,    27,     3,     3,    70,    64,   188,    69,    77,
      31,   236,    39,    76,   103,     0,    17,   261,   262,    31,
       3,   291,    20,     9,   259,   260,    12,    27,    27,    27,
     124,    63,     9,    19,    34,    12,     3,    37,    38,    38,
      40,    37,    42,    42,    45,    77,    29,    72,     6,    35,
       0,    78,    79,     6,    54,    55,     3,    42,    54,    59,
     118,     9,    62,    62,    31,    32,   160,    34,    68,    69,
      10,     8,    72,    31,    11,    75,    76,    76,    31,    75,
      30,    31,    62,    31,    84,    32,    36,    34,    28,   157,
      75,   118,    42,   156,    10,   163,    76,   158,   342,   124,
     100,    31,    40,   103,   100,   105,   105,   342,     6,   109,
     109,   111,    62,   383,   384,   100,   116,   116,    10,     6,
      12,   182,    60,   188,   124,   157,    76,    28,    10,   109,
      12,   163,   226,    19,     8,   160,   225,   137,   232,    25,
      14,   204,    20,   140,   212,     9,    84,     8,    12,    27,
     244,   178,    13,   221,   398,    28,   156,   156,   158,   109,
     160,   160,    14,   398,   102,    60,     0,    31,   106,   107,
       4,     5,   230,     8,   154,    10,   156,    69,    70,    31,
     212,     9,   182,   183,   249,     8,   124,    69,    70,   221,
      13,    69,    70,   193,   194,   194,   196,   182,   178,    10,
      37,   226,   427,   230,   204,   204,   156,   102,    34,    10,
     391,   106,   107,    10,    25,    26,    27,    54,     8,   219,
     220,   220,   160,    20,   204,   225,   226,   226,   228,   124,
      27,    10,    69,    59,   219,     7,   236,   236,   109,   239,
     220,   335,    68,   308,   309,     9,   226,     0,    12,     3,
     230,     4,     5,   124,   204,     9,   236,     8,    12,   256,
     257,   258,    13,   331,    20,   160,   103,     3,   248,    10,
     220,    27,    20,     9,    18,    31,   226,    31,    32,   105,
      34,    21,    23,    24,    44,   111,   236,    63,    11,   160,
     116,   291,     9,   168,   232,    31,    32,    33,    34,   331,
       8,    77,   173,    20,     8,    13,   244,    14,   183,    13,
      27,     7,     8,   313,    31,     9,   316,   411,   193,   319,
     319,   158,   383,   194,     9,     9,   391,    12,    12,   329,
     329,   316,    31,   333,    19,   429,    20,   232,   338,   319,
     398,    13,     8,    27,    10,   345,   343,   344,   413,   244,
      35,    36,    37,     9,     8,   226,    10,     9,   134,   135,
     136,     3,    23,    24,   140,    29,    30,     9,     9,   319,
     196,   242,     3,   244,    42,    43,    40,    41,     9,   250,
       8,   157,    10,   383,   416,    38,    39,   163,   225,    31,
      32,    31,    34,    25,    26,    27,    36,   335,   383,   399,
      31,    32,   273,    34,   429,     7,     8,   404,   283,    13,
     285,    88,    89,    90,    10,   286,   287,   288,     7,     8,
      60,     9,   422,     8,    12,    10,    14,   427,   427,   429,
     429,     8,    20,    10,   267,   268,   212,   437,   313,    27,
     335,    10,     8,    31,    10,   221,     8,   427,    10,   429,
       9,   227,    31,    12,   291,   263,   264,   265,   266,    11,
      19,    20,   102,   103,   335,    14,   106,   107,    27,    10,
      31,    31,    31,   411,    31,    14,    35,   427,    31,   429,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,     8,   274,    10,
      10,    14,   377,    11,    31,    14,    81,   333,    13,    30,
      10,    10,    19,     9,     8,    31,   411,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    10,    10,     9,    30,
     411,    10,    13,   418,   419,   420,    10,   422,    10,    20,
     421,     9,   423,   424,    12,   331,    27,    79,   429,    10,
      31,    13,    20,   269,   132,   270,   342,   343,   344,    27,
     445,   347,   447,    31,   271,    55,   274,     9,   107,   454,
      12,   272,   457,   329,   459,   225,     9,   214,    20,   319,
       3,    14,   319,     6,     7,    27,     9,    20,    42,    31,
      13,    47,    15,    16,    27,    97,    -1,    20,    31,    -1,
      23,    24,    28,    -1,    27,    28,    -1,    -1,    31,    32,
      33,    34,   398,    36,    37,    -1,    -1,    -1,   404,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
     416,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    78,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,     3,    -1,    -1,     6,     7,
      31,     9,     8,     9,    10,    13,    12,    15,    16,    -1,
      -1,    -1,    20,    -1,    20,    23,    24,    -1,    -1,    27,
      28,    27,    -1,    31,    32,    33,    34,    -1,    36,    37,
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
      83,    84,    85,    86,    87,     3,    -1,    -1,     6,    -1,
      -1,     9,    10,    -1,    -1,    13,    -1,    15,    16,    -1,
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
      33,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    78,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,     3,    -1,    -1,     6,    -1,
      -1,     9,    -1,    -1,    -1,    13,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,     0,    36,    37,
      -1,     4,     5,    -1,    -1,     3,     9,    -1,     6,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    20,    -1,    27,    -1,    -1,    -1,    31,    27,
      -1,    -1,    -1,    31,    32,    -1,    34,    -1,    76,    77,
      78,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,     3,    -1,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      31,    32,    33,    34,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,     3,    -1,    -1,     6,    -1,
      -1,     9,    10,    -1,    12,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     3,    -1,    -1,
       6,    -1,    -1,     9,    10,    -1,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,     3,
      -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    13,
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
       6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,     3,
      -1,    -1,    -1,    -1,    -1,     9,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,     3,    -1,
      -1,    -1,    -1,    27,     9,    10,    -1,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    31,    32,    33,    34,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
       3,    -1,    -1,    -1,    -1,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,     3,
      -1,    -1,    -1,    -1,    27,     9,    -1,    -1,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    31,    32,    33,
      34,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     3,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,     4,     5,    -1,    -1,    27,     9,    -1,    -1,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,     7,    31,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      31,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,     7,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     8,     9,    -1,    -1,    12,    13,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     3,
      -1,    -1,     6,    -1,    -1,     9,    10,    -1,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,     3,    36,    37,     6,    -1,    -1,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    34,     3,    36,    37,     6,    -1,    -1,     9,
      -1,    11,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,     3,    36,    37,     6,    -1,
      -1,     9,    -1,    11,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,     3,    36,    37,
       6,    -1,    -1,     9,    -1,    -1,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,     3,
      36,    37,     6,     7,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,     3,    36,    37,     6,    -1,    -1,     9,    10,    -1,
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
      34,     3,    36,    37,     6,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    34,     3,    36,    37,     6,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     9,    20,    27,    31,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,   110,   111,   112,   113,
     114,   115,   116,   117,   120,   123,   126,   127,   128,   129,
     130,   136,   150,   151,   154,     3,    29,    31,   152,   127,
       6,    31,    13,   112,   127,     8,    13,   111,   111,   120,
       6,    31,     9,    12,   129,   137,   138,   111,   120,     6,
      28,   110,   111,   127,   143,   144,     9,    12,    19,    35,
     127,   128,   126,   129,   131,     0,   151,    31,     3,    32,
      34,   152,   153,    10,    31,   124,   125,     6,    13,   143,
     144,   113,   115,   118,   119,   120,   126,     6,     3,     9,
      10,    31,    32,    33,    34,    89,   111,   127,   129,   132,
     133,   135,   137,     6,     9,    11,    15,    16,    20,    23,
      24,    27,    28,    31,    33,    36,    37,    89,    90,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   109,   129,   138,     9,    12,     6,     7,
       9,    13,    31,    76,    77,    78,    80,    81,    82,    83,
      84,    85,    86,    87,    92,   105,   106,   108,   129,   141,
     142,   143,   144,   145,   146,   147,   148,   149,     6,   106,
     139,   110,   143,   145,     9,    10,    31,   127,   132,   134,
      11,   109,   128,   128,     9,   126,   129,    19,    25,   153,
     153,   153,    28,     7,     8,   124,   143,     7,   119,   144,
       9,    14,   121,   122,   127,   118,     9,    33,    89,   108,
     129,   137,     9,   127,   137,    10,     8,    10,     7,    31,
     112,   136,     9,    90,     9,    92,    92,    92,   129,     9,
      12,    19,    35,    36,    37,    94,    25,    26,    27,    23,
      24,    38,    39,    29,    30,    40,    41,    42,    43,    20,
      18,    21,    44,    17,    45,    11,    89,    10,   132,    11,
     109,     7,   127,    14,   109,    14,     9,     9,     9,    31,
     141,     9,    31,    13,    13,    13,   108,    28,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,   107,     8,
      13,    31,     7,   145,     7,   141,   144,   139,   140,     8,
      10,    10,    11,    31,    31,   109,   125,     7,   109,     8,
      13,    14,     7,    31,   127,     9,    10,    31,    31,   136,
      75,   133,   129,    10,    10,    31,   136,    33,    89,    10,
      91,   106,   108,    31,    31,    94,    94,    94,    95,    95,
      96,    96,    97,    97,    97,    97,    98,    98,    99,   100,
     101,   102,   108,   103,    10,    11,   141,    14,   141,   108,
     108,   108,    81,   144,   146,    13,    13,   106,   106,     7,
       7,     8,   134,   135,    30,    19,   122,   109,   129,    31,
     136,    10,   129,    10,    10,    95,    96,    94,    94,   129,
      10,     9,    92,     8,    10,    11,    14,   141,    10,    10,
      10,     9,   145,   146,   146,     7,   139,     8,    31,     9,
     129,    10,    10,    94,    10,    10,    10,    31,   136,   106,
     105,   141,   141,   141,   108,    10,   108,    10,   108,    30,
     127,    10,   129,    10,    79,    10,   141,    10,   141,    10,
      10,   141,    13,   141,   141
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    89,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    91,    91,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    93,    93,    93,    93,    94,    94,    94,
      94,    94,    94,    95,    95,    95,    95,    96,    96,    96,
      97,    97,    97,    98,    98,    98,    98,    98,    99,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   108,   108,   109,   110,
     110,   110,   111,   111,   111,   111,   111,   111,   112,   112,
     113,   113,   114,   114,   114,   114,   114,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   116,
     116,   116,   117,   117,   118,   118,   118,   119,   120,   120,
     120,   120,   121,   121,   122,   122,   122,   123,   123,   123,
     124,   124,   125,   125,   126,   126,   127,   127,   127,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   129,   129,
     129,   129,   130,   130,   131,   131,   132,   132,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   134,   134,
     135,   135,   136,   136,   137,   137,   137,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   139,   139,   139,   140,
     140,   141,   141,   141,   141,   141,   141,   142,   142,   142,
     143,   143,   143,   143,   144,   144,   144,   145,   145,   145,
     146,   146,   147,   147,   147,   148,   148,   148,   148,   148,
     148,   149,   149,   149,   149,   149,   150,   150,   150,   151,
     151,   151,   151,   151,   151,   152,   152,   153,   153,   153,
     153,   154,   154,   154,   154
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
       1,     2,     2,     6,     8,     2,     2,     2,     2,     2,
       0,     4,     3,     3,     2
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
    {printf("%d con %s primary_expression: IDENTIFIER FINAL\n",linea, gramaticas );}
#line 2143 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 34 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: CONSTANT FINAL\n",linea,  gramaticas );}
#line 2149 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 35 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );}
#line 2155 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 36 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: LEFT_PARENTHESIS FINAL expression RIGHT_PARETHESIS\n",linea, gramaticas);}
#line 2161 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 37 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: INTEGER FINAL\n",linea, gramaticas );}
#line 2167 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 41 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression\n",linea, gramaticas );}
#line 2173 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 42 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: pointer primary_expression\n",linea, gramaticas);}
#line 2179 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 43 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );}
#line 2185 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 44 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
#line 2191 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 45 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
#line 2197 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 46 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
#line 2203 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 47 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_PARENTHESIS argument_expression_list LEFT_PARENTHESIS\n",linea, gramaticas);}
#line 2209 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 49 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DOT IDENTIFIER\n",linea, gramaticas);}
#line 2215 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 50 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression PTR_OP IDENTIFIER\n",linea, gramaticas);}
#line 2221 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 51 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression INC_OP\n",linea, gramaticas );}
#line 2227 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 52 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DEC_OP\n",linea, gramaticas );}
#line 2233 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 53 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
#line 2239 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 54 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2245 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 55 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2251 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 59 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: assignment_expression\n",linea, gramaticas);}
#line 2257 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 60 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: argument_expression_list COMMA assignment_expression\n",linea, gramaticas);}
#line 2263 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 64 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: postfix_expression\n",linea, gramaticas );}
#line 2269 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 65 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression:pointer postfix_expression\n",linea, gramaticas);}
#line 2275 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 66 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: INC_OP unary_expression\n",linea, gramaticas );}
#line 2281 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 67 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: DEC_OP unary_expression\n",linea, gramaticas );}
#line 2287 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 68 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: unary_operator cast_expression\n",linea, gramaticas );}
#line 2293 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 69 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
#line 2299 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 70 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2305 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 71 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2311 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 75 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: BIT_AND\n",linea, gramaticas );}
#line 2317 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 76 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MUL\n",linea, gramaticas );}
#line 2323 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 77 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PLUS\n",linea, gramaticas );}
#line 2329 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 78 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MINUS\n",linea, gramaticas );}
#line 2335 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 79 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PRIME\n",linea, gramaticas );}
#line 2341 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 80 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: EXCLAMATION\n",linea, gramaticas);}
#line 2347 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 84 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: unary_expression\n",linea, gramaticas);}
#line 2353 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 85 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2359 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 86 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2365 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 87 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2371 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 88 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2377 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 89 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2383 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 95 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MUL cast_expression\n",linea, gramaticas );}
#line 2389 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 96 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression DIV cast_expression\n",linea, gramaticas );}
#line 2395 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 97 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MOD cast_expression\n",linea,gramaticas );}
#line 2401 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 98 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: cast_expression\n",linea, gramaticas);}
#line 2407 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 102 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: multiplicative_expression\n",linea,gramaticas );}
#line 2413 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 103 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression PLUS multiplicative_expression\n",linea,gramaticas) ;}
#line 2419 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 104 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression MINUS multiplicative_expression\n",linea, gramaticas) ;}
#line 2425 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 108 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: additive_expression\n",linea, gramaticas );}
#line 2431 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 109 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);}
#line 2437 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 110 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression RIGHT_OP additive_expression \n",linea, gramaticas);}
#line 2443 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 114 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: shift_expression\n",linea, gramaticas);}
#line 2449 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 115 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LESS shift_expression\n",linea, gramaticas);}
#line 2455 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 116 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GREATER shift_expression\n",linea, gramaticas );}
#line 2461 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 117 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LE_OP shift_expression\n",linea, gramaticas);}
#line 2467 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 118 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GE_OP shift_expression\n",linea, gramaticas );}
#line 2473 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 122 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: relational_expression\n",linea, gramaticas);}
#line 2479 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 123 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression EQ_OP relational_expression\n",linea, gramaticas );}
#line 2485 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 124 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression NE_OP relational_expression\n",linea, gramaticas);}
#line 2491 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 128 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: equality_expression\n",linea, gramaticas );}
#line 2497 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 129 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: and_expression BIT_AND equality_expression\n",linea, gramaticas);}
#line 2503 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 133 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: and_expression\n",linea, gramaticas );}
#line 2509 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 134 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: exclusive_or_expression UP_ARROW and_expression\n",linea, gramaticas );}
#line 2515 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 138 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: exclusive_or_expression\n",linea, gramaticas);}
#line 2521 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 139 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression\n",linea, gramaticas );}
#line 2527 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 143 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: inclusive_or_expression\n",linea,gramaticas );}
#line 2533 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 144 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n",linea, gramaticas);}
#line 2539 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 148 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_and_expression\n",linea,gramaticas);}
#line 2545 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 149 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_or_expression OR_OP logical_and_expression\n",linea, gramaticas );}
#line 2551 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 153 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression\n",linea, gramaticas);}
#line 2557 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 154 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression INTERROGATION expression COLON conditional_expression\n",linea,gramaticas);}
#line 2563 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 158 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: conditional_expression\n",linea, gramaticas);}
#line 2569 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 159 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: unary_expression assignment_operator assignment_expression\n",linea,gramaticas);}
#line 2575 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 163 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: EQU\n",linea, gramaticas);}
#line 2581 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 164 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MUL_ASSIGN\n",linea,gramaticas );}
#line 2587 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 165 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: DIV_ASSIGN\n",linea,gramaticas);}
#line 2593 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 166 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MOD_ASSIGN\n",linea,gramaticas);}
#line 2599 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 167 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: ADD_ASSIGN\n",linea, gramaticas);}
#line 2605 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 168 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: SUB_ASSIGN\n",linea, gramaticas);}
#line 2611 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 169 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: LEFT_ASSIGN\n",linea, gramaticas);}
#line 2617 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 170 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: RIGHT_ASSIGN\n",linea,gramaticas);}
#line 2623 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 171 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: AND_ASSIGN\n",linea, gramaticas);}
#line 2629 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 172 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: XOR_ASSIGN\n",linea, gramaticas);}
#line 2635 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 173 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: OR_ASSIGN\n",linea, gramaticas);}
#line 2641 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 177 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: assignment_expression\n",linea, gramaticas);}
#line 2647 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 178 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: expression COMMA assignment_expression\n",linea,gramaticas);}
#line 2653 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 182 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  constant_expression: conditional_expression\n",linea, gramaticas );}
#line 2659 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 2665 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 187 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers init_declarator_list SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 2671 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 188 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));}
#line 2677 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 192 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier \n",linea, gramaticas);}
#line 2683 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 193 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier declaration_specifiers\n",linea, gramaticas);}
#line 2689 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 194 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);}
#line 2695 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 195 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
#line 2701 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 196 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier\n",linea, gramaticas );}
#line 2707 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 197 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier declaration_specifiers\n",linea, gramaticas );}
#line 2713 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 202 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator\n",linea, gramaticas );}
#line 2719 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 203 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator_list COMMA init_declarator\n",linea,gramaticas);}
#line 2725 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 207 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator\n",linea, gramaticas );}
#line 2731 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 208 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator EQU initializer\n",linea, gramaticas );}
#line 2737 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 212 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: TYPEDEF\n",linea, gramaticas);}
#line 2743 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 213 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: EXTERN\n",linea, gramaticas);}
#line 2749 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 214 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: STATIC\n",linea,gramaticas);}
#line 2755 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 215 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: AUTO\n",linea, gramaticas);}
#line 2761 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 216 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: REGISTER\n",linea, gramaticas);}
#line 2767 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 220 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: VOID\n",linea, gramaticas);}
#line 2773 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 221 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: CHAR\n",linea, gramaticas);}
#line 2779 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 222 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SHORT\n",linea, gramaticas);}
#line 2785 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 223 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: INT\n",linea, gramaticas);}
#line 2791 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 224 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: LONG\n",linea, gramaticas);}
#line 2797 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 225 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: FLOAT\n",linea, gramaticas);}
#line 2803 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 226 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: DOUBLE\n",linea, gramaticas);}
#line 2809 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 227 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SIGNED\n",linea, gramaticas);}
#line 2815 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 228 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: UNSIGNED\n",linea, gramaticas);}
#line 2821 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 229 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: struct_or_union_specifier\n",linea, gramaticas );}
#line 2827 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 230 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: enum_specifier\n",linea, gramaticas );}
#line 2833 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 231 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: TYPE_NAME\n",linea,gramaticas);}
#line 2839 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 235 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET \n",linea, gramaticas );}
#line 2845 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 236 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET\n",linea,gramaticas );}
#line 2851 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 237 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER\n",linea, gramaticas);}
#line 2857 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 241 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: STRUCT\n",linea, gramaticas);}
#line 2863 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 242 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: UNION\n",linea, gramaticas);}
#line 2869 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 246 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration\n",linea, gramaticas );}
#line 2875 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 247 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration_list struct_declaration\n",linea, gramaticas );}
#line 2881 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 252 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 2887 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 256 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier specifier_qualifier_list\n",linea, gramaticas );}
#line 2893 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 257 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier\n",linea, gramaticas );}
#line 2899 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 258 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier specifier_qualifier_list\n",linea,gramaticas);}
#line 2905 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 259 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier\n",linea, gramaticas );}
#line 2911 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 264 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator\n",linea, gramaticas );}
#line 2917 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 265 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator_list COMMA struct_declarator\n",linea, gramaticas );}
#line 2923 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 269 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator\n",linea, gramaticas );}
#line 2929 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 270 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: COLON constant_expression \n",linea, gramaticas );}
#line 2935 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 271 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator COLON constant_expression \n",linea, gramaticas);}
#line 2941 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 275 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 2947 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 276 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET \n",linea,gramaticas);}
#line 2953 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 277 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER\n",linea, gramaticas );}
#line 2959 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 281 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator\n",linea, gramaticas);}
#line 2965 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 282 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator_list COMMA enumerator\n",linea, gramaticas );}
#line 2971 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 286 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER\n",linea, gramaticas);}
#line 2977 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 287 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER EQU constant_expression\n",linea,gramaticas);}
#line 2983 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 291 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: CONST\n",linea,gramaticas);}
#line 2989 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 292 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: VOLATILE\n",linea, gramaticas);}
#line 2995 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 296 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: pointer direct_declarator \n",linea, gramaticas );}
#line 3001 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 297 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: direct_declarator\n",linea, gramaticas );}
#line 3007 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 298 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: declarator direct_declarator\n",linea, gramaticas );}
#line 3013 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 302 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: IDENTIFIER\n",linea, gramaticas);}
#line 3019 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 305 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3025 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 306 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET\n",linea,gramaticas);}
#line 3031 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 307 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
#line 3037 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 309 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3043 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 310 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3049 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 312 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
#line 3055 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 316 "parser.y" /* yacc.c:1646  */
    { printf("%d con %s  pointer: MUL\n",linea, gramaticas);}
#line 3061 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 317 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: MUL type_qualifier_list\n",linea, gramaticas );}
#line 3067 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 318 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: MUL pointer\n",linea, gramaticas );}
#line 3073 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 319 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: MUL type_qualifier_list pointer\n",linea,gramaticas);}
#line 3079 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 328 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier\n",linea,gramaticas );}
#line 3085 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 329 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier_list type_qualifier\n",linea, gramaticas );}
#line 3091 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 334 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list\n",linea, gramaticas );}
#line 3097 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 335 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list COMMA ELLIPSIS\n",linea, gramaticas);}
#line 3103 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 341 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers declarator\n",linea, gramaticas );}
#line 3109 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 342 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas );}
#line 3115 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 343 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers\n",linea, gramaticas );}
#line 3121 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 345 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas );}
#line 3127 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 346 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas
	 );}
#line 3134 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 348 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3140 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 349 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3146 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 350 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3152 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 355 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER\n",linea, gramaticas);}
#line 3158 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 356 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER\n",linea, gramaticas);}
#line 3164 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 359 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_declaration\n",linea, gramaticas);}
#line 3170 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 360 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_list COMMA parameter_declaration\n",linea, gramaticas);}
#line 3176 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 363 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list\n",linea, gramaticas);}
#line 3182 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 364 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list abstract_declarator\n",linea, gramaticas);}
#line 3188 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 369 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer\n",linea, gramaticas);}
#line 3194 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 370 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: direct_abstract_declarator\n",linea, gramaticas );}
#line 3200 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 371 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer direct_abstract_declarator\n",linea, gramaticas);}
#line 3206 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 375 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS \n",linea, gramaticas );}
#line 3212 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 376 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator:  LEFT_SBRACKET RIGHT_SBRACKET \n",linea, gramaticas);}
#line 3218 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 377 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
#line 3224 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 378 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
#line 3230 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 379 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
#line 3236 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 380 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea, gramaticas);}
#line 3242 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 381 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS \n",linea, gramaticas );}
#line 3248 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 382 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas );}
#line 3254 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 383 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea,  gramaticas  );}
#line 3260 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 387 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: assignment_expression\n",linea, gramaticas );}
#line 3266 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 388 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list RIGHT_BRACKET\n",linea,  gramaticas );}
#line 3272 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 389 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET\n",linea, gramaticas );}
#line 3278 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 393 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer\n",linea, gramaticas);}
#line 3284 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 394 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer_list COMMA initializer \n",linea, gramaticas);}
#line 3290 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 398 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: labeled_statement\n",linea, gramaticas );}
#line 3296 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 399 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: compound_statement\n",linea, gramaticas);}
#line 3302 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 400 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: expression_statement\n",linea,gramaticas );}
#line 3308 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 401 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: selection_statement\n",linea, gramaticas);}
#line 3314 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 402 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: iteration_statement\n",linea, gramaticas );}
#line 3320 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 403 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: jump_statement\n",linea, gramaticas );}
#line 3326 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 407 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: IDENTIFIER COLON statement \n",linea, gramaticas );}
#line 3332 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 408 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: CASE constant_expression COLON statement\n",linea, gramaticas );}
#line 3338 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 409 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: DEFAULT COLON statement\n",linea, gramaticas );}
#line 3344 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 413 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET RIGHT_BRACKET\n",linea, gramaticas);}
#line 3350 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 414 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET statement_list RIGHT_BRACKET\n",linea, gramaticas );}
#line 3356 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 415 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3362 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 416 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3368 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 420 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration\n",linea, gramaticas );}
#line 3374 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 421 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration_list declaration\n",linea, gramaticas);}
#line 3380 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 426 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement\n",linea, gramaticas );}
#line 3386 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 427 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement_list statement\n",linea, gramaticas);}
#line 3392 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 432 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3398 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 433 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: expression SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3404 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 437 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea,gramaticas);}
#line 3410 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 438 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement\n",linea, gramaticas);}
#line 3416 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 439 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 3422 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 443 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3428 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 444 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3434 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 445 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 3440 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 446 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3446 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 447 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3452 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 448 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3458 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 452 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: GOTO IDENTIFIER SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3464 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 453 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: CONTINUE SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3470 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 454 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: BREAK SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3476 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 455 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3482 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 456 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN expression SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3488 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 460 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a external_declaration\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3494 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 461 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a ciclo translation_unit\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3500 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 462 "parser.y" /* yacc.c:1646  */
    {printf("%d  translation_unit: Archivo Vacío\n",linea );memset(gramaticas,0,sizeof(gramaticas));}
#line 3506 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 467 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: function_definition\n",linea, gramaticas);}
#line 3512 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 468 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: declaration\n",linea, gramaticas);}
#line 3518 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 469 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: DEFINE define\n",linea, gramaticas);}
#line 3524 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 470 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 3530 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 471 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 3536 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 472 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 3542 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 475 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define: IDENTIFIER define\n",linea, gramaticas);}
#line 3548 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 476 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define: IDENTIFIER define_continue\n",linea, gramaticas);}
#line 3554 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 479 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define_continue: LITERAL define_continue\n",linea, gramaticas);}
#line 3560 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 480 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define_continue:CONSTANT define_continue\n",linea, gramaticas);}
#line 3566 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 481 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define_continue:  INTEGER define_continue\n",linea, gramaticas);}
#line 3572 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 486 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator declaration_list compound_statement\n",linea,gramaticas);}
#line 3578 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 487 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator compound_statement \n",linea, gramaticas);}
#line 3584 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 488 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator declaration_list compound_statement\n",linea, gramaticas );}
#line 3590 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 489 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator compound_statement\n",linea,gramaticas);}
#line 3596 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 3600 "parser.tab.c" /* yacc.c:1646  */
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
#line 492 "parser.y" /* yacc.c:1906  */


#include<stdio.h>
