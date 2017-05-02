#include <stdio.h>
#include <string.h> 
extern FILE * yyin;
extern int yylex();
extern int yylineno;
extern int yyleng;
extern char* yytext;

extern int tabs;
static char espacios[20] = ""; /*String de espacios*/
int contador = 0; /*Contador es espacios, encargado de ver cuántos espacios dejar*/
#define espaciosLlave 2
#define espaciosParentesis 1
static char prettyprint[1000] = "";
static char nuevo[1000][1000];
static char viejo[1000][1000];
int ciclo = 0; 


void prettyprintSelect(int value, FILE * archivoPretty){
	printf("Entro con:%d\n", value );
	switch(value){
		case 0:
			printf("GNU style\n");
			prettyprintGNU(archivoPretty); 
			break;		
		case 1:
			printf("BSD style\n");
			break;
		case 2:
			printf("Tipo de Nosotros\n");
			break;
		default:
			printf("GNU style\n");
			prettyprintGNU(archivoPretty); 
			break;
	}
}


void generadorEspacios(int numero){
	memset(espacios, 0, sizeof(espacios));
	for(int i = 1; i <= numero ; i++){
		strcat(espacios,  " ");
	}
}


void putPretty(char * text, FILE * archivoTemporal){
	fputs(text, archivoTemporal); 
	strcat(prettyprint, text); 
	printf("%s", text);
}


int prettyprintGNU(FILE * archivoPretty){	
	//warning: antes debe tener puesto el tmpfile como el yyin 
    int ntoken, anterior;
    ntoken = nextToken();
    while(ntoken) {
      if (endline==0){
            endline=1;
      }

        if (ntoken == FOR || ntoken == IF|| ntoken == WHILE){ /*este caso toma estas palabras ya que son de los ciclos tramposos*/
          if(ciclo >= 1){   /* esto indica si hay mas de dos ciclos para ponerle los campos respectivos*/
            generadorEspacios(contador); 
            putPretty(espacios, archivoPretty); 
          }
          while(ntoken != RIGHT_PARENTHESIS){ /* el while es para que vaya metiendo las cosas normal hasta q encuentra )
           que es el punto crucial, de si va a tener brackets o va a ser tramposo (de una linea)*/ 
            printf("voy por: %s\n", yytext);
            if (ntoken == LEFT_PARENTHESIS){ /* como esta la regla q antes de un ( hay q poner un espacio*/
              putPretty(" ", archivoPretty);
            }
            putPretty(yytext, archivoPretty); 
            putPretty(" ", archivoPretty); 
            ntoken = nextToken(); 
          }  
          putPretty(yytext, archivoPretty); 
          ntoken = nextToken(); 
          printf("token despues de expression: %s \n", yytext);



          if (ntoken != LEFT_BRACKET){ /* si no tiene brackets, es uno de los tramposos, 
          entonces solo le pongo los espacios, copio la linea (hasta el semicolon) y seguimos con la vida*/
            printf("entra al ntoken != LEFT_BRACKET\n");
            putPretty("\n", archivoPretty); 
            contador = contador + 4 ; 
            generadorEspacios(contador); 
            putPretty(espacios, archivoPretty); 
            while(ntoken != SEMICOLON){
              putPretty(yytext, archivoPretty); 
              putPretty(" ", archivoPretty); 
              ntoken = nextToken(); 
            }
            putPretty(yytext, archivoPretty);
            contador = contador - 4; 
            putPretty("\n", archivoPretty); 
          }
          else if (ntoken == LEFT_BRACKET){ /* si tiene brackets wuuuuu, pongalo y siga como si nada*/
            ciclo = ciclo + 1 ;
            printf("no se porq no entra ahi D:\n");
            contador = contador + 2 ; /*Se suman dos espacios para el GNU style*/ 
            putPretty("\n", archivoPretty); /*Se coloca un salto de línea*/
            generadorEspacios(contador);  /*Se colocan los espacios*/
            putPretty(espacios, archivoPretty); 
            putPretty(yytext, archivoPretty); /*Se coloca la llave que abre*/ 
            contador = contador + 2;  /*Se suman otros dos espacios para que ya el resto bn identado*/
            putPretty("\n", archivoPretty);/*Se coloca un salto de línea*/
            generadorEspacios(contador); /*espacios*/ 
            putPretty(espacios, archivoPretty); 
          }



        }
        else if (ntoken == LEFT_BRACKET){ /* si encuentra un bracket q no implica antes un while, if o for es como 
        preste atencion, ahora tiene q identar*/
          printf("no se porq no entra ahi D:\n");
          contador = contador + 2 ; /*Se suman dos espacios para el GNU style*/ 
          putPretty("\n", archivoPretty); /*Se coloca un salto de línea*/
          generadorEspacios(contador);  /*Se colocan los espacios*/
          putPretty(espacios, archivoPretty); 
          putPretty(yytext, archivoPretty); /*Se coloca la llave que abre*/ 
          contador = contador + 2;	/*Se suman otros dos espacios para que ya el resto bn identado*/
          putPretty("\n", archivoPretty);/*Se coloca un salto de línea*/
          generadorEspacios(contador); /*espacios*/ 
          putPretty(espacios, archivoPretty); 
          }
        /*Cuando se encuentra una llamada a una función (paréntesis) se deja un espacio*/
        else if (ntoken == LEFT_PARENTHESIS){
        	putPretty(" ", archivoPretty); /* se le pone el espacio*/
        	putPretty(yytext, archivoPretty); /*el ( */ 
        }
       	else if (ntoken == RIGHT_BRACKET){ /* encuentro un } esto significa que debo bajarle los espacios*/
       		contador = contador -2; /*Se restan dos espacios, porq la llave se pone un poquito antes*/
       		generadorEspacios(contador); /* espacios */ 
       		putPretty(espacios, archivoPretty);
       		putPretty(yytext, archivoPretty); /* el } */
       		contador = contador-2; /* lo deja bien en identacion para lo que sigue */ 
       		putPretty("\n", archivoPretty); /* salto de linea */ 
          if(ciclo >=1){ /* como } cierra un bloque, entonces nos ayuda a entender q salio de un ciclo */
            ciclo = ciclo - 1 ; 
          }
      
       	}
       	else if (ntoken == SEMICOLON){ /* lee ; y debe dar un salto para seguir*/
       		putPretty(yytext, archivoPretty); 
       		putPretty("\n", archivoPretty); 
      	
       	}

       	//contemplar el if q no trae llaves y el que trae llaves eELSE  EL DO! 
       	//else if (ntoken == CASE || ntoken == DEFAULT){}
       	else{ /* el caso final donde copio todo como viene */
       		if(anterior == SEMICOLON || anterior == RIGHT_BRACKET){ /*si antes habia un semicolon o }, 
          di tengo q identar porq solo me dejaron en el inicio de la linea*/
       			generadorEspacios(contador); 
       			putPretty(espacios, archivoPretty); 
       		}
       		putPretty(yytext, archivoPretty); /*pongo la palabra kawai!*/
       		putPretty(" ", archivoPretty); 
       	}
       	anterior = ntoken; /*guardo el anterior porque me ayuda a verificar ciertas cosas*/
       	ntoken = nextToken(); /*como el i++ de nuestro ciclo*/
	   
    }
    printf("asi queda prettyprintprinteado\n%s\n", prettyprint);
    return 0;
}

int prettyprintBSD(){


}