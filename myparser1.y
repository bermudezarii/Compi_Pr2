%{
/* fichero instrucciones.y */
#include <stdio.h>
%}


%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%start translationUnit

%%

primaryExpression
	: IDENTIFIER
	| CONSTANT
	| STRING_LITERAL
	| '(' expression ')'
	;

postfixExpression
	: primaryExpression
	| postfixExpression '[' expression ']'
	| postfixExpression '(' ')'
	| postfixExpression '(' argumentExpressionList ')'
	| postfixExpression '.' IDENTIFIER
	| postfixExpression PTR_OP IDENTIFIER
	| postfixExpression INC_OP
	| postfixExpression DEC_OP
	;

argumentExpressionList
	: assignmentExpression
	| argumentExpressionList ',' assignmentExpression
	;

unaryExpression
	: postfixExpression
	| INC_OP unaryExpression
	| DEC_OP unaryExpression
	| unaryOperator castExpression
	| SIZEOF unaryExpression
	| SIZEOF '(' typeName ')'
	;

unaryOperator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

castExpression
	: unaryExpression
	| '(' typeName ')' castExpression
	;

multiplicativeExpression
	: castExpression
	| multiplicativeExpression '*' castExpression
	| multiplicativeExpression '/' castExpression
	| multiplicativeExpression '%' castExpression
	;

additiveExpression
	: multiplicativeExpression
	| additiveExpression '+' multiplicativeExpression
	| additiveExpression '-' multiplicativeExpression
	;

shiftExpression
	: additiveExpression
	| shiftExpression LEFT_OP additiveExpression
	| shiftExpression RIGHT_OP additiveExpression
	;

relationalExpression
	: shiftExpression
	| relationalExpression '<' shiftExpression
	| relationalExpression '>' shiftExpression
	| relationalExpression LE_OP shiftExpression
	| relationalExpression GE_OP shiftExpression
	;

equalityExpression
	: relationalExpression
	| equalityExpression EQ_OP relationalExpression
	| equalityExpression NE_OP relationalExpression
	;

andExpression
	: equalityExpression
	| andExpression '&' equalityExpression
	;

exclusiveOrExpression
	: andExpression
	| exclusiveOrExpression '^' andExpression
	;

inclusiveOrExpression
	: exclusiveOrExpression
	| inclusiveOrExpression '|' exclusiveOrExpression
	;

logicalAndExpression
	: inclusiveOrExpression
	| logicalAndExpression AND_OP inclusiveOrExpression
	;

logicalOrExpression
	: logicalAndExpression
	| logicalOrExpression OR_OP logicalAndExpression
	;

conditionalExpression
	: logicalOrExpression
	| logicalOrExpression '?' expression ':' conditionalExpression
	;

assignmentExpression
	: conditionalExpression
	| unaryExpression assignmentOperator assignmentExpression
	;

assignmentOperator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignmentExpression
	| expression ',' assignmentExpression
	;

constantExpression
	: conditionalExpression
	;

declaration
	: declarationSpecifiers ';'
	| declarationSpecifiers initDeclaratorList ';'
	;

declarationSpecifiers
	: storageClassSpecifier
	| storageClassSpecifier declarationSpecifiers
	| typeSpecifier
	| typeSpecifier declarationSpecifiers
	| typeQualifier
	| typeQualifier declarationSpecifiers
	;

initDeclaratorList
	: initDeclarator
	| initDeclaratorList ',' initDeclarator
	;

initDeclarator
	: declarator
	| declarator '=' initializer
	;

storageClassSpecifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

typeSpecifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| structOrUnionSpecifier
	| enumSpecifier
	| TYPE_NAME
	;

structOrUnionSpecifier
	: structOrUnion IDENTIFIER '{' structDeclarationList '}'
	| structOrUnion '{' structDeclarationList '}'
	| structOrUnion IDENTIFIER
	;

structOrUnion
	: STRUCT
	| UNION
	;

structDeclarationList
	: structDeclaration
	| structDeclarationList structDeclaration
	;

