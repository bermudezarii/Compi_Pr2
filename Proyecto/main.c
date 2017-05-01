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
extern int linea;
extern char* gramaticas[500000];

int main(int argc, char *argv[])
{    /*
        Se valida que se hayan digitado los archivos de entrada en la terminal
    */
	
    if(argc == 1){
        printf("Para el funcionamiento del programa, este va a funcionar con 3 parámetros en donde el tercero es opcional.\n");
        printf("-En donde el primero será la dirección del programa.\n");
        printf("-En el segundo el tipo de prettyprint que desea.\n");
        printf("-En el tercero si desea realizar el prepoceso o no, con una \"S\". Tome en cuenta que este es opcional.\n");


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
		if(archivoEntrada && argc>=3){
            if(argc>=4 && strcmp(argv[3],"S")==0){
                preproceso=true;
                memset(gramaticas,0,sizeof(gramaticas));
                preprocesador1(archivoEntrada,tmpfile);
                fclose(tmpfile);
                preproceso=false;
                tmpfile = fopen("tmpfile.c", "r"); //Se llama a la función del preprocesador con el archivo de entrada
                yyin = tmpfile; 
            }

        	//scanner();  	
            //init_table();
            linea=1;
            memset(gramaticas,0,sizeof(gramaticas));
            yyparse();
            fclose(tmpfile);
            fclose(archivoEntrada);
            //remove("tmpfile.c");    
	    }else{
	    	printf("El archivo ingresado no existe, verifique que esté bien escrito o bien no ingreso todos los parámetros.\n");
	    }

      
		
     }
     printf("Termino\n");

    return 0; 
}

