%defines 
%{
	#pragma warning(disable: 4996)
	extern int yylex();
	extern int linea ;
	extern char* yytext;
	char* gramaticas[50000];

%}
%token  LITERAL INCLUDE DEFINE
%token LEFT_BRACKET RIGHT_BRACKET COMMA LEFT_PARENTHESIS RIGHT_PARENTHESIS RIGHT_SBRACKET LEFT_SBRACKET SEMICOLON COLON EXCLAMATION PRIME INTERROGATION UP_ARROW DOT
%token BIT_AND BIT_OR
%token COMMENT 
%token PLUS MINUS DIV MOD MUL 
%token  EQU LESS GREATER 
%token IDENTIFIER CONSTANT SIZEOF INTEGER
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN 

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%start translation_unit
%%


primary_expression
	: IDENTIFIER {printf("%d con %s primary_expression: IDENTIFIER FINAL\n",linea, yytext );$$=strdup(yytext);}
	| CONSTANT {printf("%d con %s  primary_expression: CONSTANT FINAL\n",linea,  yytext );}
	| LITERAL {printf("%d con %s  LITERAL FINAL\n",linea, yytext );}
	| LEFT_PARENTHESIS expression RIGHT_PARENTHESIS {printf("%d con %s  primary_expression: LEFT_PARENTHESIS FINAL expression RIGHT_PARETHESIS\n",linea, yytext);}
	| INTEGER {printf("%d con %s  primary_expression: INTEGER FINAL\n",linea, yytext );}
	;

postfix_expression
	: primary_expression {printf("%d con %s  postfix_expression: primary_expression\n",linea, yytext );}
	| pointer  primary_expression {printf("%d con %s  postfix_expression: pointer primary_expression\n",linea, yytext);}
	| primary_expression pointer primary_expression {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, yytext );}
	| postfix_expression LEFT_SBRACKET expression RIGHT_SBRACKET {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, yytext);}
	| LEFT_BRACKET RIGHT_BRACKET {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, yytext);}
	| postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS {printf("%d con %s  postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,yytext);}
	| postfix_expression LEFT_PARENTHESIS argument_expression_list RIGHT_PARENTHESIS {printf("%d con %s  postfix_expression: postfix_expression RIGHT_PARENTHESIS argument_expression_list LEFT_PARENTHESIS\n",linea, yytext);}
	| postfix_expression DOT IDENTIFIER {printf("%d con %s  postfix_expression: postfix_expression DOT IDENTIFIER\n",linea, yytext);}
	| postfix_expression PTR_OP IDENTIFIER {printf("%d con %s  postfix_expression: postfix_expression PTR_OP IDENTIFIER\n",linea, yytext);}
	| postfix_expression INC_OP {printf("%d con %s  postfix_expression: postfix_expression INC_OP\n",linea, yytext );}
	| postfix_expression DEC_OP {printf("%d con %s  postfix_expression: postfix_expression DEC_OP\n",linea, yytext );}
	;



argument_expression_list
	: assignment_expression {printf("%d con %s  argument_expression_list: assignment_expression\n",linea, yytext);}
	| argument_expression_list COMMA assignment_expression {printf("%d con %s  argument_expression_list: argument_expression_list COMMA assignment_expression\n",linea, yytext);}
	;

unary_expression
	: postfix_expression {printf("%d con %s  unary_expression: postfix_expression\n",linea, yytext );}
	| EQU postfix_expression {printf("%d con %s  unary_expression:pointer postfix_expression\n",linea, yytext);}
	| INC_OP unary_expression {printf("%d con %s  unary_expression: INC_OP unary_expression\n",linea, yytext );}
	| DEC_OP unary_expression {printf("%d con %s  unary_expression: DEC_OP unary_expression\n",linea, yytext );}
	| unary_operator cast_expression {printf("%d con %s  unary_expression: unary_operator cast_expression\n",linea, yytext );}
	| SIZEOF unary_expression {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, yytext );}
	| SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, yytext );}
	;

