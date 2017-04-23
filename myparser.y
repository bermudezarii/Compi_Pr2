%{
/* fichero instrucciones.y */
#include <stdio.h>
%}


%token KEYWORD INTEGER CONSTANT OPERATOR LITERAL IDENTIFIER PUNCTUATOR 
%start instrucciones


%%

translationUnid : externalDeclaration*
; 

externalDeclaration :  functionDef 
	| declaration 
; 

functionDef : '{'declarationSpec'}'* declarator '{'declaration'}'* compoundStatement
; 

storageClassSpec : auto
	| register
	| static 
	| extern 
	| typedef
; 


typeSpec : void 
	| char 
	| short  
	| int
	| long
	| float
	| double
	| signed
	| unsigned
	| structOrUnionSpec
	| enumSpec
	| typeDefName

; 

structOrUnionSpec : structOrUnion identifier  '{' '{'structDeclaration'}'+ '}'
	| structOrUnion '{' '{'structDeclaration'}'+ '}' 
	| structOrUnion identifier  
;

structOrUnion : struct 
	| union 
; 


structDeclaration : '{'specifierQualifier'}'* structDeclaratorList
;

structQualifier : typeSpec 
	| typeQualifier 
; 


structDeclaratorList : structDeclarator 
	| structDeclaratorList ',' structDeclarator
;

structDeclarator : declarator 
	| declarator ':' constantExpression 
	| ':' constantExpression 
;

declarator : '{'pointer'}'? directDeclarator 
; 

pointer : '*' '{'typeQualifier'}'* '{'pointer'}'? 
; 

typeQualifier : const
	| volatile
; 


directDeclarator : indentifier
	| '(' declarator ')'
	| directDeclarator '[' '{'constantExpression'}'? ']'
	| directDeclarator '(' parameterTypeList ')'
	| directDeclarator '(' '{'indentifier'}'* ')'
; 

conditionalExpression : logicalOrExpression 
	| logicalOrExpression '?' expression ':' conditionalExpression
; 

logicalOrExpression : logicalAndExpression 
	| logicalOrExpression '|''|' logicalAndExpression 
; 
 
logicalAndExpression : inclusiveOrExpression 
	| logicalAndExpression '&''&' inclusiveOrExpression 
; 


inclusiveOrExpression : exclusiveOrExpression 
	| inclusiveOrExpression '|' exclusiveOrExpression 
; 


exclusiveOrExpression : andExpression
	| exclusiveOrExpression '^' andExpression
; 

andExpression : equealityExpression 
	| andExpression '&' equalityExpresssion
; 

equalityExpression : relationalExpression 
	| equalityExpression '=''=' relationalExpression 
	| equalityExpression '!''=' relationalExpression 
; 

relationalExpression : shiftExpression 
	| relationalExpression '<' shiftExpression 
	| relationalExpression '>' shiftExpression 
	| relationalExpression '<''=' shiftExpression 
	| relationalExpression '>''=' shiftExpression 
; 

shiftExpression : additiveExpression 
	| shiftExpression '<''<' additiveExpression 
	| shiftExpression '>''>' additiveExpression 
; 


additiveExpression : multiplicativeExpression
	| additiveExpression '+' multiplicativeExpression
	| additiveExpression '-' multiplicativeExpression
;



multiplicativeExpression : castExpression 
	| multiplicativeExpression '*' castExpression 
	| multiplicativeExpression '/' castExpression 
	| multiplicativeExpression '%' castExpression 
; 

castExpression : unaryExpression 
	|'(' typeName ')' castExpression 
; 


unaryExpression : postfixExpression 
	| '+''+' unaryExpression 
	| '-''-' unaryExpression 
	| unaryExpression castExpression 
	| sizeof unatyExpression
	| sizeof typeName
; 


postfixExpression : primaryExpression 
	| postfixExpression '[' expression ']'	
	| postfixExpression '(' '{'assignmentExpression'}'
	| postfixExpression '.' identifier 
	| postfixExpression '-''>' identifier 
	| postfixExpression '+''+'
	| postfixExpression '-''-'
;


primaryExpression : identifier 
	| constant 
	| string 
	| '(' expression ')'

;


%%
int yylex(){ 
	Sólo necesaria si se trabaja sin Flex 
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
