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




int scanner(void)
{
    int ntoken, vtoken;
    ntoken = nextToken();

    while(ntoken) {
        ntoken = nextToken();
	   
    }
    return 0;
}