unary_operator
	: BIT_AND {printf("%d con %s  unary_operator: BIT_AND\n",linea, yytext );} 
	| MUL {printf("%d con %s  unary_operator: MUL\n",linea, yytext );}
	| PLUS {printf("%d con %s  unary_operator: PLUS\n",linea, yytext );}
	| MINUS {printf("%d con %s  unary_operator: MINUS\n",linea, yytext );}
	| PRIME {printf("%d con %s  unary_operator: PRIME\n",linea, yytext );}
	| EXCLAMATION {printf("%d con %s  unary_operator: EXCLAMATION\n",linea, yytext);}
	;

cast_expression
	: unary_expression {printf("%d con %s  cast_expression: unary_expression\n",linea, yytext);}
	| LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, yytext);}
	;

multiplicative_expression
	: cast_expression {printf("%d con %s  multiplicative_expression: cast_expression\n",linea, yytext);}
	| multiplicative_expression MUL cast_expression {printf("%d con %s  multiplicative_expression: multiplicative_expression MUL cast_expression\n",linea, yytext );}
	| multiplicative_expression DIV cast_expression {printf("%d con %s  multiplicative_expression: multiplicative_expression DIV cast_expression\n",linea, yytext );}
	| multiplicative_expression MOD cast_expression {printf("%d con %s  multiplicative_expression: multiplicative_expression MOD cast_expression\n",linea,yytext );}
	;

additive_expression
	: multiplicative_expression {printf("%d con %s  additive_expression: multiplicative_expression\n",linea,yytext );}
	| additive_expression PLUS multiplicative_expression {printf("%d con %s  additive_expression: additive_expression PLUS multiplicative_expression\n",linea,yytext) ;}
	| additive_expression MINUS multiplicative_expression {printf("%d con %s  additive_expression: additive_expression MINUS multiplicative_expression\n",linea, yytext) ;}
	;

shift_expression
	: additive_expression {printf("%d con %s  shift_expression: additive_expression\n",linea, yytext );}
	| shift_expression LEFT_OP additive_expression {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, yytext);}
	| shift_expression RIGHT_OP additive_expression {printf("%d con %s  shift_expression: shift_expression RIGHT_OP additive_expression \n",linea, yytext);}
	;

relational_expression
	: shift_expression {printf("%d con %s  relational_expression: shift_expression\n",linea, yytext);}
	| relational_expression LESS shift_expression {printf("%d con %s  relational_expression: relational_expression LESS shift_expression\n",linea, yytext);}
	| relational_expression GREATER shift_expression {printf("%d con %s  relational_expression: relational_expression GREATER shift_expression\n",linea, yytext );}
	| relational_expression LE_OP shift_expression {printf("%d con %s  relational_expression: relational_expression LE_OP shift_expression\n",linea, yytext);}
	| relational_expression GE_OP shift_expression {printf("%d con %s  relational_expression: relational_expression GE_OP shift_expression\n",linea, yytext );}
	;

equality_expression
	: relational_expression {printf("%d con %s  equality_expression: relational_expression\n",linea, yytext);}
	| equality_expression EQ_OP relational_expression {printf("%d con %s  equality_expression: equality_expression EQ_OP relational_expression\n",linea, yytext );}
	| equality_expression NE_OP relational_expression {printf("%d con %s  equality_expression: equality_expression NE_OP relational_expression\n",linea, yytext);}
	;

and_expression
	: equality_expression {printf("%d con %s  and_expression: equality_expression\n",linea, yytext );}
	| and_expression BIT_AND equality_expression {printf("%d con %s  and_expression: and_expression BIT_AND equality_expression\n",linea, yytext);}
	;

exclusive_or_expression
	: and_expression {printf("%d con %s  exclusive_or_expression: and_expression\n",linea, yytext );}
	| exclusive_or_expression UP_ARROW and_expression {printf("%d con %s  exclusive_or_expression: exclusive_or_expression UP_ARROW and_expression\n",linea, yytext );}
	;

inclusive_or_expression
	: exclusive_or_expression {printf("%d con %s  inclusive_or_expression: exclusive_or_expression\n",linea, yytext);}
	| inclusive_or_expression BIT_OR exclusive_or_expression {printf("%d con %s  inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression\n",linea, yytext );}
	;

