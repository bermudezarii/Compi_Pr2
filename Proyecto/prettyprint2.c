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
    	printf("voy por: %s\n", yytext);
        if (ntoken == LEFT_BRACKET){
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
       	else if (ntoken == RIGHT_BRACKET){
       		contador = contador -2; /*Se restan dos espacios, porq la llave se pone un poquito antes*/
       		generadorEspacios(contador); /* espacios */ 
       		putPretty(espacios, archivoPretty);
       		putPretty(yytext, archivoPretty); /* el } */
       		contador = contador-2; /* lo deja bien en identacion para lo que sigue */ 
       		putPretty("\n", archivoPretty); /* salto de linea */ 
       		generadorEspacios(contador); /*espacios*/ 
       		putPretty(espacios, archivoPretty);
       	}
       	else if (ntoken == SEMICOLON){
       		putPretty(yytext, archivoPretty); 
       		putPretty("\n", archivoPretty); 
      		
       	}
       	//else if (ntoken == FOR){}
       	//else if (ntoken == IF || ntoken == ELSE || ntoken == WHILE || ntoken == DO){} contemplar el if q no trae llaves y el que trae llaves
       	//else if (ntoken == CASE || ntoken == DEFAULT){}
       	else{
       		if(anterior == SEMICOLON){
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