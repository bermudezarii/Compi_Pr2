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
int ntoken = 0;
int anterior= 0; 
int banderaIncludeDefine = 0; 
int saltoInclude = 0; 
int token = 0; 
int banderaParen = 0; 
int caseLBracket = 0; 
int caseRBracket = 0; 

void prettyprintSelect(int value, FILE * archivoPretty){
	printf("Entro con:%d\n", value);
	switch(value){
		case 0:
			printf("GNU style\n");
			prettyprintGNU(archivoPretty); 
			break;		
		case 1:
			printf("BSD style\n");
      prettyprintBSD(archivoPretty);
			break;
		case 2:
			printf("Tipo de Nosotros\n");
      prettyprintAllman1(archivoPretty);
			break;
		default:
			printf("GNU style\n");
			prettyprintGNU(archivoPretty); 
			break;
	}
}


void generadorEspacios(int numero, FILE * archivoPretty){
	memset(espacios, 0, sizeof(espacios));
	for(int i = 1; i <= numero ; i++){
		strcat(espacios,  " ");
	}
  putPretty(espacios, archivoPretty); 
}


void putPretty(char * text, FILE * archivoTemporal){
	fputs(text, archivoTemporal); 
	//strcat(prettyprint, text); 
	printf("%s", text);
}

/*Funciones para el pretty print estilo GNU*/
//*************************************************************************

int redireccionar(FILE * archivoPretty){
  if (ntoken == FOR || ntoken == IF|| ntoken == WHILE || ntoken == DO || ntoken == ELSE){
    tokenCondicionales(archivoPretty); 
  }
  else if(ntoken == CASE){
    tokenCase(archivoPretty); 
  }
  else if (ntoken == LEFT_BRACKET){
    tokenLeftBracket(archivoPretty); 
  }
  else if (ntoken == LEFT_PARENTHESIS){
    tokenLeftParenthesis(archivoPretty); 
  }
  else if (ntoken == RIGHT_BRACKET){
    tokenRightBracket(archivoPretty); 
  }
  else if (ntoken == SEMICOLON && banderaParen == 0){
    tokenColons(archivoPretty);
  }
  else if(ntoken == INCLUDE || ntoken == DEFINE){
    tokenIncludeDefine(archivoPretty); 
  }
  else{
    tokensNormales(archivoPretty); 
  }
  return 0; 
}


void tokensNormales(FILE * archivoPretty){
      if((anterior == SEMICOLON && banderaParen == 0)|| anterior == RIGHT_BRACKET || anterior == COLON){ /*si antes habia un semicolon o }, 
      di tengo q identar porq solo me dejaron en el inicio de la linea*/
        generadorEspacios(contador, archivoPretty); 
        putPretty(yytext, archivoPretty);
      }
      else if(anterior == DOT || anterior == PTR_OP || anterior == LEFT_BRACKET || anterior == LEFT_SBRACKET ||  ntoken == LEFT_SBRACKET || 
       anterior == LEFT_PARENTHESIS || ntoken == RIGHT_PARENTHESIS || anterior == EXCLAMATION || ntoken == RIGHT_SBRACKET 
       || anterior == BIT_AND || anterior == -1 || anterior == COLON || saltoInclude == 1 || anterior == INCLUDE 
       || anterior == DEFINE || ntoken == DOT || ntoken == PTR_OP || ntoken == COMMA){
       if(saltoInclude == 1){
        saltoInclude = 0;
       } 
        putPretty(yytext, archivoPretty); 
      }
      else{
        putPretty(" ", archivoPretty); 
        putPretty(yytext, archivoPretty);
      } 
}