logical_and_expression
	: inclusive_or_expression {printf("%d con %s  logical_and_expression: inclusive_or_expression\n",linea,yytext );}
	| logical_and_expression AND_OP inclusive_or_expression {printf("%d con %s  logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n",linea, yytext);}
	;

logical_or_expression
	: logical_and_expression {printf("%d con %s  logical_or_expression: logical_and_expression\n",linea,yytext);}
	| logical_or_expression OR_OP logical_and_expression {printf("%d con %s  logical_or_expression: logical_or_expression OR_OP logical_and_expression\n",linea, yytext );}
	;

conditional_expression
	: logical_or_expression {printf("%d con %s  conditional_expression: logical_or_expression\n",linea, yytext);}
	| logical_or_expression INTERROGATION expression COLON conditional_expression {printf("%d con %s  conditional_expression: logical_or_expression INTERROGATION expression COLON conditional_expression\n",linea,yytext);}
	;

assignment_expression
	: conditional_expression {printf("%d con %s  assignment_expression: conditional_expression\n",linea, yytext);}
	| unary_expression assignment_operator assignment_expression {printf("%d con %s  assignment_expression: unary_expression assignment_operator assignment_expression\n",linea,yytext);}
	;

assignment_operator
	: EQU {printf("%d con %s  assignment_operator: EQU\n",linea, yytext);}
	| MUL_ASSIGN {printf("%d con %s  assignment_operator: MUL_ASSIGN\n",linea,yytext );}
	| DIV_ASSIGN {printf("%d con %s  assignment_operator: DIV_ASSIGN\n",linea,yytext);}
	| MOD_ASSIGN {printf("%d con %s  assignment_operator: MOD_ASSIGN\n",linea,yytext);}
	| ADD_ASSIGN {printf("%d con %s  assignment_operator: ADD_ASSIGN\n",linea, yytext);}
	| SUB_ASSIGN {printf("%d con %s  assignment_operator: SUB_ASSIGN\n",linea, yytext);}
	| LEFT_ASSIGN {printf("%d con %s  assignment_operator: LEFT_ASSIGN\n",linea, yytext);}
	| RIGHT_ASSIGN {printf("%d con %s  assignment_operator: RIGHT_ASSIGN\n",linea,yytext);}
	| AND_ASSIGN {printf("%d con %s  assignment_operator: AND_ASSIGN\n",linea, yytext);}
	| XOR_ASSIGN {printf("%d con %s  assignment_operator: XOR_ASSIGN\n",linea, yytext);}
	| OR_ASSIGN {printf("%d con %s  assignment_operator: OR_ASSIGN\n",linea, yytext);}
	;

expression
	: assignment_expression {printf("%d con %s  expression: assignment_expression\n",linea, yytext);}
	| expression COMMA assignment_expression {printf("%d con %s  expression: expression COMMA assignment_expression\n",linea,yytext);}
	;

constant_expression
	: conditional_expression {printf("%d con %s  constant_expression: conditional_expression\n",linea, yytext );}
	;

declaration
	: declaration_specifiers SEMICOLON {printf("%d con %s  declaration: declaration_specifiers SEMICOLON \n",linea, yytext );}
	| declaration_specifiers init_declarator_list SEMICOLON {printf("%d con %s  declaration: declaration_specifiers init_declarator_list SEMICOLON\n",linea, yytext);}
	;

declaration_specifiers
	: storage_class_specifier {printf("%d con %s  declaration_specifiers: storage_class_specifier \n",linea, yytext);}
	| storage_class_specifier declaration_specifiers {printf("%d con %s  declaration_specifiers: storage_class_specifier declaration_specifiers\n",linea, yytext);}
	| type_specifier {printf("%d con %s  declaration_specifiers: type_specifier\n",linea, yytext);}
	| type_specifier declaration_specifiers {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, yytext);}
	| type_qualifier {printf("%d con %s  declaration_specifiers: type_qualifier\n",linea, yytext );}
	| type_qualifier declaration_specifiers {printf("%d con %s  declaration_specifiers: type_qualifier declaration_specifiers\n",linea, yytext );}
	;

