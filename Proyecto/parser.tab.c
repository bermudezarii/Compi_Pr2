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
#define YYFINAL  78
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1711

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  231
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  391

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
      44,    45,    46,    47,    48,    49,    50,    51,    57,    58,
      62,    63,    64,    65,    66,    67,    68,    72,    73,    74,
      75,    76,    77,    81,    82,    86,    87,    88,    89,    93,
      94,    95,    99,   100,   101,   105,   106,   107,   108,   109,
     113,   114,   115,   119,   120,   124,   125,   129,   130,   134,
     135,   139,   140,   144,   145,   149,   150,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   168,   169,
     173,   177,   178,   182,   183,   184,   185,   186,   187,   191,
     192,   196,   197,   201,   202,   203,   204,   205,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     225,   226,   227,   231,   232,   236,   237,   241,   245,   246,
     247,   248,   252,   253,   257,   258,   259,   263,   264,   265,
     269,   270,   274,   275,   279,   280,   284,   285,   286,   287,
     293,   294,   295,   296,   297,   298,   299,   304,   305,   306,
     307,   311,   312,   317,   318,   322,   323,   327,   328,   329,
     333,   334,   338,   339,   343,   344,   345,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   361,   362,   363,   367,
     368,   372,   373,   374,   375,   376,   377,   381,   382,   383,
     387,   388,   389,   390,   395,   396,   400,   401,   402,   406,
     407,   411,   412,   413,   417,   418,   419,   420,   421,   425,
     426,   427,   428,   429,   433,   434,   435,   440,   441,   442,
     443,   444,   447,   448,   451,   452,   453,   454,   458,   459,
     460,   461
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

#define YYPACT_NINF -219

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-219)))

