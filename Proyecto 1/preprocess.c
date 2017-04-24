#include <stdio.h>
#include <stdbool.h>
#include "myscanner.h"
#include "include.c"
#include "define.c"
#include <string.h>
#include <stdlib.h>
#include <math.h>

extern FILE * yyin;
extern int yylex();
extern int yylineno;
extern int yyleng;
extern char* yytext;



int preprocesador1(FILE* archivoActual,FILE* archivoTemporal){	
    
    char *concatenar;
    int ntoken, vtoken;
    
    ntoken = nextToken();

   
    while(ntoken) {
        
    	if(ntoken==INCLUDE){
           
    		include(archivoActual,archivoTemporal,ntoken);
     	}
    	else if (ntoken==DEFINE){
    		define(ntoken);
    		

    	}
    	else if (ntoken==IDENTIFIER && existeDefine(yytext)!=-1){
    		
    		fputs(defines[existeDefine(yytext)].vDefine, archivoTemporal);
    		fputs(" ", archivoTemporal);

    	}
    	
    	else if(ntoken != COMMENT){
    	
        	fputs(yytext, archivoTemporal);
        	fputs(" ", archivoTemporal);
    	}
    	
        ntoken = nextToken();
   
	   
    }
    return 0;
}