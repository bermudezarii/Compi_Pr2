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
extern int endline=1; 



int preprocesador1(FILE* archivoActual,FILE* archivoTemporal){	
    
    char *concatenar;
    int ntoken, vtoken;
    ntoken = nextToken();

   
    while(ntoken) {

        if (endline==0){
            fputs("\n", archivoTemporal);
            endline=1;
        }
    	if(ntoken==INCLUDE){
           
    		include(archivoActual,archivoTemporal,ntoken);
            ntoken = nextToken();
     	}
    	else if (ntoken==DEFINE){
    		ntoken=define(ntoken);
    	

    	}
    	else if (ntoken==IDENTIFIER && existeDefine(yytext)!=-1){
    		fputs(defines[existeDefine(yytext)].vDefine, archivoTemporal);
    		fputs(" ", archivoTemporal);
            ntoken = nextToken();

    	}
    	
    	else if(ntoken != COMMENT){
    	   
        	fputs(yytext, archivoTemporal);
        	fputs(" ", archivoTemporal);
            ntoken = nextToken();
    	}else{
            ntoken = nextToken();
        }
    	
        
   
	   
    }
    return 0;
}