structDeclaration
	: specifierQualifierList structDeclaratorList ';'
	;

specifierQualifierList
	: typeSpecifier specifierQualifierList
	| typeSpecifier
	| typeQualifier specifierQualifierList
	| typeQualifier
	;

structDeclaratorList
	: structDeclarator
	| structDeclaratorList ',' structDeclarator
	;

structDeclarator
	: declarator
	| ':' constantExpression
	| declarator ':' constantExpression
	;

enumSpecifier
	: ENUM '{' enumeratorList '}'
	| ENUM IDENTIFIER '{' enumeratorList '}'
	| ENUM IDENTIFIER
	;

enumeratorList
	: enumerator
	| enumeratorList ',' enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constantExpression
	;

typeQualifier
	: CONST
	| VOLATILE
	;

declarator
	: pointer directDeclarator
	| directDeclarator
	;

directDeclarator
	: IDENTIFIER
	| '(' declarator ')'
	| directDeclarator '[' constantExpression ']'
	| directDeclarator '[' ']'
	| directDeclarator '(' parameterTypeList ')'
	| directDeclarator '(' identifierList ')'
	| directDeclarator '(' ')'
	;

pointer
	: '*'
	| '*' typeQualifierList
	| '*' pointer
	| '*' typeQualifierList pointer
	;

typeQualifierList
	: typeQualifier
	| typeQualifierList typeQualifier
	;


parameterTypeList
	: parameterList
	| parameterList ',' ELLIPSIS
	;

parameterList
	: parameterDeclaration
	| parameterList ',' parameterDeclaration
	;

parameterDeclaration
	: declarationSpecifiers declarator
	| declarationSpecifiers abstractDeclarator
	| declarationSpecifiers
	;

identifierList
	: IDENTIFIER
	| identifierList ',' IDENTIFIER
	;

typeName
	: specifierQualifierList
	| specifierQualifierList abstractDeclarator
	;

abstractDeclarator
	: pointer
	| directAbstractDeclarator
	| pointer directAbstractDeclarator
	;

directAbstractDeclarator
	: '(' abstractDeclarator ')'
	| '[' ']'
	| '[' constantExpression ']'
	| directAbstractDeclarator '[' ']'
	| directAbstractDeclarator '[' constantExpression ']'
	| '(' ')'
	| '(' parameterTypeList ')'
	| directAbstractDeclarator '(' ')'
	| directAbstractDeclarator '(' parameterTypeList ')'
	;

initializer
	: assignmentExpression
	| '{' initializerList '}'
	| '{' initializerList ',' '}'
	;

initializerList
	: initializer
	| initializerList ',' initializer
	;

statement
	: labeledStatement
	| compoundStatement
	| expressionStatement
	| selectionStatement
	| iterationStatement
	| jumpStatement
	;

labeledStatement
	: IDENTIFIER ':' statement
	| CASE constantExpression ':' statement
	| DEFAULT ':' statement
	;

compoundStatement
	: '{' '}'
	| '{' statementList '}'
	| '{' declarationList '}'
	| '{' declarationList statementList '}'
	;

declarationList
	: declaration
	| declarationList declaration
	;

statementList
	: statement
	| statementList statement
	;

expressionStatement
	: ';'
	| expression ';'
	;

selectionStatement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	| SWITCH '(' expression ')' statement
	;

iterationStatement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expressionStatement expressionStatement ')' statement
	| FOR '(' expressionStatement expressionStatement expression ')' statement
	;

jumpStatement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	;

translationUnit
	: externalDeclaration
	| translationUnit externalDeclaration
	;

externalDeclaration
	: functionDefinition
	| declaration
	;

functionDefinition
	: declarationSpecifiers declarator declarationList compoundStatement
	| declarationSpecifiers declarator compoundStatement
	| declarator declarationList compoundStatement
	| declarator compoundStatement
	;


%%
int yylex(){ 
	//Sólo necesaria si se trabaja sin Flex 
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