void tokenCondicionales(FILE * archivoPretty){
     token = ntoken; 
      if (token == DO){
        
        banderaDo = 1; 
      }

      if((anterior != LEFT_BRACKET && anterior != ELSE )|| (anterior == RIGHT_BRACKET || anterior == SEMICOLON)){   /* esto indica si hay mas de dos ciclos para ponerle los campos respectivos*/
        generadorEspacios(contador, archivoPretty); 
      }

      putPretty(yytext, archivoPretty);
      ntoken = nextToken(); 
      if(token != DO && (token != ELSE || (token == ELSE && ntoken == IF))){
        int contadorLParen = 1; 
        int contadorRParen = 0; 
        
        if(ntoken == IF){
          putPretty(" ", archivoPretty); 
          putPretty(yytext, archivoPretty); 
          anterior = ntoken; 
          ntoken = nextToken();   
        }
        putPretty(" ", archivoPretty);
        putPretty(yytext, archivoPretty); 
        anterior = ntoken; 
        ntoken = nextToken(); 
        banderaParen = 1; 
        while(contadorLParen != contadorRParen){ /* el while es para que vaya metiendo las cosas normal hasta q encuentra
          que haya la misma cantidad entre ( y )
          que es el punto crucial, de si va a tener brackets o va a ser tramposo (de una linea)*/ 
          if (ntoken == LEFT_PARENTHESIS){ /* como esta la regla q antes de un ( hay q poner un espacio*/
            contadorLParen = contadorLParen + 1; 
          }
          else if(ntoken == RIGHT_PARENTHESIS)
            contadorRParen = contadorRParen + 1; 
          redireccionar(archivoPretty);  
          anterior = ntoken; 
          ntoken = nextToken(); 
          } 
          banderaParen = 0; 
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
          generadorEspacios(contador, archivoPretty);
          tramposo = 1; 
          banderaNOtoken = 1;
        }

      }
      else if (ntoken == LEFT_BRACKET){ /* si tiene brackets wuuuuu, pongalo y siga como si nada*/
        tokenLeftBracket(archivoPretty); 
      }
}

void tokenCase(FILE * archivoPretty){
    if(banderaCase == 1){
      banderaCase = 0; 
      caseLBracket = 0; 
      caseRBracket = 0; 
      contador = contador - 2;  
    }
    while(ntoken != COLON){ //case (pone esta parte)
        tokensNormales(archivoPretty); 
        anterior = ntoken; 
        ntoken = nextToken(); 
      }
      putPretty(yytext, archivoPretty); 
      anterior = ntoken; 
      ntoken = nextToken(); 
      if(ntoken == LEFT_BRACKET){
        tokenLeftBracket(archivoPretty);
      }
      else{
        
        banderaCase = 1;
        contador = contador + 2; 
        banderaNOtoken =1 ;
        putPretty("\n", archivoPretty); 
      }  
      
}


void tokenLeftBracket(FILE * archivoPretty, int tipo){
      if(banderaCase == 1){
        
        caseLBracket++; 
      }
      /* si encuentra un bracket q no implica antes un while, if o for es como 
      preste atencion, ahora tiene q identar*/
      contador = contador + 2 ; /*Se suman dos espacios para el GNU style*/ 
      putPretty("\n", archivoPretty); /*Se coloca un salto de línea*/
      generadorEspacios(contador, archivoPretty);  /*Se colocan los espacios*/
      putPretty(yytext, archivoPretty); /*Se coloca la llave que abre*/ 
      contador = contador + 2;  /*Se suman otros dos espacios para que ya el resto bn identado*/
      putPretty("\n", archivoPretty);/*Se coloca un salto de línea*/
      banderaNOtoken = 1; 
      anterior = ntoken; 
      ntoken = nextToken(); 
      if(ntoken != RIGHT_BRACKET)
        generadorEspacios(contador, archivoPretty); /*espacios*/ 
}

void tokenLeftParenthesis(FILE * archivoPretty){
    if((anterior == COLON && banderaParen == 0)|| (anterior == SEMICOLON && banderaParen ==0)){
      generadorEspacios(contador, archivoPretty);
    }
    else{
      if(anterior != LEFT_PARENTHESIS){
        putPretty(" ", archivoPretty); /* se le pone el espacio*/
      }
    }  
    putPretty(yytext, archivoPretty); /*el ( */ 
}

void tokenRightBracket(FILE * archivoPretty){
      if(anterior != SEMICOLON && anterior != RIGHT_BRACKET){
        putPretty("\n", archivoPretty); 
      }
      if(banderaCase == 1){
        
        caseRBracket++; 
      }
      if(banderaCase == 1 && (caseRBracket > caseLBracket)){
        
        contador = contador - 2 ; 
        caseLBracket = 0; 
        caseRBracket = 0; 
        banderaCase = 0; 
      }
      contador = contador -2; /*Se restan dos espacios, porq la llave se pone un poquito antes*/
      generadorEspacios(contador, archivoPretty); /* espacios */ 
      putPretty(yytext, archivoPretty); /* el } */
      contador = contador-2; /* lo deja bien en identacion para lo que sigue */ 
      anterior = ntoken; 
      ntoken = nextToken(); 
      banderaNOtoken = 1; 
      if(ntoken != SEMICOLON){
        putPretty("\n", archivoPretty); /* salto de linea */
      }
      //si es diferente de SEMICOLON si salta y este if lo hice por el caso struct {} ; 

}

