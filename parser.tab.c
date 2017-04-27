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
    LEFT_BRACKET = 258,
    RIGHT_BRACKET = 259,
    COMMA = 260,
    LEFT_PARENTHESIS = 261,
    RIGHT_PARENTHESIS = 262,
    RIGHT_SBRACKET = 263,
    LEFT_SBRACKET = 264,
    SEMICOLON = 265,
    COLON = 266,
    EXCLAMATION = 267,
    PRIME = 268,
    INTERROGATION = 269,
    UP_ARROW = 270,
    DOT = 271,
    BIT_AND = 272,
    BIT_OR = 273,
    COMMENT = 274,
    PLUS = 275,
    MINUS = 276,
    DIV = 277,
    MOD = 278,
    MUL = 279,
    EQU = 280,
    LESS = 281,
    GREATER = 282,
    IDENTIFIER = 283,
    CONSTANT = 284,
    STRING_LITERAL = 285,
    SIZEOF = 286,
    INTEGER = 287,
    PTR_OP = 288,
    INC_OP = 289,
    DEC_OP = 290,
    LEFT_OP = 291,
    RIGHT_OP = 292,
    LE_OP = 293,
    GE_OP = 294,
    EQ_OP = 295,
    NE_OP = 296,
    AND_OP = 297,
    OR_OP = 298,
    MUL_ASSIGN = 299,
    DIV_ASSIGN = 300,
    MOD_ASSIGN = 301,
    ADD_ASSIGN = 302,
    SUB_ASSIGN = 303,
    LEFT_ASSIGN = 304,
    RIGHT_ASSIGN = 305,
    AND_ASSIGN = 306,
    XOR_ASSIGN = 307,
    OR_ASSIGN = 308,
    TYPE_NAME = 309,
    TYPEDEF = 310,
    EXTERN = 311,
    STATIC = 312,
    AUTO = 313,
    REGISTER = 314,
    CHAR = 315,
    SHORT = 316,
    INT = 317,
    LONG = 318,
    SIGNED = 319,
    UNSIGNED = 320,
    FLOAT = 321,
    DOUBLE = 322,
    CONST = 323,
    VOLATILE = 324,
    VOID = 325,
    STRUCT = 326,
    UNION = 327,
    ENUM = 328,
    ELLIPSIS = 329,
    CASE = 330,
    DEFAULT = 331,
    IF = 332,
    ELSE = 333,
    SWITCH = 334,
    WHILE = 335,
    DO = 336,
    FOR = 337,
    GOTO = 338,
    CONTINUE = 339,
    BREAK = 340,
    RETURN = 341
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

#line 211 "parser.tab.c" /* yacc.c:358  */

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
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  214
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  351

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

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
      85,    86
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    30,    30,    31,    32,    33,    34,    38,    39,    40,
      41,    42,    43,    44,    45,    51,    52,    56,    57,    58,
      59,    60,    61,    65,    66,    67,    68,    69,    70,    74,
      75,    79,    80,    81,    82,    86,    87,    88,    92,    93,
      94,    98,    99,   100,   101,   102,   106,   107,   108,   112,
     113,   117,   118,   122,   123,   127,   128,   132,   133,   137,
     138,   142,   143,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   161,   162,   166,   170,   171,   175,
     176,   177,   178,   179,   180,   184,   185,   189,   190,   194,
     195,   196,   197,   198,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   217,   218,   219,   223,
     224,   228,   229,   233,   237,   238,   239,   240,   244,   245,
     249,   250,   251,   255,   256,   257,   261,   262,   266,   267,
     271,   272,   276,   277,   281,   282,   283,   284,   285,   286,
     287,   291,   292,   293,   294,   298,   299,   304,   305,   309,
     310,   314,   315,   316,   320,   321,   325,   326,   330,   331,
     332,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     348,   349,   350,   354,   355,   359,   360,   361,   362,   363,
     364,   368,   369,   370,   374,   375,   376,   377,   381,   382,
     386,   387,   391,   392,   396,   397,   398,   402,   403,   404,
     405,   409,   410,   411,   412,   413,   417,   418,   419,   423,
     424,   428,   429,   430,   431
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LEFT_BRACKET", "RIGHT_BRACKET", "COMMA",
  "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "RIGHT_SBRACKET",
  "LEFT_SBRACKET", "SEMICOLON", "COLON", "EXCLAMATION", "PRIME",
  "INTERROGATION", "UP_ARROW", "DOT", "BIT_AND", "BIT_OR", "COMMENT",
  "PLUS", "MINUS", "DIV", "MOD", "MUL", "EQU", "LESS", "GREATER",
  "IDENTIFIER", "CONSTANT", "STRING_LITERAL", "SIZEOF", "INTEGER",
  "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "TYPEDEF",
  "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR", "SHORT", "INT", "LONG",
  "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID",
  "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE",
  "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN",
  "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
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
     335,   336,   337,   338,   339,   340,   341
};
# endif

