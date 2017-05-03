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
int banderaDo = 0; 
int banderaCase = 0;
int banderaNOtoken = 0;  
int tramposo= 0; 


void prettyprintSelect(int value, FILE * archivoPretty){
	printf("Entro con:%d\n", value);
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
    anterior = -1; 
    ntoken = nextToken();
    while(ntoken) {
      if (endline==0){
            endline=1;
      }
      if (banderaNOtoken == 1){
        banderaNOtoken = 0; 
      }

        if (ntoken == FOR || ntoken == IF|| ntoken == WHILE || ntoken == DO || ntoken == ELSE){ /*este caso toma estas palabras ya que son de los ciclos tramposos*/
              int token = ntoken; 
              if (token == DO){
                printf("entro en DO");
                banderaDo = 1; 
              }

              if((ciclo >= 1 && anterior != LEFT_BRACKET && anterior != ELSE )|| (anterior == RIGHT_BRACKET || anterior == SEMICOLON)){   /* esto indica si hay mas de dos ciclos para ponerle los campos respectivos*/
                generadorEspacios(contador); 
                putPretty(espacios, archivoPretty); 
              }
              
              putPretty(yytext, archivoPretty);
              ntoken = nextToken(); 
              if(token != DO && (token != ELSE || (token == ELSE && ntoken == IF))){
                int contadorLParen = 1; 
                int contadorRParen = 0; 
                
                if(ntoken == IF){
                  putPretty(" ", archivoPretty); 
                  putPretty(yytext, archivoPretty); 
                  ntoken = nextToken();   
                }
                putPretty(" ", archivoPretty);
                putPretty(yytext, archivoPretty); 
                ntoken = nextToken(); 
                while(contadorLParen != contadorRParen){ /* el while es para que vaya metiendo las cosas normal hasta q encuentra
                  que haya la misma cantidad entre ( y )
                  que es el punto crucial, de si va a tener brackets o va a ser tramposo (de una linea)*/ 
                  printf("voy por: %s\n", yytext);
                  if (ntoken == LEFT_PARENTHESIS){ /* como esta la regla q antes de un ( hay q poner un espacio*/
                    putPretty(" ", archivoPretty);
                    contadorLParen = contadorLParen + 1; 
                  }
                  else if(ntoken == RIGHT_PARENTHESIS)
                    contadorRParen = contadorRParen + 1; 
                  putPretty(yytext, archivoPretty); 
                  putPretty(" ", archivoPretty); 
                  ntoken = nextToken(); 
                  } 

              }

              /* despues de buscar el ()*/

              if (ntoken != LEFT_BRACKET){ /* si no tiene brackets, es uno de los tramposos, 
              entonces solo le pongo los espacios, copio la linea (hasta el semicolon) y seguimos con la vida*/
                if(banderaDo == 1 && token == WHILE){ /* este caso es para el while que sigue despues del do, el cual es como (...); */
                  putPretty(yytext, archivoPretty);              
                  putPretty("\n", archivoPretty); 
                  banderaDo = 0; 
                }
                else{
                  putPretty("\n", archivoPretty); 
                  contador = contador + 4 ; 
                  generadorEspacios(contador); 
                  putPretty(espacios, archivoPretty); 
                  tramposo = 1; 
                  banderaNOtoken = 1;
                }

              }
              else if (ntoken == LEFT_BRACKET){ /* si tiene brackets wuuuuu, pongalo y siga como si nada*/
                ciclo = ciclo + 1 ;
                banderaNOtoken = 1; 
              }
        }
        else if (ntoken == CASE){
          if(anterior != LEFT_BRACKET){
            printf("entra a que no hay LEFT_BRACKET\n");
            generadorEspacios(contador); /*espacios*/ 
            putPretty(espacios, archivoPretty);
          }
          banderaCase = 1; 
          while(ntoken != COLON){ /*case (pone esta parte)*/ 
            putPretty(yytext, archivoPretty); 
            putPretty(" ", archivoPretty); 
            anterior = ntoken; 
            ntoken = nextToken(); 
          }
          contador = contador + 4;
          banderaNOtoken =1 ;
        }
        else if (ntoken == BREAK){
          banderaCase = 0 ; 
          putPretty(yytext, archivoPretty); 
          contador = contador - 4 ; 
        }
        else if (ntoken == LEFT_BRACKET){ /* si encuentra un bracket q no implica antes un while, if o for es como 
        preste atencion, ahora tiene q identar*/
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
       	else if (ntoken == SEMICOLON || (ntoken == COLON && banderaCase == 1)){ /* lee ; y debe dar un salto para seguir*/
       		putPretty(yytext, archivoPretty); 
       		putPretty("\n", archivoPretty); 
          if(banderaCase == 1){
            generadorEspacios(contador); 
            putPretty(espacios, archivoPretty);  	
          }
          if (tramposo == 1){
            contador = contador - 4 ; 
            tramposo = 0; 
          }
       	}
        else if(ntoken == DOT || ntoken == PTR_OP){
            putPretty(yytext, archivoPretty); 
          }
       	//contemplar el if q no trae llaves y el que trae llaves eELSE (lo hago cuando este modularizado) EL DO! 
       	//else if (ntoken == CASE || ntoken == DEFAULT){}
       	else{ /* el caso final donde copio todo como viene */
       		if(anterior == SEMICOLON || anterior == RIGHT_BRACKET){ /*si antes habia un semicolon o }, 
          di tengo q identar porq solo me dejaron en el inicio de la linea*/
       			generadorEspacios(contador); 
       			putPretty(espacios, archivoPretty); 
            putPretty(yytext, archivoPretty);
       		}
          else if(anterior == DOT || anterior == PTR_OP || anterior == LEFT_BRACKET || anterior == LEFT_PARENTHESIS || ntoken == RIGHT_PARENTHESIS || anterior == EXCLAMATION || anterior == BIT_AND || anterior == -1 || anterior == COLON){
            putPretty(yytext, archivoPretty); 
          }
          else{
            putPretty(" ", archivoPretty); 
            putPretty(yytext, archivoPretty);
          }
       	} 

        if(banderaNOtoken == 0){
          anterior = ntoken; /*guardo el anterior porque me ayuda a verificar ciertas cosas*/
          ntoken = nextToken(); /*como el i++ de nuestro ciclo*/
        }
       	
    }
    printf("asi queda prettyprintprinteado\n%s\n", prettyprint);
    return 0;
}



int prettyprintBSD(FILE *archivoPretty){
  
  //warning: antes debe tener puesto el tmpfile como el yyin 
    int ntoken, anterior;
    ntoken = nextToken();
    while(ntoken) {
      if (endline==0){
            endline=1;
      }

        if (ntoken == FOR || ntoken == IF|| ntoken == WHILE){
          if(ciclo >= 1){
            generadorEspacios(contador); 
            putPretty(espacios, archivoPretty); 
          }
          while(ntoken != RIGHT_PARENTHESIS){
            printf("voy por: %s\n", yytext);
            if (ntoken == LEFT_PARENTHESIS){
              putPretty(" ", archivoPretty);
            }
            putPretty(yytext, archivoPretty); 
            putPretty(" ", archivoPretty); 
            ntoken = nextToken(); 
          }  
          putPretty(yytext, archivoPretty); 
          ntoken = nextToken(); 
          printf("token despues de expression: %s \n", yytext);



          if (ntoken != LEFT_BRACKET){
            printf("entra al ntoken != LEFT_BRACKET\n");
            putPretty("\n", archivoPretty); 
            contador = contador + 8 ; //ver bien
            generadorEspacios(contador); 
            putPretty(espacios, archivoPretty); 
            while(ntoken != SEMICOLON){
              putPretty(yytext, archivoPretty); 
              putPretty(" ", archivoPretty); 
              ntoken = nextToken(); 
            }
            putPretty(yytext, archivoPretty);
            contador = contador - 8; //ver bien
            putPretty("\n", archivoPretty); 
          }
          
          else if (ntoken == LEFT_BRACKET){
            ciclo = ciclo + 1 ;

            printf("no se porq no entra ahi D:\n");
            contador = contador + 8 ; /*Se suman dos espacios para el GNU style*/ 
            generadorEspacios(espaciosLlave);  /*Se colocan los espacios*/
            putPretty(espacios, archivoPretty); 
      putPretty(yytext, archivoPretty); /*Se coloca la llave que abre*/ 
            
      putPretty("\n", archivoPretty); /*Se coloca un salto de línea*/
                        
            generadorEspacios(contador);  /*Se colocan los espacios*/
            putPretty(espacios, archivoPretty); 
            
            //putPretty("\n", archivoPretty); /*Se coloca un salto de línea*/
            //generadorEspacios(contador);  /*Se colocan los espacios*/
            //putPretty(espacios, archivoPretty); 
            //putPretty(yytext, archivoPretty); /*Se coloca la llave que abre*/ 
            //contador = contador + 2;  /*Se suman otros dos espacios para que ya el resto bn identado*/
            //putPretty("\n", archivoPretty);/*Se coloca un salto de línea*/
            //generadorEspacios(contador); /*espacios*/ 
            //putPretty(espacios, archivoPretty); 
          }



        }
        else if (ntoken == LEFT_BRACKET){
          
          printf("no se porq no entra ahi D:\n");
          contador = contador + 8 ; /*Se suman dos espacios para el GNU style*/ 
          generadorEspacios(espaciosLlave);  /*Se colocan los espacios*/
          putPretty(espacios, archivoPretty); 
      putPretty(yytext, archivoPretty); /*Se coloca la llave que abre*/ 
            
      putPretty("\n", archivoPretty); /*Se coloca un salto de línea*/
                        
          generadorEspacios(contador);  /*Se colocan los espacios*/
          putPretty(espacios, archivoPretty); 
            

          //printf("no se porq no entra ahi D:\n");
          //contador = contador + 2 ; /*Se suman dos espacios para el GNU style*/ 
          //putPretty("\n", archivoPretty); /*Se coloca un salto de línea*/
          //generadorEspacios(contador);  /*Se colocan los espacios*/
          //putPretty(espacios, archivoPretty); 
          //putPretty(yytext, archivoPretty); /*Se coloca la llave que abre*/ 
          //contador = contador + 2;  /*Se suman otros dos espacios para que ya el resto bn identado*/
          //putPretty("\n", archivoPretty);/*Se coloca un salto de línea*/
          //generadorEspacios(contador); /*espacios*/ 
          //putPretty(espacios, archivoPretty); 
          }
        /*Cuando se encuentra una llamada a una función (paréntesis) se deja un espacio*/
        //else if (ntoken == LEFT_PARENTHESIS){
        //  putPretty(" ", archivoPretty); /* se le pone el espacio*/
        //  putPretty(yytext, archivoPretty); /*el ( */ 
        //}
        else if (ntoken == RIGHT_BRACKET){
          contador = contador - 8; /*Se restan dos espacios, porq la llave se pone un poquito antes*/
          generadorEspacios(contador); /* espacios */ 
          putPretty(espacios, archivoPretty);
          putPretty(yytext, archivoPretty); /* el } */
          //contador = contador-2; /* lo deja bien en identacion para lo que sigue */ 
          putPretty("\n", archivoPretty); /* salto de linea */
          putPretty(espacios, archivoPretty);
          

          if(ciclo >=1){
            ciclo = ciclo - 1 ; 
          }
          
        }
        else if (ntoken == SEMICOLON){
          putPretty(yytext, archivoPretty); 
          putPretty("\n", archivoPretty); 
        
        }

        //contemplar el if q no trae llaves y el que trae llaves eELSE  EL DO! 
        //else if (ntoken == CASE || ntoken == DEFAULT){}
        else{
          if(anterior == SEMICOLON || anterior == RIGHT_BRACKET){
            generadorEspacios(contador); 
            putPretty(espacios, archivoPretty); 
          }
          putPretty(yytext, archivoPretty); 
          putPretty(" ", archivoPretty); 
        }
        anterior = ntoken;
        ntoken = nextToken();
     
    }
    printf("asi queda prettyprintprinteado\n%s\n", prettyprint);
    return 0;

}