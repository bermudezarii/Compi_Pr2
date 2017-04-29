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
    STRING_LITERAL = 288,
    SIZEOF = 289,
    INTEGER = 290,
    PTR_OP = 291,
    INC_OP = 292,
    DEC_OP = 293,
    LEFT_OP = 294,
    RIGHT_OP = 295,
    LE_OP = 296,
    GE_OP = 297,
    EQ_OP = 298,
    NE_OP = 299,
    AND_OP = 300,
    OR_OP = 301,
    MUL_ASSIGN = 302,
    DIV_ASSIGN = 303,
    MOD_ASSIGN = 304,
    ADD_ASSIGN = 305,
    SUB_ASSIGN = 306,
    LEFT_ASSIGN = 307,
    RIGHT_ASSIGN = 308,
    AND_ASSIGN = 309,
    XOR_ASSIGN = 310,
    OR_ASSIGN = 311,
    TYPE_NAME = 312,
    TYPEDEF = 313,
    EXTERN = 314,
    STATIC = 315,
    AUTO = 316,
    REGISTER = 317,
    CHAR = 318,
    SHORT = 319,
    INT = 320,
    LONG = 321,
    SIGNED = 322,
    UNSIGNED = 323,
    FLOAT = 324,
    DOUBLE = 325,
    CONST = 326,
    VOLATILE = 327,
    VOID = 328,
    STRUCT = 329,
    UNION = 330,
    ENUM = 331,
    ELLIPSIS = 332,
    CASE = 333,
    DEFAULT = 334,
    IF = 335,
    ELSE = 336,
    SWITCH = 337,
    WHILE = 338,
    DO = 339,
    FOR = 340,
    GOTO = 341,
    CONTINUE = 342,
    BREAK = 343,
    RETURN = 344
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
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1304

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  214
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  351

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

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
      85,    86,    87,    88,    89
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
  "EQU", "LESS", "GREATER", "IDENTIFIER", "CONSTANT", "STRING_LITERAL",
  "SIZEOF", "INTEGER", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP",
  "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN",
  "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME",
  "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR", "SHORT",
  "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344
};
# endif

