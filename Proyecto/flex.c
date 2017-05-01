#include <stdio.h>
#include <stdbool.h>
#include "parser.tab.h"

#include <string.h>
#include <stdlib.h>
#include <math.h>

extern FILE * yyin;
extern int yylex();
extern int yylineno;
extern int yyleng;
extern char* yytext;
extern int linea;

FILE *archivotmp;
bool preproceso = false;
int banderaSyntaxError = 0; 
int nextToken(void){
    return yylex();
}

void yyerror(char *texto){
	if(strcmp(texto,"\"syntax error\"")){
		printf(" Syntax Error in Line : %d : %s\n",linea,texto);
  		
	}

	else if(preproceso){
		fputs(texto,archivotmp);
		fputs(" ", archivotmp);
	   
	}else{

        printf("\"%s\", en línea %i.\n",texto,yylineno);
	}
       
 	banderaSyntaxError = 1; 

}
