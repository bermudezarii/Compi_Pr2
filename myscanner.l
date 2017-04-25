%{
//#include "myscanner.h"
#include "myparser.tab.h"
void yyerror(char *,char *, int);
int linea;
%}


%%
"auto"			  															return AUTO;
"break"			  															return BREAK;
"case"			  															return CASE;
"char"			  															return CHAR;
"const"			  															return CONST;
"continue"	      																return CONTINUE;
"default"		  															return DEFAULT;
"do"			  															return DO;
"double"		  															return DOUBLE;
"else"			  														    	return ELSE;
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
"/*"([^*]|\*+[^*/])*\*+"/"    		        												return COMMENT;
"//".*$                  		        												return COMMENT;
0[xX][a-fA-F0-9]+(u|U|l|L)*?	     														return CONSTANT;
0[0-9]+(u|U|l|L)*?		     														return CONSTANT;
[0-9]+(u|U|l|L)*?		     														return CONSTANT;
L?'(\\.|[^\\'])+'	             														return CONSTANT;
[0-9]+[Ee][+-]?[0-9]+(f|F|l|L)?		 													return CONSTANT;
[0-9]*"."[0-9]+([Ee][+-]?[0-9]+)?(f|F|l|L)?													return CONSTANT;
[0-9]+"."[0-9]*([Ee][+-]?[0-9]+)?(f|F|l|L)?													return CONSTANT;
"{"                       															return PUNTUACTOR;
"}"                       															return PUNTUACTOR;
","                       															return PUNTUACTOR;
"("                       															return PUNTUACTOR;
")"                       															return PUNTUACTOR;
"]"                       															return PUNTUACTOR;
"["                       															return PUNTUACTOR;
";"                       															return PUNTUACTOR;
":"                       															return PUNTUACTOR;

"!"                       															return OPERATOR;
"~"                       															return OPERATOR;
"?"                       															return OPERATOR;
"^"                       															return OPERATOR;

"+"			              														return OPERATOR;
"-"			              														return OPERATOR;
"/"			              														return OPERATOR;
"%"			              														return OPERATOR;
"*"			              														return OPERATOR;
"++"			          														return INC_OP;
"--"			          														return DEC_OP;
"=="			              														return EQ_OP;

"="																		return OPERATOR; 

"<"			              														return LEFT_OP;
">"			              														return RIGHT_OP;
">="																		return GE_OP; 
"<="			          														return LE_OP;
"!="			          														return NE_OP;

"+="			          														return ADD_ASSIGN;
"-="			          														return SUB_ASSIGN;
"*="			          														return MUL_ASSIGN;
"/="			          														return DIV_ASSIGN;
"%="			          														return MOD_ASSIGN;
"."			              														return OPERATOR;
"&"			              														return OPERATOR;
"|"			              														return OPERATOR;
"->"			          														return OPERATOR;

"&&"			          														return AND_OP;
"||"			         														return OR_OP;
"..."			         														return ELLIPSIS;
">>="			          														return RIGHT_ASSIGN;
"<<="			          														return LEFT_ASSIGN;
"&="			          														return AND_ASSIGN;
"^="			          														return XOR_ASSIGN;
"|="			          														return OR_ASSIGN;

">>"			          														return OPERATOR;
"<<"			          														return OPERATOR;

"#include"			  	  													return INCLUDE;
"#define"			  	  													return DEFINE;
[a-zA-Z][_a-zA-Z0-9]*|_	          														return IDENTIFIER;

L?\"(\\.|[^\\"]|\n)*\"         	  														return STRING_LITERAL;
L?\'(\\.|[^\\"]|\n)*\'        	  														return STRING_LITERAL;
\n|\z|\s		 															return ENDLINE;
        	                 	  

[ \t\n]

.|[0-9]*[a-zA-Z][_a-zA-Z0-9]*   yyerror("Error léxico con \"%s\", en línea %i.\n",yytext,linea);


%%

int yywrap(void)
{
    return 1;
}