void tokenColons(FILE * archivoPretty){
      putPretty(yytext, archivoPretty); 
      putPretty("\n", archivoPretty);   
      if (tramposo == 1){
        contador = contador - 4 ; 
        tramposo = 0; 
      }
}

void tokenIncludeDefine(FILE * archivoPretty){
      banderaIncludeDefine = 1; 
      putPretty(yytext, archivoPretty); 
      putPretty(" ", archivoPretty); 
}

int prettyprintGNU(FILE * archivoPretty){	
    anterior = -1; 
    ntoken = nextToken();

    while(ntoken) {
      if (endline==0){
          if(banderaIncludeDefine == 1){
            putPretty("\n", archivoPretty); 
            saltoInclude = 1; 
            banderaIncludeDefine = 0; 
          }
            endline=1;
      } 

      if (banderaNOtoken == 1){
        banderaNOtoken = 0; 
      }
      redireccionar(archivoPretty);
      if(banderaNOtoken == 0){
        anterior = ntoken; /*guardo el anterior porque me ayuda a verificar ciertas cosas*/
        ntoken = nextToken(); /*como el i++ de nuestro ciclo*/
      }
       	
    }
    printf("asi queda prettyprintprinteado\n%s\n", prettyprint);
    return 0;
}

//*************************************************************************

int redireccionarBSD(FILE * archivoPretty){
  if (ntoken == FOR || ntoken == IF|| ntoken == WHILE || ntoken == DO || ntoken == ELSE){
    tokenCondicionalesBSD(archivoPretty); 
  }
  else if(ntoken == CASE){
    tokenCaseBSD(archivoPretty); 
  }
  else if (ntoken == BREAK){
    tokenBreakBSD(archivoPretty); 

  }
  else if (ntoken == LEFT_BRACKET){
    tokenLeftBracketBSD(archivoPretty); 
  }
  else if (ntoken == LEFT_PARENTHESIS){
    tokenLeftParenthesisBSD(archivoPretty); 
  }
  else if (ntoken == RIGHT_BRACKET){
    tokenRightBracketBSD(archivoPretty); 
  }
  else if ((ntoken == SEMICOLON && banderaParen == 0)|| (ntoken == COLON && banderaCase == 1)){
    tokenColonsBSD(archivoPretty);
  }
  else if(ntoken == INCLUDE || ntoken == DEFINE){
    tokenIncludeDefineBSD(archivoPretty); 
  }
  else{
    tokensNormalesBSD(archivoPretty); 
  }
  return 0; 
}


void tokensNormalesBSD(FILE * archivoPretty){
      if((anterior == SEMICOLON && banderaParen == 0)|| anterior == RIGHT_BRACKET){ /*si antes habia un semicolon o }, 
      di tengo q identar porq solo me dejaron en el inicio de la linea*/
        generadorEspacios(contador, archivoPretty); 
        putPretty(yytext, archivoPretty);
      }
      else if(anterior == DOT || anterior == PTR_OP || anterior == LEFT_BRACKET || anterior == LEFT_SBRACKET ||  ntoken == LEFT_SBRACKET || 
       anterior == LEFT_PARENTHESIS || ntoken == RIGHT_PARENTHESIS || anterior == EXCLAMATION || ntoken == RIGHT_SBRACKET 
       || anterior == BIT_AND || anterior == -1 || anterior == COLON || saltoInclude == 1 || anterior == INCLUDE 
       || anterior == DEFINE || ntoken == DOT || ntoken == PTR_OP || ntoken == COMMA){
        saltoInclude = 0;
        putPretty(yytext, archivoPretty); 
      }
      else{
        putPretty(" ", archivoPretty); 
        putPretty(yytext, archivoPretty);
      } 
}