init_declarator_list
	: init_declarator {printf("%d con %s  init_declarator_list: init_declarator\n",linea, yytext );}
	| init_declarator_list COMMA init_declarator {printf("%d con %s  init_declarator_list: init_declarator_list COMMA init_declarator\n",linea,yytext);}
	;

init_declarator
	: declarator {printf("%d con %s  init_declarator: declarator\n",linea, yytext );}
	| declarator EQU initializer {printf("%d con %s  init_declarator: declarator EQU initializer\n",linea, yytext );}
	;

storage_class_specifier
	: TYPEDEF {printf("%d con %s  storage_class_specifier: TYPEDEF\n",linea, yytext);}
	| EXTERN {printf("%d con %s  storage_class_specifier: EXTERN\n",linea, yytext);}
	| STATIC {printf("%d con %s  storage_class_specifier: STATIC\n",linea,yytext);}
	| AUTO {printf("%d con %s  storage_class_specifier: AUTO\n",linea, yytext);}
	| REGISTER {printf("%d con %s  storage_class_specifier: REGISTER\n",linea, yytext);}
	;

type_specifier
	: VOID {printf("%d con %s  type_specifier: VOID\n",linea, yytext);}
	| CHAR {printf("%d con %s  type_specifier: CHAR\n",linea, yytext);}
	| SHORT {printf("%d con %s  type_specifier: SHORT\n",linea, yytext);}
	| INT {printf("%d con %s  type_specifier: INT\n",linea, yytext);}
	| LONG {printf("%d con %s  type_specifier: LONG\n",linea, yytext);}
	| FLOAT {printf("%d con %s  type_specifier: FLOAT\n",linea, yytext);}
	| DOUBLE {printf("%d con %s  type_specifier: DOUBLE\n",linea, yytext);}
	| SIGNED {printf("%d con %s  type_specifier: SIGNED\n",linea, yytext);}
	| UNSIGNED {printf("%d con %s  type_specifier: UNSIGNED\n",linea, yytext);}
	| struct_or_union_specifier {printf("%d con %s  type_specifier: struct_or_union_specifier\n",linea, yytext );}
	| enum_specifier {printf("%d con %s  type_specifier: enum_specifier\n",linea, yytext );}
	| type_name {printf("%d con %s  type_specifier: TYPE_NAME\n",linea,yytext);}

	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET \n",linea, yytext );}
	| struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET {printf("%d con %s  struct_or_union_specifier: struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET\n",linea,yytext );}
	| struct_or_union IDENTIFIER {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER\n",linea, yytext);}
	;

struct_or_union
	: STRUCT {printf("%d con %s  struct_or_union: STRUCT\n",linea, yytext);}
	| UNION {printf("%d con %s  struct_or_union: UNION\n",linea, yytext);}
	;

struct_declaration_list
	: struct_declaration {printf("%d con %s  struct_declaration_list: struct_declaration\n",linea, yytext );}
	| struct_declaration_list struct_declaration {printf("%d con %s  struct_declaration_list: struct_declaration_list struct_declaration\n",linea, yytext );}
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list SEMICOLON {printf("%d con %s  struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON\n",linea, yytext );}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list {printf("%d con %s  specifier_qualifier_list: type_specifier specifier_qualifier_list\n",linea, yytext );}
	| type_specifier {printf("%d con %s  specifier_qualifier_list: type_specifier\n",linea, yytext );}
	| type_qualifier specifier_qualifier_list {printf("%d con %s  specifier_qualifier_list: type_qualifier specifier_qualifier_list\n",linea,yytext);}
	| type_qualifier {printf("%d con %s  specifier_qualifier_list: type_qualifier\n",linea, yytext );}
	;

struct_declarator_list
	: struct_declarator {printf("%d con %s  struct_declarator_list: struct_declarator\n",linea, yytext );}
	| struct_declarator_list COMMA struct_declarator {printf("%d con %s  struct_declarator_list: struct_declarator_list COMMA struct_declarator\n",linea, yytext );}
	;

struct_declarator
	: declarator{printf("%d con %s  struct_declarator: declarator\n",linea, yytext );}
	| COLON constant_expression {printf("%d con %s  struct_declarator: COLON constant_expression \n",linea, yytext );}
	| declarator COLON constant_expression {printf("%d con %s  struct_declarator: declarator COLON constant_expression \n",linea, yytext);}
	;

enum_specifier
	: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET {printf("%d con %s  enum_specifier: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET\n",linea, yytext);}
	| ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET {printf("%d con %s  enum_specifier: ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET \n",linea,yytext);}
	| ENUM IDENTIFIER {printf("%d con %s  enum_specifier: ENUM IDENTIFIER\n",linea, yytext );}
	;

enumerator_list
	: enumerator {printf("%d con %s  enumerator_list: enumerator\n",linea, yytext);}
	| enumerator_list COMMA enumerator {printf("%d con %s  enumerator_list: enumerator_list COMMA enumerator\n",linea, yytext );}
	;

enumerator
	: IDENTIFIER {printf("%d con %s  enumerator: IDENTIFIER\n",linea, gramaticas);}
	| IDENTIFIER EQU constant_expression {printf("%d con %s  enumerator: IDENTIFIER EQU constant_expression\n",linea,gramaticas);}
	;

type_qualifier
	: CONST {printf("%d con %s  type_qualifier: CONST\n",linea,yytext);}
	| VOLATILE {printf("%d con %s  type_qualifier: VOLATILE\n",linea, yytext);}
	;

declarator
	: pointer direct_declarator {printf("%d con %s  declarator: pointer direct_declarator \n",linea, gramaticas );}
	| direct_declarator {printf("%d con %s  declarator: direct_declarator\n",linea, gramaticas );}
	| direct_declarator declarator{printf("%d con %s  declarator: declarator direct_declarator\n",linea, gramaticas );}
	| IDENTIFIER pointer declarator {printf("%d con %s  declarator: IDENTIFIER pointer declarator \n",linea, gramaticas );}

	
	;

direct_declarator
	: IDENTIFIER {printf("%d con %s  direct_declarator: IDENTIFIER\n",linea, gramaticas);}
	| LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS {printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, yytext );}
	| direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET\n",linea,yytext);}
	| direct_declarator LEFT_SBRACKET RIGHT_SBRACKET {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, yytext );}
	| direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea, yytext );}
	| direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS\n",linea, yytext );}
	| direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,yytext);}

	;

