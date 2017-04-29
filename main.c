#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "estructuras.h"
#include "flex.c"
#include "preprocess.c"
#include "myscanner.c" 

extern int  yyparse();
extern FILE* archivotmp;


int main(int argc, char *argv[])
{    /*
        Se valida que se hayan digitado los archivos de entrada en la terminal
    */
	
    if(argc == 1){
        printf("No se ingresó ningún archivo de entrada\n");     
    }

    /*
        En este caso, se llama a las funcionalidades del preprocesador
    */
    else{
        printf("HOLA\n");
        FILE *archivoEntrada;
        FILE *tmpfile = fopen("tmpfile.c", "w");
        archivoEntrada  = fopen(argv[1], "r");
        archivotmp=tmpfile;
        /*
            Se le indica a flex cuál es el archivo actual que se está leyendo
        */
        yyin = archivoEntrada; 
		if(tmpfile!=NULL){
		    preproceso=true;
		    preprocesador1(archivoEntrada,tmpfile);
		    fclose(tmpfile);
		    preproceso=false;
		    tmpfile = fopen("tmpfile.c", "r"); //Se llama a la función del preprocesador con el archivo de entrada
		    yyin = tmpfile; 
		    //scanner();  	
		    //init_table();
		    yyparse();
	    }else{
	    	printf("Archivo esta nulo\n");
	    }
        printf("Termino\n");
        fclose(tmpfile);
        fclose(archivoEntrada);
		//remove("tmpfile.c");    
     }

    return 0; 
}