void tokenCondicionalesBSD(FILE * archivoPretty){
     token = ntoken; 
      if (token == DO){
        printf("entro en DO");
        banderaDo = 1; 
      }

      if((ciclo >= 1 && anterior != LEFT_BRACKET && anterior != ELSE )|| (anterior == RIGHT_BRACKET || anterior == SEMICOLON)){   /* esto indica si hay mas de dos ciclos para ponerle los campos respectivos*/
        generadorEspacios(contador, archivoPretty); 
      }

      putPretty(yytext, archivoPretty);
      ntoken = nextToken(); 
      if(token != DO && (token != ELSE || (token == ELSE && ntoken == IF))){
        int contadorLParen = 1; 
        int contadorRParen = 0; 
        
        if(ntoken == IF){
          tokensNormalesBSD(archivoPretty);  
          anterior = ntoken; 
          ntoken = nextToken();   
        }
        putPretty(" ", archivoPretty);
        putPretty(yytext, archivoPretty); 
        anterior = ntoken; 
        ntoken = nextToken(); 
        banderaParen = 1; 
        while(contadorLParen != contadorRParen){ /* el while es para que vaya metiendo las cosas normal hasta q encuentra
          que haya la misma cantidad entre ( y )
          que es el punto crucial, de si va a tener brackets o va a ser tramposo (de una linea)*/ 
          if (ntoken == LEFT_PARENTHESIS){ /* como esta la regla q antes de un ( hay q poner un espacio*/
            contadorLParen = contadorLParen + 1; 
          }
          else if(ntoken == RIGHT_PARENTHESIS)
            contadorRParen = contadorRParen + 1; 
          redireccionarBSD(archivoPretty);  
          anterior = ntoken; 
          ntoken = nextToken(); 
          } 
          banderaParen = 0; 
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
          contador = contador + 8 ; 
          generadorEspacios(contador, archivoPretty);
          tramposo = 1; 
          banderaNOtoken = 1;
        }

      }
      else if (ntoken == LEFT_BRACKET){ /* si tiene brackets wuuuuu, pongalo y siga como si nada*/
        tokenLeftBracketBSD(archivoPretty); 
      }
}

void tokenCaseBSD(FILE * archivoPretty){
      banderaCase = 1; 
      while(ntoken != COLON){ //case (pone esta parte)
        tokensNormalesBSD(archivoPretty); 
        anterior = ntoken; 
        ntoken = nextToken(); 
      }
      contador = contador + 8;
      banderaNOtoken =1 ;
}

void tokenBreakBSD(FILE * archivoPretty){
      banderaCase = 0 ; 
      putPretty(yytext, archivoPretty); 
      contador = contador - 8 ; 
}

void tokenLeftBracketBSD(FILE * archivoPretty, int tipo){
      /* si encuentra un bracket q no implica antes un while, if o for es como 
      preste atencion, ahora tiene q identar*/
      //contador = contador + 2 ; /*Se suman dos espacios para el GNU style*/ 
      
      generadorEspacios(2, archivoPretty);  /*Se colocan los espacios*/
      putPretty(yytext, archivoPretty); /*Se coloca la llave que abre*/ 
      
      putPretty("\n", archivoPretty); /*Se coloca un salto de línea*/
      contador = contador + 8;  /*Se suman otros dos espacios para que ya el resto bn identado*/
      
      generadorEspacios(contador, archivoPretty);  /*Se colocan los espacios*/
      
      //putPretty("\n", archivoPretty);/*Se coloca un salto de línea*/
      //generadorEspacios(contador, archivoPretty); /*espacios*/ 
}

void tokenLeftParenthesisBSD(FILE * archivoPretty){
      if(anterior != LEFT_PARENTHESIS){
        putPretty(" ", archivoPretty); /* se le pone el espacio*/
      }
      putPretty(yytext, archivoPretty); /*el ( */ 
}

void tokenRightBracketBSD(FILE * archivoPretty){
      contador = contador -8; /*Se restan dos espacios, porq la llave se pone un poquito antes*/
      generadorEspacios(contador, archivoPretty); /* espacios */ 
      putPretty(yytext, archivoPretty); /* el } */
      //contador = contador-4; /* lo deja bien en identacion para lo que sigue */ 
      putPretty("\n", archivoPretty); /* salto de linea */ 
      if(ciclo >=1){ /* como } cierra un bloque, entonces nos ayuda a entender q salio de un ciclo */
        ciclo = ciclo - 1 ; 
      }
}

void tokenColonsBSD(FILE * archivoPretty){
      putPretty(yytext, archivoPretty); 
      putPretty("\n", archivoPretty); 
      if(banderaCase == 1){
        generadorEspacios(contador, archivoPretty);   
      }
      if (tramposo == 1){
        contador = contador - 8 ; 
        tramposo = 0; 
      }
}

void tokenIncludeDefineBSD(FILE * archivoPretty){
      banderaIncludeDefine = 1; 
      putPretty(yytext, archivoPretty); 
      putPretty(" ", archivoPretty); 
}

