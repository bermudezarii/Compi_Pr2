#include <stdio.h>
#include <stdbool.h>
#include "parser.tab.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>


extern char* yytext;
extern int linea;


struct defineS defines[100] = {};  //Tabla con las cadenas que representarán a los includes que se encuentren en el programa
int numDefines = 0;       //Contador de los defines que se tendrán en el array de structs defines

char* constantfolding(char* num, char* operator, char* num2){
	int n =atoi(num);
    int n2 =atoi(num2);
    printf("Num1: %d, Num2: %d y su operacion: %s\n", n, n2, operator);
    int result;
	if(strcmp(operator,"+")==0){
		result=n+n2;

	}
	else if(strcmp(operator,"-")==0){
		result=n-n2;

	}
	else if(strcmp(operator,"/")==0){
		result=n/n2;
	}
	else if(strcmp(operator,"*")==0){
		result=n*n2;

	}
	char *rfinal = (char*) malloc(sizeof(result));
    rfinal[0] = '\0';   
	sprintf(rfinal,"%d",result);
	return rfinal;

}

int existeDefine(char *define) {
    for(int m = 0; m<numDefines; m++)
    {
        /*
            Si encontramos que el valor coincide con la tabla de defines, se retorna verdadero
            Función strcmp: se comparan los dos parámetros que recibe
        */
  
  
        if(strcmp(defines[m].palabra, define) == 0)
        {	
            return m;
        
        }

    }
    return -1;

}


int define(int ntoken){
	char* identifiers[50000];
	memset(identifiers,0,sizeof(identifiers));
	ntoken=nextToken();
	int position=0;
	char *variable="";
	int lineaactual=linea; 	
	while(lineaactual==linea){

		if(strcmp(variable,"")==0 && ntoken==IDENTIFIER){
		
			variable=(char*)malloc(strlen(yytext));
			strcpy(variable,yytext);
			

		}
		else if(ntoken==INTEGER && strcmp(variable,"")!= 0 ){
			printf("Encontro entero\n");
			char *value= (char*) malloc(strlen(yytext));
			strcpy(value,yytext);
			ntoken=nextToken();
			if (ntoken==PLUS ||ntoken==MINUS||ntoken==DIV||ntoken==MUL){
				printf("Encontro operador\n");
				char* operator=(char*)malloc(strlen(yytext));
                strcpy(operator,yytext);
				
				ntoken=nextToken();
				if(ntoken==INTEGER){;
					printf("Encontro entero\n");
		
					char* tmpnum=constantfolding(value,operator,yytext);
					strcat(identifiers, tmpnum);
					strcat(identifiers, " ");
				


				}else{
					
                    strcat(identifiers, value);
                    strcat(identifiers, " ");
                    strcat(identifiers, operator);
                    strcat(identifiers, " ");
		  			strcat(identifiers, yytext);
		  			strcat(identifiers, " ");
		  			position++;
			


				}
			}else{
			
				strcat(identifiers, value);
				strcat(identifiers, " ");
				if(linea==lineaactual){
					strcat(identifiers, yytext);
					strcat(identifiers, " ");
		  			
		  		}
		  		position++;



			}
		}
		else if(strcmp(variable,"")!=0 && existeDefine(yytext)!=-1){

			char* tmp[50000];
			strcpy(tmp,defines[existeDefine(yytext)].vDefine);
			strcat(identifiers,tmp);
			strcat(identifiers, " ");
		

		}		
		else if(strcmp(variable,"")!=0){
		  printf("Hola\n");
		  printf("Valor6:%s\n",yytext);
		  printf("%d\n", existeDefine(yytext));
		  strcat(identifiers, yytext);
		  strcat(identifiers, " ");
		  position++;
    	 
		}
		if(lineaactual==linea){
		
		   ntoken=nextToken();
		}

    }
    
    printf("Valores: %s\n",identifiers );
    defines[numDefines].palabra = (char*)malloc(strlen(variable));
    defines[numDefines].vDefine = (char*)malloc(strlen(identifiers));
    strcpy(defines[numDefines].palabra ,variable);
    strcpy(defines[numDefines].vDefine,identifiers);
    numDefines++;

	return ntoken;

}