#define YYPACT_NINF -177

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-177)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     839,    83,    -4,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,  -177,  -177,    14,  -177,    73,  1231,  1231,  -177,    21,
    -177,  1231,   632,   140,    50,   561,  -177,  -177,    15,  -177,
    -177,    -4,    33,    29,  -177,    20,  -177,   611,  -177,  -177,
     353,    52,  -177,   293,  -177,    73,  -177,   632,   906,   994,
     140,  -177,  -177,  -177,  -177,  -177,    45,    95,  -177,    33,
      83,  -177,   911,  -177,   632,   353,   269,  -177,   176,   353,
     353,  -177,   720,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,   110,  -177,  1180,  -177,  1204,  1204,  1228,   117,   173,
     177,   196,   578,   210,   211,   240,   243,  1021,  -177,    69,
     174,  1228,  -177,   101,   120,    79,   167,   134,   239,   250,
     252,   234,     9,  -177,  -177,    71,  -177,  -177,  -177,   377,
     461,  -177,  -177,  -177,  -177,   247,  -177,  -177,  -177,  -177,
      63,   270,   273,  -177,   179,  -177,  -177,  -177,  -177,   272,
    1228,  -177,    33,   145,  -177,   911,  -177,  -177,  -177,  -177,
    -177,  -177,  1228,   107,  -177,   268,  -177,   652,   223,   102,
     275,   578,   720,  -177,  1228,  -177,  -177,   274,   578,  1228,
    1228,  1228,   203,  1048,   277,  -177,  -177,  -177,   109,  1078,
    1228,   260,   262,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,  -177,  -177,  -177,  -177,  -177,  1228,  -177,  1228,  1228,
    1228,  1228,  1228,  1228,  1228,  1228,  1228,  1228,  1228,  1228,
    1228,  1228,  1228,  1228,  1228,  1228,  1228,  1228,  -177,  -177,
     494,  -177,  -177,   751,  1102,  -177,    60,  -177,   226,  -177,
    1210,   263,  -177,  -177,  -177,  -177,  -177,  -177,   193,  -177,
     176,  -177,  1228,  -177,  -177,   819,   230,  -177,  1228,  -177,
     285,   578,  -177,   224,   237,   238,   278,  1048,  -177,  -177,
    -177,   256,  -177,   113,  -177,  -177,  -177,  -177,  -177,  -177,
     101,   101,   120,   120,    79,    79,    79,    79,   167,   167,
     134,   239,   250,   252,     3,   234,  -177,  -177,  -177,   286,
     287,  -177,   289,   226,   926,  1126,  -177,  -177,  -177,  -177,
     827,  -177,  -177,  -177,  -177,  -177,   578,   578,   578,  1228,
    1156,  1228,  -177,  -177,  1228,  -177,  -177,  -177,  -177,   288,
    -177,   291,  -177,  -177,   231,  -177,  -177,   259,   578,   264,
    -177,  -177,  -177,  -177,   578,   298,  -177,   578,  -177,  -177,
    -177
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
    -177,  -177,  -177,  -177,   -57,  -177,   -77,     1,    -6,   -26,
      27,    80,    89,    92,    94,    90,  -177,   -56,   -59,  -177,
     -45,   -64,    10,     0,  -177,   249,  -177,   -29,  -177,  -177,
     246,   -75,   -63,  -177,    70,  -177,   276,   191,   135,     4,
     -27,     2,  -177,   -52,  -177,   104,  -177,   195,  -112,  -176,
    -137,  -177,   -58,  -177,    16,   -38,   217,  -172,  -177,  -177,
    -177,  -177,   336,  -177
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
      25,   161,   147,   148,    40,    38,   141,    60,   227,    74,
      24,   267,   159,   156,   324,   129,   166,    42,   247,   169,
       2,    75,    63,   225,    50,    70,    48,    49,   237,    47,
      71,    52,    69,   177,   207,    25,   173,   168,   175,   176,
     147,   148,    43,    65,   182,    24,    75,    75,    56,    51,
      75,    75,   226,    75,   147,    80,     1,   257,   140,   135,
     303,    66,   188,    73,    18,    19,   233,   136,   234,   233,
     150,   234,   232,   137,   135,   189,   227,   190,     3,     1,
     303,   228,   165,    44,   136,   191,   244,     2,     3,     1,
     158,     3,   161,   147,   148,   320,   156,     2,   249,   151,
     152,     3,   192,   193,   194,   147,   148,     2,   255,   169,
     234,     3,   250,   259,   227,   213,   214,   251,   227,   269,
     262,   171,   323,   208,   209,   210,     2,   168,   178,   168,
     272,   277,   278,   279,   263,   264,   265,    39,    75,   136,
     211,   212,   236,    75,   235,   273,    58,   276,    59,   246,
     152,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   296,   147,
     302,   256,   232,   333,   219,   220,    64,   147,   148,   179,
     294,   313,     1,   180,   241,    79,   242,   162,   312,   284,
     285,   286,   287,   215,   216,   147,   148,   309,   310,   195,
       2,   147,   181,   315,     3,   217,   218,   282,   283,    60,
      79,    79,   280,   281,    79,    79,   183,    79,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   227,   227,
     254,   316,   304,   140,   305,   236,   255,    38,   234,   184,
     140,   331,   227,   227,   317,   318,   288,   289,   147,   148,
     185,   156,   329,   186,   165,   140,   221,   256,   334,   335,
     336,   321,   340,   322,   227,   222,   345,   147,   341,   227,
     223,   347,    72,   160,   337,   339,   224,   239,   240,   252,
     346,   243,   258,   266,   319,   261,   348,   268,   274,   350,
     275,   308,   314,   325,   326,   342,    53,    81,   327,    82,
     343,   290,    79,    83,   140,    84,    85,    79,   349,   344,
      86,   291,    87,    88,    89,   292,   295,    90,   293,   154,
     311,    91,    92,     4,    93,    94,   167,    95,    96,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   245,   307,   153,   230,     4,     5,     6,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,     0,     0,     0,     0,     0,     1,     0,    97,
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
      82,     0,     0,   145,     0,     0,    84,    85,     0,     0,
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
       0,    76,    59,    59,     2,     1,    58,    34,     5,    47,
       0,   183,    75,    72,    11,    53,    79,     3,   155,    82,
      24,    50,     7,    14,     3,     5,    26,    27,   140,    25,
      10,    31,     3,    97,   111,    35,    93,    82,    95,    96,
      97,    97,    28,    41,   102,    35,    75,    76,    32,    28,
      79,    80,    43,    82,   111,     3,     6,   169,    58,    55,
     236,    28,   107,    47,    68,    69,     6,    57,     8,     6,
      25,     8,   130,    57,    70,     6,     5,     8,    28,     6,
     256,    10,    78,    10,    74,    16,   150,    24,    28,     6,
      74,    28,   167,   150,   150,   267,   155,    24,   162,     4,
       5,    28,    33,    34,    35,   162,   162,    24,     6,   172,
       8,    28,     5,   171,     5,    36,    37,    10,     5,    10,
     178,    11,     9,    22,    23,    24,    24,   172,    11,   174,
     189,   208,   209,   210,   179,   180,   181,     2,   167,   129,
      20,    21,   140,   172,   140,   190,     6,   206,     8,     4,
       5,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   227,   226,
     234,   169,   230,   310,    40,    41,    41,   234,   234,     6,
     225,   258,     6,     6,     5,    50,     7,    11,   252,   215,
     216,   217,   218,    26,    27,   252,   252,     4,     5,    25,
      24,   258,     6,   261,    28,    38,    39,   213,   214,   236,
      75,    76,   211,   212,    79,    80,     6,    82,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     5,     5,
       7,     7,     6,   233,     8,   233,     6,   233,     8,    28,
     240,   305,     5,     5,     7,     7,   219,   220,   305,   305,
      10,   310,   304,    10,   250,   255,    17,   255,   316,   317,
     318,     5,   321,     7,     5,    15,     7,   324,   324,     5,
      18,     7,    25,     4,   319,   320,    42,     7,     5,    11,
     338,     9,     7,    80,     6,    11,   344,    10,    28,   347,
      28,    28,     7,     7,     7,     7,     3,     4,     9,     6,
       9,   221,   167,    10,   304,    12,    13,   172,    10,    78,
      17,   222,    19,    20,    21,   223,   226,    24,   224,    70,
     250,    28,    29,    54,    31,    32,    80,    34,    35,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,   152,   240,    69,   129,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,   172,    75,    76,
      77,    35,    79,    80,    81,    82,    83,    84,    85,    86,
       3,     4,    -1,     6,    -1,    -1,    -1,    10,    -1,    12,
      13,    -1,    -1,    -1,    17,    -1,    19,    20,    21,    -1,
      -1,    24,    -1,    -1,    -1,    28,    29,    54,    31,    32,
      -1,    34,    35,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    -1,    75,    76,    77,    -1,    79,    80,    81,    82,
      83,    84,    85,    86,     3,     4,    -1,     6,    -1,    -1,
      -1,    10,    -1,    12,    13,    -1,    -1,    -1,    17,    -1,
      19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    32,    -1,    34,    35,     3,     4,    -1,
       6,    -1,    -1,    -1,    10,    -1,    12,    13,    -1,    -1,
      -1,    17,    -1,    19,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    28,    29,    -1,    31,    32,    -1,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    -1,
      79,    80,    81,    82,    83,    84,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     0,    -1,    -1,    -1,    -1,    -1,     6,    -1,    75,
      76,    77,    -1,    79,    80,    81,    82,    83,    84,    85,
      86,     3,    -1,    -1,     6,    24,    -1,    -1,    10,    28,
      12,    13,    -1,    -1,    -1,    17,    -1,    19,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    28,    29,    -1,    31,
      32,    -1,    34,    35,     3,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     3,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,     4,    79,    80,    81,
      82,    83,    84,    85,    86,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    54,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    -1,    17,    -1,    19,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    28,    29,
      -1,    31,    32,    -1,    34,    35,    -1,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    24,    -1,    -1,    -1,    28,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     6,     7,     8,    -1,    -1,
       3,     4,    -1,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    24,    17,     6,    19,    20,    21,    -1,
      -1,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    32,
      -1,    34,    35,    24,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,     7,     3,    -1,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    17,    -1,
      19,    20,    21,     7,    28,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    32,    -1,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       6,    -1,    -1,     9,    -1,    -1,    12,    13,    -1,    -1,
      -1,    17,    -1,    19,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    28,    29,    -1,    31,    32,     6,    34,    35,
      -1,    10,    -1,    12,    13,    -1,    -1,    -1,    17,    -1,
      19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    32,     6,    34,    35,    -1,    10,    -1,
      12,    13,    -1,    -1,    -1,    17,    -1,    19,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    28,    29,    -1,    31,
      32,    -1,    34,    35,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    -1,    17,    -1,    19,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    28,    29,     6,    31,
      32,     9,    34,    35,    12,    13,    -1,    -1,    -1,    17,
      -1,    19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      28,    29,     6,    31,    32,     9,    34,    35,    12,    13,
      -1,    -1,    -1,    17,    -1,    19,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    28,    29,    -1,    31,    32,    -1,
      34,    35,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    -1,    -1,    17,    -1,    19,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    28,    29,     6,    31,    32,    -1,
      34,    35,    12,    13,    -1,    -1,    -1,    17,    -1,    19,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    28,    29,
       6,    31,    32,    -1,    34,    35,    12,    13,    -1,    -1,
      -1,    17,    -1,    19,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    28,    29,     6,    31,    32,    -1,    34,    35,
      12,    13,    -1,    -1,    -1,    17,    -1,    19,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    28,    29,    -1,    31,
      32,    -1,    34,    35,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    24,    28,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,   109,   110,   113,   114,   115,   116,
     122,   125,   126,   127,   128,   148,   149,   150,   126,   125,
     128,   129,     3,    28,    10,   111,   112,   126,   110,   110,
       3,    28,   110,     3,   109,   110,   141,   142,     6,     8,
     127,     0,   149,     7,   125,   128,    28,   123,   124,     3,
       5,    10,    25,   141,   142,   114,   117,   118,   119,   125,
       3,     4,     6,    10,    12,    13,    17,    19,    20,    21,
      24,    28,    29,    31,    32,    34,    35,    75,    76,    77,
      79,    80,    81,    82,    83,    84,    85,    86,    88,    89,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   107,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   126,   109,   141,     7,    28,
     110,   130,   131,   132,   133,     9,    28,    91,   104,   108,
      25,     4,     5,   123,   112,     3,   105,   137,   141,   119,
       4,   118,    11,   120,   121,   126,   119,   117,   107,   119,
     134,    11,     6,    91,     6,    91,    91,   108,    11,     6,
       6,     6,   139,     6,    28,    10,    10,    10,   107,     6,
       8,    16,    33,    34,    35,    25,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   106,    93,    22,    23,
      24,    20,    21,    36,    37,    26,    27,    38,    39,    40,
      41,    17,    15,    18,    42,    14,    43,     5,    10,     4,
     143,     4,   139,     6,     8,   126,   128,   135,   136,     7,
       5,     5,     7,     9,   108,   124,     4,   137,   138,   108,
       5,    10,    11,     4,     7,     6,   128,   135,     7,   139,
     134,    11,   139,   107,   107,   107,    80,   144,    10,    10,
       7,    90,   105,   107,    28,    28,   105,    93,    93,    93,
      94,    94,    95,    95,    96,    96,    96,    96,    97,    97,
      98,    99,   100,   101,   107,   102,   105,     4,     7,   130,
     135,     9,   108,   136,     6,     8,    74,   132,    28,     4,
       5,   121,   108,    93,     7,   139,     7,     7,     7,     6,
     144,     5,     7,     9,    11,     7,     7,     9,     7,   130,
       9,   108,     4,   137,   139,   139,   139,   107,     7,   107,
     105,   104,     7,     9,    78,     7,   139,     7,   139,    10,
     139
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    88,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    92,    93,
      93,    94,    94,    94,    94,    95,    95,    95,    96,    96,
      96,    97,    97,    97,    97,    97,    98,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   107,   107,   108,   109,   109,   110,
     110,   110,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   113,   113,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   115,   116,
     116,   117,   117,   118,   119,   119,   119,   119,   120,   120,
     121,   121,   121,   122,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   127,   127,   127,   127,
     127,   128,   128,   128,   128,   129,   129,   130,   130,   131,
     131,   132,   132,   132,   133,   133,   134,   134,   135,   135,
     135,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   137,   138,   138,   139,   139,   139,   139,   139,
     139,   140,   140,   140,   141,   141,   141,   141,   142,   142,
     143,   143,   144,   144,   145,   145,   145,   146,   146,   146,
     146,   147,   147,   147,   147,   147,   148,   148,   148,   149,
     149,   150,   150,   150,   150
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
      
#line 1765 "parser.tab.c" /* yacc.c:1646  */
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
#line 434 "parser.y" /* yacc.c:1906  */


#include<stdio.h>
extern linea;
/*extern void yyerror(char *texto){
 	if(strcmp(texto,"syntax error"))
  		printf(" Syntax Error in Line : %d : %s\n",linea,texto);
      
};*/
