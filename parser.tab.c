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
	//extern void yyerror(char *texto);


#line 73 "parser.tab.c" /* yacc.c:339  */

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

#line 212 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1338

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  214
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  351

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
       0,    31,    31,    32,    33,    34,    35,    39,    40,    41,
      42,    43,    44,    45,    46,    52,    53,    57,    58,    59,
      60,    61,    62,    66,    67,    68,    69,    70,    71,    75,
      76,    80,    81,    82,    83,    87,    88,    89,    93,    94,
      95,    99,   100,   101,   102,   103,   107,   108,   109,   113,
     114,   118,   119,   123,   124,   128,   129,   133,   134,   138,
     139,   143,   144,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   162,   163,   167,   171,   172,   176,
     177,   178,   179,   180,   181,   185,   186,   190,   191,   195,
     196,   197,   198,   199,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   218,   219,   220,   224,
     225,   229,   230,   234,   238,   239,   240,   241,   245,   246,
     250,   251,   252,   256,   257,   258,   262,   263,   267,   268,
     272,   273,   277,   278,   282,   283,   284,   285,   286,   287,
     288,   292,   293,   294,   295,   299,   300,   305,   306,   310,
     311,   315,   316,   317,   321,   322,   326,   327,   331,   332,
     333,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     349,   350,   351,   355,   356,   360,   361,   362,   363,   364,
     365,   369,   370,   371,   375,   376,   377,   378,   382,   383,
     387,   388,   392,   393,   397,   398,   399,   403,   404,   405,
     406,   410,   411,   412,   413,   414,   418,   419,   420,   425,
     426,   430,   431,   432,   433
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
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
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