#define YYPACT_NINF -181

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-181)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     836,    80,    -7,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
    -181,  -181,  -181,    11,  -181,    70,  1228,  1228,  -181,    18,
    -181,  1228,   629,    13,    -1,   558,  -181,  -181,    22,  -181,
    -181,    -7,   -17,    54,  -181,   104,  -181,   608,  -181,  -181,
     350,    64,  -181,   290,  -181,    70,  -181,   629,   903,   991,
      13,  -181,  -181,  -181,  -181,  -181,    53,    92,  -181,   -17,
      80,  -181,   908,  -181,   629,   350,   266,  -181,   173,   350,
     350,  -181,   717,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
    -181,   101,  -181,  1177,  -181,  1201,  1201,  1225,   111,   113,
     137,   170,   575,   174,   185,   189,   226,  1018,  -181,    66,
     171,  1225,  -181,   123,   117,   158,   164,   131,   230,   238,
     232,   231,     6,  -181,  -181,   106,  -181,  -181,  -181,   374,
     458,  -181,  -181,  -181,  -181,   237,  -181,  -181,  -181,  -181,
      60,   267,   270,  -181,   176,  -181,  -181,  -181,  -181,   268,
    1225,  -181,   -17,   200,  -181,   908,  -181,  -181,  -181,  -181,
    -181,  -181,  1225,   108,  -181,   269,  -181,   649,   220,    99,
     271,   575,   717,  -181,  1225,  -181,  -181,   273,   575,  1225,
    1225,  1225,   199,  1045,   272,  -181,  -181,  -181,   110,  1075,
    1225,   257,   259,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,  -181,  1225,  -181,  1225,  1225,
    1225,  1225,  1225,  1225,  1225,  1225,  1225,  1225,  1225,  1225,
    1225,  1225,  1225,  1225,  1225,  1225,  1225,  1225,  -181,  -181,
     491,  -181,  -181,   748,  1099,  -181,    57,  -181,    69,  -181,
    1207,   260,  -181,  -181,  -181,  -181,  -181,  -181,   205,  -181,
     173,  -181,  1225,  -181,  -181,   816,   223,  -181,  1225,  -181,
     274,   575,  -181,   221,   228,   234,   283,  1045,  -181,  -181,
    -181,   235,  -181,   116,  -181,  -181,  -181,  -181,  -181,  -181,
     123,   123,   117,   117,   158,   158,   158,   158,   164,   164,
     131,   230,   238,   232,     1,   231,  -181,  -181,  -181,   284,
     285,  -181,   281,    69,   923,  1123,  -181,  -181,  -181,  -181,
     824,  -181,  -181,  -181,  -181,  -181,   575,   575,   575,  1225,
    1153,  1225,  -181,  -181,  1225,  -181,  -181,  -181,  -181,   288,
    -181,   289,  -181,  -181,   219,  -181,  -181,   253,   575,   256,
    -181,  -181,  -181,  -181,   575,   295,  -181,   575,  -181,  -181,
    -181
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     208,     0,   141,   134,   105,    89,    90,    91,    92,    93,
      95,    96,    97,    98,   101,   102,    99,   100,   130,   131,
      94,   109,   110,     0,   210,     0,    79,    81,   103,     0,
     104,    83,     0,   133,     0,     0,   206,   209,     0,   145,
     143,   142,     0,   125,    77,     0,    85,    87,    80,    82,
       0,   108,    84,     0,   188,     0,   214,     0,     0,     0,
     132,     1,   207,   135,   146,   144,   128,     0,   126,     0,
       0,    78,     0,   212,     0,   115,     0,   111,     0,   117,
       0,   184,     0,   192,    28,    27,    23,     4,    25,    26,
      24,     2,     3,     0,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,    17,
      29,     0,    31,    35,    38,    41,    46,    49,    51,    53,
      55,    57,    59,    61,    74,     0,   190,   175,   176,     0,
       0,   177,   178,   179,   180,    87,   189,   213,   140,   154,
     153,     0,   147,   149,     0,   137,     2,    29,    76,     0,
       0,   123,     0,     0,    86,     0,   170,    88,   211,   114,
     107,   112,     0,     0,   118,   120,   116,     0,     0,   156,
       0,     0,     0,    21,     0,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,   202,   203,   204,     0,     0,
       0,     0,     0,    13,    14,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   193,   186,
       0,   185,   191,     0,     0,   151,   158,   152,   159,   138,
       0,     0,   139,   136,   129,   127,   124,   173,     0,   121,
       0,   113,     0,   106,     5,     0,   158,   157,     0,   181,
       0,     0,   183,     0,     0,     0,     0,     0,   201,   205,
       9,     0,    15,     0,    11,    12,    62,    33,    34,    32,
      36,    37,    39,    40,    42,    43,    44,    45,    47,    48,
      50,    52,    54,    56,     0,    58,    75,   187,   166,     0,
       0,   162,     0,   160,     0,     0,   148,   150,   155,   171,
       0,   119,   122,    30,    22,   182,     0,     0,     0,     0,
       0,     0,    10,     8,     0,   167,   161,   163,   168,     0,
     164,     0,   172,   174,   194,   196,   197,     0,     0,     0,
      16,    60,   169,   165,     0,     0,   199,     0,   195,   198,
     200
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -181,  -181,  -181,  -181,   -57,  -181,   -77,    35,    56,   -26,
      52,    88,    89,    93,    91,    94,  -181,   -56,   -59,  -181,
     -45,   -64,    10,     0,  -181,   248,  -181,   -29,  -181,  -181,
     239,   -75,   -63,  -181,    76,  -181,   275,   191,   135,     4,
     -27,     2,  -181,   -52,  -181,   105,  -181,   195,  -112,  -180,
    -137,  -181,   -58,  -181,    16,     8,   217,  -172,  -181,  -181,
    -181,  -181,   336,  -181
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   108,   109,   271,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   206,
     125,   149,    54,    55,    45,    46,    26,    27,    28,    29,
      76,    77,    78,   163,   164,    30,    67,    68,    31,    32,
      33,    34,    41,   299,   142,   143,   144,   170,   300,   238,
     157,   248,   126,   127,   128,    57,   130,   131,   132,   133,
     134,    35,    36,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      25,   161,   147,   148,    40,    38,   141,    60,     1,   227,
      24,   267,   159,   156,    66,   324,   166,    42,   247,   169,
       2,    75,    58,   225,    50,    59,    48,    49,   237,    47,
       3,    52,    63,   177,   207,    25,   173,   168,   175,   176,
     147,   148,    43,    65,   182,    24,    75,    75,    56,    51,
      75,    75,   226,    75,   147,    74,   303,   257,   140,   135,
      69,   129,   188,    73,    18,    19,   233,   136,   234,   233,
      80,   234,   232,   137,   135,   189,   303,   190,   304,     1,
     305,   150,   165,    44,   136,   191,   244,     2,     3,     1,
     158,     3,   161,   147,   148,   320,   156,     2,   249,   151,
     152,     3,   192,   193,   194,   147,   148,     2,   255,   169,
     234,     3,    70,   259,   227,   171,   250,    71,   227,   228,
     262,   251,   179,   269,   227,   178,     2,   168,   323,   168,
     272,   277,   278,   279,   263,   264,   265,    39,    75,   136,
     211,   212,   236,    75,   235,   273,   180,   276,   208,   209,
     210,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   296,   147,
     302,   256,   232,   333,   219,   220,    64,   147,   148,   181,
     294,   313,     1,   183,   241,    79,   242,   162,   312,   284,
     285,   286,   287,   215,   216,   147,   148,   213,   214,   195,
       2,   147,   185,   315,     3,   217,   218,   246,   152,    60,
      79,    79,   309,   310,    79,    79,   184,    79,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   227,   227,
     254,   316,   255,   140,   234,   236,   227,    38,   317,   186,
     140,   331,   227,   321,   318,   322,   280,   281,   147,   148,
     221,   156,   329,   223,   165,   140,   222,   256,   334,   335,
     336,   227,   340,   345,   227,    72,   347,   147,   341,   282,
     283,   288,   289,   160,   337,   339,   224,   239,   240,   243,
     346,   258,   266,   252,   314,   268,   348,   261,   274,   350,
     275,   308,   319,   327,   325,   326,    53,    81,   342,    82,
     344,   343,    79,    83,   140,    84,    85,    79,   349,   290,
      86,   291,    87,    88,    89,   293,   292,    90,   154,   167,
     295,    91,    92,     4,    93,    94,   311,    95,    96,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   245,   153,   307,   230,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   260,    97,    98,
      99,    62,   100,   101,   102,   103,   104,   105,   106,   107,
      53,   229,     0,    82,     0,     0,     0,    83,     0,    84,
      85,     0,     0,     0,    86,     0,    87,    88,    89,     0,
       0,    90,     0,     0,     0,    91,    92,     4,    93,    94,
       0,    95,    96,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,     0,     0,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    97,    98,    99,     0,   100,   101,   102,   103,
     104,   105,   106,   107,    53,   231,     0,    82,     0,     0,
       0,    83,     0,    84,    85,     0,     0,     0,    86,     0,
      87,    88,    89,     0,     0,    90,     0,     0,     0,    91,
      92,     0,    93,    94,     0,    95,    96,    53,   297,     0,
      82,     0,     0,     0,    83,     0,    84,    85,     0,     0,
       0,    86,     0,    87,    88,    89,     0,     0,    90,     0,
       0,     0,    91,    92,     0,    93,    94,     0,    95,    96,
       0,     0,     0,     0,     0,     0,    97,    98,    99,     0,
     100,   101,   102,   103,   104,   105,   106,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,    97,
      98,    99,     0,   100,   101,   102,   103,   104,   105,   106,
     107,    53,     0,     0,    82,     2,     0,     0,    83,     3,
      84,    85,     0,     0,     0,    86,     0,    87,    88,    89,
       0,     0,    90,     0,     0,     0,    91,    92,     0,    93,
      94,     0,    95,    96,    53,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    53,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,    98,    99,   253,   100,   101,   102,
     103,   104,   105,   106,   107,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     4,     0,     0,     0,
       0,     0,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    82,     0,     0,     0,
       0,     0,    84,    85,     0,     0,     0,    86,     0,    87,
      88,    89,     0,     0,    90,     0,     0,     0,   146,    92,
       0,    93,    94,     0,    95,    96,     0,   233,   298,   234,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     2,     0,     0,     0,     3,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   255,   298,   234,     0,     0,
     155,   332,     0,    82,     0,     0,     0,     0,     0,    84,
      85,     0,     0,     2,    86,     1,    87,    88,    89,     0,
       0,    90,     0,     0,     0,   146,    92,     0,    93,    94,
       0,    95,    96,     2,     0,     0,     0,     3,     0,     0,
       0,     0,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   138,   155,     0,     0,    82,     0,     0,
       0,     0,     0,    84,    85,     0,     0,     0,    86,     0,
      87,    88,    89,   328,   139,    90,     0,     0,     0,   146,
      92,     0,    93,    94,     0,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      82,     0,   145,     0,     0,     0,    84,    85,     0,     0,
       0,    86,     0,    87,    88,    89,     0,     0,    90,     0,
       0,     0,   146,    92,     0,    93,    94,    82,    95,    96,
       0,   187,     0,    84,    85,     0,     0,     0,    86,     0,
      87,    88,    89,     0,     0,    90,     0,     0,     0,   146,
      92,     0,    93,    94,    82,    95,    96,     0,    83,     0,
      84,    85,     0,     0,     0,    86,     0,    87,    88,    89,
       0,     0,    90,     0,     0,     0,   146,    92,     0,    93,
      94,     0,    95,    96,    82,   270,     0,     0,     0,     0,
      84,    85,     0,     0,     0,    86,     0,    87,    88,    89,
       0,     0,    90,     0,     0,     0,   146,    92,    82,    93,
      94,   301,    95,    96,    84,    85,     0,     0,     0,    86,
       0,    87,    88,    89,     0,     0,    90,     0,     0,     0,
     146,    92,    82,    93,    94,   330,    95,    96,    84,    85,
       0,     0,     0,    86,     0,    87,    88,    89,     0,     0,
      90,     0,     0,     0,   146,    92,     0,    93,    94,     0,
      95,    96,    82,   338,     0,     0,     0,     0,    84,    85,
       0,     0,     0,    86,     0,    87,    88,    89,     0,     0,
      90,     0,     0,     0,   146,    92,   172,    93,    94,     0,
      95,    96,    84,    85,     0,     0,     0,    86,     0,    87,
      88,    89,     0,     0,    90,     0,     0,     0,   146,    92,
     174,    93,    94,     0,    95,    96,    84,    85,     0,     0,
       0,    86,     0,    87,    88,    89,     0,     0,    90,     0,
       0,     0,   146,    92,    82,    93,    94,     0,    95,    96,
      84,    85,     0,     0,     0,    86,     0,    87,    88,    89,
       0,     0,    90,     0,     0,     0,   146,    92,     0,    93,
      94,     0,    95,    96,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   306,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23
};