int prettyprintBSD(FILE * archivoPretty){ 
    anterior = -1; 
    ntoken = nextToken();

    while(ntoken) {
      if (endline==0){
          if(banderaIncludeDefine == 1){
            putPretty("\n", archivoPretty); 
            saltoInclude = 1; 
            banderaIncludeDefine = 0; 
          }
            endline=1;
      } 

      if (banderaNOtoken == 1){
        banderaNOtoken = 0; 
      }
      redireccionarBSD(archivoPretty);
      if(banderaNOtoken == 0){
        anterior = ntoken; /*guardo el anterior porque me ayuda a verificar ciertas cosas*/
        ntoken = nextToken(); /*como el i++ de nuestro ciclo*/
      }
        
    }
    printf("asi queda prettyprintprinteado\n%s\n", prettyprint);
    return 0;
}



/*Funciones para el pretty print estilo Allman*/
//*************************************************************************

int redireccionarAllman1(FILE * archivoPretty){
  if (ntoken == FOR || ntoken == IF|| ntoken == WHILE || ntoken == DO || ntoken == ELSE){
    tokenCondicionalesAllman1(archivoPretty); 
  }
  else if(ntoken == CASE){
    tokenCaseAllman1(archivoPretty); 
  }
  else if (ntoken == BREAK){
    tokenBreakAllman1(archivoPretty); 

  }
  else if (ntoken == LEFT_BRACKET){
    tokenLeftBracketAllman1(archivoPretty); 
  }
  else if (ntoken == LEFT_PARENTHESIS){
    tokenLeftParenthesisAllman1(archivoPretty); 
  }
  else if (ntoken == RIGHT_BRACKET){
    tokenRightBracketAllman1(archivoPretty); 
  }
  else if ((ntoken == SEMICOLON && banderaParen == 0)|| (ntoken == COLON && banderaCase == 1)){
    tokenColonsAllman1(archivoPretty);
  }
  else if(ntoken == INCLUDE || ntoken == DEFINE){
    tokenIncludeDefineAllman1(archivoPretty); 
  }
  else{
    tokensNormalesAllman1(archivoPretty); 
  }
  return 0; 
}


void tokensNormalesAllman1(FILE * archivoPretty){
      if((anterior == SEMICOLON && banderaParen == 0)|| anterior == RIGHT_BRACKET){ /*si antes habia un semicolon o }, 
      di tengo q identar porq solo me dejaron en el inicio de la linea*/
        generadorEspacios(contador, archivoPretty); 
        putPretty(yytext, archivoPretty);
      }
      else if(anterior == DOT || anterior == PTR_OP || anterior == LEFT_BRACKET || anterior == LEFT_SBRACKET ||  ntoken == LEFT_SBRACKET || 
       anterior == LEFT_PARENTHESIS || ntoken == RIGHT_PARENTHESIS || anterior == EXCLAMATION || ntoken == RIGHT_SBRACKET 
       || anterior == BIT_AND || anterior == -1 || anterior == COLON || saltoInclude == 1 || anterior == INCLUDE 
       || anterior == DEFINE || ntoken == DOT || ntoken == PTR_OP || ntoken == COMMA){
        saltoInclude = 0;
        putPretty(yytext, archivoPretty); 
      }
      else{
        putPretty(" ", archivoPretty); 
        putPretty(yytext, archivoPretty);
      } 
}

void tokenCondicionalesAllman1(FILE * archivoPretty){
     token = ntoken; 
      if (token == DO){
        printf("entro en DO");
        banderaDo = 1; 
      }

      if((ciclo >= 1 && anterior != LEFT_BRACKET && anterior != ELSE )|| (anterior == RIGHT_BRACKET || anterior == SEMICOLON)){   /* esto indica si hay mas de dos ciclos para ponerle los campos respectivos*/
        generadorEspacios(contador, archivoPretty); 
      }

      putPretty(yytext, archivoPretty);
      ntoken = nextToken(); 
      if(token != DO && (token != ELSE || (token == ELSE && ntoken == IF))){
        int contadorLParen = 1; 
        int contadorRParen = 0; 
        
        if(ntoken == IF){
          tokensNormalesAllman1(archivoPretty);  
          anterior = ntoken; 
          ntoken = nextToken();   
        }
        putPretty(" ", archivoPretty);
        putPretty(yytext, archivoPretty); 
        anterior = ntoken; 
        ntoken = nextToken(); 
        banderaParen = 1; 
        while(contadorLParen != contadorRParen){ /* el while es para que vaya metiendo las cosas normal hasta q encuentra
          que haya la misma cantidad entre ( y )
          que es el punto crucial, de si va a tener brackets o va a ser tramposo (de una linea)*/ 
          if (ntoken == LEFT_PARENTHESIS){ /* como esta la regla q antes de un ( hay q poner un espacio*/
            contadorLParen = contadorLParen + 1; 
          }
          else if(ntoken == RIGHT_PARENTHESIS)
            contadorRParen = contadorRParen + 1; 
          redireccionarAllman1(archivoPretty);  
          anterior = ntoken; 
          ntoken = nextToken(); 
          } 
          banderaParen = 0; 
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
          generadorEspacios(contador, archivoPretty);
          tramposo = 1; 
          banderaNOtoken = 1;
        }

      }
      else if (ntoken == LEFT_BRACKET){ /* si tiene brackets wuuuuu, pongalo y siga como si nada*/
        tokenLeftBracketAllman1(archivoPretty); 
      }
}

