%defines 
%{
	#pragma warning(disable: 4996)
	extern int yylex();
	//extern void yyerror(char *texto);

%}
%token LEFT_BRACKET RIGHT_BRACKET COMMA LEFT_PARENTHESIS RIGHT_PARENTHESIS RIGHT_SBRACKET LEFT_SBRACKET SEMICOLON COLON EXCLAMATION PRIME INTERROGATION UP_ARROW DOT
%token BIT_AND BIT_OR
%token COMMENT 
%token PLUS MINUS DIV MOD MUL 
%token  EQU LESS GREATER 
%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF INTEGER
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%start translation_unit
%%


primary_expression
	: IDENTIFIER
	| CONSTANT
	| COMMENT
	| LEFT_PARENTHESIS expression RIGHT_PARENTHESIS
	| INTEGER
	;

postfix_expression
	: primary_expression
	| postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET
	| postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS
	| postfix_expression LEFT_PARENTHESIS argument_expression_list RIGHT_PARENTHESIS
	| postfix_expression DOT IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;



argument_expression_list
	: assignment_expression
	| argument_expression_list COMMA assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS
	;

unary_operator
	: BIT_AND
	| MUL
	| PLUS
	| MINUS
	| PRIME
	| EXCLAMATION
	;

cast_expression
	: unary_expression
	| LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression MUL cast_expression
	| multiplicative_expression DIV cast_expression
	| multiplicative_expression MOD cast_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression PLUS multiplicative_expression
	| additive_expression MINUS multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression LESS shift_expression
	| relational_expression GREATER shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression BIT_AND equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression UP_ARROW and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression BIT_OR exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression INTERROGATION expression COLON conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: EQU
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
	: assignment_expression
	| expression COMMA assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers SEMICOLON
	| declaration_specifiers init_declarator_list SEMICOLON
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list COMMA init_declarator
	;

init_declarator
	: declarator
	| declarator EQU initializer
	;

storage_class_specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| struct_or_union_specifier
	| enum_specifier
	| TYPE_NAME
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET
	| struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list SEMICOLON
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list COMMA struct_declarator
	;

struct_declarator
	: declarator
	| COLON constant_expression
	| declarator COLON constant_expression
	;

enum_specifier
	: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET
	| ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list COMMA enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER EQU constant_expression
	;

type_qualifier
	: CONST
	| VOLATILE
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER
	| LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS
	| direct_declarator RIGHT_SBRACKET constant_expression LEFT_SBRACKET
	| direct_declarator RIGHT_SBRACKET LEFT_SBRACKET
	| direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS
	| direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS
	| direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS
	;

pointer
	: MUL
	| MUL type_qualifier_list
	| MUL pointer
	| MUL type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list
	| parameter_list COMMA ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list COMMA parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list COMMA IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS
	| RIGHT_SBRACKET LEFT_SBRACKET
	| RIGHT_SBRACKET constant_expression LEFT_SBRACKET
	| direct_abstract_declarator RIGHT_SBRACKET LEFT_SBRACKET
	| direct_abstract_declarator RIGHT_SBRACKET constant_expression LEFT_SBRACKET
	| LEFT_PARENTHESIS RIGHT_PARENTHESIS
	| LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS
	| direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS
	| direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS
	;

initializer
	: assignment_expression
	| LEFT_BRACKET initializer_list RIGHT_BRACKET
	| LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET
	;

initializer_list
	: initializer
	| initializer_list COMMA initializer
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER COLON statement
	| CASE constant_expression COLON statement
	| DEFAULT COLON statement
	;

compound_statement
	: LEFT_BRACKET RIGHT_BRACKET
	| LEFT_BRACKET statement_list RIGHT_BRACKET
	| LEFT_BRACKET declaration_list RIGHT_BRACKET
	| LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: SEMICOLON
	| expression SEMICOLON
	;

selection_statement
	: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement
	| IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement
	| SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement
	;

iteration_statement
	: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement
	| DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON
	| FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement
	| FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement
	;

jump_statement
	: GOTO IDENTIFIER SEMICOLON
	| CONTINUE SEMICOLON
	| BREAK SEMICOLON
	| RETURN SEMICOLON
	| RETURN expression SEMICOLON
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	| /* empty */
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| declarator declaration_list compound_statement
	| declarator compound_statement
	;

%%

#include<stdio.h>
extern linea;
/*extern void yyerror(char *texto){
 	if(strcmp(texto,"syntax error"))
  		printf(" Syntax Error in Line : %d : %s\n",linea,texto);
      
};*/