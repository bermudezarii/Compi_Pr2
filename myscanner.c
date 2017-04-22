#include <stdio.h>
#include <stdbool.h>
#include "myscanner.h"
#include "estructuras.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>

extern int yylex();
extern int yylineno;
extern char* yytext;
extern FILE* yyin;
extern int linea=1;
bool changeline=false;

/*
    Estas son las variables que serán accesibles durante todo el preprocesador
*/

/*****************************************************/
char *includes[] = {};     //Tabla con las cadenas que representarán a los includes que se encuentren en el programa
struct defineS defines[100] = {};  //Tabla con las cadenas que representarán a los includes que se encuentren en el programa
int numIncludes = -1;      //Contador de los includes que se tendrán en el array de cadenas includes
int numDefines = -1;       //Contador de los defines que se tendrán en el array de structs defines
bool error  = false;       //Booleano que indica cuando se encuentra un error en el programa
bool preproceso = false;
FILE *tmpFile;             //Archivo temporal que representa a la entrada para el scanner
/*****************************************************/

FILE *beamer;
char *names[] ={NULL,"auto","break","case","char","const","continue","default","do",
"double","else","enum","extern","float","for","goto","if","int","long",
"register","return","short","signed","sizeof","static","struct",
"switch","typedef","union","unsigned","void","volatile","while"};
char *color[]={"white","magenta","red","green", "purple","blue","orange","pink"};
int numtokens[]={0,0,0,0,0,0,0,0};
float percentTokens[]={0,0,0,0,0,0,0,0};
int cantidad = 0; // es la cantidad total de tokens, como la suma de cada [i] de numtokens
FILE *file;

char *CodBeamer[5000000];



FILE *leerArchivo(char NombreArchivo[]){
    FILE *file;    //Es el archivo de entrada del preprocesador
    file = fopen(NombreArchivo, "r");
    return file;
} 



/*Función que indica si se leyó o no correctamente el archivo*/
bool seLeyoArchivo(FILE *file){
    if (file) {
        return true;

    }else{
    return false;
    }

}

/*Función que se encarga de cerrar el archivo*/
void cerrarArchivo(FILE *file){
    fclose(file);

}

int nextToken(void)
{   
    return yylex();
}


int scanner(void)
{
    int ntoken, vtoken;
    while(ntoken) {
    	changeline=false;

        numtokens[ntoken]++;
        ntoken = nextToken();
	printf(yytext); 
    }
    
    return 0;

}
/*
    Función encargada de quitar los "" al literal del include
*/
char *modificarInclude(char *include){
    
    char *resultado;
    resultado = (char*)malloc(10);
    int n;
    int i;
    n = 0;
    i = 0;

    while(include[n] != '\0'){
        if(include[n] != '"'){

            resultado[i] = include[n];
            i++;
        
        }
        
        n++;
    
    }
    
    return resultado;
}

/*
    Función encargada de evaluar si ya existe un define en la tabla de definiciones
*/

int existeDefine(char *define)
{
    for(int m = 0; m<=numDefines; m++){
        /*
            Si encontramos que el valor coincide con la tabla de defines, se retorna verdadero
            Función strcmp: se comparan los dos parámetros que recibe
        */
  
        if(strcmp(defines[m].palabra, define) == 0){
            return m;
	}
    }
    return -1;
}


/*
    Función encargada de evaluar si ya existe un include en la tabla de inclusiones
*/

bool existeInclude(char *include)
{

    for(int i = 0; i<numIncludes; i++)
    {

      /*Si encontramos que el valor coincide con la tabla de includes, se retorna verdadero*/
      /*función strcmp: se comparan los dos parámetros que recibe*/
      if(strcmp(includes[i], include) == 0)
      {
          return true;
      }

    }
    
    return false;

}

/*
    Función encargada de tomar el valor que tendrá el define, se lee hasta encontrar un salto de línea
*/
char* tomarValorDefine(){
    
    char* valorDefine;
    int ntoken;
    valorDefine = (char*)malloc(10);

    ntoken = nextToken();
    
    /*
        Se lee hasta el salto de línea
    */
    while(strcmp(yytext, "\n") != 0){
        
        strcat(valorDefine, yytext); //Se van concatenando los valores que se van encontrando
        
        ntoken = nextToken();   

    }

    return valorDefine;

}

