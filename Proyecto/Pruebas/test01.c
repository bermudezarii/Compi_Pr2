int* siguienteArchivo;
File * khdfkdsj;
void include(char*archivoActual,char* archivoTemporal, int ntoken){
            printf("Entra al include. \n");
            char *includeArreglado; //El valor del include sin los ""
            ntoken = nextToken(); //Se obtiene el siguiente token para evaluar 
            /*
                Debido a que los define son literales
            */  

            if(ntoken == 7){      
                
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
                    preprocesador1(siguienteArchivo,archivoTemporal); //Se llama de nuevo a la función, pero esta vez con el siguiente archivo incluído
                    fclose(siguienteArchivo);
                    /*
                        Después de la llamada recursiva, se borra la inclusión
                    */
                    includes[numIncludes] = ""; 
                    numIncludes--;
                    yyin =archivoActual; //Se le dice a flex cuál archivo se estará leyendo

                }
                /*
                    Si el include es igual al archivo que lo invocó
                */

                else{
                    printf("Inclusión duplicada de %s", includeArreglado); //Se notifica el error, revisar esta validación
                }
            }
            printf("Salio: %d\n",ntoken);
}