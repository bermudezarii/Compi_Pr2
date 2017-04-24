#include <stdio.h>
#include <stdbool.h>
#include "myscanner.h"

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

int nextToken(void){
    return yylex();
}

void yyerror(char *texto,char *simbolo, int linea){
	if(preproceso){
		fputs(simbolo,archivotmp);
		fputs(" ", archivotmp);
	   
	}else{

        printf(texto,simbolo,linea);
	}
       
 

};