/*
    Función encargada de recibir un valor de un define y luego descomponer este valor según estén en la tabla de defines
*/
char *descomponerHileraDefine(char *valorDefine){
    
    int i = 0; //Contador para el valorDefine
    int a = 0; //Contador para el temporal
    char temporal[100000] = ""; //El temporal va tomando los valores por espacios
    char *resultado; //El valor que se retornará
    char *n; //El valor que se obtendrá de llamar recursivamente a la función
    int existe; //El índice que indica en cuál posición del array de defines está el elemento buscado
 
    

    resultado  = (char*)malloc(10);
    
    while(valorDefine[i] != '\0'){

        /*
            Se lee hasta que se encuentre un espacio
        */
        if(!isspace(valorDefine[i])){

            temporal[a] = valorDefine[i];
            a++;

        }
        

        /*
            Cuando se encuentra el espacio
        */
        else{
        
            existe = existeDefine(temporal); //Se busca en cuál índice se encuentra el temporal

            /*
                Si no existe, solamente se concatena
            */
            if (existe == -1){
                
                strcat(resultado, temporal);

            }

            /*
                En caso contrario, busco el valor en la tabla, llamando a la función recursivamente
            */
            else{
                
                char *n;
                n = descomponerHileraDefine(defines[existe].vDefine);
                strcat(resultado, n);

            }

            /*
                Se reinicia el temporal
            */
            a = 0;
            memset(&temporal[0], 0, sizeof(temporal));
        


        }

        i++;


    }

    /*
        Después del EOF, aún se tendrá un elemento en el temporal
    */
    existe = existeDefine(temporal);

    if (existe == -1){

        strcat(resultado, temporal);

    }

    /*En caso contrario, lo concateno con el valor en la tabla*/
    else{

        char *n;
        n = descomponerHileraDefine(defines[existe].vDefine);
        strcat(resultado, n);
    
    }

    return resultado;

    
}

/*
    Función que se encarga de realizar las funcionalidades del preprocesador
*/
void preprocesador(char *archivo, FILE* archivoTemporal){

    int ntoken;         //El token actual
    char *valorDefine;  //El valor que tomará un define
    char *concatenar;   //Es el valor de un elemento en la tabla de defines, se obtendrá de manera descompuesta
    int existe;         //El índice que indica en cuál posición del array de defines está el elemento buscado
    char *includeArreglado; //El valor del include sin los ""

    ntoken = nextToken();
    valorDefine = (char*)malloc(10);
    
    while(ntoken) {
        
        /*
            El preprocesador encuentra un include
        */
        
        if(ntoken == INCLUDE){
            
            

            ntoken = nextToken(); //Se obtiene el siguiente token para evaluar 

            /*
                Se leen tokens hasta que no hayan espacios
            */

            while(ntoken == SPACE){
                
                ntoken = nextToken();

            }
            
            /*
                Debido a que los define son literales
            */  

            if(ntoken == LITERAL){
                
                numIncludes++;

                FILE* siguienteArchivo; //Se creará un nuevo archivo

                includeArreglado = modificarInclude(yytext); //Se obtiene el include sin ""
                


                /*
                    Si el include es diferente al archivo que lo invocó
                */

                if(existeInclude(includeArreglado) == false){
                    
                    includes[numIncludes] = includeArreglado; //Se agrega a la tabla

                    
                    
                    siguienteArchivo = fopen(includeArreglado, "r"); //Se pone en modo lectura, FALTA: función que quite los "" de un literal
                    
                    

                    /*
                        Se le indica a flex cuál es el archivo actual que se está leyendo
                    */

                    yyin = siguienteArchivo; 
                    yy_switch_to_buffer(yy_create_buffer( yyin, 50));
                    preprocesador(yytext, siguienteArchivo); //Se llama de nuevo a la función, pero esta vez con el siguiente archivo incluído
                    
                    /*
                        Después de la llamada recursiva, se borra la inclusión
                    */
                    
                    includes[numIncludes] = ""; 
                    numIncludes--;

                    yyin = archivoTemporal; //Se le dice a flex cuál archivo se estará leyendo
                    yy_switch_to_buffer(yy_create_buffer( yyin, 50));
                }

                /*
                    Si el include es igual al archivo que lo invocó
                */

                else{

                    printf("Inclusión duplicada de %s", includeArreglado); //Se notifica el error, revisar esta validación
                }
                    
                
            }

        }

        

        /*
            El preprocesador encuentra un define
        */
        else if(ntoken == DEFINE){


            ntoken = nextToken(); //Se obtiene el siguiente token para evaluar


            /*
                Se leen tokens hasta que no hayan espacios
            */
            
            while(ntoken == SPACE){
                
                ntoken = nextToken();
            
            }


            existe = existeDefine(yytext); //Se evalúa si existe el token
            numDefines++; //Se suma un nuevo define al contador

            /*
                Se inicializan los valores del array de defines, debido a que los elementos son de tipo char *
            */
            defines[numDefines].palabra = (char*)malloc(10);
            defines[numDefines].vDefine = (char*)malloc(10);
                

            /*
                Si no existe, solo se agrega un nuevo elemento a la lista de defines
            */
            
            if(existe == -1){ 
                
                strcpy(defines[numDefines].palabra, yytext);
                ntoken = nextToken(); //Para no tomar en cuenta el espacio
                valorDefine = tomarValorDefine(); //Se llama a la función que toma el valor que tendrá el define
                strcpy(defines[numDefines].vDefine, valorDefine); //Se copia el valor obtenido al valor que tendrá el define
            
            }

            /*
                Si existe, se cambia el valorDefine en la posición "existe" del array de defines    
            */

            else{

                ntoken = nextToken();
                valorDefine = tomarValorDefine(); //Se llama a la función que toma el valor que tendrá el define
                strcpy(defines[existe].vDefine, valorDefine);
                numDefines--;  //Debido a que se repite un define, el número total se debe restar en uno, para nivelar el array
                

            }

        }

        /*
            El preprocesador encuentra un identificador, por lo que se dispondrá a reemplazar la hilera por una existente
        */

        else if(ntoken == IDENTIFIER){

            existe = existeDefine(yytext);

            /*
                Si no existe el identificador en la tabla de defines
            */

            if(existe == -1){

                fputs(yytext, tmpFile); //Se imprime el valor actual
            
            }

            /*
                Si existe el identificador en la tabla de defines
            */

            else{
                
                concatenar = descomponerHileraDefine(yytext);
                fputs(concatenar, tmpFile);
                //fputs(defines[existe].vDefine, tmpFile); //Se obtiene la posición de la tabla en donde está y se imprime su valor correspondiente

            }

        }

        /*
            Si no es ninguno de los tres anteriores, solo se imprimirá el valor actual, no se toma en cuenta a los comentarios
        */

        else if (ntoken != COMMENT){

            fputs(yytext, tmpFile);

        }

        printf("%s\n", yytext);
        ntoken = nextToken();
        
    }

}