void tokenCaseAllman1(FILE * archivoPretty){
      banderaCase = 1; 
      while(ntoken != COLON){ //case (pone esta parte)
        tokensNormalesAllman1(archivoPretty); 
        anterior = ntoken; 
        ntoken = nextToken(); 
      }
      contador = contador + 4;
      banderaNOtoken =1 ;
}

void tokenBreakAllman1(FILE * archivoPretty){
      banderaCase = 0 ; 
      putPretty(yytext, archivoPretty); 
      contador = contador - 4 ; 
}

void tokenLeftBracketAllman1(FILE * archivoPretty, int tipo){
      /* si encuentra un bracket q no implica antes un while, if o for es como 
      preste atencion, ahora tiene q identar*/
      //contador = contador + 2 ; /*Se suman dos espacios para el GNU style*/ 
      putPretty("\n", archivoPretty); /*Se coloca un salto de línea*/
      generadorEspacios(contador, archivoPretty);  /*Se colocan los espacios*/
      putPretty(yytext, archivoPretty); /*Se coloca la llave que abre*/ 
      contador = contador + 4;  /*Se suman otros dos espacios para que ya el resto bn identado*/
      putPretty("\n", archivoPretty);/*Se coloca un salto de línea*/
      generadorEspacios(contador, archivoPretty); /*espacios*/ 
}

void tokenLeftParenthesisAllman1(FILE * archivoPretty){
      if(anterior != LEFT_PARENTHESIS){
        putPretty(" ", archivoPretty); /* se le pone el espacio*/
      }
      putPretty(yytext, archivoPretty); /*el ( */ 
}

void tokenRightBracketAllman1(FILE * archivoPretty){
      contador = contador -4; /*Se restan dos espacios, porq la llave se pone un poquito antes*/
      generadorEspacios(contador, archivoPretty); /* espacios */ 
      putPretty(yytext, archivoPretty); /* el } */
      //contador = contador-4; /* lo deja bien en identacion para lo que sigue */ 
      putPretty("\n", archivoPretty); /* salto de linea */ 
      if(ciclo >=1){ /* como } cierra un bloque, entonces nos ayuda a entender q salio de un ciclo */
        ciclo = ciclo - 1 ; 
      }
}

void tokenColonsAllman1(FILE * archivoPretty){
      putPretty(yytext, archivoPretty); 
      putPretty("\n", archivoPretty); 
      if(banderaCase == 1){
        generadorEspacios(contador, archivoPretty);   
      }
      if (tramposo == 1){
        contador = contador - 4 ; 
        tramposo = 0; 
      }
}

void tokenIncludeDefineAllman1(FILE * archivoPretty){
      banderaIncludeDefine = 1; 
      putPretty(yytext, archivoPretty); 
      putPretty(" ", archivoPretty); 
}

int prettyprintAllman1(FILE * archivoPretty){ 
    anterior = -1; 
    ntoken = nextToken();

    while(ntoken) {
      if (endline==0){
          if(banderaIncludeDefine == 1){
            putPretty("\n", archivoPretty); 
            saltoInclude = 1; 
            banderaIncludeDefine = 0; 
          }
            endline=1;
      } 

      if (banderaNOtoken == 1){
        banderaNOtoken = 0; 
      }
      redireccionarAllman1(archivoPretty);
      if(banderaNOtoken == 0){
        anterior = ntoken; /*guardo el anterior porque me ayuda a verificar ciertas cosas*/
        ntoken = nextToken(); /*como el i++ de nuestro ciclo*/
      }
        
    }
    printf("asi queda prettyprintprinteado\n%s\n", prettyprint);
    return 0;
}

//*************************************************************************