#define YYTABLE_NINF -161

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     917,    33,   -14,   138,     5,    16,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,    22,  -219,   103,  1637,  1637,  -219,
      65,   129,  -219,  1637,   966,   253,    32,  -219,   270,  -219,
    -219,  -219,    18,   119,  -219,    83,  -219,  -219,     5,   138,
      68,   142,  -219,    84,  -219,   943,  -219,  -219,   129,   514,
     151,  1059,  1135,    25,  -219,   158,  -219,   129,   367,  -219,
     103,  -219,   966,  1125,  1283,  -219,  -219,   213,  -219,  -219,
      88,    52,    52,    52,  -219,  -219,  -219,  -219,  -219,  -219,
      97,   306,  -219,    68,   138,  -219,  1539,  -219,   966,   514,
     985,  -219,   215,   514,   514,  -219,   264,   121,   191,  -219,
     202,  -219,   223,   896,  -219,  -219,  -219,  -219,  -219,  -219,
       5,   255,  -219,  -219,  1571,  -219,  1603,  1603,    16,   204,
    -219,  1635,  -219,   267,   254,   286,   282,   316,   216,   236,
     260,   252,    14,  -219,   246,    20,   158,  1163,  1315,   452,
    -219,  -219,   288,  1635,   292,   309,   360,   368,   792,   369,
     324,   366,   371,  1347,   445,  -219,  -219,   155,  -219,  -219,
    -219,   537,   622,  -219,  -219,  -219,  -219,   357,  -219,  -219,
    -219,    79,   376,   132,  -219,   370,  1144,   358,  -219,  -219,
    -219,  1635,  -219,    68,   353,  -219,  1379,  -219,  -219,  -219,
    -219,  -219,  1033,  1635,   189,  -219,   374,    69,  1011,  -219,
    -219,  -219,  1617,  -219,  -219,   218,   382,  1635,   204,   896,
    -219,  -219,  -219,    20,  1411,  1635,   362,   375,  -219,  -219,
    -219,  1635,  1635,  1635,  1635,  1635,  1635,  1635,  1635,  1635,
    1635,  1635,  1635,  1635,  1635,  1635,  1635,  1635,  1635,  1635,
    -219,  -219,  -219,   387,  -219,   391,  1230,   792,   393,   792,
    1635,  1635,  1635,   327,   824,   392,  -219,  -219,  -219,   190,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  1635,  1635,  -219,  -219,   707,  -219,  -219,  1637,  -219,
     378,  -219,  -219,  -219,   380,  -219,  -219,  -219,  -219,   355,
    -219,   276,  -219,  1635,  -219,  -219,  -219,  -219,  1635,   401,
    -219,  -219,   258,  -219,    53,  -219,  -219,  -219,  -219,  -219,
     267,   267,   254,   254,   286,   286,   286,   286,   282,   282,
     316,   216,   236,   260,    12,   252,  -219,  -219,  -219,   792,
    -219,   311,   338,   339,   404,   824,  1443,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  1475,  -219,  -219,  -219,  -219,
    1635,  -219,  -219,  1635,  -219,   792,   792,   792,  1635,  1635,
    1507,  -219,  -219,  -219,  -219,   335,  -219,  -219,   342,   343,
     792,   346,   792,   402,   792,  -219,   792,  -219,  -219,  -219,
    -219
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     216,     0,     0,     0,   147,   140,    93,    94,    95,    96,
      97,    99,   100,   101,   102,   105,   106,   103,   104,   134,
     135,    98,   113,   114,     0,   218,     0,    83,    85,   107,
       0,   162,   108,    87,     0,   137,     0,   109,     0,   214,
     217,   220,     0,   227,   219,     0,   151,   149,   148,     0,
       0,   129,    81,     0,    89,    91,    84,    86,   118,     0,
     112,     0,     0,   164,   163,   165,    88,   120,     0,   194,
       0,   231,     0,     0,     0,   138,   140,   136,     1,   215,
       0,   227,   227,   227,   222,   223,   141,   152,   150,   139,
     132,     0,   130,     0,     0,    82,     0,   229,     0,   119,
       0,   115,   162,   121,     0,   172,   159,     0,   153,   155,
       0,     4,     0,     0,   168,    32,    31,    27,    29,    30,
      28,     0,     2,     3,     0,     6,     0,     0,     7,    20,
      33,     0,    35,    39,    42,    45,    50,    53,    55,    57,
      59,    61,    63,    80,     0,     0,   166,     0,     0,     0,
     190,   199,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    65,    78,     0,   196,   181,
     182,     0,     0,   183,   184,   185,   186,    91,   195,   230,
     146,   140,     0,     0,   143,     0,     0,     0,   224,   225,
     226,     0,   127,     0,     0,    90,     0,   176,    92,   228,
     111,   116,     0,     0,     0,   122,   124,   164,     0,   157,
     158,   173,     0,   167,    11,     0,   109,     0,    21,     0,
      25,    22,    23,     0,     0,     0,     0,     0,    16,    17,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     169,     8,   174,     0,   170,     0,   190,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   210,   211,   212,     0,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,     0,     0,   200,   192,     0,   191,   197,   198,   144,
       0,   145,   142,   160,     0,   133,   131,   128,   179,     0,
     125,     0,   117,     0,   110,   154,   156,     5,     0,   109,
       9,    12,     0,    18,     0,    14,    15,    37,    38,    36,
      40,    41,    43,    44,    46,    47,    48,    49,    51,    52,
      54,    56,    58,    60,     0,    62,   175,   171,   187,     0,
     189,     0,     0,     0,     0,     0,     0,   209,   213,    66,
      79,   193,   161,   221,   177,     0,   123,   126,    34,    26,
       0,    13,    10,     0,   188,     0,     0,     0,     0,     0,
       0,   178,   180,    19,    64,   201,   203,   204,     0,     0,
       0,     0,     0,     0,     0,   206,     0,   202,   205,   208,
     207
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -219,  -121,   295,  -219,   -58,  -219,  -112,   131,   135,   -21,
     125,   173,   174,   172,   195,   171,  -219,   -59,   -88,  -219,
     -53,   -68,     0,   210,  -219,   352,  -219,   156,  -219,  -219,
     317,   -90,    55,  -219,   159,  -219,   363,   269,   101,     7,
     -15,     9,  -219,   -43,  -219,   245,  -219,  -102,   -56,   -45,
    -194,  -219,  -133,  -219,    -7,   -33,   293,  -218,  -219,  -219,
    -219,  -219,   425,   423,   217,  -219
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   128,   129,   312,   164,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   165,   166,   281,
     167,   144,    69,    70,    53,    54,    27,    28,    29,    30,
     100,   101,    31,   204,   205,    32,    91,    92,    33,    45,
      35,   145,    48,   107,   108,   109,   183,    37,    64,    65,
     198,   299,   168,   169,   170,   171,   172,   173,   174,   175,
     176,    38,    39,    44,    85,    40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,    72,   298,   143,   130,   110,   185,    34,   197,    36,
     201,   216,    36,    47,    49,   143,   130,    43,   146,   230,
     282,    77,    98,   111,   251,   263,   363,    71,    50,   217,
     182,   248,     4,    55,    61,    36,    41,    62,    25,   287,
      63,     3,    75,     4,    36,    34,   346,    36,    97,    80,
     210,   122,   123,    51,   125,    81,    89,    88,    36,   249,
     215,   282,    42,    76,   362,   179,   220,    63,   221,   222,
      63,    59,   178,   130,    19,    20,    63,   177,   202,    36,
     255,    62,    36,    58,    82,   258,    83,  -160,    67,   143,
     130,   199,    94,    86,   143,   130,    60,    95,   178,    90,
      76,   177,   310,    36,   253,    46,     4,   187,   197,   206,
     269,   207,     3,   209,   102,   207,    52,   309,   201,   317,
     318,   319,    81,   295,   338,   191,   340,   369,   370,    47,
       4,   211,   143,   130,     5,   300,   313,   223,    61,   288,
     290,    62,   291,   182,   143,   130,   110,     3,    93,    87,
      43,    82,   287,    83,    58,   102,     4,   104,    67,   102,
     103,   372,   146,   282,   215,     4,   215,   147,   283,     5,
     148,   178,   314,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
      49,   130,    77,   349,   350,   334,   358,   301,   282,   212,
     103,   103,   302,   348,   103,   103,   364,   341,   342,   343,
      26,   207,   213,   224,   103,    99,   225,   324,   325,   326,
     327,    46,   186,   226,   202,    74,   282,    62,   307,   203,
     214,   345,   375,   376,   377,   357,   244,    56,    57,   227,
     228,   229,     4,    66,   143,   130,     5,   385,    26,   387,
     130,   389,   288,   390,   245,    99,    99,   250,   111,    99,
      99,   112,    73,   102,   217,    74,   360,   197,   361,    99,
      78,   106,   373,   202,     1,     2,    62,   234,   235,     3,
       4,   246,     4,   106,     5,     3,   122,   123,   178,   125,
     203,     4,   231,   232,   233,     5,   247,     4,   188,   189,
     190,     5,   257,     4,   374,   130,   259,     5,   206,   103,
      36,   238,   239,   192,   193,   378,   379,   381,   260,   282,
     103,   365,   240,   241,   236,   237,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   178,   282,   282,   366,   367,
     282,   282,   383,   384,   282,   265,   386,   106,   242,   243,
     297,   193,   354,   355,    99,   320,   321,   328,   329,   261,
     111,   322,   323,   149,   150,    99,   113,   262,   264,   266,
     151,   292,   115,   116,   267,    96,   289,   117,   303,   294,
     118,   119,   308,   315,   120,   121,   106,   336,   152,   123,
     124,   125,   337,   126,   127,   347,   316,   339,   344,   352,
     353,   359,   106,   368,   382,   388,   218,   330,   332,   331,
     335,   208,   106,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   333,   153,   154,   155,   195,   156,   157,   158,
     159,   160,   161,   162,   163,   111,   194,   306,   149,   256,
     356,   113,   296,    79,   285,   151,    84,   115,   116,     0,
       0,     0,   117,   270,     0,   118,   119,     0,     0,   120,
     121,     0,     0,   152,   123,   124,   125,     0,   126,   127,
       0,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,     0,     0,     0,     0,     0,     0,     0,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,   153,   154,
     155,     0,   156,   157,   158,   159,   160,   161,   162,   163,
     111,     0,     0,   149,   284,     0,   113,     0,     0,     0,
     151,     0,   115,   116,     0,     0,     0,   117,     0,     0,
     118,   119,     0,     0,   120,   121,     0,     0,   152,   123,
     124,   125,     0,   126,   127,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,   153,   154,   155,     0,   156,   157,   158,
     159,   160,   161,   162,   163,   111,     0,     0,   149,   286,
       0,   113,     0,     0,     0,   151,     0,   115,   116,     0,
       0,     0,   117,     0,     0,   118,   119,     0,     0,   120,
     121,     0,     0,   152,   123,   124,   125,     0,   126,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,   153,   154,
     155,     0,   156,   157,   158,   159,   160,   161,   162,   163,
     111,     0,     0,   149,   351,     0,   113,     0,     0,     0,
     151,     0,   115,   116,     0,     0,     0,   117,     0,     0,
     118,   119,     0,     0,   120,   121,     0,     0,   152,   123,
     124,   125,     0,   126,   127,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,   153,   154,   155,     0,   156,   157,   158,
     159,   160,   161,   162,   163,   111,     0,     0,   149,     0,
       0,   113,     0,     0,     0,   151,     0,   115,   116,     0,
       0,     0,   117,     0,     0,   118,   119,     0,     0,   120,
     121,     0,     0,   152,   123,   124,   125,   111,   126,   127,
     112,     0,     0,   113,     0,     0,     0,   151,     0,   115,
     116,     0,     0,     0,   117,     0,     0,   118,   119,     0,
       0,   120,   121,     0,     0,   122,   123,   124,   125,     0,
     126,   127,     0,     0,     0,     0,     0,     0,   153,   154,
     155,     0,   156,   157,   158,   159,   160,   161,   162,   163,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   111,
       0,     0,   112,     0,     0,   113,     0,     0,     0,     0,
       0,   115,   116,     0,     0,     0,   117,     0,     0,   118,
     119,     1,     2,   120,   121,     0,     3,   122,   123,   124,
     125,     0,   126,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     0,     5,    68,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    96,    68,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   200,     0,     0,     0,     0,     0,     0,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   304,     0,
       0,     0,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,   202,   105,     0,    62,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       4,     0,     0,     0,     5,     0,     0,     0,    61,   105,
       0,    62,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     4,     0,     0,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,     0,
       0,     0,     0,     0,     0,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     3,   180,     0,     0,   111,     0,
       0,   112,     0,     0,   113,     0,   114,     0,     0,     0,
     115,   116,     4,     0,   180,   117,   181,     0,   118,   119,
       0,     0,   120,   121,     0,     0,   122,   123,   124,   125,
       0,   126,   127,   252,     0,   293,     0,     0,     0,     0,
       0,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   -11,   -11,
       0,     0,   -11,   -11,     0,     0,     0,   -11,   -11,   -11,
     -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,     0,     0,     0,     0,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   111,     0,     0,   112,
       0,     0,   113,     0,   184,     0,     0,     0,   115,   116,
       0,     0,     0,   117,     0,     0,   118,   119,     0,     0,
     120,   121,     0,     0,   122,   123,   124,   125,   111,   126,
     127,   112,     0,     0,   113,     0,   254,     0,     0,     0,
     115,   116,     0,     0,     0,   117,     0,     0,   118,   119,
       0,     0,   120,   121,     0,     0,   122,   123,   124,   125,
     111,   126,   127,   112,     0,     0,   113,     0,     0,     0,
     268,     0,   115,   116,     0,     0,     0,   117,     0,     0,
     118,   119,     0,     0,   120,   121,     0,     0,   122,   123,
     124,   125,   111,   126,   127,   196,   214,     0,   113,     0,
       0,     0,     0,     0,   115,   116,     0,     0,     0,   117,
       0,     0,   118,   119,     0,     0,   120,   121,     0,     0,
     122,   123,   124,   125,   111,   126,   127,   112,     0,     0,
     113,   311,     0,     0,     0,     0,   115,   116,     0,     0,
       0,   117,     0,     0,   118,   119,     0,     0,   120,   121,
       0,     0,   122,   123,   124,   125,   111,   126,   127,   112,
       0,     0,   113,     0,     0,     0,   151,     0,   115,   116,
       0,     0,     0,   117,     0,     0,   118,   119,     0,     0,
     120,   121,     0,     0,   122,   123,   124,   125,   111,   126,
     127,   196,   371,     0,   113,     0,     0,     0,     0,     0,
     115,   116,     0,     0,     0,   117,     0,     0,   118,   119,
       0,     0,   120,   121,     0,     0,   122,   123,   124,   125,
     111,   126,   127,   112,     0,     0,   113,   380,     0,     0,
       0,     0,   115,   116,     0,     0,     0,   117,     0,     0,
     118,   119,     0,     0,   120,   121,     0,     0,   122,   123,
     124,   125,   111,   126,   127,   196,     0,     0,   113,     0,
       0,     0,     0,     0,   115,   116,     0,     0,     0,   117,
       0,     0,   118,   119,     0,     0,   120,   121,     0,     0,
     122,   123,   124,   125,   111,   126,   127,   112,     0,     0,
     219,     0,     0,     0,     0,     0,   115,   116,     0,     0,
       0,   117,     0,     0,   118,   119,     0,     0,   120,   121,
       0,     0,   122,   123,   124,   125,   111,   126,   127,   112,
       0,     0,   217,     0,     0,     0,     0,     0,   115,   116,
       0,     0,     0,   117,     0,     0,   118,   119,     0,     0,
     120,   121,     0,     0,   122,   123,   124,   125,   111,   126,
     127,   112,     0,     0,   113,     0,     0,     0,     0,     0,
     115,   116,     0,     0,     0,   117,     0,     0,   118,   119,
       0,     0,   120,   121,     0,     0,   122,   123,   124,   125,
       0,   126,   127,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   305,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24
};