void yyerror(char *texto,char *simbolo, int linea){
     
     /*
        Cuando aún se encuentra en el preprocesamiento, se escribe en el archivo
    */
    if(preproceso == false){
        printf("%s\n", yytext);
        fputs(yytext, tmpFile);
    
    }

    /*
        Cuando esté en el scanner, deberá imprimir el error correspondiente
    */

    else{
        
        printf(texto,simbolo,linea);
        strcat(CodBeamer,"\\colorbox{red}{");
        if(strcmp(yytext, "$")==0 || strcmp(yytext,"#")==0){
            strcat(CodBeamer, "\\");
        }
        strcat(CodBeamer, simbolo);
        strcat(CodBeamer,"}");
    
    }

};

void imprimirArchivoEntrada(FILE *temporal){
    int in_char;
    while ((in_char = getc(temporal)) != EOF){
        putchar(in_char);
    } 
    putchar('\n');
}
void openfilepreprocess(FILE *f, char *nombreArchivo){
    if(seLeyoArchivo(f))
    {
        printf("Se pudo leer el archivo correctamente\n");
        tmpFile = fopen("config.c", "wt");
        preprocesador(nombreArchivo, f);
        preproceso = true;
        fclose(tmpFile);
	//error=false;


    }
    else
    {
        printf("No se pudo leer el archivo correctamente");
    } 
    

}
void limpiarDocumento(char *f){
	fclose(fopen(f, "w"));
}



int main(int argc, char *argv[])
{
    

    /*
        Se valida que se hayan digitado los archivos de entrada en la terminal
    */

    if(argv[1] == NULL){

        printf("No se ingresó ningún archivo de entrada");
     
    }

    /*
        En este caso, se llama a las funcionalidades del preprocesador
    */
    else{
        printf("HOLA");
        FILE *archivoParaPreprocesar;
        tmpFile = fopen("config.c", "wt");
        archivoParaPreprocesar  = fopen(argv[1], "r");
        

        /*
            Se le indica a flex cuál es el archivo actual que se está leyendo
        */
        yyin = archivoParaPreprocesar;  
        yy_switch_to_buffer(yy_create_buffer( yyin, 50));     
        
        preprocesador(argv[1], archivoParaPreprocesar); //Se llama a la función del preprocesador con el archivo de entrada
        printf("Termino");
        
        fclose(archivoParaPreprocesar);
        fclose(tmpFile);
        
     }


     /*
    FILE *f = leerArchivo(argv[1]);
    openfilepreprocess(f, argv[1]);
    if (error == false){

        FILE *temporal = fopen("config.c", "r");
        imprimirArchivoEntrada(temporal);
        //fclose(temporal);
        //scanner();
        //system("pdflatex main.tex");
        //system("evince --presentation main.pdf");
    }



    limpiarDocumento("config.c");*/


    return 0; 
}