#define YYPACT_NINF -221

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-221)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     823,     7,    -3,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,    12,  -221,   175,  1264,  1264,  -221,    17,    88,
    -221,  1264,   672,   129,    21,  -221,   231,  -221,  -221,    49,
    -221,  -221,    -3,    52,   111,  -221,    37,  -221,   641,  -221,
    -221,    88,   365,   125,   804,   992,   158,  -221,   166,  -221,
      88,   303,  -221,   175,  -221,   672,   888,  1024,   129,  -221,
    -221,  -221,  -221,  -221,   140,   139,  -221,    52,     7,  -221,
    1056,  -221,   672,   365,   506,  -221,    59,   365,   365,  -221,
     192,    89,   174,  -221,   182,  -221,   622,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  1230,  -221,  1256,  1256,
    -221,    27,  -221,  1282,  -221,   222,   163,   189,    99,   200,
     179,   195,   196,   178,    24,  -221,   225,   166,   843,  1088,
    -221,  -221,   246,  1282,   254,   262,   265,   271,   590,   274,
     276,   295,   298,  1114,   296,  -221,  -221,    74,  -221,  -221,
    -221,   388,   473,  -221,  -221,  -221,  -221,   285,  -221,  -221,
    -221,  -221,   304,    25,  -221,   306,  1282,  -221,    52,   243,
    -221,  1056,  -221,  -221,  -221,  -221,  -221,   738,  1282,   100,
    -221,   301,    16,   709,  -221,  -221,  -221,   864,  -221,   202,
     310,   622,  -221,  1282,  -221,  -221,  1146,  1282,   290,   291,
    -221,  -221,  -221,  1282,  1282,  1282,  1282,  1282,  1282,  1282,
    1282,  1282,  1282,  1282,  1282,  1282,  1282,  1282,  1282,  1282,
    1282,  1282,  -221,  -221,   318,  -221,   320,   590,   315,   590,
    1282,  1282,  1282,   257,  1172,   319,  -221,  -221,  -221,   117,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  1282,  1282,  -221,  -221,   505,  -221,  -221,  -221,   322,
    -221,  -221,  -221,  -221,  -221,  -221,   247,  -221,   176,  -221,
    1282,  -221,  -221,  -221,  -221,  1282,   331,  -221,   229,  -221,
     197,  -221,  -221,  -221,  -221,  -221,   222,   222,   163,   163,
     189,   189,   189,   189,    99,    99,   200,   179,   195,   196,
     102,   178,  -221,  -221,  -221,   590,  -221,   251,   255,   256,
     345,  1172,  -221,  -221,  -221,  -221,  -221,  -221,  -221,   960,
    -221,  -221,  -221,  -221,  1282,  -221,  -221,  1282,  -221,   590,
     590,   590,  1282,  1204,  -221,  -221,  -221,  -221,   277,  -221,
    -221,   259,   590,   267,   590,   342,  -221,   590,  -221,  -221,
    -221
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     208,     0,   141,   134,    89,    90,    91,    92,    93,    95,
      96,    97,    98,   101,   102,    99,   100,   130,   131,    94,
     109,   110,     0,   210,     0,    79,    81,   103,     0,   156,
     104,    83,     0,   133,     0,   105,     0,   206,   209,     0,
     145,   143,   142,     0,   125,    77,     0,    85,    87,    80,
      82,   114,     0,   108,     0,     0,   158,   157,   159,    84,
     116,     0,   188,     0,   214,     0,     0,     0,   132,     1,
     207,   135,   146,   144,   128,     0,   126,     0,     0,    78,
       0,   212,     0,   115,     0,   111,   156,   117,     0,   166,
     153,     0,   147,   149,     0,     4,     0,   162,    28,    27,
      23,    25,    26,    24,     2,     3,     0,     6,     0,     0,
       7,    17,    29,     0,    31,    35,    38,    41,    46,    49,
      51,    53,    55,    57,    59,    76,     0,   160,     0,     0,
     184,   192,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,    61,    74,     0,   190,   175,
     176,     0,     0,   177,   178,   179,   180,    87,   189,   213,
     140,   154,     0,     0,   137,     0,     0,   123,     0,     0,
      86,     0,   170,    88,   211,   107,   112,     0,     0,     0,
     118,   120,   158,     0,   151,   152,   167,     0,   161,     0,
     105,     0,    21,     0,    18,    19,     0,     0,     0,     0,
      13,    14,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   163,   168,     0,   164,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   202,   203,   204,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     0,     0,   193,   186,     0,   185,   191,   138,     0,
     139,   136,   129,   127,   124,   173,     0,   121,     0,   113,
       0,   106,   148,   150,     5,     0,   105,     9,     0,    15,
       0,    11,    12,    33,    34,    32,    36,    37,    39,    40,
      42,    43,    44,    45,    47,    48,    50,    52,    54,    56,
       0,    58,   169,   165,   181,     0,   183,     0,     0,     0,
       0,     0,   201,   205,    62,    75,   187,   155,   171,     0,
     119,   122,    30,    22,     0,    10,     8,     0,   182,     0,
       0,     0,     0,     0,   172,   174,    16,    60,   194,   196,
     197,     0,     0,     0,     0,     0,   199,     0,   195,   198,
     200
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,  -221,  -221,   -55,  -221,   -84,    72,    73,    22,
      71,   141,   161,   164,   173,   137,  -221,   -54,   -78,  -221,
     -88,   -52,    20,     6,  -221,   321,  -221,   142,  -221,  -221,
     305,   -77,   169,  -221,   128,  -221,   323,   230,    93,     2,
     -17,    47,  -221,   -44,  -221,   215,  -221,   -87,   -50,   -46,
    -150,  -221,  -133,  -221,   -21,     9,   258,  -220,  -221,  -221,
    -221,  -221,   369,  -221
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   110,   111,   278,   144,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   145,   146,   251,
     147,   126,    62,    63,    46,    47,    25,    26,    27,    28,
      84,    85,    29,   179,   180,    30,    75,    76,    31,    32,
      33,    34,    42,    91,    92,    93,   163,    35,    57,    58,
     173,   266,   148,   149,   150,    65,   152,   153,   154,   155,
     156,    36,    37,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     112,   125,   172,    39,    94,   233,    24,   176,   189,   190,
     127,    64,   112,   125,   311,   165,     1,    68,    43,   257,
      23,   265,   162,    52,     2,   177,    48,    81,    55,   202,
       1,    49,    50,   259,     2,   260,   196,    59,     3,   197,
     185,   220,    24,    44,   159,    78,   198,     3,    53,    41,
      79,   192,     3,   194,   195,   239,    23,    82,   112,    71,
      90,   174,   199,   200,   201,   157,    17,    18,   177,   221,
     151,    55,    90,   178,   112,   125,    56,   226,   112,   125,
     157,   228,   252,    74,   224,   158,     2,   253,   181,    73,
       3,   333,   184,   172,   304,    40,   306,    54,    56,   186,
      55,    56,   158,   189,   276,   189,   176,    56,   268,   280,
     252,   112,   125,   269,   262,     2,   327,    77,   279,   283,
     284,   285,   257,   112,   125,   252,   267,    94,   210,   211,
     313,    88,   300,   182,    90,    72,   127,   182,    66,   212,
     213,    67,   307,   308,   309,    87,   167,   168,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,    68,   112,    54,   166,   335,
      55,   158,   328,   314,   315,   128,    87,    87,   129,    39,
      87,    87,   187,    90,     1,     1,   206,   207,    45,    87,
     178,   322,   188,    90,    83,    51,   338,   339,   340,   216,
      60,   177,     2,     2,    55,   252,     3,     3,   326,   346,
     252,   348,   274,   217,   350,   112,   125,   218,   321,     2,
     112,    86,   219,     3,   182,    83,    83,   208,   209,    83,
      83,    69,   290,   291,   292,   293,   222,   324,    83,   325,
       1,   172,   214,   215,   341,   343,   336,   203,   204,   205,
     264,   168,    51,    86,   318,   319,    60,    86,     2,   252,
     227,   329,     3,   252,   252,   330,   331,   252,   229,   345,
     181,   230,   112,   337,   231,   252,    87,   347,   286,   287,
     232,   288,   289,   234,    87,   294,   295,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    95,   235,   236,    61,
     130,   237,    96,    80,   258,   270,   131,   261,    98,    99,
     275,   281,   282,   100,   240,    83,   101,   102,   302,   305,
     103,   303,   312,    83,   132,   105,   106,   107,   310,   108,
     109,   323,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,    86,   317,   332,   349,   344,   296,   301,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,   297,   133,
     134,   135,   298,   136,   137,   138,   139,   140,   141,   142,
     143,    95,   299,   183,    61,   254,   320,    96,   263,   170,
     169,   131,   273,    98,    99,    70,     0,     0,   100,   255,
       0,   101,   102,     0,     0,   103,     0,     0,     0,   132,
     105,   106,   107,     0,   108,   109,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       0,     0,     0,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,   133,   134,   135,     0,   136,   137,
     138,   139,   140,   141,   142,   143,    95,     0,     0,    61,
     256,     0,    96,     0,     0,     0,   131,     0,    98,    99,
       0,     0,     0,   100,     0,     0,   101,   102,     0,     0,
     103,     0,     0,     0,   132,   105,   106,   107,    95,   108,
     109,    61,   316,   175,    96,     0,     0,     0,   131,     0,
      98,    99,     0,     0,     0,   100,     0,     0,   101,   102,
       0,     0,   103,     0,     0,     0,   132,   105,   106,   107,
       0,   108,   109,     0,     0,     0,     0,     0,     0,   133,
     134,   135,     0,   136,   137,   138,   139,   140,   141,   142,
     143,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,   133,   134,   135,     0,   136,   137,   138,   139,   140,
     141,   142,   143,    95,     0,     0,    61,     0,     0,    96,
       0,     0,     0,   131,     0,    98,    99,     0,     0,     0,
     100,     0,     0,   101,   102,     0,     0,   103,     0,     0,
       0,   132,   105,   106,   107,    95,   108,   109,     0,     0,
       0,    96,     0,     0,     0,     0,     0,    98,    99,     0,
       0,     0,   100,     0,     0,   101,   102,    61,     0,   103,
       0,     0,     0,   104,   105,   106,   107,     0,   108,   109,
       0,     0,     0,     0,     0,     0,   133,   134,   135,    80,
     136,   137,   138,   139,   140,   141,   142,   143,    61,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,   271,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,   177,    89,     0,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     3,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    54,    89,     0,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     0,   223,     3,     0,     0,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,   160,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     0,   161,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,   272,
       0,     0,     0,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    95,     0,     0,   171,   334,     0,    96,
       0,     0,     0,     0,     0,    98,    99,     0,     0,     0,
     100,     0,     0,   101,   102,     0,     0,   103,     0,     0,
       0,   104,   105,   106,   107,    95,   108,   109,     0,     0,
       0,    96,     0,    97,     0,     0,     0,    98,    99,     0,
       0,     0,   100,     0,     0,   101,   102,     0,     0,   103,
       0,     0,     0,   104,   105,   106,   107,    95,   108,   109,
       0,     0,     0,    96,     0,   164,     0,     0,     0,    98,
      99,     0,     0,     0,   100,     0,     0,   101,   102,     0,
       0,   103,     0,     0,     0,   104,   105,   106,   107,    95,
     108,   109,   171,     0,     0,    96,     0,     0,     0,     0,
       0,    98,    99,     0,     0,     0,   100,     0,     0,   101,
     102,     0,     0,   103,     0,     0,     0,   104,   105,   106,
     107,    95,   108,   109,     0,     0,     0,    96,     0,   225,
       0,     0,     0,    98,    99,     0,     0,     0,   100,     0,
       0,   101,   102,     0,     0,   103,     0,    95,     0,   104,
     105,   106,   107,    96,   108,   109,     0,   238,     0,    98,
      99,     0,     0,     0,   100,     0,     0,   101,   102,     0,
       0,   103,     0,     0,     0,   104,   105,   106,   107,    95,
     108,   109,     0,     0,     0,    96,   277,     0,     0,     0,
       0,    98,    99,     0,     0,     0,   100,     0,     0,   101,
     102,     0,     0,   103,     0,    95,     0,   104,   105,   106,
     107,    96,   108,   109,     0,   131,     0,    98,    99,     0,
       0,     0,   100,     0,     0,   101,   102,     0,     0,   103,
       0,     0,     0,   104,   105,   106,   107,    95,   108,   109,
       0,     0,     0,    96,   342,     0,     0,     0,     0,    98,
      99,     0,     0,     0,   100,     0,     0,   101,   102,     0,
       0,   103,     0,    95,     0,   104,   105,   106,   107,   191,
     108,   109,     0,     0,     0,    98,    99,     0,     0,     0,
     100,     0,     0,   101,   102,     0,     0,   103,     0,    95,
       0,   104,   105,   106,   107,   193,   108,   109,     0,     0,
       0,    98,    99,     0,     0,     0,   100,     0,     0,   101,
     102,     0,     0,   103,     0,    95,     0,   104,   105,   106,
     107,    96,   108,   109,     0,     0,     0,    98,    99,     0,
       0,     0,   100,     0,     0,   101,   102,     0,     0,   103,
       0,     0,     0,   104,   105,   106,   107,     0,   108,   109,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
      55,    55,    80,     1,    54,   138,     0,    84,    96,    96,
      56,    32,    67,    67,   234,    67,     9,    34,     6,   152,
       0,   171,    66,     6,    27,     9,    24,    48,    12,   113,
       9,    25,    26,     8,    27,    10,     9,    31,    31,    12,
      90,    17,    36,    31,    65,     8,    19,    31,    31,     2,
      13,   106,    31,   108,   109,   143,    36,    48,   113,    10,
      54,    82,    35,    36,    37,    63,    69,    70,     9,    45,
      61,    12,    66,    14,   129,   129,    29,   129,   133,   133,
      78,   133,     8,    31,   128,    65,    27,    13,    86,    42,
      31,   311,    90,   171,   227,     2,   229,     9,    51,    10,
      12,    54,    82,   191,   191,   193,   183,    60,     8,   197,
       8,   166,   166,    13,   166,    27,    14,     6,   196,   203,
     204,   205,   255,   178,   178,     8,   178,   177,    29,    30,
      13,     6,   220,    86,   128,    42,   182,    90,     9,    40,
      41,    12,   230,   231,   232,    52,     7,     8,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   182,   221,     9,    28,   319,
      12,   151,   305,   251,   252,     9,    83,    84,    12,   177,
      87,    88,     8,   177,     9,     9,    23,    24,    13,    96,
      14,   275,    10,   187,    52,    26,   329,   330,   331,    20,
      31,     9,    27,    27,    12,     8,    31,    31,    11,   342,
       8,   344,    10,    18,   347,   270,   270,    21,   270,    27,
     275,    52,    44,    31,   177,    83,    84,    38,    39,    87,
      88,     0,   210,   211,   212,   213,    11,     8,    96,    10,
       9,   319,    42,    43,   332,   333,   324,    25,    26,    27,
       7,     8,    83,    84,     7,     8,    87,    88,    27,     8,
      14,    10,    31,     8,     8,    10,    10,     8,    14,    10,
     268,     9,   327,   327,     9,     8,   183,    10,   206,   207,
       9,   208,   209,     9,   191,   214,   215,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,     3,    31,    13,     6,
       7,    13,     9,    28,    10,    14,    13,    11,    15,    16,
      10,    31,    31,    20,    28,   183,    23,    24,    10,    14,
      27,    11,    13,   191,    31,    32,    33,    34,    81,    36,
      37,    10,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,   183,    31,     9,    13,    79,   216,   221,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,   217,    76,
      77,    78,   218,    80,    81,    82,    83,    84,    85,    86,
      87,     3,   219,    88,     6,     7,   268,     9,   168,    78,
      77,    13,   187,    15,    16,    36,    -1,    -1,    20,   151,
      -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,    31,
      32,    33,    34,    -1,    36,    37,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    78,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,     3,    -1,    -1,     6,
       7,    -1,     9,    -1,    -1,    -1,    13,    -1,    15,    16,
      -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      27,    -1,    -1,    -1,    31,    32,    33,    34,     3,    36,
      37,     6,     7,     7,     9,    -1,    -1,    -1,    13,    -1,
      15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    27,    -1,    -1,    -1,    31,    32,    33,    34,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    76,    77,    78,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,     3,    -1,    -1,     6,    -1,    -1,     9,
      -1,    -1,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,
      -1,    31,    32,    33,    34,     3,    36,    37,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,     6,    -1,    27,
      -1,    -1,    -1,    31,    32,    33,    34,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    28,
      80,    81,    82,    83,    84,    85,    86,    87,     6,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     9,    10,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     9,    10,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    10,    31,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    10,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    31,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     3,    -1,    -1,     6,     7,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,
      -1,    31,    32,    33,    34,     3,    36,    37,    -1,    -1,
      -1,     9,    -1,    11,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      -1,    -1,    -1,    31,    32,    33,    34,     3,    36,    37,
      -1,    -1,    -1,     9,    -1,    11,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    -1,    -1,    -1,    31,    32,    33,    34,     3,
      36,    37,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    -1,    -1,    -1,    31,    32,    33,
      34,     3,    36,    37,    -1,    -1,    -1,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    -1,     3,    -1,    31,
      32,    33,    34,     9,    36,    37,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    -1,    -1,    -1,    31,    32,    33,    34,     3,
      36,    37,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    -1,     3,    -1,    31,    32,    33,
      34,     9,    36,    37,    -1,    13,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      -1,    -1,    -1,    31,    32,    33,    34,     3,    36,    37,
      -1,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    -1,     3,    -1,    31,    32,    33,    34,     9,
      36,    37,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    -1,     3,
      -1,    31,    32,    33,    34,     9,    36,    37,    -1,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    -1,     3,    -1,    31,    32,    33,
      34,     9,    36,    37,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      -1,    -1,    -1,    31,    32,    33,    34,    -1,    36,    37,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    27,    31,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,   110,   111,   114,   115,   116,   117,   120,
     123,   126,   127,   128,   129,   135,   149,   150,   151,   127,
     126,   129,   130,     6,    31,    13,   112,   113,   127,   111,
     111,   120,     6,    31,     9,    12,   129,   136,   137,   111,
     120,     6,   110,   111,   142,   143,     9,    12,   128,     0,
     150,    10,   126,   129,    31,   124,   125,     6,     8,    13,
      28,   142,   143,   115,   118,   119,   120,   126,     6,    10,
     111,   131,   132,   133,   136,     3,     9,    11,    15,    16,
      20,    23,    24,    27,    31,    32,    33,    34,    36,    37,
      89,    90,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   109,   137,     9,    12,
       7,    13,    31,    76,    77,    78,    80,    81,    82,    83,
      84,    85,    86,    87,    92,   105,   106,   108,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   127,   110,   142,
      10,    31,   131,   134,    11,   109,    28,     7,     8,   124,
     113,     6,   106,   138,   142,     7,   119,     9,    14,   121,
     122,   127,   129,   118,   127,   136,    10,     8,    10,   108,
     135,     9,    92,     9,    92,    92,     9,    12,    19,    35,
      36,    37,    94,    25,    26,    27,    23,    24,    38,    39,
      29,    30,    40,    41,    42,    43,    20,    18,    21,    44,
      17,    45,    11,    10,   131,    11,   109,    14,   109,    14,
       9,     9,     9,   140,     9,    31,    13,    13,    13,   108,
      28,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,   107,     8,    13,     7,   144,     7,   140,    10,     8,
      10,    11,   109,   125,     7,   138,   139,   109,     8,    13,
      14,     7,    75,   133,    10,    10,   135,    10,    91,   106,
     108,    31,    31,    94,    94,    94,    95,    95,    96,    96,
      97,    97,    97,    97,    98,    98,    99,   100,   101,   102,
     108,   103,    10,    11,   140,    14,   140,   108,   108,   108,
      81,   145,    13,    13,   106,   106,     7,    31,     7,     8,
     122,   109,    94,    10,     8,    10,    11,    14,   140,    10,
      10,    10,     9,   145,     7,   138,   106,   105,   140,   140,
     140,   108,    10,   108,    79,    10,   140,    10,   140,    13,
     140
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    89,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    91,    91,    92,    92,    92,
      92,    92,    92,    93,    93,    93,    93,    93,    93,    94,
      94,    95,    95,    95,    95,    96,    96,    96,    97,    97,
      97,    98,    98,    98,    98,    98,    99,    99,    99,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   105,
     105,   106,   106,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   108,   108,   109,   110,   110,   111,
     111,   111,   111,   111,   111,   112,   112,   113,   113,   114,
     114,   114,   114,   114,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   116,   116,   116,   117,
     117,   118,   118,   119,   120,   120,   120,   120,   121,   121,
     122,   122,   122,   123,   123,   123,   124,   124,   125,   125,
     126,   126,   127,   127,   128,   128,   128,   128,   128,   128,
     128,   129,   129,   129,   129,   130,   130,   131,   131,   132,
     132,   133,   133,   133,   134,   134,   135,   135,   136,   136,
     136,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     138,   138,   138,   139,   139,   140,   140,   140,   140,   140,
     140,   141,   141,   141,   142,   142,   142,   142,   143,   143,
     144,   144,   145,   145,   146,   146,   146,   147,   147,   147,
     147,   148,   148,   148,   148,   148,   149,   149,   149,   150,
     150,   151,   151,   151,   151
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     4,     3,
       4,     3,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     3,     1,
       2,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     4,     2,     1,
       1,     1,     2,     3,     2,     1,     2,     1,     1,     3,
       1,     2,     3,     4,     5,     2,     1,     3,     1,     3,
       1,     1,     2,     1,     1,     3,     4,     3,     4,     4,
       3,     1,     2,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     2,     1,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     3,     4,     1,     2,
       1,     2,     1,     2,     5,     7,     5,     5,     7,     6,
       7,     3,     2,     2,     2,     3,     1,     2,     0,     1,
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
#line 31 "parser.y" /* yacc.c:1646  */
    {printf("primary_expression: INDENTIFIER FINAL\n");}