pointer
	: MUL { printf("%d con %s  pointer: MUL\n",linea, gramaticas);}
	| MUL type_qualifier_list {printf("%d con %s  pointer: MUL type_qualifier_list\n",linea, gramaticas );}
	| MUL pointer {printf("%d con %s  pointer: MUL pointer\n",linea, gramaticas );}
	| MUL type_qualifier_list pointer {printf("%d con %s  pointer: MUL type_qualifier_list pointer\n",linea,gramaticas);}
	;

type_qualifier_list
	: type_qualifier {printf("%d con %s  type_qualifier_list: type_qualifier\n",linea,yytext );}
	| type_qualifier_list type_qualifier {printf("%d con %s  type_qualifier_list: type_qualifier_list type_qualifier\n",linea, yytext );}
	;


parameter_type_list
	: parameter_list {printf("%d con %s  parameter_type_list: parameter_list\n",linea, yytext );}
	| parameter_list COMMA ELLIPSIS {printf("%d con %s  parameter_type_list: parameter_list COMMA ELLIPSIS\n",linea, yytext);}
	;

parameter_list
	: parameter_declaration {printf("%d con %s  parameter_list: parameter_declaration\n",linea, yytext);}
	| parameter_list COMMA parameter_declaration {printf("%d con %s  parameter_list: parameter_list COMMA parameter_declaration\n",linea, yytext);}
	;

parameter_declaration
	: declaration_specifiers declarator {printf("%d con %s  parameter_declaration: declaration_specifiers declarator\n",linea, yytext );}
	| declaration_specifiers abstract_declarator {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, yytext );}
	| declaration_specifiers {printf("%d con %s  parameter_declaration: declaration_specifiers\n",linea, yytext );}
	;

