%{
#include "myscanner.h"
void yyerror(char *);
int linea = 1;
int endline;
%}

%%

"auto"			  															return AUTO;
"break"			  															return BREAK;
"case"			  															return CASE;
"char"			  															return CHAR;
"const"			  															return CONST;
"continue"	      															return CONTINUE;
"default"		  															return DEFAULT;
"do"			  															return DO;
"double"		  															return DOUBLE;
"else"			  														    return ELSE;
"enum"			  															return ENUM;
"extern"		  															return EXTERN;
"float"			  															return FLOAT;
"for"			  															return FOR;
"goto"			  															return GOTO;
"if"			  															return IF;
"int"			  															return INT;
"long"			  															return LONG;
"register"		  															return REGISTER;
"return"		  															return RETURN;
"short"			  															return SHORT;
"signed"		  															return SIGNED;
"sizeof"		  															return SIZEOF;
"static"		  															return STATIC;
"struct"		  															return STRUCT;
"switch"		  															return SWITCH;
"typedef"		  															return TYPEDEF;
"union"			  															return UNION;
"unsigned"		  															return UNSIGNED;
"void"			  															return VOID;
"volatile"		  															return VOLATILE;
"while"			  															return WHILE;

[0-9][0-9]*		  															return INTEGER;

"/*"([^*]|\*+[^*/])*\*+"/"    		        								return COMMENT;
"//".*$                  		        									return COMMENT;

0[xX][a-fA-F0-9]+(u|U|l|L)*?	     										return CONSTANT;
0[0-9]+(u|U|l|L)*?		     												return CONSTANT;
[0-9]+(u|U|l|L)*?		     												return CONSTANT;
L?'(\\.|[^\\'])+'	             											return CONSTANT;
[0-9]+[Ee][+-]?[0-9]+(f|F|l|L)?		 										return CONSTANT;
[0-9]*"."[0-9]+([Ee][+-]?[0-9]+)?(f|F|l|L)?									return CONSTANT;
[0-9]+"."[0-9]*([Ee][+-]?[0-9]+)?(f|F|l|L)?									return CONSTANT;

"{"                       													return LEFT_BRACKET;
"}"                       													return RIGHT_BRACKET;
","                       													return COMMA;
"("                       													return LEFT_PARENTHESIS;
")"                       													return RIGHT_PARENTHESIS;
"]"                       													return RIGHT_SBRACKET;
"["                       													return LEFT_SBRACKET;
";"                       													return SEMICOLON;
":"                       													return COLON;
"!"                       													return EXCLAMATION;
"~"                       													return PRIME;
"?"                       													return INTERROGATION;
"^"                       													return UP_ARROW;
"+"			              													return PLUS;
"-"			              													return MINUS;
"/"			              													return DIV;
"%"			              													return MOD;
"*"			              													return MUL;
"++"			          													return INC_OP;
"--"			          													return DEC_OP;
"="			              													return EQU;
"<"			              													return LESS;
">"			              													return GREATER;
"<="			          													return LE_OP;
">="			          													return GE_OP;
"=="			          													return EQ_OP;
"!="			          													return NE_OP;
"+="			          													return ADD_ASSIGN;
"-="			          													return SUB_ASSIGN;
"*="			          													return MUL_ASSIGN;
"/="			          													return DIV_ASSIGN;
"%="			          													return MOD_ASSIGN;
"."			              													return DOT;
"&"			              													return BIT_AND;
"|"			              													return BIT_OR;
"->"			          													return PTR_OP;
"&&"			          													return AND_OP;
"||"			         													return OR_OP;
"..."			         													return ELLIPSIS;
">>="			          													return RIGHT_ASSIGN;
"<<="			          													return LEFT_ASSIGN;
"&="			          													return AND_ASSIGN;
"^="			          													return XOR_ASSIGN;
"|="			          													return OR_ASSIGN;
">>"			          													return RIGHT_OP;
"<<"			          													return LEFT_OP;

"#include"			  	  													return INCLUDE;
"#define"			  	  													return DEFINE;
[a-zA-Z][_a-zA-Z0-9]*|_	          											return IDENTIFIER;
L?\"(\\.|[^\\"]|\n)*\"         	  											return LITERAL;
L?\'(\\.|[^\\"]|\n)*\'        	  											return LITERAL;
\n|\z|\s|\r		 															{linea++;endline=0;/*ignore*/;}


[ \t\n]

.|[0-9]*[a-zA-Z][_a-zA-Z0-9]*   											yyerror(yytext);


%%

int yywrap(void)
{
    return 1;
}
