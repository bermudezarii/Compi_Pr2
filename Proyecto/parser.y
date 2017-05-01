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
	: IDENTIFIER {printf("%d con %s primary_expression: IDENTIFIER FINAL\n",linea, gramaticas );}
	| CONSTANT {printf("%d con %s  primary_expression: CONSTANT FINAL\n",linea,  gramaticas );}
	| LITERAL {printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );}
	| LEFT_PARENTHESIS expression RIGHT_PARENTHESIS {printf("%d con %s  primary_expression: LEFT_PARENTHESIS FINAL expression RIGHT_PARETHESIS\n",linea, gramaticas);}
	| INTEGER {printf("%d con %s  primary_expression: INTEGER FINAL\n",linea, gramaticas );}
	;

postfix_expression
	: primary_expression {printf("%d con %s  postfix_expression: primary_expression\n",linea, gramaticas );}
	| pointer  primary_expression {printf("%d con %s  postfix_expression: pointer primary_expression\n",linea, gramaticas);}
	| primary_expression pointer primary_expression {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );}
	| postfix_expression LEFT_SBRACKET expression RIGHT_SBRACKET {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
	| postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS {printf("%d con %s  postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
	| postfix_expression LEFT_PARENTHESIS argument_expression_list RIGHT_PARENTHESIS {printf("%d con %s  postfix_expression: postfix_expression RIGHT_PARENTHESIS argument_expression_list LEFT_PARENTHESIS\n",linea, gramaticas);}
	| postfix_expression DOT IDENTIFIER {printf("%d con %s  postfix_expression: postfix_expression DOT IDENTIFIER\n",linea, gramaticas);}
	| postfix_expression PTR_OP IDENTIFIER {printf("%d con %s  postfix_expression: postfix_expression PTR_OP IDENTIFIER\n",linea, gramaticas);}
	| postfix_expression INC_OP {printf("%d con %s  postfix_expression: postfix_expression INC_OP\n",linea, gramaticas );}
	| postfix_expression DEC_OP {printf("%d con %s  postfix_expression: postfix_expression DEC_OP\n",linea, gramaticas );}
	;



argument_expression_list
	: assignment_expression {printf("%d con %s  argument_expression_list: assignment_expression\n",linea, gramaticas);}
	| argument_expression_list COMMA assignment_expression {printf("%d con %s  argument_expression_list: argument_expression_list COMMA assignment_expression\n",linea, gramaticas);}
	;

unary_expression
	: postfix_expression {printf("%d con %s  unary_expression: postfix_expression\n",linea, gramaticas );}
	| EQU postfix_expression {printf("%d con %s  unary_expression:pointer postfix_expression\n",linea, gramaticas);}
	| INC_OP unary_expression {printf("%d con %s  unary_expression: INC_OP unary_expression\n",linea, gramaticas );}
	| DEC_OP unary_expression {printf("%d con %s  unary_expression: DEC_OP unary_expression\n",linea, gramaticas );}
	| unary_operator cast_expression {printf("%d con %s  unary_expression: unary_operator cast_expression\n",linea, gramaticas );}
	| SIZEOF unary_expression {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
	| SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
	;

unary_operator
	: BIT_AND {printf("%d con %s  unary_operator: BIT_AND\n",linea, gramaticas );} 
	| MUL {printf("%d con %s  unary_operator: MUL\n",linea, gramaticas );}
	| PLUS {printf("%d con %s  unary_operator: PLUS\n",linea, gramaticas );}
	| MINUS {printf("%d con %s  unary_operator: MINUS\n",linea, gramaticas );}
	| PRIME {printf("%d con %s  unary_operator: PRIME\n",linea, gramaticas );}
	| EXCLAMATION {printf("%d con %s  unary_operator: EXCLAMATION\n",linea, gramaticas);}
	;

cast_expression
	: unary_expression {printf("%d con %s  cast_expression: unary_expression\n",linea, gramaticas);}
	| LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
	;

multiplicative_expression
	: cast_expression {printf("%d con %s  multiplicative_expression: cast_expression\n",linea, gramaticas);}
	| multiplicative_expression MUL cast_expression {printf("%d con %s  multiplicative_expression: multiplicative_expression MUL cast_expression\n",linea, gramaticas );}
	| multiplicative_expression DIV cast_expression {printf("%d con %s  multiplicative_expression: multiplicative_expression DIV cast_expression\n",linea, gramaticas );}
	| multiplicative_expression MOD cast_expression {printf("%d con %s  multiplicative_expression: multiplicative_expression MOD cast_expression\n",linea,gramaticas );}
	;

additive_expression
	: multiplicative_expression {printf("%d con %s  additive_expression: multiplicative_expression\n",linea,gramaticas );}
	| additive_expression PLUS multiplicative_expression {printf("%d con %s  additive_expression: additive_expression PLUS multiplicative_expression\n",linea,gramaticas) ;}
	| additive_expression MINUS multiplicative_expression {printf("%d con %s  additive_expression: additive_expression MINUS multiplicative_expression\n",linea, gramaticas) ;}
	;

shift_expression
	: additive_expression {printf("%d con %s  shift_expression: additive_expression\n",linea, gramaticas );}
	| shift_expression LEFT_OP additive_expression {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);}
	| shift_expression RIGHT_OP additive_expression {printf("%d con %s  shift_expression: shift_expression RIGHT_OP additive_expression \n",linea, gramaticas);}
	;

relational_expression
	: shift_expression {printf("%d con %s  relational_expression: shift_expression\n",linea, gramaticas);}
	| relational_expression LESS shift_expression {printf("%d con %s  relational_expression: relational_expression LESS shift_expression\n",linea, gramaticas);}
	| relational_expression GREATER shift_expression {printf("%d con %s  relational_expression: relational_expression GREATER shift_expression\n",linea, gramaticas );}
	| relational_expression LE_OP shift_expression {printf("%d con %s  relational_expression: relational_expression LE_OP shift_expression\n",linea, gramaticas);}
	| relational_expression GE_OP shift_expression {printf("%d con %s  relational_expression: relational_expression GE_OP shift_expression\n",linea, gramaticas );}
	;

equality_expression
	: relational_expression {printf("%d con %s  equality_expression: relational_expression\n",linea, gramaticas);}
	| equality_expression EQ_OP relational_expression {printf("%d con %s  equality_expression: equality_expression EQ_OP relational_expression\n",linea, gramaticas );}
	| equality_expression NE_OP relational_expression {printf("%d con %s  equality_expression: equality_expression NE_OP relational_expression\n",linea, gramaticas);}
	;

and_expression
	: equality_expression {printf("%d con %s  and_expression: equality_expression\n",linea, gramaticas );}
	| and_expression BIT_AND equality_expression {printf("%d con %s  and_expression: and_expression BIT_AND equality_expression\n",linea, gramaticas);}
	;

exclusive_or_expression
	: and_expression {printf("%d con %s  exclusive_or_expression: and_expression\n",linea, gramaticas );}
	| exclusive_or_expression UP_ARROW and_expression {printf("%d con %s  exclusive_or_expression: exclusive_or_expression UP_ARROW and_expression\n",linea, gramaticas );}
	;

inclusive_or_expression
	: exclusive_or_expression {printf("%d con %s  inclusive_or_expression: exclusive_or_expression\n",linea, gramaticas);}
	| inclusive_or_expression BIT_OR exclusive_or_expression {printf("%d con %s  inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression\n",linea, gramaticas );}
	;

logical_and_expression
	: inclusive_or_expression {printf("%d con %s  logical_and_expression: inclusive_or_expression\n",linea,gramaticas );}
	| logical_and_expression AND_OP inclusive_or_expression {printf("%d con %s  logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n",linea, gramaticas);}
	;

logical_or_expression
	: logical_and_expression {printf("%d con %s  logical_or_expression: logical_and_expression\n",linea,gramaticas);}
	| logical_or_expression OR_OP logical_and_expression {printf("%d con %s  logical_or_expression: logical_or_expression OR_OP logical_and_expression\n",linea, gramaticas );}
	;

conditional_expression
	: logical_or_expression {printf("%d con %s  conditional_expression: logical_or_expression\n",linea, gramaticas);}
	| logical_or_expression INTERROGATION expression COLON conditional_expression {printf("%d con %s  conditional_expression: logical_or_expression INTERROGATION expression COLON conditional_expression\n",linea,gramaticas);}
	;

assignment_expression
	: conditional_expression {printf("%d con %s  assignment_expression: conditional_expression\n",linea, gramaticas);}
	| unary_expression assignment_operator assignment_expression {printf("%d con %s  assignment_expression: unary_expression assignment_operator assignment_expression\n",linea,gramaticas);}
	;

assignment_operator
	: EQU {printf("%d con %s  assignment_operator: EQU\n",linea, gramaticas);}
	| MUL_ASSIGN {printf("%d con %s  assignment_operator: MUL_ASSIGN\n",linea,gramaticas );}
	| DIV_ASSIGN {printf("%d con %s  assignment_operator: DIV_ASSIGN\n",linea,gramaticas);}
	| MOD_ASSIGN {printf("%d con %s  assignment_operator: MOD_ASSIGN\n",linea,gramaticas);}
	| ADD_ASSIGN {printf("%d con %s  assignment_operator: ADD_ASSIGN\n",linea, gramaticas);}
	| SUB_ASSIGN {printf("%d con %s  assignment_operator: SUB_ASSIGN\n",linea, gramaticas);}
	| LEFT_ASSIGN {printf("%d con %s  assignment_operator: LEFT_ASSIGN\n",linea, gramaticas);}
	| RIGHT_ASSIGN {printf("%d con %s  assignment_operator: RIGHT_ASSIGN\n",linea,gramaticas);}
	| AND_ASSIGN {printf("%d con %s  assignment_operator: AND_ASSIGN\n",linea, gramaticas);}
	| XOR_ASSIGN {printf("%d con %s  assignment_operator: XOR_ASSIGN\n",linea, gramaticas);}
	| OR_ASSIGN {printf("%d con %s  assignment_operator: OR_ASSIGN\n",linea, gramaticas);}
	;

expression
	: assignment_expression {printf("%d con %s  expression: assignment_expression\n",linea, gramaticas);}
	| expression COMMA assignment_expression {printf("%d con %s  expression: expression COMMA assignment_expression\n",linea,gramaticas);}
	;

constant_expression
	: conditional_expression {printf("%d con %s  constant_expression: conditional_expression\n",linea, gramaticas );}
	;

declaration
	: declaration_specifiers SEMICOLON {printf("%d con %s  declaration: declaration_specifiers SEMICOLON \n",linea, gramaticas );}
	| declaration_specifiers init_declarator_list SEMICOLON {printf("%d con %s  declaration: declaration_specifiers init_declarator_list SEMICOLON\n",linea, gramaticas);}
	;

declaration_specifiers
	: storage_class_specifier {printf("%d con %s  declaration_specifiers: storage_class_specifier \n",linea, gramaticas);}
	| storage_class_specifier declaration_specifiers {printf("%d con %s  declaration_specifiers: storage_class_specifier declaration_specifiers\n",linea, gramaticas);}
	| type_specifier {printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);}
	| type_specifier declaration_specifiers {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
	| type_qualifier {printf("%d con %s  declaration_specifiers: type_qualifier\n",linea, gramaticas );}
	| type_qualifier declaration_specifiers {printf("%d con %s  declaration_specifiers: type_qualifier declaration_specifiers\n",linea, gramaticas );}
	;

init_declarator_list
	: init_declarator {printf("%d con %s  init_declarator_list: init_declarator\n",linea, gramaticas );}
	| init_declarator_list COMMA init_declarator {printf("%d con %s  init_declarator_list: init_declarator_list COMMA init_declarator\n",linea,gramaticas);}
	;

init_declarator
	: declarator {printf("%d con %s  init_declarator: declarator\n",linea, gramaticas );}
	| declarator EQU initializer {printf("%d con %s  init_declarator: declarator EQU initializer\n",linea, gramaticas );}
	;

storage_class_specifier
	: TYPEDEF {printf("%d con %s  storage_class_specifier: TYPEDEF\n",linea, gramaticas);}
	| EXTERN {printf("%d con %s  storage_class_specifier: EXTERN\n",linea, gramaticas);}
	| STATIC {printf("%d con %s  storage_class_specifier: STATIC\n",linea,gramaticas);}
	| AUTO {printf("%d con %s  storage_class_specifier: AUTO\n",linea, gramaticas);}
	| REGISTER {printf("%d con %s  storage_class_specifier: REGISTER\n",linea, gramaticas);}
	;

type_specifier
	: VOID {printf("%d con %s  type_specifier: VOID\n",linea, gramaticas);}
	| CHAR {printf("%d con %s  type_specifier: CHAR\n",linea, gramaticas);}
	| SHORT {printf("%d con %s  type_specifier: SHORT\n",linea, gramaticas);}
	| INT {printf("%d con %s  type_specifier: INT\n",linea, gramaticas);}
	| LONG {printf("%d con %s  type_specifier: LONG\n",linea, gramaticas);}
	| FLOAT {printf("%d con %s  type_specifier: FLOAT\n",linea, gramaticas);}
	| DOUBLE {printf("%d con %s  type_specifier: DOUBLE\n",linea, gramaticas);}
	| SIGNED {printf("%d con %s  type_specifier: SIGNED\n",linea, gramaticas);}
	| UNSIGNED {printf("%d con %s  type_specifier: UNSIGNED\n",linea, gramaticas);}
	| struct_or_union_specifier {printf("%d con %s  type_specifier: struct_or_union_specifier\n",linea, gramaticas );}
	| enum_specifier {printf("%d con %s  type_specifier: enum_specifier\n",linea, gramaticas );}
	| type_name {printf("%d con %s  type_specifier: TYPE_NAME\n",linea,gramaticas);}
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET \n",linea, gramaticas );}
	| struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET {printf("%d con %s  struct_or_union_specifier: struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET\n",linea,gramaticas );}
	| struct_or_union IDENTIFIER {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER\n",linea, gramaticas);}
	;

struct_or_union
	: STRUCT {printf("%d con %s  struct_or_union: STRUCT\n",linea, gramaticas);}
	| UNION {printf("%d con %s  struct_or_union: UNION\n",linea, gramaticas);}
	;

struct_declaration_list
	: struct_declaration {printf("%d con %s  struct_declaration_list: struct_declaration\n",linea, gramaticas );}
	| struct_declaration_list struct_declaration {printf("%d con %s  struct_declaration_list: struct_declaration_list struct_declaration\n",linea, gramaticas );}
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list SEMICOLON {printf("%d con %s  struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON\n",linea, gramaticas );}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list {printf("%d con %s  specifier_qualifier_list: type_specifier specifier_qualifier_list\n",linea, gramaticas );}
	| type_specifier {printf("%d con %s  specifier_qualifier_list: type_specifier\n",linea, gramaticas );}
	| type_qualifier specifier_qualifier_list {printf("%d con %s  specifier_qualifier_list: type_qualifier specifier_qualifier_list\n",linea,gramaticas);}
	| type_qualifier {printf("%d con %s  specifier_qualifier_list: type_qualifier\n",linea, gramaticas );}
	;

struct_declarator_list
	: struct_declarator {printf("%d con %s  struct_declarator_list: struct_declarator\n",linea, gramaticas );}
	| struct_declarator_list COMMA struct_declarator {printf("%d con %s  struct_declarator_list: struct_declarator_list COMMA struct_declarator\n",linea, gramaticas );}
	;

struct_declarator
	: declarator{printf("%d con %s  struct_declarator: declarator\n",linea, gramaticas );}
	| COLON constant_expression {printf("%d con %s  struct_declarator: COLON constant_expression \n",linea, gramaticas );}
	| declarator COLON constant_expression {printf("%d con %s  struct_declarator: declarator COLON constant_expression \n",linea, gramaticas);}
	;

enum_specifier
	: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET {printf("%d con %s  enum_specifier: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET\n",linea, gramaticas);}
	| ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET {printf("%d con %s  enum_specifier: ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET \n",linea,gramaticas);}
	| ENUM IDENTIFIER {printf("%d con %s  enum_specifier: ENUM IDENTIFIER\n",linea, gramaticas );}
	;

enumerator_list
	: enumerator {printf("%d con %s  enumerator_list: enumerator\n",linea, gramaticas);}
	| enumerator_list COMMA enumerator {printf("%d con %s  enumerator_list: enumerator_list COMMA enumerator\n",linea, gramaticas );}
	;

enumerator
	: IDENTIFIER {printf("%d con %s  enumerator: IDENTIFIER\n",linea, gramaticas);}
	| IDENTIFIER EQU constant_expression {printf("%d con %s  enumerator: IDENTIFIER EQU constant_expression\n",linea,gramaticas );}
	;

type_qualifier
	: CONST {printf("%d con %s  type_qualifier: CONST\n",linea,gramaticas);}
	| VOLATILE {printf("%d con %s  type_qualifier: VOLATILE\n",linea, gramaticas);}
	;

declarator
	: pointer direct_declarator {printf("%d con %s  declarator: pointer direct_declarator \n",linea, gramaticas );}
	| direct_declarator {printf("%d con %s  declarator: direct_declarator\n",linea, gramaticas );}
	| direct_declarator pointer {printf("%d con %s  declarator: direct_declarator\n",linea, gramaticas);}
	| declarator direct_declarator {printf("%d con %s  declarator: declarator direct_declarator\n",linea, gramaticas );}

	;

direct_declarator
	: IDENTIFIER {printf("%d con %s  direct_declarator: IDENTIFIER\n",linea, gramaticas);}
	| LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS {printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );}
	| direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET\n",linea,gramaticas);}
	| direct_declarator LEFT_SBRACKET RIGHT_SBRACKET {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
	| direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
	| direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
	| direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
	;

pointer
	: MUL { printf("%d con %s  pointer: MUL\n",linea, gramaticas);}
	| MUL type_qualifier_list {printf("%d con %s  pointer: MUL type_qualifier_list\n",linea, gramaticas );}
	| MUL pointer {printf("%d con %s  pointer: MUL pointer\n",linea, gramaticas );}
	| MUL type_qualifier_list pointer {printf("%d con %s  pointer: MUL type_qualifier_list pointer\n",linea, gramaticas);}
	;

type_qualifier_list
	: type_qualifier {printf("%d con %s  type_qualifier_list: type_qualifier\n",linea,gramaticas );}
	| type_qualifier_list type_qualifier {printf("%d con %s  type_qualifier_list: type_qualifier_list type_qualifier\n",linea, gramaticas );}
	;


parameter_type_list
	: parameter_list {printf("%d con %s  parameter_type_list: parameter_list\n",linea, gramaticas );}
	| parameter_list COMMA ELLIPSIS {printf("%d con %s  parameter_type_list: parameter_list COMMA ELLIPSIS\n",linea, gramaticas);}
	;

parameter_list
	: parameter_declaration {printf("%d con %s  parameter_list: parameter_declaration\n",linea, gramaticas);}
	| parameter_list COMMA parameter_declaration {printf("%d con %s  parameter_list: parameter_list COMMA parameter_declaration\n",linea, gramaticas);}
	;

parameter_declaration
	: declaration_specifiers declarator {printf("%d con %s  parameter_declaration: declaration_specifiers declarator\n",linea, gramaticas );}
	| declaration_specifiers abstract_declarator {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas );}
	| declaration_specifiers {printf("%d con %s  parameter_declaration: declaration_specifiers\n",linea, gramaticas );}
	;

identifier_list
	: IDENTIFIER {printf("%d con %s  identifier_list: IDENTIFIER\n",linea, gramaticas);}
	| identifier_list COMMA IDENTIFIER {printf("%d con %s  identifier_list: identifier_list COMMA IDENTIFIER\n",linea, gramaticas );}
	;

type_name
	: specifier_qualifier_list {printf("%d con %s  type_name: specifier_qualifier_list\n",linea, gramaticas);}
	| specifier_qualifier_list abstract_declarator {printf("%d con %s  type_name: specifier_qualifier_list abstract_declarator\n",linea, gramaticas);}
	;

abstract_declarator
	: pointer {printf("%d con %s  abstract_declarator: pointer\n",linea, gramaticas);}
	| direct_abstract_declarator {printf("%d con %s  abstract_declarator: direct_abstract_declarator\n",linea, gramaticas );}
	| pointer direct_abstract_declarator {printf("%d con %s  abstract_declarator: pointer direct_abstract_declarator\n",linea, gramaticas);}
	;

direct_abstract_declarator
	: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS \n",linea, gramaticas );}
	| LEFT_SBRACKET RIGHT_SBRACKET {printf("%d con %s  direct_abstract_declarator:  LEFT_SBRACKET RIGHT_SBRACKET \n",linea, gramaticas);}
	| LEFT_SBRACKET constant_expression RIGHT_SBRACKET {printf("%d con %s  direct_abstract_declarator: LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
	| direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
	| direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
	| LEFT_PARENTHESIS RIGHT_PARENTHESIS {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea, gramaticas);}
	| LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS \n",linea, gramaticas );}
	| direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas );}
	| direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea,  gramaticas  );}
	;