identifier_list
	: IDENTIFIER {printf("%d con %s  identifier_list: IDENTIFIER\n",linea, yytext);$$=strdup(yytext);}
	| identifier_list COMMA IDENTIFIER {printf("%d con %s  identifier_list: identifier_list COMMA IDENTIFIER\n",linea, yytext );}
	;

type_name
	: specifier_qualifier_list {printf("%d con %s  type_name: specifier_qualifier_list\n",linea, yytext);}
	| specifier_qualifier_list abstract_declarator {printf("%d con %s  type_name: specifier_qualifier_list abstract_declarator\n",linea, yytext);}
	;

abstract_declarator
	: pointer {printf("%d con %s  abstract_declarator: pointer\n",linea, yytext);}
	| direct_abstract_declarator {printf("%d con %s  abstract_declarator: direct_abstract_declarator\n",linea, yytext );}
	| pointer direct_abstract_declarator {printf("%d con %s  abstract_declarator: pointer direct_abstract_declarator\n",linea, yytext);}
	;

direct_abstract_declarator
	: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS \n",linea, yytext );}
	| LEFT_SBRACKET RIGHT_SBRACKET {printf("%d con %s  direct_abstract_declarator:  LEFT_SBRACKET RIGHT_SBRACKET \n",linea, yytext);}
	| LEFT_SBRACKET constant_expression RIGHT_SBRACKET {printf("%d con %s  direct_abstract_declarator: LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, yytext );}
	| direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, yytext );}
	| direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, yytext );}
	| LEFT_PARENTHESIS RIGHT_PARENTHESIS {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea, yytext);}
	| LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS \n",linea, yytext );}
	| direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,yytext );}
	| direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea,  yytext  );}
	;

initializer
	: assignment_expression {printf("%d con %s  initializer: assignment_expression\n",linea, yytext );}
	| LEFT_BRACKET initializer_list RIGHT_BRACKET {printf("%d con %s  initializer: LEFT_BRACKET initializer_list RIGHT_BRACKET\n",linea,  yytext );}
	| LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET {printf("%d con %s  initializer: LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET\n",linea, yytext );}
	;

initializer_list
	: initializer {printf("%d con %s  initializer_list: initializer\n",linea, yytext);}
	| initializer_list COMMA initializer {printf("%d con %s  initializer_list: initializer_list COMMA initializer \n",linea, yytext);}
	;

statement
	: labeled_statement {printf("%d con %s  statement: labeled_statement\n",linea, yytext );}
	| compound_statement {printf("%d con %s  statement: compound_statement\n",linea, yytext);}
	| expression_statement {printf("%d con %s  statement: expression_statement\n",linea,yytext );}
	| selection_statement {printf("%d con %s  statement: selection_statement\n",linea, yytext);}
	| iteration_statement {printf("%d con %s  statement: iteration_statement\n",linea, yytext );}
	| jump_statement {printf("%d con %s  statement: jump_statement\n",linea, yytext );}
	;

labeled_statement
	: IDENTIFIER COLON statement {printf("%d con %s  labeled_statement: IDENTIFIER COLON statement \n",linea, yytext );}
	| CASE constant_expression COLON statement {printf("%d con %s  labeled_statement: CASE constant_expression COLON statement\n",linea, yytext );}
	| DEFAULT COLON statement {printf("%d con %s  labeled_statement: DEFAULT COLON statement\n",linea, yytext );}
	;