static const yytype_int16 yycheck[] =
{
       0,    76,    59,    59,     2,     1,    58,    34,     9,     8,
       0,   183,    75,    72,    31,    14,    79,     6,   155,    82,
      27,    50,     9,    17,     6,    12,    26,    27,   140,    25,
      31,    31,    10,    97,   111,    35,    93,    82,    95,    96,
      97,    97,    31,    41,   102,    35,    75,    76,    32,    31,
      79,    80,    46,    82,   111,    47,   236,   169,    58,    55,
       6,    53,   107,    47,    71,    72,     9,    57,    11,     9,
       6,    11,   130,    57,    70,     9,   256,    11,     9,     9,
      11,    28,    78,    13,    74,    19,   150,    27,    31,     9,
      74,    31,   167,   150,   150,   267,   155,    27,   162,     7,
       8,    31,    36,    37,    38,   162,   162,    27,     9,   172,
      11,    31,     8,   171,     8,    14,     8,    13,     8,    13,
     178,    13,     9,    13,     8,    14,    27,   172,    12,   174,
     189,   208,   209,   210,   179,   180,   181,     2,   167,   129,
      23,    24,   140,   172,   140,   190,     9,   206,    25,    26,
      27,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   227,   226,
     234,   169,   230,   310,    43,    44,    41,   234,   234,     9,
     225,   258,     9,     9,     8,    50,    10,    14,   252,   215,
     216,   217,   218,    29,    30,   252,   252,    39,    40,    28,
      27,   258,    13,   261,    31,    41,    42,     7,     8,   236,
      75,    76,     7,     8,    79,    80,    31,    82,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,     8,     8,
      10,    10,     9,   233,    11,   233,     8,   233,    10,    13,
     240,   305,     8,     8,    10,    10,   211,   212,   305,   305,
      20,   310,   304,    21,   250,   255,    18,   255,   316,   317,
     318,     8,   321,    10,     8,    28,    10,   324,   324,   213,
     214,   219,   220,     7,   319,   320,    45,    10,     8,    11,
     338,    10,    83,    14,    10,    13,   344,    14,    31,   347,
      31,    31,     9,    12,    10,    10,     6,     7,    10,     9,
      81,    12,   167,    13,   304,    15,    16,   172,    13,   221,
      20,   222,    22,    23,    24,   224,   223,    27,    70,    80,
     226,    31,    32,    57,    34,    35,   250,    37,    38,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,   152,    69,   240,   129,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,   172,    78,    79,
      80,    35,    82,    83,    84,    85,    86,    87,    88,    89,
       6,     7,    -1,     9,    -1,    -1,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    22,    23,    24,    -1,
      -1,    27,    -1,    -1,    -1,    31,    32,    57,    34,    35,
      -1,    37,    38,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    78,    79,    80,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,     6,     7,    -1,     9,    -1,    -1,
      -1,    13,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      22,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    -1,    37,    38,     6,     7,    -1,
       9,    -1,    -1,    -1,    13,    -1,    15,    16,    -1,    -1,
      -1,    20,    -1,    22,    23,    24,    -1,    -1,    27,    -1,
      -1,    -1,    31,    32,    -1,    34,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    -1,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    78,
      79,    80,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,     6,    -1,    -1,     9,    27,    -1,    -1,    13,    31,
      15,    16,    -1,    -1,    -1,    20,    -1,    22,    23,    24,
      -1,    -1,    27,    -1,    -1,    -1,    31,    32,    -1,    34,
      35,    -1,    37,    38,     6,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,     6,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    80,     7,    82,    83,    84,
      85,    86,    87,    88,    89,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    57,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,     9,    -1,    -1,    -1,
      -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,    22,
      23,    24,    -1,    -1,    27,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    -1,    37,    38,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    27,    -1,    -1,    -1,    31,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,     9,    10,    11,    -1,    -1,
       6,     7,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    27,    20,     9,    22,    23,    24,    -1,
      -1,    27,    -1,    -1,    -1,    31,    32,    -1,    34,    35,
      -1,    37,    38,    27,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    10,     6,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      22,    23,    24,    10,    31,    27,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
       9,    -1,    11,    -1,    -1,    -1,    15,    16,    -1,    -1,
      -1,    20,    -1,    22,    23,    24,    -1,    -1,    27,    -1,
      -1,    -1,    31,    32,    -1,    34,    35,     9,    37,    38,
      -1,    13,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      22,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,     9,    37,    38,    -1,    13,    -1,
      15,    16,    -1,    -1,    -1,    20,    -1,    22,    23,    24,
      -1,    -1,    27,    -1,    -1,    -1,    31,    32,    -1,    34,
      35,    -1,    37,    38,     9,    10,    -1,    -1,    -1,    -1,
      15,    16,    -1,    -1,    -1,    20,    -1,    22,    23,    24,
      -1,    -1,    27,    -1,    -1,    -1,    31,    32,     9,    34,
      35,    12,    37,    38,    15,    16,    -1,    -1,    -1,    20,
      -1,    22,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,
      31,    32,     9,    34,    35,    12,    37,    38,    15,    16,
      -1,    -1,    -1,    20,    -1,    22,    23,    24,    -1,    -1,
      27,    -1,    -1,    -1,    31,    32,    -1,    34,    35,    -1,
      37,    38,     9,    10,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    -1,    20,    -1,    22,    23,    24,    -1,    -1,
      27,    -1,    -1,    -1,    31,    32,     9,    34,    35,    -1,
      37,    38,    15,    16,    -1,    -1,    -1,    20,    -1,    22,
      23,    24,    -1,    -1,    27,    -1,    -1,    -1,    31,    32,
       9,    34,    35,    -1,    37,    38,    15,    16,    -1,    -1,
      -1,    20,    -1,    22,    23,    24,    -1,    -1,    27,    -1,
      -1,    -1,    31,    32,     9,    34,    35,    -1,    37,    38,
      15,    16,    -1,    -1,    -1,    20,    -1,    22,    23,    24,
      -1,    -1,    27,    -1,    -1,    -1,    31,    32,    -1,    34,
      35,    -1,    37,    38,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    27,    31,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,   112,   113,   116,   117,   118,   119,
     125,   128,   129,   130,   131,   151,   152,   153,   129,   128,
     131,   132,     6,    31,    13,   114,   115,   129,   113,   113,
       6,    31,   113,     6,   112,   113,   144,   145,     9,    12,
     130,     0,   152,    10,   128,   131,    31,   126,   127,     6,
       8,    13,    28,   144,   145,   117,   120,   121,   122,   128,
       6,     7,     9,    13,    15,    16,    20,    22,    23,    24,
      27,    31,    32,    34,    35,    37,    38,    78,    79,    80,
      82,    83,    84,    85,    86,    87,    88,    89,    91,    92,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   110,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   129,   112,   144,    10,    31,
     113,   133,   134,   135,   136,    11,    31,    94,   107,   111,
      28,     7,     8,   126,   115,     6,   108,   140,   144,   122,
       7,   121,    14,   123,   124,   129,   122,   120,   110,   122,
     137,    14,     9,    94,     9,    94,    94,   111,    14,     9,
       9,     9,   142,     9,    31,    13,    13,    13,   110,     9,
      11,    19,    36,    37,    38,    28,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,   109,    96,    25,    26,
      27,    23,    24,    39,    40,    29,    30,    41,    42,    43,
      44,    20,    18,    21,    45,    17,    46,     8,    13,     7,
     146,     7,   142,     9,    11,   129,   131,   138,   139,    10,
       8,     8,    10,    11,   111,   127,     7,   140,   141,   111,
       8,    13,    14,     7,    10,     9,   131,   138,    10,   142,
     137,    14,   142,   110,   110,   110,    83,   147,    13,    13,
      10,    93,   108,   110,    31,    31,   108,    96,    96,    96,
      97,    97,    98,    98,    99,    99,    99,    99,   100,   100,
     101,   102,   103,   104,   110,   105,   108,     7,    10,   133,
     138,    12,   111,   139,     9,    11,    77,   135,    31,     7,
       8,   124,   111,    96,    10,   142,    10,    10,    10,     9,
     147,     8,    10,    12,    14,    10,    10,    12,    10,   133,
      12,   111,     7,   140,   142,   142,   142,   110,    10,   110,
     108,   107,    10,    12,    81,    10,   142,    10,   142,    13,
     142
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    91,    91,    91,    92,    92,    92,
      92,    92,    92,    92,    92,    93,    93,    94,    94,    94,
      94,    94,    94,    95,    95,    95,    95,    95,    95,    96,
      96,    97,    97,    97,    97,    98,    98,    98,    99,    99,
      99,   100,   100,   100,   100,   100,   101,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   105,   106,   106,   107,
     107,   108,   108,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   110,   110,   111,   112,   112,   113,
     113,   113,   113,   113,   113,   114,   114,   115,   115,   116,
     116,   116,   116,   116,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   118,   118,   118,   119,
     119,   120,   120,   121,   122,   122,   122,   122,   123,   123,
     124,   124,   124,   125,   125,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   130,   130,   130,   130,   130,
     130,   131,   131,   131,   131,   132,   132,   133,   133,   134,
     134,   135,   135,   135,   136,   136,   137,   137,   138,   138,
     138,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     140,   140,   140,   141,   141,   142,   142,   142,   142,   142,
     142,   143,   143,   143,   144,   144,   144,   144,   145,   145,
     146,   146,   147,   147,   148,   148,   148,   149,   149,   149,
     149,   150,   150,   150,   150,   150,   151,   151,   151,   152,
     152,   153,   153,   153,   153
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
#line 1771 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 32 "parser.y" /* yacc.c:1646  */
    {printf("primary_expression: CONSTANT FINAL\n");}
#line 1777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 33 "parser.y" /* yacc.c:1646  */
    {printf("COMMENT FINAL\n");}
#line 1783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 34 "parser.y" /* yacc.c:1646  */
    {printf("primary_expression: LEFT_PARENTHESIS FINAL expression RIGHT_PARETHESIS\n");}
#line 1789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 35 "parser.y" /* yacc.c:1646  */
    {printf("primary_expression: INTEGER FINAL\n");}
#line 1795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 39 "parser.y" /* yacc.c:1646  */
    {printf("postfix_expression: primary_expression \n");}
#line 1801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 40 "parser.y" /* yacc.c:1646  */
    {printf("postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n");}
#line 1807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 41 "parser.y" /* yacc.c:1646  */
    {printf("postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 1813 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 42 "parser.y" /* yacc.c:1646  */
    {printf("postfix_expression: postfix_expression LEFT_PARENTHESIS argument_expression_list RIGHT_PARENTHESIS\n");}
#line 1819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 43 "parser.y" /* yacc.c:1646  */
    {printf("postfix_expression: postfix_expression DOT IDENTIFIER\n");}
#line 1825 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 44 "parser.y" /* yacc.c:1646  */
    {printf("postfix_expression: postfix_expression PTR_OP IDENTIFIER\n");}
#line 1831 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 45 "parser.y" /* yacc.c:1646  */
    {printf("postfix_expression: postfix_expression INC_OP\n");}
#line 1837 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 46 "parser.y" /* yacc.c:1646  */
    {printf("postfix_expression: postfix_expression DEC_OP\n");}
#line 1843 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 52 "parser.y" /* yacc.c:1646  */
    {printf("argument_expression_list: assignment_expression\n");}
#line 1849 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 53 "parser.y" /* yacc.c:1646  */
    {printf("argument_expression_list: argument_expression_list COMMA assignment_expression\n");}
#line 1855 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 57 "parser.y" /* yacc.c:1646  */
    {printf("unary_expression: postfix_expression\n");}
#line 1861 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 58 "parser.y" /* yacc.c:1646  */
    {printf("unary_expression: INC_OP unary_expression\n");}
#line 1867 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 59 "parser.y" /* yacc.c:1646  */
    {printf("unary_expression: DEC_OP unary_expression\n");}
#line 1873 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 60 "parser.y" /* yacc.c:1646  */
    {printf("unary_expression: unary_operator cast_expression\n");}
#line 1879 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 61 "parser.y" /* yacc.c:1646  */
    {printf("unary_expression: SIZEOF unary_expression\n");}
#line 1885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 62 "parser.y" /* yacc.c:1646  */
    {printf("unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n");}
#line 1891 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 66 "parser.y" /* yacc.c:1646  */
    {printf("unary_operator: BIT_AND\n");}
#line 1897 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 67 "parser.y" /* yacc.c:1646  */
    {printf("unary_operator: MUL\n");}
#line 1903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 68 "parser.y" /* yacc.c:1646  */
    {printf("unary_operator: PLUS\n");}
#line 1909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 69 "parser.y" /* yacc.c:1646  */
    {printf("unary_operator: MINUS\n");}
#line 1915 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 70 "parser.y" /* yacc.c:1646  */
    {printf("unary_operator: PRIME\n");}
#line 1921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 71 "parser.y" /* yacc.c:1646  */
    {printf("unary_operator: EXCLAMATION\n");}
#line 1927 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 75 "parser.y" /* yacc.c:1646  */
    {printf("cast_expression: unary_expression\n");}
#line 1933 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 76 "parser.y" /* yacc.c:1646  */
    {printf("cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n");}
#line 1939 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 80 "parser.y" /* yacc.c:1646  */
    {printf("multiplicative_expression: cast_expression\n");}
#line 1945 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 81 "parser.y" /* yacc.c:1646  */
    {printf("multiplicative_expression: multiplicative_expression MUL cast_expression\n");}
#line 1951 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 82 "parser.y" /* yacc.c:1646  */
    {printf("multiplicative_expression: multiplicative_expression DIV cast_expression\n");}
#line 1957 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 83 "parser.y" /* yacc.c:1646  */
    {printf("multiplicative_expression: multiplicative_expression MOD cast_expression\n");}
#line 1963 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 87 "parser.y" /* yacc.c:1646  */
    {printf("additive_expression: multiplicative_expression\n");}
#line 1969 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 88 "parser.y" /* yacc.c:1646  */
    {printf("additive_expression: additive_expression PLUS multiplicative_expression\n");}
#line 1975 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 89 "parser.y" /* yacc.c:1646  */
    {printf("additive_expression: additive_expression MINUS multiplicative_expression\n");}
#line 1981 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 93 "parser.y" /* yacc.c:1646  */
    {printf("shift_expression: additive_expression\n");}
#line 1987 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 94 "parser.y" /* yacc.c:1646  */
    {printf("shift_expression: shift_expression LEFT_OP additive_expression\n");}
#line 1993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 95 "parser.y" /* yacc.c:1646  */
    {printf("shift_expression: shift_expression RIGHT_OP additive_expression \n");}
#line 1999 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 99 "parser.y" /* yacc.c:1646  */
    {printf("relational_expression: shift_expression\n");}
#line 2005 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 100 "parser.y" /* yacc.c:1646  */
    {printf("relational_expression: relational_expression LESS shift_expression\n");}
#line 2011 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 101 "parser.y" /* yacc.c:1646  */
    {printf("relational_expression: relational_expression GREATER shift_expression\n");}
#line 2017 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 102 "parser.y" /* yacc.c:1646  */
    {printf("relational_expression: relational_expression LE_OP shift_expression\n");}
#line 2023 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 103 "parser.y" /* yacc.c:1646  */
    {printf("relational_expression: relational_expression GE_OP shift_expression\n");}
#line 2029 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 107 "parser.y" /* yacc.c:1646  */
    {printf("equality_expression: relational_expression\n");}
#line 2035 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 108 "parser.y" /* yacc.c:1646  */
    {printf("equality_expression: equality_expression EQ_OP relational_expression\n");}
#line 2041 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 109 "parser.y" /* yacc.c:1646  */
    {printf("equality_expression: equality_expression NE_OP relational_expression\n");}
#line 2047 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 113 "parser.y" /* yacc.c:1646  */
    {printf("and_expression: equality_expression\n");}
#line 2053 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 114 "parser.y" /* yacc.c:1646  */
    {printf("and_expression: and_expression BIT_AND equality_expression\n");}
#line 2059 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 118 "parser.y" /* yacc.c:1646  */
    {printf("exclusive_or_expression: and_expression\n");}
#line 2065 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 119 "parser.y" /* yacc.c:1646  */
    {printf("exclusive_or_expression: exclusive_or_expression UP_ARROW and_expression\n");}
#line 2071 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 123 "parser.y" /* yacc.c:1646  */
    {printf("inclusive_or_expression: exclusive_or_expression\n");}
#line 2077 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 124 "parser.y" /* yacc.c:1646  */
    {printf("inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression\n");}
#line 2083 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 128 "parser.y" /* yacc.c:1646  */
    {printf("logical_and_expression: inclusive_or_expression\n");}
#line 2089 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 129 "parser.y" /* yacc.c:1646  */
    {printf("logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n");}
#line 2095 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 133 "parser.y" /* yacc.c:1646  */
    {printf("logical_or_expression: logical_and_expression\n");}
#line 2101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 134 "parser.y" /* yacc.c:1646  */
    {printf("logical_or_expression: logical_or_expression OR_OP logical_and_expression\n");}
#line 2107 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 138 "parser.y" /* yacc.c:1646  */
    {printf("conditional_expression: logical_or_expression\n");}
#line 2113 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 139 "parser.y" /* yacc.c:1646  */
    {printf("conditional_expression: logical_or_expression INTERROGATION expression COLON conditional_expression\n");}
#line 2119 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 143 "parser.y" /* yacc.c:1646  */
    {printf("assignment_expression: conditional_expression\n");}
#line 2125 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 144 "parser.y" /* yacc.c:1646  */
    {printf("assignment_expression: unary_expression assignment_operator assignment_expression\n");}
#line 2131 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 148 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: EQU\n");}
#line 2137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 149 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: MUL_ASSIGN\n");}
#line 2143 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 150 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: DIV_ASSIGN\n");}
#line 2149 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 151 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: MOD_ASSIGN\n");}
#line 2155 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 152 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: ADD_ASSIGN\n");}
#line 2161 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 153 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: SUB_ASSIGN\n");}
#line 2167 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 154 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: LEFT_ASSIGN\n");}
#line 2173 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 155 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: RIGHT_ASSIGN\n");}
#line 2179 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 156 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: AND_ASSIGN\n");}
#line 2185 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 157 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: XOR_ASSIGN\n");}
#line 2191 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 158 "parser.y" /* yacc.c:1646  */
    {printf("assignment_operator: OR_ASSIGN\n");}
#line 2197 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 162 "parser.y" /* yacc.c:1646  */
    {printf("expression: assignment_expression\n");}
#line 2203 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 163 "parser.y" /* yacc.c:1646  */
    {printf("expression: expression COMMA assignment_expression\n");}
#line 2209 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 167 "parser.y" /* yacc.c:1646  */
    {printf("constant_expression: conditional_expression\n");}
#line 2215 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 171 "parser.y" /* yacc.c:1646  */
    {printf("declaration: declaration_specifiers SEMICOLON \n");}
#line 2221 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 172 "parser.y" /* yacc.c:1646  */
    {printf("declaration: declaration_specifiers init_declarator_list SEMICOLON\n");}
#line 2227 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 176 "parser.y" /* yacc.c:1646  */
    {printf("declaration_specifiers: storage_class_specifier \n");}
#line 2233 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 177 "parser.y" /* yacc.c:1646  */
    {printf("declaration_specifiers: storage_class_specifier declaration_specifiers\n");}
#line 2239 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 178 "parser.y" /* yacc.c:1646  */
    {printf("declaration_specifiers: type_specifier\n");}
#line 2245 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 179 "parser.y" /* yacc.c:1646  */
    {printf("declaration_specifiers: type_specifier declaration_specifiers {\n");}
#line 2251 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 180 "parser.y" /* yacc.c:1646  */
    {printf("declaration_specifiers: type_qualifier\n");}
#line 2257 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 181 "parser.y" /* yacc.c:1646  */
    {printf("declaration_specifiers: type_qualifier declaration_specifiers\n");}
#line 2263 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 185 "parser.y" /* yacc.c:1646  */
    {printf("init_declarator_list: init_declarator\n");}
#line 2269 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf("init_declarator_list: init_declarator_list COMMA init_declarator\n");}
#line 2275 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 190 "parser.y" /* yacc.c:1646  */
    {printf("init_declarator: declarator\n");}
#line 2281 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 191 "parser.y" /* yacc.c:1646  */
    {printf("init_declarator: declarator EQU initializer\n");}
#line 2287 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 195 "parser.y" /* yacc.c:1646  */
    {printf("storage_class_specifier: TYPEDEF\n");}
#line 2293 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 196 "parser.y" /* yacc.c:1646  */
    {printf("storage_class_specifier: EXTERN\n");}
#line 2299 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 197 "parser.y" /* yacc.c:1646  */
    {printf("storage_class_specifier: STATIC\n");}
#line 2305 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 198 "parser.y" /* yacc.c:1646  */
    {printf("storage_class_specifier: AUTO\n");}
#line 2311 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 199 "parser.y" /* yacc.c:1646  */
    {printf("storage_class_specifier: REGISTER\n");}
#line 2317 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 203 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: VOID\n");}
#line 2323 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 204 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: CHAR\n");}
#line 2329 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 205 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: SHORT\n");}
#line 2335 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 206 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: INT\n");}
#line 2341 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 207 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: LONG\n");}
#line 2347 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 208 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: FLOAT\n");}
#line 2353 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 209 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: DOUBLE\n");}
#line 2359 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 210 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: SIGNED\n");}
#line 2365 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 211 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: UNSIGNED\n");}
#line 2371 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 212 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: struct_or_union_specifier\n");}
#line 2377 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 213 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: enum_specifier\n");}
#line 2383 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 214 "parser.y" /* yacc.c:1646  */
    {printf("type_specifier: TYPE_NAME\n");}
#line 2389 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 218 "parser.y" /* yacc.c:1646  */
    {printf("struct_or_union_specifier: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET \n");}
#line 2395 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 219 "parser.y" /* yacc.c:1646  */
    {printf("struct_or_union_specifier: struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET\n");}
#line 2401 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 220 "parser.y" /* yacc.c:1646  */
    {printf("struct_or_union_specifier: struct_or_union IDENTIFIER\n");}
#line 2407 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 224 "parser.y" /* yacc.c:1646  */
    {printf("struct_or_union: STRUCT\n");}
#line 2413 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 225 "parser.y" /* yacc.c:1646  */
    {printf("struct_or_union: UNION\n");}
#line 2419 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 229 "parser.y" /* yacc.c:1646  */
    {printf("struct_declaration_list: struct_declaration\n");}
#line 2425 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 230 "parser.y" /* yacc.c:1646  */
    {printf("struct_declaration_list: struct_declaration_list struct_declaration\n");}
#line 2431 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 234 "parser.y" /* yacc.c:1646  */
    {printf("struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON\n");}
#line 2437 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 238 "parser.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list: type_specifier specifier_qualifier_list\n");}
#line 2443 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 239 "parser.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list: type_specifier\n");}
#line 2449 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 240 "parser.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list: type_qualifier specifier_qualifier_list\n");}
#line 2455 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 241 "parser.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list: type_qualifier\n");}
#line 2461 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 245 "parser.y" /* yacc.c:1646  */
    {printf("struct_declarator_list: struct_declarator\n");}
#line 2467 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 246 "parser.y" /* yacc.c:1646  */
    {printf("struct_declarator_list: struct_declarator_list COMMA struct_declarator\n");}
#line 2473 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 250 "parser.y" /* yacc.c:1646  */
    {printf("struct_declarator: declarator\n");}
#line 2479 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 251 "parser.y" /* yacc.c:1646  */
    {printf("struct_declarator: COLON constant_expression \n");}
#line 2485 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 252 "parser.y" /* yacc.c:1646  */
    {printf("struct_declarator: declarator COLON constant_expression \n");}
#line 2491 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 256 "parser.y" /* yacc.c:1646  */
    {printf("enum_specifier: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET\n");}
#line 2497 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 257 "parser.y" /* yacc.c:1646  */
    {printf("enum_specifier: ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET \n");}
#line 2503 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 258 "parser.y" /* yacc.c:1646  */
    {printf("enum_specifier: ENUM IDENTIFIER\n");}
#line 2509 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 262 "parser.y" /* yacc.c:1646  */
    {printf("enumerator_list: enumerator\n");}
#line 2515 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 263 "parser.y" /* yacc.c:1646  */
    {printf("enumerator_list: enumerator_list COMMA enumerator\n");}
#line 2521 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 267 "parser.y" /* yacc.c:1646  */
    {printf("enumerator: IDENTIFIER\n");}
#line 2527 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 268 "parser.y" /* yacc.c:1646  */
    {printf("enumerator: IDENTIFIER EQU constant_expression\n");}
#line 2533 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 272 "parser.y" /* yacc.c:1646  */
    {printf("type_qualifier: CONST\n");}
#line 2539 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 273 "parser.y" /* yacc.c:1646  */
    {printf("type_qualifier: VOLATILE\n");}
#line 2545 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 277 "parser.y" /* yacc.c:1646  */
    {printf("declarator: pointer direct_declarator \n");}
#line 2551 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 278 "parser.y" /* yacc.c:1646  */
    {printf("declarator: direct_declarator\n");}
#line 2557 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 282 "parser.y" /* yacc.c:1646  */
    {printf("direct_declarator: IDENTIFIER\n");}
#line 2563 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 283 "parser.y" /* yacc.c:1646  */
    {printf("direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n");}
#line 2569 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 284 "parser.y" /* yacc.c:1646  */
    {printf("direct_declarator: direct_declarator RIGHT_SBRACKET constant_expression LEFT_SBRACKET\n");}
#line 2575 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 285 "parser.y" /* yacc.c:1646  */
    {printf("direct_declarator: direct_declarator RIGHT_SBRACKET LEFT_SBRACKET\n");}
#line 2581 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 286 "parser.y" /* yacc.c:1646  */
    {printf("direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n");}
#line 2587 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 287 "parser.y" /* yacc.c:1646  */
    {printf("direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS\n");}
#line 2593 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 288 "parser.y" /* yacc.c:1646  */
    {printf("direct_declarator: direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2599 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 292 "parser.y" /* yacc.c:1646  */
    {printf("pointer: MUL\n");}
#line 2605 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 293 "parser.y" /* yacc.c:1646  */
    {printf("pointer: MUL type_qualifier_list\n");}
#line 2611 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 294 "parser.y" /* yacc.c:1646  */
    {printf("pointer: MUL pointer\n");}
#line 2617 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 295 "parser.y" /* yacc.c:1646  */
    {printf("pointer: MUL type_qualifier_list pointer\n");}
#line 2623 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 299 "parser.y" /* yacc.c:1646  */
    {printf("type_qualifier_list: type_qualifier\n");}
#line 2629 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 300 "parser.y" /* yacc.c:1646  */
    {printf("type_qualifier_list: type_qualifier_list type_qualifier\n");}
#line 2635 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 305 "parser.y" /* yacc.c:1646  */
    {printf("parameter_type_list: parameter_list\n");}
#line 2641 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 306 "parser.y" /* yacc.c:1646  */
    {printf("parameter_type_list: parameter_list COMMA ELLIPSIS\n");}
#line 2647 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 310 "parser.y" /* yacc.c:1646  */
    {printf("parameter_list: parameter_declaration\n");}
#line 2653 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 311 "parser.y" /* yacc.c:1646  */
    {printf("parameter_list: parameter_list COMMA parameter_declaration\n");}
#line 2659 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 315 "parser.y" /* yacc.c:1646  */
    {printf("parameter_declaration: declaration_specifiers declarator\n");}
#line 2665 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 316 "parser.y" /* yacc.c:1646  */
    {printf("parameter_declaration: declaration_specifiers abstract_declarator\n");}
#line 2671 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 317 "parser.y" /* yacc.c:1646  */
    {printf("parameter_declaration: declaration_specifiers\n");}
#line 2677 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 321 "parser.y" /* yacc.c:1646  */
    {printf("identifier_list: IDENTIFIER\n");}
#line 2683 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 322 "parser.y" /* yacc.c:1646  */
    {printf("identifier_list: identifier_list COMMA IDENTIFIER\n");}
#line 2689 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 326 "parser.y" /* yacc.c:1646  */
    {printf("type_name: specifier_qualifier_list\n");}
#line 2695 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 327 "parser.y" /* yacc.c:1646  */
    {printf("type_name: specifier_qualifier_list abstract_declarator\n");}
#line 2701 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 331 "parser.y" /* yacc.c:1646  */
    {printf("abstract_declarator: pointer\n");}
#line 2707 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 332 "parser.y" /* yacc.c:1646  */
    {printf("abstract_declarator: direct_abstract_declarator\n");}
#line 2713 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 333 "parser.y" /* yacc.c:1646  */
    {printf("abstract_declarator: pointer direct_abstract_declarator\n");}
#line 2719 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 337 "parser.y" /* yacc.c:1646  */
    {printf("direct_abstract_declarator: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS \n");}
#line 2725 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 338 "parser.y" /* yacc.c:1646  */
    {printf("direct_abstract_declarator: RIGHT_SBRACKET LEFT_SBRACKET \n");}
#line 2731 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 339 "parser.y" /* yacc.c:1646  */
    {printf("direct_abstract_declarator: RIGHT_SBRACKET constant_expression LEFT_SBRACKET\n");}
#line 2737 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 340 "parser.y" /* yacc.c:1646  */
    {printf("direct_abstract_declarator: direct_abstract_declarator RIGHT_SBRACKET LEFT_SBRACKET\n");}
#line 2743 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 341 "parser.y" /* yacc.c:1646  */
    {printf("direct_abstract_declarator: direct_abstract_declarator RIGHT_SBRACKET constant_expression LEFT_SBRACKET \n");}
#line 2749 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 342 "parser.y" /* yacc.c:1646  */
    {printf("direct_abstract_declarator: LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2755 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 343 "parser.y" /* yacc.c:1646  */
    {printf("direct_abstract_declarator: LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS \n");}
#line 2761 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 344 "parser.y" /* yacc.c:1646  */
    {printf("direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2767 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 345 "parser.y" /* yacc.c:1646  */
    {printf("direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n");}
#line 2773 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 349 "parser.y" /* yacc.c:1646  */
    {printf("initializer: assignment_expression\n");}
#line 2779 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 350 "parser.y" /* yacc.c:1646  */
    {printf("initializer: LEFT_BRACKET initializer_list RIGHT_BRACKET\n");}
#line 2785 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 351 "parser.y" /* yacc.c:1646  */
    {printf("initializer: LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET\n");}
#line 2791 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 355 "parser.y" /* yacc.c:1646  */
    {printf("initializer_list: initializer\n");}
#line 2797 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 356 "parser.y" /* yacc.c:1646  */
    {printf("initializer_list: initializer_list COMMA initializer \n");}
#line 2803 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 360 "parser.y" /* yacc.c:1646  */
    {printf("statement: labeled_statement\n");}
#line 2809 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 361 "parser.y" /* yacc.c:1646  */
    {printf("statement: compound_statement\n");}
#line 2815 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 362 "parser.y" /* yacc.c:1646  */
    {printf("statement: expression_statement\n");}
#line 2821 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 363 "parser.y" /* yacc.c:1646  */
    {printf("statement: selection_statement\n");}
#line 2827 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 364 "parser.y" /* yacc.c:1646  */
    {printf("statement: iteration_statement\n");}
#line 2833 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 365 "parser.y" /* yacc.c:1646  */
    {printf("statement: jump_statement\n");}
#line 2839 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 369 "parser.y" /* yacc.c:1646  */
    {printf("labeled_statement: IDENTIFIER COLON statement \n");}
#line 2845 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 370 "parser.y" /* yacc.c:1646  */
    {printf("labeled_statement: CASE constant_expression COLON statement\n");}
#line 2851 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 371 "parser.y" /* yacc.c:1646  */
    {printf("labeled_statement: DEFAULT COLON statement\n");}
#line 2857 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 375 "parser.y" /* yacc.c:1646  */
    {printf("compound_statement: LEFT_BRACKET RIGHT_BRACKET\n");}
#line 2863 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 376 "parser.y" /* yacc.c:1646  */
    {printf("compound_statement: LEFT_BRACKET statement_list RIGHT_BRACKET\n");}
#line 2869 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 377 "parser.y" /* yacc.c:1646  */
    {printf("compound_statement: LEFT_BRACKET declaration_list RIGHT_BRACKET\n");}
#line 2875 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 378 "parser.y" /* yacc.c:1646  */
    {printf("compound_statement: LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET\n");}
#line 2881 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 382 "parser.y" /* yacc.c:1646  */
    {printf("declaration_list: declaration\n");}
#line 2887 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 383 "parser.y" /* yacc.c:1646  */
    {printf("declaration_list: declaration_list declaration\n");}
#line 2893 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 387 "parser.y" /* yacc.c:1646  */
    {printf("statement_list: statement\n");}
#line 2899 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 388 "parser.y" /* yacc.c:1646  */
    {printf("statement_list: statement_list statement\n");}
#line 2905 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 392 "parser.y" /* yacc.c:1646  */
    {printf("expression_statement: SEMICOLON\n");}
#line 2911 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 393 "parser.y" /* yacc.c:1646  */
    {printf("expression_statement: expression SEMICOLON \n");}
#line 2917 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 397 "parser.y" /* yacc.c:1646  */
    {printf("selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n");}
#line 2923 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 398 "parser.y" /* yacc.c:1646  */
    {printf("selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement\n");}
#line 2929 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 399 "parser.y" /* yacc.c:1646  */
    {printf("selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n");}
#line 2935 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 403 "parser.y" /* yacc.c:1646  */
    {printf("iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n");}
#line 2941 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 404 "parser.y" /* yacc.c:1646  */
    {printf("iteration_statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON\n");}
#line 2947 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 405 "parser.y" /* yacc.c:1646  */
    {printf("iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n");}
#line 2953 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 406 "parser.y" /* yacc.c:1646  */
    {printf("iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n");}
#line 2959 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 410 "parser.y" /* yacc.c:1646  */
    {printf("jump_statement: GOTO IDENTIFIER SEMICOLON\n");}
#line 2965 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 411 "parser.y" /* yacc.c:1646  */
    {printf("jump_statement: CONTINUE SEMICOLON\n");}
#line 2971 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 412 "parser.y" /* yacc.c:1646  */
    {printf("jump_statement: BREAK SEMICOLON\n");}
#line 2977 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 413 "parser.y" /* yacc.c:1646  */
    {printf("jump_statement: RETURN SEMICOLON\n");}
#line 2983 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 414 "parser.y" /* yacc.c:1646  */
    {printf("jump_statement: RETURN expression SEMICOLON\n");}
#line 2989 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 418 "parser.y" /* yacc.c:1646  */
    {printf("translation_unit: Entre a external_declaration\n");}
#line 2995 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 419 "parser.y" /* yacc.c:1646  */
    {printf("translation_unit: Entre a ciclo translation_unit\n");}
#line 3001 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 420 "parser.y" /* yacc.c:1646  */
    {printf("translation_unit: Archivo Vacío\n");}
#line 3007 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 425 "parser.y" /* yacc.c:1646  */
    {printf("external_declaration: function_definition\n");}
#line 3013 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 426 "parser.y" /* yacc.c:1646  */
    {printf("external_declaration: declaration\n");}
#line 3019 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 430 "parser.y" /* yacc.c:1646  */
    {printf("function_definition: declaration_specifiers declarator declaration_list compound_statement\n");}
#line 3025 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 431 "parser.y" /* yacc.c:1646  */
    {printf("function_definition: declaration_specifiers declarator compound_statement \n");}
#line 3031 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 432 "parser.y" /* yacc.c:1646  */
    {printf("function_definition: declarator declaration_list compound_statement\n");}
#line 3037 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 433 "parser.y" /* yacc.c:1646  */
    {printf("function_definition: declarator compound_statement\n");}
#line 3043 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 3047 "parser.tab.c" /* yacc.c:1646  */
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
