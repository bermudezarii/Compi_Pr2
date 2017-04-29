
int main ( int argc , char * argv [ ] ) 
{ 
if ( argc == 1 ) { 
printf ( "No se ingresó ningún archivo de entrada\n" ) ; 
} 

else { 
printf ( "HOLA\n" ) ; 
FILE * archivoEntrada ; 
FILE * tmpfile = fopen ( "tmpfile.c" , "w" ) ; 
archivoEntrada = fopen ( argv [ 1 ] , "r" ) ; 
archivotmp = tmpfile ; 

yyin = archivoEntrada ; 
if ( tmpfile != NULL ) { 
preproceso = true ; 
preprocesador1 ( archivoEntrada , tmpfile ) ; 
fclose ( tmpfile ) ; 
preproceso = false ; 
tmpfile = fopen ( "tmpfile.c" , "r" ) ; 
yyin = tmpfile ; 


yyparse ( ) ; 
} else { 
printf ( "Archivo esta nulo\n" ) ; 
} 
printf ( "Termino\n" ) ; 
fclose ( tmpfile ) ; 
fclose ( archivoEntrada ) ; 
} 
return 0 ; 
} 