compound_statement
	: LEFT_BRACKET RIGHT_BRACKET {printf("%d con %s  compound_statement: LEFT_BRACKET RIGHT_BRACKET\n",linea, yytext);}
	| LEFT_BRACKET statement_list RIGHT_BRACKET {printf("%d con %s  compound_statement: LEFT_BRACKET statement_list RIGHT_BRACKET\n",linea, yytext );}
	| LEFT_BRACKET declaration_list RIGHT_BRACKET {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list RIGHT_BRACKET\n",linea, yytext);}
	| LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET\n",linea, yytext);}

	;

declaration_list
	: declaration {printf("%d con %s  declaration_list: declaration\n",linea, yytext );}
	| declaration_list declaration {printf("%d con %s  declaration_list: declaration_list declaration\n",linea, yytext);}
	;

statement_list
	: statement {printf("%d con %s  statement_list: statement\n",linea, yytext );}
	| statement_list statement {printf("%d con %s  statement_list: statement_list statement\n",linea, yytext);}
	| statement_list declaration_list 
	;

expression_statement
	: SEMICOLON {printf("%d con %s  expression_statement: SEMICOLON\n",linea, yytext );}
	| expression SEMICOLON {printf("%d con %s  expression_statement: expression SEMICOLON \n",linea, yytext );}
	;

selection_statement
	: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea,yytext);}
	| IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement\n",linea, yytext);}
	| SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement {printf("%d con %s  selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, yytext );}
	;

iteration_statement
	: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement {printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, yytext);}
	| DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON {printf("%d con %s  iteration_statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON\n",linea, yytext);}
	| FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, yytext );}
	| FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, yytext);}
	| FOR LEFT_PARENTHESIS declaration_list expression_statement expression RIGHT_PARENTHESIS statement {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, yytext);}
	;

jump_statement
	: GOTO IDENTIFIER SEMICOLON {printf("%d con %s  jump_statement: GOTO IDENTIFIER SEMICOLON\n",linea, yytext );}
	| CONTINUE SEMICOLON {printf("%d con %s  jump_statement: CONTINUE SEMICOLON\n",linea, yytext);}
	| BREAK SEMICOLON {printf("%d con %s  jump_statement: BREAK SEMICOLON\n",linea, yytext);}
	| RETURN SEMICOLON {printf("%d con %s  jump_statement: RETURN SEMICOLON\n",linea, yytext);}
	| RETURN expression SEMICOLON {printf("%d con %s  jump_statement: RETURN expression SEMICOLON\n",linea, yytext);}
	;

translation_unit
	: external_declaration {printf("%d con %s  translation_unit: Entre a external_declaration\n",linea, yytext);memset(gramaticas,0,sizeof(gramaticas));} 
	| translation_unit external_declaration  {printf("%d con %s  translation_unit: Entre a ciclo translation_unit\n",linea, yytext );memset(gramaticas,0,sizeof(gramaticas));}
	| /* empty */{printf("%d  translation_unit: Archivo Vacío\n",linea );memset(gramaticas,0,sizeof(gramaticas));}

	;

external_declaration
	: function_definition {printf("%d con %s  external_declaration: function_definition\n",linea, yytext);}
	| declaration {printf("%d con %s  external_declaration: declaration\n",linea, yytext);}
	| DEFINE define {printf("%d con %s  external_declaration: DEFINE define\n",linea, yytext);}
	| INCLUDE LITERAL {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, yytext);}
	| INCLUDE LESS IDENTIFIER DOT IDENTIFIER GREATER{printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, yytext);}
	;
define 
	: IDENTIFIER define {printf("%d con %s  define: IDENTIFIER define\n",linea, yytext);$$=strdup(yytext);}
    | IDENTIFIER define_continue {printf("%d con %s  define: IDENTIFIER define_continue\n",linea, yytext);}
	;
define_continue
	: LITERAL define_continue {printf("%d con %s  define_continue: LITERAL define_continue\n",linea, yytext);}
	| CONSTANT define_continue {printf("%d con %s  define_continue:CONSTANT define_continue\n",linea, yytext);}
	| INTEGER define_continue {printf("%d con %s  define_continue:  INTEGER define_continue\n",linea, yytext);}
    |
    ;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement {printf("%d con %s  function_definition: declaration_specifiers declarator declaration_list compound_statement\n",linea,yytext);}
	| declaration_specifiers declarator compound_statement {printf("%d con %s  function_definition: declaration_specifiers declarator compound_statement \n",linea, yytext);}
	| declarator declaration_list compound_statement {printf("%d con %s  function_definition: declarator declaration_list compound_statement\n",linea, yytext );}
	| declarator compound_statement {printf("%d con %s  function_definition: declarator compound_statement\n",linea,yytext);}
	;

%%

#include<stdio.h>
