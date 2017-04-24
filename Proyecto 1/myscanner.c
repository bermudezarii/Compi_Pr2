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
extern int linea=1;



int scanner(void)
{
    int ntoken, vtoken;
    ntoken = nextToken();

    while(ntoken) {
 		if(ntoken==ENDLINE){
 			linea++;
 		}
        ntoken = nextToken();
	   
    }
    return 0;
}