initializer
	: assignment_expression {printf("%d con %s  initializer: assignment_expression\n",linea, gramaticas );}
	| LEFT_BRACKET initializer_list RIGHT_BRACKET {printf("%d con %s  initializer: LEFT_BRACKET initializer_list RIGHT_BRACKET\n",linea,  gramaticas );}
	| LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET {printf("%d con %s  initializer: LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET\n",linea, gramaticas );}
	;

initializer_list
	: initializer {printf("%d con %s  initializer_list: initializer\n",linea, gramaticas);}
	| initializer_list COMMA initializer {printf("%d con %s  initializer_list: initializer_list COMMA initializer \n",linea, gramaticas);}
	;

statement
	: labeled_statement {printf("%d con %s  statement: labeled_statement\n",linea, gramaticas );}
	| compound_statement {printf("%d con %s  statement: compound_statement\n",linea, gramaticas);}
	| expression_statement {printf("%d con %s  statement: expression_statement\n",linea,gramaticas );}
	| selection_statement {printf("%d con %s  statement: selection_statement\n",linea, gramaticas);}
	| iteration_statement {printf("%d con %s  statement: iteration_statement\n",linea, gramaticas );}
	| jump_statement {printf("%d con %s  statement: jump_statement\n",linea, gramaticas );}
	;