#line 1774 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 32 "parser.y" /* yacc.c:1646  */
    {printf("primary_expression: CONSTANT FINAL\n");}
#line 1780 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 33 "parser.y" /* yacc.c:1646  */
    {printf("LITERAL FINAL\n");}
#line 1786 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 34 "parser.y" /* yacc.c:1646  */
    {printf("primary_expression: LEFT_PARENTHESIS FINAL expression RIGHT_PARETHESIS\n");}
#line 1792 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 35 "parser.y" /* yacc.c:1646  */
    {printf("primary_expression: INTEGER FINAL\n");}
#line 1798 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 39 "parser.y" /* yacc.c:1646  */
    {printf("postfix_expression: primary_expression\n");}
#line 1804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 40 "parser.y" /* yacc.c:1646  */
    {printf("postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n");}
#line 1810 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 41 "parser.y" /* yacc.c:1646  */
    {printf("postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 1816 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 42 "parser.y" /* yacc.c:1646  */
    {printf("postfix_expression: postfix_expression RIGHT_PARENTHESIS argument_expression_list LEFT_PARENTHESIS\n");}
#line 1822 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 43 "parser.y" /* yacc.c:1646  */
    {printf("postfix_expression: postfix_expression DOT IDENTIFIER\n");}
#line 1828 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 44 "parser.y" /* yacc.c:1646  */
    {printf("postfix_expression: postfix_expression PTR_OP IDENTIFIER\n");}
#line 1834 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 45 "parser.y" /* yacc.c:1646  */
    {printf("postfix_expression: postfix_expression INC_OP\n");}
#line 1840 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 46 "parser.y" /* yacc.c:1646  */
    {printf("postfix_expression: postfix_expression DEC_OP\n");}
#line 1846 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 52 "parser.y" /* yacc.c:1646  */
    {printf("argument_expression_list: assignment_expression\n");}
#line 1852 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 53 "parser.y" /* yacc.c:1646  */
    {printf("argument_expression_list: argument_expression_list COMMA assignment_expression\n");}
#line 1858 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 57 "parser.y" /* yacc.c:1646  */
    {printf("unary_expression: postfix_expression\n");}
#line 1864 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 58 "parser.y" /* yacc.c:1646  */
    {printf("unary_expression: INC_OP unary_expression\n");}
#line 1870 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 59 "parser.y" /* yacc.c:1646  */
    {printf("unary_expression: DEC_OP unary_expression\n");}
#line 1876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 60 "parser.y" /* yacc.c:1646  */
    {printf("unary_expression: unary_operator cast_expression\n");}
#line 1882 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 61 "parser.y" /* yacc.c:1646  */
    {printf("unary_expression: SIZEOF unary_expression\n");}
#line 1888 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 62 "parser.y" /* yacc.c:1646  */
    {printf("unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n");}
#line 1894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 66 "parser.y" /* yacc.c:1646  */
    {printf("unary_operator: BIT_AND\n");}
#line 1900 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 67 "parser.y" /* yacc.c:1646  */
    {printf("unary_operator: MUL\n");}
#line 1906 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 68 "parser.y" /* yacc.c:1646  */
    {printf("unary_operator: PLUS\n");}
#line 1912 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 69 "parser.y" /* yacc.c:1646  */
    {printf("unary_operator: MINUS\n");}
#line 1918 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 70 "parser.y" /* yacc.c:1646  */
    {printf("unary_operator: PRIME\n");}
#line 1924 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 71 "parser.y" /* yacc.c:1646  */
    {printf("unary_operator: EXCLAMATION\n");}
#line 1930 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 75 "parser.y" /* yacc.c:1646  */
    {printf("cast_expression: unary_expression\n");}
#line 1936 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 76 "parser.y" /* yacc.c:1646  */
    {printf("cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n");}
#line 1942 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 80 "parser.y" /* yacc.c:1646  */
    {printf("multiplicative_expression: cast_expression\n");}
#line 1948 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 81 "parser.y" /* yacc.c:1646  */
    {printf("multiplicative_expression: multiplicative_expression MUL cast_expression\n");}
#line 1954 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 82 "parser.y" /* yacc.c:1646  */
    {printf("multiplicative_expression: multiplicative_expression DIV cast_expression\n");}
#line 1960 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 83 "parser.y" /* yacc.c:1646  */
    {printf("multiplicative_expression: multiplicative_expression MOD cast_expression\n");}
#line 1966 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 87 "parser.y" /* yacc.c:1646  */
    {printf("additive_expression: multiplicative_expression\n");}
#line 1972 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 88 "parser.y" /* yacc.c:1646  */
    {printf("additive_expression: additive_expression PLUS multiplicative_expression\n");}
#line 1978 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 89 "parser.y" /* yacc.c:1646  */
    {printf("additive_expression: additive_expression MINUS multiplicative_expression\n");}
#line 1984 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 93 "parser.y" /* yacc.c:1646  */
    {printf("shift_expression: additive_expression\n");}
#line 1990 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 94 "parser.y" /* yacc.c:1646  */
    {printf("shift_expression: shift_expression LEFT_OP additive_expression\n");}
#line 1996 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 95 "parser.y" /* yacc.c:1646  */
    {printf("shift_expression: shift_expression RIGHT_OP additive_expression \n");}
#line 2002 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 99 "parser.y" /* yacc.c:1646  */
    {printf("relational_expression: shift_expression\n");}
#line 2008 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 100 "parser.y" /* yacc.c:1646  */
    {printf("relational_expression: relational_expression LESS shift_expression\n");}
#line 2014 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 101 "parser.y" /* yacc.c:1646  */
    {printf("relational_expression: relational_expression GREATER shift_expression\n");}
#line 2020 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 102 "parser.y" /* yacc.c:1646  */
    {printf("relational_expression: relational_expression LE_OP shift_expression\n");}
#line 2026 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 103 "parser.y" /* yacc.c:1646  */
    {printf("relational_expression: relational_expression GE_OP shift_expression\n");}
#line 2032 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 107 "parser.y" /* yacc.c:1646  */
    {printf("equality_expression: relational_expression\n");}
#line 2038 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 108 "parser.y" /* yacc.c:1646  */
    {printf("equality_expression: equality_expression EQ_OP relational_expression\n");}
#line 2044 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 109 "parser.y" /* yacc.c:1646  */
    {printf("equality_expression: equality_expression NE_OP relational_expression\n");}
#line 2050 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 113 "parser.y" /* yacc.c:1646  */
    {printf("and_expression: equality_expression\n");}
#line 2056 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 114 "parser.y" /* yacc.c:1646  */
    {printf("and_expression: and_expression BIT_AND equality_expression\n");}
#line 2062 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 118 "parser.y" /* yacc.c:1646  */
    {printf("exclusive_or_expression: and_expression\n");}
#line 2068 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 119 "parser.y" /* yacc.c:1646  */
    {printf("exclusive_or_expression: exclusive_or_expression UP_ARROW and_expression\n");}
#line 2074 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 123 "parser.y" /* yacc.c:1646  */
    {printf("inclusive_or_expression: exclusive_or_expression\n");}
#line 2080 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 124 "parser.y" /* yacc.c:1646  */
    {printf("inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression\n");}
#line 2086 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 128 "parser.y" /* yacc.c:1646  */
    {printf("logical_and_expression: inclusive_or_expression\n");}
#line 2092 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 129 "parser.y" /* yacc.c:1646  */
    {printf("logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n");}
#line 2098 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 133 "parser.y" /* yacc.c:1646  */
    {printf("logical_or_expression: logical_and_expression\n");}
#line 2104 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 134 "parser.y" /* yacc.c:1646  */
    {printf("logical_or_expression: logical_or_expression OR_OP logical_and_expression\n");}
#line 2110 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 138 "parser.y" /* yacc.c:1646  */
    {printf("conditional_expression: logical_or_expression\n");}
#line 2116 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 139 "parser.y" /* yacc.c:1646  */
    {printf("conditional_expression: logical_or_expression INTERROGATION expression COLON conditional_expression\n");}
#line 2122 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 143 "parser.y" /* yacc.c:1646  */
    {printf("assignment_expression: conditional_expression\n");}
#line 2128 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 144 "parser.y" /* yacc.c:1646  */
    {printf("assignment_expression: unary_expression assignment_operator assignment_expression\n");}
#line 2134 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 148 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: EQU\n");}
#line 2140 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 149 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: MUL_ASSIGN\n");}
#line 2146 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 150 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: DIV_ASSIGN\n");}
#line 2152 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 151 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: MOD_ASSIGN\n");}
#line 2158 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 152 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: ADD_ASSIGN\n");}
#line 2164 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 153 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: SUB_ASSIGN\n");}
#line 2170 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 154 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: LEFT_ASSIGN\n");}
#line 2176 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 155 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: RIGHT_ASSIGN\n");}
#line 2182 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 156 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: AND_ASSIGN\n");}
#line 2188 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 157 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: XOR_ASSIGN\n");}
#line 2194 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 158 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: OR_ASSIGN\n");}
#line 2200 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 162 "parser.y" /* yacc.c:1646  */
    {printf("expression: assignment_expression\n");}
#line 2206 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 163 "parser.y" /* yacc.c:1646  */
    {printf("expression: expression COMMA assignment_expression\n");}
#line 2212 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 167 "parser.y" /* yacc.c:1646  */
    {printf("constant_expression: conditional_expression\n");}
#line 2218 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 171 "parser.y" /* yacc.c:1646  */
    {printf("declaration: declaration_specifiers SEMICOLON \n");}
#line 2224 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 172 "parser.y" /* yacc.c:1646  */
    {printf("declaration: declaration_specifiers init_declarator_list SEMICOLON\n");}
#line 2230 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 176 "parser.y" /* yacc.c:1646  */
    {printf("declaration_specifiers: storage_class_specifier \n");}
#line 2236 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 177 "parser.y" /* yacc.c:1646  */
    {printf("declaration_specifiers: storage_class_specifier declaration_specifiers\n");}
#line 2242 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 178 "parser.y" /* yacc.c:1646  */
    {printf("declaration_specifiers: type_specifier\n");}
#line 2248 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 179 "parser.y" /* yacc.c:1646  */
    {printf("declaration_specifiers: type_specifier declaration_specifiers {\n");}
#line 2254 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 180 "parser.y" /* yacc.c:1646  */
    {printf("declaration_specifiers: type_qualifier\n");}
#line 2260 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 181 "parser.y" /* yacc.c:1646  */
    {printf("declaration_specifiers: type_qualifier declaration_specifiers\n");}
#line 2266 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 185 "parser.y" /* yacc.c:1646  */
    {printf("init_declarator_list: init_declarator\n");}
#line 2272 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf("init_declarator_list: init_declarator_list COMMA init_declarator\n");}
#line 2278 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 190 "parser.y" /* yacc.c:1646  */
    {printf("init_declarator: declarator\n");}
#line 2284 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 191 "parser.y" /* yacc.c:1646  */
    {printf("init_declarator: declarator EQU initializer\n");}
#line 2290 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 195 "parser.y" /* yacc.c:1646  */
    {printf("storage_class_specifier: TYPEDEF\n");}
#line 2296 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 196 "parser.y" /* yacc.c:1646  */
    {printf("storage_class_specifier: EXTERN\n");}
#line 2302 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 197 "parser.y" /* yacc.c:1646  */
    {printf("storage_class_specifier: STATIC\n");}
#line 2308 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 198 "parser.y" /* yacc.c:1646  */
    {printf("storage_class_specifier: AUTO\n");}
#line 2314 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 199 "parser.y" /* yacc.c:1646  */
    {printf("storage_class_specifier: REGISTER\n");}
#line 2320 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 203 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: VOID\n");}
#line 2326 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 204 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: CHAR\n");}
#line 2332 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 205 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: SHORT\n");}
#line 2338 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 206 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: INT\n");}
#line 2344 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 207 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: LONG\n");}
#line 2350 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 208 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: FLOAT\n");}
#line 2356 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 209 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: DOUBLE\n");}
#line 2362 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 210 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: SIGNED\n");}
#line 2368 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 211 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: UNSIGNED\n");}
#line 2374 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 212 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: struct_or_union_specifier\n");}
#line 2380 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 213 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: enum_specifier\n");}
#line 2386 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 214 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: TYPE_NAME\n");}
#line 2392 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 218 "parser.y" /* yacc.c:1646  */
    {printf("struct_or_union_specifier: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET \n");}
#line 2398 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 219 "parser.y" /* yacc.c:1646  */
    {printf("struct_or_union_specifier: struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET\n");}
#line 2404 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 220 "parser.y" /* yacc.c:1646  */
    {printf("struct_or_union_specifier: struct_or_union IDENTIFIER\n");}
#line 2410 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 224 "parser.y" /* yacc.c:1646  */
    {printf("struct_or_union: STRUCT\n");}
#line 2416 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 225 "parser.y" /* yacc.c:1646  */
    {printf("struct_or_union: UNION\n");}
#line 2422 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 229 "parser.y" /* yacc.c:1646  */
    {printf("struct_declaration_list: struct_declaration\n");}
#line 2428 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 230 "parser.y" /* yacc.c:1646  */
    {printf("struct_declaration_list: struct_declaration_list struct_declaration\n");}
#line 2434 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 234 "parser.y" /* yacc.c:1646  */
    {printf("struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON\n");}
#line 2440 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 238 "parser.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list: type_specifier specifier_qualifier_list\n");}
#line 2446 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 239 "parser.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list: type_specifier\n");}
#line 2452 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 240 "parser.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list: type_qualifier specifier_qualifier_list\n");}
#line 2458 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 241 "parser.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list: type_qualifier\n");}
#line 2464 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 245 "parser.y" /* yacc.c:1646  */
    {printf("struct_declarator_list: struct_declarator\n");}
#line 2470 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 246 "parser.y" /* yacc.c:1646  */
    {printf("struct_declarator_list: struct_declarator_list COMMA struct_declarator\n");}
#line 2476 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 250 "parser.y" /* yacc.c:1646  */
    {printf("struct_declarator: declarator\n");}
#line 2482 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 251 "parser.y" /* yacc.c:1646  */
    {printf("struct_declarator: COLON constant_expression \n");}
#line 2488 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 252 "parser.y" /* yacc.c:1646  */
    {printf("struct_declarator: declarator COLON constant_expression \n");}
#line 2494 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 256 "parser.y" /* yacc.c:1646  */
    {printf("enum_specifier: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET\n");}
#line 2500 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 257 "parser.y" /* yacc.c:1646  */
    {printf("enum_specifier: ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET \n");}
#line 2506 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 258 "parser.y" /* yacc.c:1646  */
    {printf("enum_specifier: ENUM IDENTIFIER\n");}
#line 2512 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 262 "parser.y" /* yacc.c:1646  */
    {printf("enumerator_list: enumerator\n");}
#line 2518 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 263 "parser.y" /* yacc.c:1646  */
    {printf("enumerator_list: enumerator_list COMMA enumerator\n");}
#line 2524 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 267 "parser.y" /* yacc.c:1646  */
    {printf("enumerator: IDENTIFIER\n");}
#line 2530 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 268 "parser.y" /* yacc.c:1646  */
    {printf("enumerator: IDENTIFIER EQU constant_expression\n");}
#line 2536 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 272 "parser.y" /* yacc.c:1646  */
    {printf("type_qualifier: CONST\n");}
#line 2542 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 273 "parser.y" /* yacc.c:1646  */
    {printf("type_qualifier: VOLATILE\n");}
#line 2548 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 277 "parser.y" /* yacc.c:1646  */
    {printf("declarator: pointer direct_declarator \n");}
#line 2554 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 278 "parser.y" /* yacc.c:1646  */
    {printf("declarator: direct_declarator\n");}
#line 2560 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 282 "parser.y" /* yacc.c:1646  */
    {printf("direct_declarator: IDENTIFIER\n");}
#line 2566 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 283 "parser.y" /* yacc.c:1646  */
    {printf("direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n");}
#line 2572 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 284 "parser.y" /* yacc.c:1646  */
    {printf("direct_declarator: direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET\n");}
#line 2578 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 285 "parser.y" /* yacc.c:1646  */
    {printf("direct_declarator: direct_declarator LEFT_SBRACKET RIGHT_SBRACKET\n");}
#line 2584 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 286 "parser.y" /* yacc.c:1646  */
    {printf("direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n");}
#line 2590 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 287 "parser.y" /* yacc.c:1646  */
    {printf("direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS\n");}
#line 2596 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 288 "parser.y" /* yacc.c:1646  */
    {printf("direct_declarator: direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2602 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 292 "parser.y" /* yacc.c:1646  */
    {printf("pointer: MUL\n");}
#line 2608 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 293 "parser.y" /* yacc.c:1646  */
    {printf("pointer: MUL type_qualifier_list\n");}
#line 2614 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 294 "parser.y" /* yacc.c:1646  */
    {printf("pointer: MUL pointer\n");}
#line 2620 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 295 "parser.y" /* yacc.c:1646  */
    {printf("pointer: MUL type_qualifier_list pointer\n");}
#line 2626 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 299 "parser.y" /* yacc.c:1646  */
    {printf("type_qualifier_list: type_qualifier\n");}
#line 2632 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 300 "parser.y" /* yacc.c:1646  */
    {printf("type_qualifier_list: type_qualifier_list type_qualifier\n");}
#line 2638 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 305 "parser.y" /* yacc.c:1646  */
    {printf("parameter_type_list: parameter_list\n");}
#line 2644 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 306 "parser.y" /* yacc.c:1646  */
    {printf("parameter_type_list: parameter_list COMMA ELLIPSIS\n");}
#line 2650 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 310 "parser.y" /* yacc.c:1646  */
    {printf("parameter_list: parameter_declaration\n");}
#line 2656 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 311 "parser.y" /* yacc.c:1646  */
    {printf("parameter_list: parameter_list COMMA parameter_declaration\n");}
#line 2662 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 315 "parser.y" /* yacc.c:1646  */
    {printf("parameter_declaration: declaration_specifiers declarator\n");}
#line 2668 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 316 "parser.y" /* yacc.c:1646  */
    {printf("parameter_declaration: declaration_specifiers abstract_declarator\n");}
#line 2674 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 317 "parser.y" /* yacc.c:1646  */
    {printf("parameter_declaration: declaration_specifiers\n");}
#line 2680 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 321 "parser.y" /* yacc.c:1646  */
    {printf("identifier_list: IDENTIFIER\n");}
#line 2686 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 322 "parser.y" /* yacc.c:1646  */
    {printf("identifier_list: identifier_list COMMA IDENTIFIER\n");}
#line 2692 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 326 "parser.y" /* yacc.c:1646  */
    {printf("type_name: specifier_qualifier_list\n");}
#line 2698 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 327 "parser.y" /* yacc.c:1646  */
    {printf("type_name: specifier_qualifier_list abstract_declarator\n");}
#line 2704 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 331 "parser.y" /* yacc.c:1646  */
    {printf("abstract_declarator: pointer\n");}
#line 2710 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 332 "parser.y" /* yacc.c:1646  */
    {printf("abstract_declarator: direct_abstract_declarator\n");}
#line 2716 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 333 "parser.y" /* yacc.c:1646  */
    {printf("abstract_declarator: pointer direct_abstract_declarator\n");}
#line 2722 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 337 "parser.y" /* yacc.c:1646  */
    {printf("direct_abstract_declarator: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS \n");}
#line 2728 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 338 "parser.y" /* yacc.c:1646  */
    {printf("direct_abstract_declarator:  LEFT_SBRACKET RIGHT_SBRACKET \n");}
#line 2734 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 339 "parser.y" /* yacc.c:1646  */
    {printf("direct_abstract_declarator: LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n");}
#line 2740 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 340 "parser.y" /* yacc.c:1646  */
    {printf("direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET\n");}
#line 2746 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 341 "parser.y" /* yacc.c:1646  */
    {printf("direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n");}
#line 2752 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 342 "parser.y" /* yacc.c:1646  */
    {printf("direct_abstract_declarator: LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2758 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 343 "parser.y" /* yacc.c:1646  */
    {printf("direct_abstract_declarator: LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS \n");}
#line 2764 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 344 "parser.y" /* yacc.c:1646  */
    {printf("direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2770 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 345 "parser.y" /* yacc.c:1646  */
    {printf("direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n");}
#line 2776 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 349 "parser.y" /* yacc.c:1646  */
    {printf("initializer: assignment_expression\n");}
#line 2782 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 350 "parser.y" /* yacc.c:1646  */
    {printf("initializer: LEFT_BRACKET initializer_list RIGHT_BRACKET\n");}
#line 2788 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 351 "parser.y" /* yacc.c:1646  */
    {printf("initializer: LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET\n");}
#line 2794 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 355 "parser.y" /* yacc.c:1646  */
    {printf("initializer_list: initializer\n");}
#line 2800 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 356 "parser.y" /* yacc.c:1646  */
    {printf("initializer_list: initializer_list COMMA initializer \n");}
#line 2806 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 360 "parser.y" /* yacc.c:1646  */
    {printf("statement: labeled_statement\n");}
#line 2812 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 361 "parser.y" /* yacc.c:1646  */
    {printf("statement: compound_statement\n");}
#line 2818 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 362 "parser.y" /* yacc.c:1646  */
    {printf("statement: expression_statement\n");}
#line 2824 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 363 "parser.y" /* yacc.c:1646  */
    {printf("statement: selection_statement\n");}
#line 2830 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 364 "parser.y" /* yacc.c:1646  */
    {printf("statement: iteration_statement\n");}
#line 2836 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 365 "parser.y" /* yacc.c:1646  */
    {printf("statement: jump_statement\n");}
#line 2842 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 369 "parser.y" /* yacc.c:1646  */
    {printf("labeled_statement: IDENTIFIER COLON statement \n");}
#line 2848 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 370 "parser.y" /* yacc.c:1646  */
    {printf("labeled_statement: CASE constant_expression COLON statement\n");}
#line 2854 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 371 "parser.y" /* yacc.c:1646  */
    {printf("labeled_statement: DEFAULT COLON statement\n");}
#line 2860 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 375 "parser.y" /* yacc.c:1646  */
    {printf("compound_statement: LEFT_BRACKET RIGHT_BRACKET\n");}
#line 2866 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 376 "parser.y" /* yacc.c:1646  */
    {printf("compound_statement: LEFT_BRACKET statement_list RIGHT_BRACKET\n");}
#line 2872 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 377 "parser.y" /* yacc.c:1646  */
    {printf("compound_statement: LEFT_BRACKET declaration_list RIGHT_BRACKET\n");}
#line 2878 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 378 "parser.y" /* yacc.c:1646  */
    {printf("compound_statement: LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET\n");}
#line 2884 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 382 "parser.y" /* yacc.c:1646  */
    {printf("declaration_list: declaration\n");}
#line 2890 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 383 "parser.y" /* yacc.c:1646  */
    {printf("declaration_list: declaration_list declaration\n");}
#line 2896 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 387 "parser.y" /* yacc.c:1646  */
    {printf("statement_list: statement\n");}
#line 2902 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 388 "parser.y" /* yacc.c:1646  */
    {printf("statement_list: statement_list statement\n");}
#line 2908 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 392 "parser.y" /* yacc.c:1646  */
    {printf("expression_statement: SEMICOLON\n");}
#line 2914 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 393 "parser.y" /* yacc.c:1646  */
    {printf("expression_statement: expression SEMICOLON \n");}
#line 2920 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 397 "parser.y" /* yacc.c:1646  */
    {printf("selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n");}
#line 2926 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 398 "parser.y" /* yacc.c:1646  */
    {printf("selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement\n");}
#line 2932 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 399 "parser.y" /* yacc.c:1646  */
    {printf("selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n");}
#line 2938 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 403 "parser.y" /* yacc.c:1646  */
    {printf("iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n");}
#line 2944 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 404 "parser.y" /* yacc.c:1646  */
    {printf("iteration_statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON\n");}
#line 2950 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 405 "parser.y" /* yacc.c:1646  */
    {printf("iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n");}
#line 2956 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 406 "parser.y" /* yacc.c:1646  */
    {printf("iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n");}
#line 2962 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 410 "parser.y" /* yacc.c:1646  */
    {printf("jump_statement: GOTO IDENTIFIER SEMICOLON\n");}
#line 2968 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 411 "parser.y" /* yacc.c:1646  */
    {printf("jump_statement: CONTINUE SEMICOLON\n");}
#line 2974 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 412 "parser.y" /* yacc.c:1646  */
    {printf("jump_statement: BREAK SEMICOLON\n");}
#line 2980 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 413 "parser.y" /* yacc.c:1646  */
    {printf("jump_statement: RETURN SEMICOLON\n");}
#line 2986 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 414 "parser.y" /* yacc.c:1646  */
    {printf("jump_statement: RETURN expression SEMICOLON\n");}
#line 2992 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 418 "parser.y" /* yacc.c:1646  */
    {printf("translation_unit: Entre a external_declaration\n");}
#line 2998 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 419 "parser.y" /* yacc.c:1646  */
    {printf("translation_unit: Entre a ciclo translation_unit\n");}
#line 3004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 420 "parser.y" /* yacc.c:1646  */
    {printf("translation_unit: Archivo Vacío\n");}
#line 3010 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 425 "parser.y" /* yacc.c:1646  */
    {printf("external_declaration: function_definition\n");}
#line 3016 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 426 "parser.y" /* yacc.c:1646  */
    {printf("external_declaration: declaration\n");}
#line 3022 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 430 "parser.y" /* yacc.c:1646  */
    {printf("function_definition: declaration_specifiers declarator declaration_list compound_statement\n");}
#line 3028 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 431 "parser.y" /* yacc.c:1646  */
    {printf("function_definition: declaration_specifiers declarator compound_statement \n");}
#line 3034 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 432 "parser.y" /* yacc.c:1646  */
    {printf("function_definition: declarator declaration_list compound_statement\n");}
#line 3040 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 433 "parser.y" /* yacc.c:1646  */
    {printf("function_definition: declarator compound_statement\n");}
#line 3046 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 3050 "parser.tab.c" /* yacc.c:1646  */
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
#line 436 "parser.y" /* yacc.c:1906  */


#include<stdio.h>
extern linea;
/*extern void yyerror(char *texto){
 	if(strcmp(texto,"syntax error"))
  		printf(" Syntax Error in Line : %d : %s\n",linea,texto);
      
};*/
