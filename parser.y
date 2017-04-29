%defines 
%{
	#pragma warning(disable: 4996)
	extern int yylex();
	//extern void yyerror(char *texto);

%}
%token  LITERAL INCLUDE DEFINE
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
	: IDENTIFIER {printf("primary_expression: INDENTIFIER FINAL\n");}
	| CONSTANT {printf("primary_expression: CONSTANT FINAL\n");}
	| COMMENT {printf("COMMENT FINAL\n");}
	| LEFT_PARENTHESIS expression RIGHT_PARENTHESIS {printf("primary_expression: LEFT_PARENTHESIS FINAL expression RIGHT_PARETHESIS\n");}
	| INTEGER {printf("primary_expression: INTEGER FINAL\n");}
	;

postfix_expression
	: primary_expression {printf("postfix_expression: primary_expression \n");}
	| postfix_expression LEFT_SBRACKET expression RIGHT_SBRACKET {printf("postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n");}
	| postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS {printf("postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
	| postfix_expression LEFT_PARENTHESIS argument_expression_list RIGHT_PARENTHESIS {printf("postfix_expression: postfix_expression RIGHT_PARENTHESIS argument_expression_list LEFT_PARENTHESIS\n");}
	| postfix_expression DOT IDENTIFIER {printf("postfix_expression: postfix_expression DOT IDENTIFIER\n");}
	| postfix_expression PTR_OP IDENTIFIER {printf("postfix_expression: postfix_expression PTR_OP IDENTIFIER\n");}
	| postfix_expression INC_OP {printf("postfix_expression: postfix_expression INC_OP\n");}
	| postfix_expression DEC_OP {printf("postfix_expression: postfix_expression DEC_OP\n");}
	;



argument_expression_list
	: assignment_expression {printf("argument_expression_list: assignment_expression\n");}
	| argument_expression_list COMMA assignment_expression {printf("argument_expression_list: argument_expression_list COMMA assignment_expression\n");}
	;

unary_expression
	: postfix_expression {printf("unary_expression: postfix_expression\n");}
	| INC_OP unary_expression {printf("unary_expression: INC_OP unary_expression\n");}
	| DEC_OP unary_expression {printf("unary_expression: DEC_OP unary_expression\n");}
	| unary_operator cast_expression {printf("unary_expression: unary_operator cast_expression\n");}
	| SIZEOF unary_expression {printf("unary_expression: SIZEOF unary_expression\n");}
	| SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS {printf("unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n");}
	;

unary_operator
	: BIT_AND {printf("unary_operator: BIT_AND\n");} 
	| MUL {printf("unary_operator: MUL\n");}
	| PLUS {printf("unary_operator: PLUS\n");}
	| MINUS {printf("unary_operator: MINUS\n");}
	| PRIME {printf("unary_operator: PRIME\n");}
	| EXCLAMATION {printf("unary_operator: EXCLAMATION\n");}
	;

cast_expression
	: unary_expression {printf("cast_expression: unary_expression\n");}
	| LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression {printf("cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n");}
	;

multiplicative_expression
	: cast_expression {printf("multiplicative_expression: cast_expression\n");}
	| multiplicative_expression MUL cast_expression {printf("multiplicative_expression: multiplicative_expression MUL cast_expression\n");}
	| multiplicative_expression DIV cast_expression {printf("multiplicative_expression: multiplicative_expression DIV cast_expression\n");}
	| multiplicative_expression MOD cast_expression {printf("multiplicative_expression: multiplicative_expression MOD cast_expression\n");}
	;

additive_expression
	: multiplicative_expression {printf("additive_expression: multiplicative_expression\n");}
	| additive_expression PLUS multiplicative_expression {printf("additive_expression: additive_expression PLUS multiplicative_expression\n");}
	| additive_expression MINUS multiplicative_expression {printf("additive_expression: additive_expression MINUS multiplicative_expression\n");}
	;

shift_expression
	: additive_expression {printf("shift_expression: additive_expression\n");}
	| shift_expression LEFT_OP additive_expression {printf("shift_expression: shift_expression LEFT_OP additive_expression\n");}
	| shift_expression RIGHT_OP additive_expression {printf("shift_expression: shift_expression RIGHT_OP additive_expression \n");}
	;

relational_expression
	: shift_expression {printf("relational_expression: shift_expression\n");}
	| relational_expression LESS shift_expression {printf("relational_expression: relational_expression LESS shift_expression\n");}
	| relational_expression GREATER shift_expression {printf("relational_expression: relational_expression GREATER shift_expression\n");}
	| relational_expression LE_OP shift_expression {printf("relational_expression: relational_expression LE_OP shift_expression\n");}
	| relational_expression GE_OP shift_expression {printf("relational_expression: relational_expression GE_OP shift_expression\n");}
	;

equality_expression
	: relational_expression {printf("equality_expression: relational_expression\n");}
	| equality_expression EQ_OP relational_expression {printf("equality_expression: equality_expression EQ_OP relational_expression\n");}
	| equality_expression NE_OP relational_expression {printf("equality_expression: equality_expression NE_OP relational_expression\n");}
	;

and_expression
	: equality_expression {printf("and_expression: equality_expression\n");}
	| and_expression BIT_AND equality_expression {printf("and_expression: and_expression BIT_AND equality_expression\n");}
	;

exclusive_or_expression
	: and_expression {printf("exclusive_or_expression: and_expression\n");}
	| exclusive_or_expression UP_ARROW and_expression {printf("exclusive_or_expression: exclusive_or_expression UP_ARROW and_expression\n");}
	;

inclusive_or_expression
	: exclusive_or_expression {printf("inclusive_or_expression: exclusive_or_expression\n");}
	| inclusive_or_expression BIT_OR exclusive_or_expression {printf("inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression\n");}
	;

logical_and_expression
	: inclusive_or_expression {printf("logical_and_expression: inclusive_or_expression\n");}
	| logical_and_expression AND_OP inclusive_or_expression {printf("logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n");}
	;

logical_or_expression
	: logical_and_expression {printf("logical_or_expression: logical_and_expression\n");}
	| logical_or_expression OR_OP logical_and_expression {printf("logical_or_expression: logical_or_expression OR_OP logical_and_expression\n");}
	;

conditional_expression
	: logical_or_expression {printf("conditional_expression: logical_or_expression\n");}
	| logical_or_expression INTERROGATION expression COLON conditional_expression {printf("conditional_expression: logical_or_expression INTERROGATION expression COLON conditional_expression\n");}
	;

assignment_expression
	: conditional_expression {printf("assignment_expression: conditional_expression\n");}
	| unary_expression assignment_operator assignment_expression {printf("assignment_expression: unary_expression assignment_operator assignment_expression\n");}
	;

assignment_operator
	: EQU {printf("assignment_operator: EQU\n");}
	| MUL_ASSIGN {printf("assignment_operator: MUL_ASSIGN\n");}
	| DIV_ASSIGN {printf("assignment_operator: DIV_ASSIGN\n");}
	| MOD_ASSIGN {printf("assignment_operator: MOD_ASSIGN\n");}
	| ADD_ASSIGN {printf("assignment_operator: ADD_ASSIGN\n");}
	| SUB_ASSIGN {printf("assignment_operator: SUB_ASSIGN\n");}
	| LEFT_ASSIGN {printf("assignment_operator: LEFT_ASSIGN\n");}
	| RIGHT_ASSIGN {printf("assignment_operator: RIGHT_ASSIGN\n");}
	| AND_ASSIGN {printf("assignment_operator: AND_ASSIGN\n");}
	| XOR_ASSIGN {printf("assignment_operator: XOR_ASSIGN\n");}
	| OR_ASSIGN {printf("assignment_operator: OR_ASSIGN\n");}
	;

expression
	: assignment_expression {printf("expression: assignment_expression\n");}
	| expression COMMA assignment_expression {printf("expression: expression COMMA assignment_expression\n");}
	;

constant_expression
	: conditional_expression {printf("constant_expression: conditional_expression\n");}
	;

declaration
	: declaration_specifiers SEMICOLON {printf("declaration: declaration_specifiers SEMICOLON \n");}
	| declaration_specifiers init_declarator_list SEMICOLON {printf("declaration: declaration_specifiers init_declarator_list SEMICOLON\n");}
	;

declaration_specifiers
	: storage_class_specifier {printf("declaration_specifiers: storage_class_specifier \n");}
	| storage_class_specifier declaration_specifiers {printf("declaration_specifiers: storage_class_specifier declaration_specifiers\n");}
	| type_specifier {printf("declaration_specifiers: type_specifier\n");}
	| type_specifier declaration_specifiers {printf("declaration_specifiers: type_specifier declaration_specifiers {\n");}
	| type_qualifier {printf("declaration_specifiers: type_qualifier\n");}
	| type_qualifier declaration_specifiers {printf("declaration_specifiers: type_qualifier declaration_specifiers\n");}
	;

init_declarator_list
	: init_declarator {printf("init_declarator_list: init_declarator\n");}
	| init_declarator_list COMMA init_declarator {printf("init_declarator_list: init_declarator_list COMMA init_declarator\n");}
	;

init_declarator
	: declarator {printf("init_declarator: declarator\n");}
	| declarator EQU initializer {printf("init_declarator: declarator EQU initializer\n");}
	;

storage_class_specifier
	: TYPEDEF {printf("storage_class_specifier: TYPEDEF\n");}
	| EXTERN {printf("storage_class_specifier: EXTERN\n");}
	| STATIC {printf("storage_class_specifier: STATIC\n");}
	| AUTO {printf("storage_class_specifier: AUTO\n");}
	| REGISTER {printf("storage_class_specifier: REGISTER\n");}
	;

type_specifier
	: VOID {printf("type_specifier: VOID\n");}
	| CHAR {printf("type_specifier: CHAR\n");}
	| SHORT {printf("type_specifier: SHORT\n");}
	| INT {printf("type_specifier: INT\n");}
	| LONG {printf("type_specifier: LONG\n");}
	| FLOAT {printf("type_specifier: FLOAT\n");}
	| DOUBLE {printf("type_specifier: DOUBLE\n");}
	| SIGNED {printf("type_specifier: SIGNED\n");}
	| UNSIGNED {printf("type_specifier: UNSIGNED\n");}
	| struct_or_union_specifier {printf("type_specifier: struct_or_union_specifier\n");}
	| enum_specifier {printf("type_specifier: enum_specifier\n");}
	| TYPE_NAME {printf("type_specifier: TYPE_NAME\n");}
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET {printf("struct_or_union_specifier: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET \n");}
	| struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET {printf("struct_or_union_specifier: struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET\n");}
	| struct_or_union IDENTIFIER {printf("struct_or_union_specifier: struct_or_union IDENTIFIER\n");}
	;

struct_or_union
	: STRUCT {printf("struct_or_union: STRUCT\n");}
	| UNION {printf("struct_or_union: UNION\n");}
	;

struct_declaration_list
	: struct_declaration {printf("struct_declaration_list: struct_declaration\n");}
	| struct_declaration_list struct_declaration {printf("struct_declaration_list: struct_declaration_list struct_declaration\n");}
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list SEMICOLON {printf("struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON\n");}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list {printf("specifier_qualifier_list: type_specifier specifier_qualifier_list\n");}
	| type_specifier {printf("specifier_qualifier_list: type_specifier\n");}
	| type_qualifier specifier_qualifier_list {printf("specifier_qualifier_list: type_qualifier specifier_qualifier_list\n");}
	| type_qualifier {printf("specifier_qualifier_list: type_qualifier\n");}
	;

struct_declarator_list
	: struct_declarator {printf("struct_declarator_list: struct_declarator\n");}
	| struct_declarator_list COMMA struct_declarator {printf("struct_declarator_list: struct_declarator_list COMMA struct_declarator\n");}
	;

struct_declarator
	: declarator{printf("struct_declarator: declarator\n");}
	| COLON constant_expression {printf("struct_declarator: COLON constant_expression \n");}
	| declarator COLON constant_expression {printf("struct_declarator: declarator COLON constant_expression \n");}
	;

enum_specifier
	: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET {printf("enum_specifier: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET\n");}
	| ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET {printf("enum_specifier: ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET \n");}
	| ENUM IDENTIFIER {printf("enum_specifier: ENUM IDENTIFIER\n");}
	;

enumerator_list
	: enumerator {printf("enumerator_list: enumerator\n");}
	| enumerator_list COMMA enumerator {printf("enumerator_list: enumerator_list COMMA enumerator\n");}
	;

enumerator
	: IDENTIFIER {printf("enumerator: IDENTIFIER\n");}
	| IDENTIFIER EQU constant_expression {printf("enumerator: IDENTIFIER EQU constant_expression\n");}
	;

type_qualifier
	: CONST {printf("type_qualifier: CONST\n");}
	| VOLATILE {printf("type_qualifier: VOLATILE\n");}
	;

declarator
	: pointer direct_declarator {printf("declarator: pointer direct_declarator \n");}
	| direct_declarator {printf("declarator: direct_declarator\n");}
	;

direct_declarator
	: IDENTIFIER {printf("direct_declarator: IDENTIFIER\n");}
	| LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS {printf("direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n");}
	| direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET {printf("direct_declarator: direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET\n");}
	| direct_declarator LEFT_SBRACKET RIGHT_SBRACKET {printf("direct_declarator: direct_declarator LEFT_SBRACKET RIGHT_SBRACKET\n");}
	| direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS {printf("direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n");}
	| direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS {printf("direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS\n");}
	| direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS {printf("direct_declarator: direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
	;

pointer
	: MUL {printf("pointer: MUL\n");}
	| MUL type_qualifier_list {printf("pointer: MUL type_qualifier_list\n");}
	| MUL pointer {printf("pointer: MUL pointer\n");}
	| MUL type_qualifier_list pointer {printf("pointer: MUL type_qualifier_list pointer\n");}
	;

type_qualifier_list
	: type_qualifier {printf("type_qualifier_list: type_qualifier\n");}
	| type_qualifier_list type_qualifier {printf("type_qualifier_list: type_qualifier_list type_qualifier\n");}
	;


parameter_type_list
	: parameter_list {printf("parameter_type_list: parameter_list\n");}
	| parameter_list COMMA ELLIPSIS {printf("parameter_type_list: parameter_list COMMA ELLIPSIS\n");}
	;

parameter_list
	: parameter_declaration {printf("parameter_list: parameter_declaration\n");}
	| parameter_list COMMA parameter_declaration {printf("parameter_list: parameter_list COMMA parameter_declaration\n");}
	;

parameter_declaration
	: declaration_specifiers declarator {printf("parameter_declaration: declaration_specifiers declarator\n");}
	| declaration_specifiers abstract_declarator {printf("parameter_declaration: declaration_specifiers abstract_declarator\n");}
	| declaration_specifiers {printf("parameter_declaration: declaration_specifiers\n");}
	;

identifier_list
	: IDENTIFIER {printf("identifier_list: IDENTIFIER\n");}
	| identifier_list COMMA IDENTIFIER {printf("identifier_list: identifier_list COMMA IDENTIFIER\n");}
	;

type_name
	: specifier_qualifier_list {printf("type_name: specifier_qualifier_list\n");}
	| specifier_qualifier_list abstract_declarator {printf("type_name: specifier_qualifier_list abstract_declarator\n");}
	;

abstract_declarator
	: pointer {printf("abstract_declarator: pointer\n");}
	| direct_abstract_declarator {printf("abstract_declarator: direct_abstract_declarator\n");}
	| pointer direct_abstract_declarator {printf("abstract_declarator: pointer direct_abstract_declarator\n");}
	;

direct_abstract_declarator
	: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS {printf("direct_abstract_declarator: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS \n");}
	| LEFT_SBRACKET RIGHT_SBRACKET {printf("direct_abstract_declarator:  LEFT_SBRACKET RIGHT_SBRACKET \n");}
	| LEFT_SBRACKET constant_expression RIGHT_SBRACKET {printf("direct_abstract_declarator: LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n");}
	| direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET {printf("direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET\n");}
	| direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET {printf("direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n");}
	| LEFT_PARENTHESIS RIGHT_PARENTHESIS {printf("direct_abstract_declarator: LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
	| LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS {printf("direct_abstract_declarator: LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS \n");}
	| direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS {printf("direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
	| direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS {printf("direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n");}
	;

initializer
	: assignment_expression {printf("initializer: assignment_expression\n");}
	| LEFT_BRACKET initializer_list RIGHT_BRACKET {printf("initializer: LEFT_BRACKET initializer_list RIGHT_BRACKET\n");}
	| LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET {printf("initializer: LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET\n");}
	;

initializer_list
	: initializer {printf("initializer_list: initializer\n");}
	| initializer_list COMMA initializer {printf("initializer_list: initializer_list COMMA initializer \n");}
	;

statement
	: labeled_statement {printf("statement: labeled_statement\n");}
	| compound_statement {printf("statement: compound_statement\n");}
	| expression_statement {printf("statement: expression_statement\n");}
	| selection_statement {printf("statement: selection_statement\n");}
	| iteration_statement {printf("statement: iteration_statement\n");}
	| jump_statement {printf("statement: jump_statement\n");}
	;

labeled_statement
	: IDENTIFIER COLON statement {printf("labeled_statement: IDENTIFIER COLON statement \n");}
	| CASE constant_expression COLON statement {printf("labeled_statement: CASE constant_expression COLON statement\n");}
	| DEFAULT COLON statement {printf("labeled_statement: DEFAULT COLON statement\n");}
	;

compound_statement
	: LEFT_BRACKET RIGHT_BRACKET {printf("compound_statement: LEFT_BRACKET RIGHT_BRACKET\n");}
	| LEFT_BRACKET statement_list RIGHT_BRACKET {printf("compound_statement: LEFT_BRACKET statement_list RIGHT_BRACKET\n");}
	| LEFT_BRACKET declaration_list RIGHT_BRACKET {printf("compound_statement: LEFT_BRACKET declaration_list RIGHT_BRACKET\n");}
	| LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET {printf("compound_statement: LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET\n");}
	;

declaration_list
	: declaration {printf("declaration_list: declaration\n");}
	| declaration_list declaration {printf("declaration_list: declaration_list declaration\n");}
	;

statement_list
	: statement {printf("statement_list: statement\n");}
	| statement_list statement {printf("statement_list: statement_list statement\n");}
	;

expression_statement
	: SEMICOLON {printf("expression_statement: SEMICOLON\n");}
	| expression SEMICOLON {printf("expression_statement: expression SEMICOLON \n");}
	;

selection_statement
	: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement {printf("selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n");}
	| IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement {printf("selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement\n");}
	| SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement {printf("selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n");}
	;

iteration_statement
	: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement {printf("iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n");}
	| DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON {printf("iteration_statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON\n");}
	| FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement {printf("iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n");}
	| FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement {printf("iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n");}
	;

jump_statement
	: GOTO IDENTIFIER SEMICOLON {printf("jump_statement: GOTO IDENTIFIER SEMICOLON\n");}
	| CONTINUE SEMICOLON {printf("jump_statement: CONTINUE SEMICOLON\n");}
	| BREAK SEMICOLON {printf("jump_statement: BREAK SEMICOLON\n");}
	| RETURN SEMICOLON {printf("jump_statement: RETURN SEMICOLON\n");}
	| RETURN expression SEMICOLON {printf("jump_statement: RETURN expression SEMICOLON\n");}
	;

translation_unit
	: external_declaration {printf("translation_unit: Entre a external_declaration\n");} 
	| translation_unit external_declaration  {printf("translation_unit: Entre a ciclo translation_unit\n");}
	| /* empty */{printf("translation_unit: Archivo Vacío\n");}

	;

external_declaration
	: function_definition{printf("external_declaration: function_definition\n");}
	| declaration {printf("external_declaration: declaration\n");}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement {printf("function_definition: declaration_specifiers declarator declaration_list compound_statement\n");}
	| declaration_specifiers declarator compound_statement {printf("function_definition: declaration_specifiers declarator compound_statement \n");}
	| declarator declaration_list compound_statement {printf("function_definition: declarator declaration_list compound_statement\n");}
	| declarator compound_statement {printf("function_definition: declarator compound_statement\n");}
	;

%%

#include<stdio.h>
extern linea;
/*extern void yyerror(char *texto){
 	if(strcmp(texto,"syntax error"))
  		printf(" Syntax Error in Line : %d : %s\n",linea,texto);
      
};*/