labeled_statement
	: IDENTIFIER COLON statement {printf("%d con %s  labeled_statement: IDENTIFIER COLON statement \n",linea, gramaticas );}
	| CASE constant_expression COLON statement {printf("%d con %s  labeled_statement: CASE constant_expression COLON statement\n",linea, gramaticas );}
	| DEFAULT COLON statement {printf("%d con %s  labeled_statement: DEFAULT COLON statement\n",linea, gramaticas );}
	;

compound_statement
	: LEFT_BRACKET RIGHT_BRACKET {printf("%d con %s  compound_statement: LEFT_BRACKET RIGHT_BRACKET\n",linea, gramaticas);}
	| LEFT_BRACKET statement_list RIGHT_BRACKET {printf("%d con %s  compound_statement: LEFT_BRACKET statement_list RIGHT_BRACKET\n",linea, gramaticas );}
	| LEFT_BRACKET declaration_list RIGHT_BRACKET {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list RIGHT_BRACKET\n",linea, gramaticas);}
	| LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET\n",linea, gramaticas);}
	;

declaration_list
	: declaration {printf("%d con %s  declaration_list: declaration\n",linea, gramaticas );}
	| declaration_list declaration {printf("%d con %s  declaration_list: declaration_list declaration\n",linea, gramaticas);}
	;

statement_list
	: statement {printf("%d con %s  statement_list: statement\n",linea, gramaticas );}
	| statement_list statement {printf("%d con %s  statement_list: statement_list statement\n",linea, gramaticas);}
	;

expression_statement
	: SEMICOLON {printf("%d con %s  expression_statement: SEMICOLON\n",linea, gramaticas );}
	| expression SEMICOLON {printf("%d con %s  expression_statement: expression SEMICOLON \n",linea, gramaticas );}
	;

selection_statement
	: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea,gramaticas);}
	| IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement\n",linea, gramaticas);}
	| SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement {printf("%d con %s  selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
	;

iteration_statement
	: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement {printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
	| DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON {printf("%d con %s  iteration_statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON\n",linea, gramaticas);}
	| FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
	| FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
	;

jump_statement
	: GOTO IDENTIFIER SEMICOLON {printf("%d con %s  jump_statement: GOTO IDENTIFIER SEMICOLON\n",linea, gramaticas );}
	| CONTINUE SEMICOLON {printf("%d con %s  jump_statement: CONTINUE SEMICOLON\n",linea, gramaticas);}
	| BREAK SEMICOLON {printf("%d con %s  jump_statement: BREAK SEMICOLON\n",linea, gramaticas);}
	| RETURN SEMICOLON {printf("%d con %s  jump_statement: RETURN SEMICOLON\n",linea, gramaticas);}
	| RETURN expression SEMICOLON {printf("%d con %s  jump_statement: RETURN expression SEMICOLON\n",linea, gramaticas);}
	;

translation_unit
	: external_declaration {printf("%d con %s  translation_unit: Entre a external_declaration\n",linea, gramaticas);} 
	| translation_unit external_declaration  {printf("%d con %s  translation_unit: Entre a ciclo translation_unit\n",linea, gramaticas );}
	| /* empty */{printf("%d  translation_unit: Archivo Vacío\n",linea );}

	;

external_declaration
	: function_definition {printf("%d con %s  external_declaration: function_definition\n",linea, gramaticas);}
	| declaration {printf("%d con %s  external_declaration: declaration\n",linea, gramaticas);}
	| DEFINE define {printf("%d con %s  external_declaration: DEFINE define\n",linea, gramaticas);}
	| INCLUDE LITERAL {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
	;
define 
	: IDENTIFIER define {printf("%d con %s  define: IDENTIFIER define\n",linea, gramaticas);}
    | IDENTIFIER define_continue {printf("%d con %s  define: IDENTIFIER define_continue\n",linea, gramaticas);}
	;
define_continue
	: LITERAL define_continue {printf("%d con %s  define_continue: LITERAL define_continue\n",linea, gramaticas);}
	| CONSTANT define_continue {printf("%d con %s  define_continue:CONSTANT define_continue\n",linea, gramaticas);}
	| INTEGER define_continue {printf("%d con %s  define_continue:  INTEGER define_continue\n",linea, gramaticas);}
    |
    ;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement {printf("%d con %s  function_definition: declaration_specifiers declarator declaration_list compound_statement\n",linea,gramaticas);}
	| declaration_specifiers declarator compound_statement {printf("%d con %s  function_definition: declaration_specifiers declarator compound_statement \n",linea, gramaticas);}
	| declarator declaration_list compound_statement {printf("%d con %s  function_definition: declarator declaration_list compound_statement\n",linea, gramaticas );}
	| declarator compound_statement {printf("%d con %s  function_definition: declarator compound_statement\n",linea,gramaticas);}
	;

%%

#include<stdio.h>