static const yytype_int16 yycheck[] =
{
       0,    34,   196,    62,    62,    61,    74,     0,    96,     0,
     100,   113,     3,     4,     5,    74,    74,    31,    63,   131,
       8,    36,    55,     3,   145,   158,    14,    34,     6,     9,
      73,    17,    27,    26,     9,    26,     3,    12,    38,   172,
      31,     9,    35,    27,    35,    38,   264,    38,    55,    31,
     106,    31,    32,    31,    34,     3,    49,    48,    49,    45,
     113,     8,    29,    31,    11,    72,   124,    58,   126,   127,
      61,     6,    72,   131,    69,    70,    67,    70,     9,    70,
     148,    12,    73,    28,    32,   153,    34,     8,    33,   148,
     148,    98,     8,    10,   153,   153,    31,    13,    98,    31,
      31,    94,   223,    94,   147,     4,    27,    19,   196,   102,
     163,   102,     9,   106,    59,   106,    13,   219,   208,   231,
     232,   233,     3,   191,   257,    28,   259,   345,   346,   120,
      27,    10,   191,   191,    31,   203,   224,   128,     9,   172,
       8,    12,    10,   186,   203,   203,   202,     9,     6,    48,
      31,    32,   285,    34,    99,   100,    27,     6,   103,   104,
      59,   355,   207,     8,   217,    27,   219,     9,    13,    31,
      12,   171,   225,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     181,   249,   207,   281,   282,   248,   308,     8,     8,     8,
      99,   100,    13,    13,   103,   104,   339,   260,   261,   262,
       0,   202,    10,     9,   113,    59,    12,   238,   239,   240,
     241,   120,     9,    19,     9,    12,     8,    12,    10,    14,
       7,   264,   365,   366,   367,   303,    20,    27,    28,    35,
      36,    37,    27,    33,   303,   303,    31,   380,    38,   382,
     308,   384,   285,   386,    18,    99,   100,    11,     3,   103,
     104,     6,     9,   208,     9,    12,     8,   355,    10,   113,
       0,    61,   360,     9,     4,     5,    12,    23,    24,     9,
      27,    21,    27,    73,    31,     9,    31,    32,   288,    34,
      14,    27,    25,    26,    27,    31,    44,    27,    81,    82,
      83,    31,    14,    27,   363,   363,    14,    31,   301,   208,
     301,    29,    30,     7,     8,   368,   369,   370,     9,     8,
     219,    10,    40,    41,    38,    39,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   345,     8,     8,    10,    10,
       8,     8,    10,    10,     8,    31,    10,   147,    42,    43,
       7,     8,     7,     8,   208,   234,   235,   242,   243,     9,
       3,   236,   237,     6,     7,   219,     9,     9,     9,    13,
      13,    11,    15,    16,    13,    28,    10,    20,    14,    31,
      23,    24,    10,    31,    27,    28,   186,    10,    31,    32,
      33,    34,    11,    36,    37,    13,    31,    14,    81,    31,
      30,    10,   202,     9,    79,    13,   121,   244,   246,   245,
     249,   104,   212,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,   247,    76,    77,    78,    94,    80,    81,    82,
      83,    84,    85,    86,    87,     3,    93,   212,     6,     7,
     301,     9,   193,    38,   171,    13,    43,    15,    16,    -1,
      -1,    -1,    20,    28,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,    -1,    36,    37,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
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
      -1,     9,    -1,    -1,    -1,    13,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,     3,    36,    37,
       6,    -1,    -1,     9,    -1,    -1,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,     3,
      -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,     4,     5,    27,    28,    -1,     9,    31,    32,    33,
      34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    28,     6,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,     7,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     7,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,     9,    10,    -1,    12,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,     9,    10,
      -1,    12,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    27,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,     9,    10,    -1,    -1,     3,    -1,
      -1,     6,    -1,    -1,     9,    -1,    11,    -1,    -1,    -1,
      15,    16,    27,    -1,    10,    20,    31,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,    34,
      -1,    36,    37,    10,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
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
      37,     6,    -1,    -1,     9,    -1,    11,    -1,    -1,    -1,
      15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,    34,
       3,    36,    37,     6,    -1,    -1,     9,    -1,    -1,    -1,
      13,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,
      33,    34,     3,    36,    37,     6,     7,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,    33,    34,     3,    36,    37,     6,    -1,    -1,
       9,    10,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,
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
      -1,    36,    37,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     9,    27,    31,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   110,   111,   114,   115,   116,
     117,   120,   123,   126,   127,   128,   129,   135,   149,   150,
     153,     3,    29,    31,   151,   127,   126,   129,   130,   129,
       6,    31,    13,   112,   113,   127,   111,   111,   120,     6,
      31,     9,    12,   129,   136,   137,   111,   120,     6,   110,
     111,   142,   143,     9,    12,   127,    31,   128,     0,   150,
      31,     3,    32,    34,   151,   152,    10,   126,   129,   127,
      31,   124,   125,     6,     8,    13,    28,   142,   143,   115,
     118,   119,   120,   126,     6,    10,   111,   131,   132,   133,
     136,     3,     6,     9,    11,    15,    16,    20,    23,    24,
      27,    28,    31,    32,    33,    34,    36,    37,    89,    90,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   109,   129,   137,     9,    12,     6,
       7,    13,    31,    76,    77,    78,    80,    81,    82,    83,
      84,    85,    86,    87,    92,   105,   106,   108,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   127,   110,   142,
      10,    31,   131,   134,    11,   109,     9,    19,   152,   152,
     152,    28,     7,     8,   124,   113,     6,   106,   138,   142,
       7,   119,     9,    14,   121,   122,   127,   129,   118,   127,
     136,    10,     8,    10,     7,   108,   135,     9,    90,     9,
      92,    92,    92,   129,     9,    12,    19,    35,    36,    37,
      94,    25,    26,    27,    23,    24,    38,    39,    29,    30,
      40,    41,    42,    43,    20,    18,    21,    44,    17,    45,
      11,    89,    10,   131,    11,   109,     7,    14,   109,    14,
       9,     9,     9,   140,     9,    31,    13,    13,    13,   108,
      28,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,   107,     8,    13,     7,   144,     7,   140,   143,    10,
       8,    10,    11,    31,    31,   109,   125,     7,   138,   139,
     109,     8,    13,    14,     7,    75,   133,    10,    10,   135,
      89,    10,    91,   106,   108,    31,    31,    94,    94,    94,
      95,    95,    96,    96,    97,    97,    97,    97,    98,    98,
      99,   100,   101,   102,   108,   103,    10,    11,   140,    14,
     140,   108,   108,   108,    81,   143,   145,    13,    13,   106,
     106,     7,    31,    30,     7,     8,   122,   109,    94,    10,
       8,    10,    11,    14,   140,    10,    10,    10,     9,   145,
     145,     7,   138,   106,   105,   140,   140,   140,   108,   108,
      10,   108,    79,    10,    10,   140,    10,   140,    13,   140,
     140
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    89,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      92,    92,    92,    92,    92,    92,    92,    93,    93,    93,
      93,    93,    93,    94,    94,    95,    95,    95,    95,    96,
      96,    96,    97,    97,    97,    98,    98,    98,    98,    98,
      99,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   104,   105,   105,   106,   106,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   108,   108,
     109,   110,   110,   111,   111,   111,   111,   111,   111,   112,
     112,   113,   113,   114,   114,   114,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     116,   116,   116,   117,   117,   118,   118,   119,   120,   120,
     120,   120,   121,   121,   122,   122,   122,   123,   123,   123,
     124,   124,   125,   125,   126,   126,   127,   127,   127,   127,
     128,   128,   128,   128,   128,   128,   128,   129,   129,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   133,
     134,   134,   135,   135,   136,   136,   136,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   138,   138,   138,   139,
     139,   140,   140,   140,   140,   140,   140,   141,   141,   141,
     142,   142,   142,   142,   143,   143,   144,   144,   144,   145,
     145,   146,   146,   146,   147,   147,   147,   147,   147,   148,
     148,   148,   148,   148,   149,   149,   149,   150,   150,   150,
     150,   150,   151,   151,   152,   152,   152,   152,   153,   153,
     153,   153
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     2,     3,
       4,     2,     3,     4,     3,     3,     2,     2,     1,     3,
       1,     2,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     4,     2,     1,     1,     1,     2,     3,     2,     1,
       2,     1,     1,     3,     1,     2,     3,     4,     5,     2,
       1,     3,     1,     3,     1,     1,     2,     1,     2,     3,
       1,     3,     4,     3,     4,     4,     3,     1,     2,     2,
       3,     1,     2,     1,     3,     1,     3,     2,     2,     1,
       1,     3,     1,     2,     1,     1,     2,     3,     2,     3,
       3,     4,     2,     3,     3,     4,     1,     3,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     3,     3,     4,     1,     2,     1,     2,     2,     1,
       2,     5,     7,     5,     5,     7,     6,     7,     7,     3,
       2,     2,     2,     3,     1,     2,     0,     1,     1,     2,
       2,     6,     2,     2,     2,     2,     2,     0,     4,     3,
       3,     2
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
#line 1870 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 34 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: CONSTANT FINAL\n",linea,  yytext );}
#line 1876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 35 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, yytext );}
#line 1882 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 36 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: LEFT_PARENTHESIS FINAL expression RIGHT_PARETHESIS\n",linea, yytext);}
#line 1888 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 37 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: INTEGER FINAL\n",linea, yytext );}
#line 1894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 41 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression\n",linea, yytext );}
#line 1900 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 42 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: pointer primary_expression\n",linea, yytext);}
#line 1906 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 43 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, yytext );}
#line 1912 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 44 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, yytext);}
#line 1918 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 45 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, yytext);}
#line 1924 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 46 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,yytext);}
#line 1930 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 47 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_PARENTHESIS argument_expression_list LEFT_PARENTHESIS\n",linea, yytext);}
#line 1936 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 48 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DOT IDENTIFIER\n",linea, yytext);}
#line 1942 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 49 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression PTR_OP IDENTIFIER\n",linea, yytext);}
#line 1948 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 50 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression INC_OP\n",linea, yytext );}
#line 1954 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 51 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DEC_OP\n",linea, yytext );}
#line 1960 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 57 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: assignment_expression\n",linea, yytext);}
#line 1966 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 58 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: argument_expression_list COMMA assignment_expression\n",linea, yytext);}
#line 1972 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 62 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: postfix_expression\n",linea, yytext );}
#line 1978 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 63 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression:pointer postfix_expression\n",linea, yytext);}
#line 1984 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 64 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: INC_OP unary_expression\n",linea, yytext );}
#line 1990 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 65 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: DEC_OP unary_expression\n",linea, yytext );}
#line 1996 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 66 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: unary_operator cast_expression\n",linea, yytext );}
#line 2002 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 67 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, yytext );}
#line 2008 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 68 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, yytext );}
#line 2014 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 72 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: BIT_AND\n",linea, yytext );}
#line 2020 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 73 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MUL\n",linea, yytext );}
#line 2026 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 74 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PLUS\n",linea, yytext );}
#line 2032 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 75 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MINUS\n",linea, yytext );}
#line 2038 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 76 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PRIME\n",linea, yytext );}
#line 2044 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 77 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: EXCLAMATION\n",linea, yytext);}
#line 2050 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 81 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: unary_expression\n",linea, yytext);}
#line 2056 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 82 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, yytext);}
#line 2062 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 86 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: cast_expression\n",linea, yytext);}
#line 2068 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 87 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MUL cast_expression\n",linea, yytext );}
#line 2074 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 88 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression DIV cast_expression\n",linea, yytext );}
#line 2080 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 89 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MOD cast_expression\n",linea,yytext );}
#line 2086 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 93 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: multiplicative_expression\n",linea,yytext );}
#line 2092 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 94 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression PLUS multiplicative_expression\n",linea,yytext) ;}
#line 2098 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 95 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression MINUS multiplicative_expression\n",linea, yytext) ;}
#line 2104 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 99 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: additive_expression\n",linea, yytext );}
#line 2110 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 100 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, yytext);}
#line 2116 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 101 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression RIGHT_OP additive_expression \n",linea, yytext);}
#line 2122 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 105 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: shift_expression\n",linea, yytext);}
#line 2128 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 106 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LESS shift_expression\n",linea, yytext);}
#line 2134 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 107 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GREATER shift_expression\n",linea, yytext );}
#line 2140 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 108 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LE_OP shift_expression\n",linea, yytext);}
#line 2146 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 109 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GE_OP shift_expression\n",linea, yytext );}
#line 2152 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 113 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: relational_expression\n",linea, yytext);}
#line 2158 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 114 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression EQ_OP relational_expression\n",linea, yytext );}
#line 2164 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 115 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression NE_OP relational_expression\n",linea, yytext);}
#line 2170 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 119 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: equality_expression\n",linea, yytext );}
#line 2176 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 120 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: and_expression BIT_AND equality_expression\n",linea, yytext);}
#line 2182 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 124 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: and_expression\n",linea, yytext );}
#line 2188 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 125 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: exclusive_or_expression UP_ARROW and_expression\n",linea, yytext );}
#line 2194 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 129 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: exclusive_or_expression\n",linea, yytext);}
#line 2200 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 130 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression\n",linea, yytext );}
#line 2206 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 134 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: inclusive_or_expression\n",linea,yytext );}
#line 2212 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 135 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n",linea, yytext);}
#line 2218 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 139 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_and_expression\n",linea,yytext);}
#line 2224 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 140 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_or_expression OR_OP logical_and_expression\n",linea, yytext );}
#line 2230 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 144 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression\n",linea, yytext);}
#line 2236 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 145 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression INTERROGATION expression COLON conditional_expression\n",linea,yytext);}
#line 2242 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 149 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: conditional_expression\n",linea, yytext);}
#line 2248 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 150 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: unary_expression assignment_operator assignment_expression\n",linea,yytext);}
#line 2254 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 154 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: EQU\n",linea, yytext);}
#line 2260 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 155 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MUL_ASSIGN\n",linea,yytext );}
#line 2266 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 156 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: DIV_ASSIGN\n",linea,yytext);}
#line 2272 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 157 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MOD_ASSIGN\n",linea,yytext);}
#line 2278 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 158 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: ADD_ASSIGN\n",linea, yytext);}
#line 2284 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 159 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: SUB_ASSIGN\n",linea, yytext);}
#line 2290 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 160 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: LEFT_ASSIGN\n",linea, yytext);}
#line 2296 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 161 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: RIGHT_ASSIGN\n",linea,yytext);}
#line 2302 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 162 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: AND_ASSIGN\n",linea, yytext);}
#line 2308 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 163 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: XOR_ASSIGN\n",linea, yytext);}
#line 2314 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 164 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: OR_ASSIGN\n",linea, yytext);}
#line 2320 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 168 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: assignment_expression\n",linea, yytext);}
#line 2326 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 169 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: expression COMMA assignment_expression\n",linea,yytext);}
#line 2332 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 173 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  constant_expression: conditional_expression\n",linea, yytext );}
#line 2338 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 177 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers SEMICOLON \n",linea, yytext );}
#line 2344 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 178 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers init_declarator_list SEMICOLON\n",linea, yytext);}
#line 2350 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 182 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier \n",linea, yytext);}
#line 2356 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 183 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier declaration_specifiers\n",linea, yytext);}
#line 2362 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 184 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier\n",linea, yytext);}
#line 2368 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 185 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, yytext);}
#line 2374 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier\n",linea, yytext );}
#line 2380 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 187 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier declaration_specifiers\n",linea, yytext );}
#line 2386 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 191 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator\n",linea, yytext );}
#line 2392 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 192 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator_list COMMA init_declarator\n",linea,yytext);}
#line 2398 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 196 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator\n",linea, yytext );}
#line 2404 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 197 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator EQU initializer\n",linea, yytext );}
#line 2410 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 201 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: TYPEDEF\n",linea, yytext);}
#line 2416 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 202 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: EXTERN\n",linea, yytext);}
#line 2422 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 203 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: STATIC\n",linea,yytext);}
#line 2428 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 204 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: AUTO\n",linea, yytext);}
#line 2434 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 205 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: REGISTER\n",linea, yytext);}
#line 2440 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 209 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: VOID\n",linea, yytext);}
#line 2446 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 210 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: CHAR\n",linea, yytext);}
#line 2452 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 211 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SHORT\n",linea, yytext);}
#line 2458 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 212 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: INT\n",linea, yytext);}
#line 2464 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 213 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: LONG\n",linea, yytext);}
#line 2470 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 214 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: FLOAT\n",linea, yytext);}
#line 2476 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 215 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: DOUBLE\n",linea, yytext);}
#line 2482 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 216 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SIGNED\n",linea, yytext);}
#line 2488 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 217 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: UNSIGNED\n",linea, yytext);}
#line 2494 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 218 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: struct_or_union_specifier\n",linea, yytext );}
#line 2500 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 219 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: enum_specifier\n",linea, yytext );}
#line 2506 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 220 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: TYPE_NAME\n",linea,yytext);}
#line 2512 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 225 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET \n",linea, yytext );}
#line 2518 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 226 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET\n",linea,yytext );}
#line 2524 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 227 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER\n",linea, yytext);}
#line 2530 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 231 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: STRUCT\n",linea, yytext);}
#line 2536 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 232 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: UNION\n",linea, yytext);}
#line 2542 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 236 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration\n",linea, yytext );}
#line 2548 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 237 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration_list struct_declaration\n",linea, yytext );}
#line 2554 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 241 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON\n",linea, yytext );}
#line 2560 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 245 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier specifier_qualifier_list\n",linea, yytext );}
#line 2566 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 246 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier\n",linea, yytext );}
#line 2572 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 247 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier specifier_qualifier_list\n",linea,yytext);}
#line 2578 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 248 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier\n",linea, yytext );}
#line 2584 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 252 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator\n",linea, yytext );}
#line 2590 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 253 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator_list COMMA struct_declarator\n",linea, yytext );}
#line 2596 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 257 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator\n",linea, yytext );}
#line 2602 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 258 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: COLON constant_expression \n",linea, yytext );}
#line 2608 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 259 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator COLON constant_expression \n",linea, yytext);}
#line 2614 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 263 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET\n",linea, yytext);}
#line 2620 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 264 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET \n",linea,yytext);}
#line 2626 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 265 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER\n",linea, yytext );}
#line 2632 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 269 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator\n",linea, yytext);}
#line 2638 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 270 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator_list COMMA enumerator\n",linea, yytext );}
#line 2644 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 274 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER\n",linea, gramaticas);}
#line 2650 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 275 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER EQU constant_expression\n",linea,gramaticas);}
#line 2656 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 279 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: CONST\n",linea,yytext);}
#line 2662 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 280 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: VOLATILE\n",linea, yytext);}
#line 2668 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 284 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: pointer direct_declarator \n",linea, gramaticas );}
#line 2674 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 285 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: direct_declarator\n",linea, gramaticas );}
#line 2680 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 286 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: declarator direct_declarator\n",linea, gramaticas );}
#line 2686 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 287 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: IDENTIFIER pointer declarator \n",linea, gramaticas );}
#line 2692 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 293 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: IDENTIFIER\n",linea, gramaticas);}
#line 2698 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 294 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, yytext );}
#line 2704 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 295 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET\n",linea,yytext);}
#line 2710 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 296 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, yytext );}
#line 2716 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 297 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea, yytext );}
#line 2722 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 298 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS\n",linea, yytext );}
#line 2728 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 299 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,yytext);}
#line 2734 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 304 "parser.y" /* yacc.c:1646  */
    { printf("%d con %s  pointer: MUL\n",linea, gramaticas);}
#line 2740 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 305 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: MUL type_qualifier_list\n",linea, gramaticas );}
#line 2746 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 306 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: MUL pointer\n",linea, gramaticas );}
#line 2752 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 307 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: MUL type_qualifier_list pointer\n",linea,gramaticas);}
#line 2758 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 311 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier\n",linea,yytext );}
#line 2764 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 312 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier_list type_qualifier\n",linea, yytext );}
#line 2770 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 317 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list\n",linea, yytext );}
#line 2776 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 318 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list COMMA ELLIPSIS\n",linea, yytext);}
#line 2782 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 322 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_declaration\n",linea, yytext);}
#line 2788 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 323 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_list COMMA parameter_declaration\n",linea, yytext);}
#line 2794 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 327 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers declarator\n",linea, yytext );}
#line 2800 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 328 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, yytext );}
#line 2806 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 329 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers\n",linea, yytext );}
#line 2812 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 333 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER\n",linea, yytext);(yyval)=strdup(yytext);}
#line 2818 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 334 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: identifier_list COMMA IDENTIFIER\n",linea, yytext );}
#line 2824 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 338 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list\n",linea, yytext);}
#line 2830 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 339 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list abstract_declarator\n",linea, yytext);}
#line 2836 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 343 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer\n",linea, yytext);}
#line 2842 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 344 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: direct_abstract_declarator\n",linea, yytext );}
#line 2848 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 345 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer direct_abstract_declarator\n",linea, yytext);}
#line 2854 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 349 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS \n",linea, yytext );}
#line 2860 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 350 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator:  LEFT_SBRACKET RIGHT_SBRACKET \n",linea, yytext);}
#line 2866 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 351 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, yytext );}
#line 2872 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 352 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, yytext );}
#line 2878 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 353 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, yytext );}
#line 2884 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 354 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea, yytext);}
#line 2890 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 355 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS \n",linea, yytext );}
#line 2896 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 356 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,yytext );}
#line 2902 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 357 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea,  yytext  );}
#line 2908 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 361 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: assignment_expression\n",linea, yytext );}
#line 2914 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 362 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list RIGHT_BRACKET\n",linea,  yytext );}
#line 2920 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 363 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET\n",linea, yytext );}
#line 2926 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 367 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer\n",linea, yytext);}
#line 2932 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 368 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer_list COMMA initializer \n",linea, yytext);}
#line 2938 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 372 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: labeled_statement\n",linea, yytext );}
#line 2944 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 373 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: compound_statement\n",linea, yytext);}
#line 2950 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 374 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: expression_statement\n",linea,yytext );}
#line 2956 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 375 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: selection_statement\n",linea, yytext);}
#line 2962 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 376 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: iteration_statement\n",linea, yytext );}
#line 2968 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 377 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: jump_statement\n",linea, yytext );}
#line 2974 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 381 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: IDENTIFIER COLON statement \n",linea, yytext );}
#line 2980 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 382 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: CASE constant_expression COLON statement\n",linea, yytext );}
#line 2986 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 383 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: DEFAULT COLON statement\n",linea, yytext );}
#line 2992 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 387 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET RIGHT_BRACKET\n",linea, yytext);}
#line 2998 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 388 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET statement_list RIGHT_BRACKET\n",linea, yytext );}
#line 3004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 389 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list RIGHT_BRACKET\n",linea, yytext);}
#line 3010 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 390 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET\n",linea, yytext);}
#line 3016 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 395 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration\n",linea, yytext );}
#line 3022 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 396 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration_list declaration\n",linea, yytext);}
#line 3028 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 400 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement\n",linea, yytext );}
#line 3034 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 401 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement_list statement\n",linea, yytext);}
#line 3040 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 406 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: SEMICOLON\n",linea, yytext );}
#line 3046 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 407 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: expression SEMICOLON \n",linea, yytext );}
#line 3052 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 411 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea,yytext);}
#line 3058 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 412 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement\n",linea, yytext);}
#line 3064 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 413 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, yytext );}
#line 3070 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 417 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, yytext);}
#line 3076 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 418 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON\n",linea, yytext);}
#line 3082 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 419 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, yytext );}
#line 3088 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 420 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, yytext);}
#line 3094 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 421 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, yytext);}
#line 3100 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 425 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: GOTO IDENTIFIER SEMICOLON\n",linea, yytext );}
#line 3106 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 426 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: CONTINUE SEMICOLON\n",linea, yytext);}
#line 3112 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 427 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: BREAK SEMICOLON\n",linea, yytext);}
#line 3118 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 428 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN SEMICOLON\n",linea, yytext);}
#line 3124 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 429 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN expression SEMICOLON\n",linea, yytext);}
#line 3130 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 433 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a external_declaration\n",linea, yytext);memset(gramaticas,0,sizeof(gramaticas));}
#line 3136 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 434 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a ciclo translation_unit\n",linea, yytext );memset(gramaticas,0,sizeof(gramaticas));}
#line 3142 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 435 "parser.y" /* yacc.c:1646  */
    {printf("%d  translation_unit: Archivo Vacío\n",linea );memset(gramaticas,0,sizeof(gramaticas));}
#line 3148 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 440 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: function_definition\n",linea, yytext);}
#line 3154 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 441 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: declaration\n",linea, yytext);}
#line 3160 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 442 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: DEFINE define\n",linea, yytext);}
#line 3166 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 443 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, yytext);}
#line 3172 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 444 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, yytext);}
#line 3178 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 447 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define: IDENTIFIER define\n",linea, yytext);(yyval)=strdup(yytext);}
#line 3184 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 448 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define: IDENTIFIER define_continue\n",linea, yytext);}
#line 3190 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 451 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define_continue: LITERAL define_continue\n",linea, yytext);}
#line 3196 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 452 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define_continue:CONSTANT define_continue\n",linea, yytext);}
#line 3202 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 453 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define_continue:  INTEGER define_continue\n",linea, yytext);}
#line 3208 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 458 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator declaration_list compound_statement\n",linea,yytext);}
#line 3214 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 459 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator compound_statement \n",linea, yytext);}
#line 3220 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 460 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator declaration_list compound_statement\n",linea, yytext );}
#line 3226 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 461 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator compound_statement\n",linea,yytext);}
#line 3232 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 3236 "parser.tab.c" /* yacc.c:1646  */
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
#line 464 "parser.y" /* yacc.c:1906  */


#include<stdio.h>
