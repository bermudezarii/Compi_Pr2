%{
/* fichero instrucciones.y */
#include <stdio.h>
%}


%token IDENTIFICADOR OPAS CONSTENTERA NL MAS APAR CPAR
%start instrucciones


%%


instrucciones : instrucciones instruccion
 | instruccion
 ;
instruccion : IDENTIFICADOR OPAS expresion NL
 ;
expresion : termino
 | expresion MAS termino
 ;
termino : IDENTIFICADOR
 | CONSTENTERA
 | APAR expresion CPAR
 ;


%%
int yylex(){ 
	return yytext;
}
	
yyerror (s) /* Llamada por yyparse ante un error */
	char *s;
{
 printf ("%s\n", s); /* Esta implementación por defecto nos valdrá */
 /* Si no creamos esta función, habrá que enlazar con –ly en el
momento de compilar para usar una implementación por defecto */
}
main()
{
 //Acciones a ejecutar antes del análisis 
  yyparse();
 //Acciones a ejecutar después del análisis
} 
