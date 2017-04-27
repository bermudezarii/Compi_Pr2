/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
