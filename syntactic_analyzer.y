/*A PART */

%{

#include<stdio.h>
#include<stdlib.h>
#include "symbols_table.h"



void yyerror();
%}

%union {
    
    char id[100];
	int iconst;
	double fconst;
	char cconst;
	char string[100];
    int line;
}

%error-verbose
%token TYPEDEF
%token CHAR
%token INT
%token FLOAT
%token CONST
%token CLASS
%token PRIVATE
%token PROTECTED
%token PUBLIC
%token VOID
%token MAIN
%token STATIC
%token CONTINUE
%token BREAK
%token THIS
%token IF
%token ELSE
%token WHILE
%token FOR
%token RETURN
%token CIN
%token COUT
%token LPAREN
%token RPAREN
%token SEMI
%token DOT
%token COMMA
%token ASSIGN
%token COLON
%token LBRACK
%token RBRACK
%token LBRACE
%token RBRACE
%token INP
%token OUT
%token METH
%token <id>ID
%token <iconst>ICONST
%token <fconst>FCONST
%token <cconst>CCONST
%token <string>STRING

%right ASSIGN
%left COMMA
%left OROP
%left ANDOP
%left EQUOP
%left RELOP
%left ADDOP
%left MULOP
%left NOTOP
%left INCDEC
%nonassoc SIZEOP
%left REFER
%left DOT

%nonassoc SIGNOP
%nonassoc NO_ELSE
%nonassoc ELSE

%start program


%%
/*B PART  DEFINE THE RULES OF LANGUAGE C++ */

program :           global_declarations main_function
                    ;



global_declarations :    	 global_declarations global_declaration
                             |
                             ;



global_declaration :    typedef_declaration
                        | const_declaration
                        | class_declaration
                        | global_var_declaration
                        | func_declaration
                        ;



typedef_declaration :            TYPEDEF typename ID dims SEMI
                                 ;




typename :                       standard_type
                                 | ID
                                 ;




standard_type :          CHAR
                         | INT
                         | FLOAT
				         | VOID
                         ;



dims :      dims dim
            |
            ;



dim :                LBRACK ICONST RBRACK
                     | LBRACK RBRACK
                     ;


const_declaration :     	 CONST typename constdefs SEMI
                             ;



constdefs :			 constdefs COMMA constdef
                     | constdef
				     ;


constdef :			 ID dims ASSIGN init_value
                     ;




init_value :			 expression
                         | LBRACE init_values RBRACE
                         | STRING
                         ;



expression :			 expression OROP expression
                         | expression ANDOP expression
                         | expression EQUOP expression
                         | expression RELOP expression
                         | expression ADDOP expression
                         | expression MULOP expression
                         | NOTOP expression
                         | ADDOP expression
                         | SIZEOP expression
                         | INCDEC variable
                         | variable INCDEC
                         | variable
                         | variable LPAREN expression_list RPAREN
                         | constant
                         | LPAREN general_expression RPAREN
                         | LPAREN standard_type RPAREN
                         | NOTOP error ID { printf("expression error in line %d\n", yylval.line); yyerror("error"); yyerrok; }
                         | NOTOP error MULOP { printf("expression error in line %d\n", yylval.line); yyerror("error"); yyerrok; }
                         ;



variable :			 variable LBRACK general_expression RBRACK
                     | variable DOT ID
                     | decltype ID
                     | THIS
                     ;



general_expression :		 general_expression COMMA general_expression
                             | assignment
				             ;


assignment :			 variable ASSIGN assignment
                         | variable ASSIGN STRING
                         | expression
                         ;



expression_list :		 general_expression 
                         |
                         ;



constant :			 CCONST
                     | ICONST
                     | FCONST
                     ;


init_values :			 init_values COMMA init_value
                         | init_value
                         ;


class_declaration :		 CLASS ID class_body SEMI 
                         ;



class_body :			 parent LBRACE members_methods RBRACE 
                         ;



parent :			 COLON ID
                     |
                     ;


members_methods :		 members_methods access member_or_method
                         | access member_or_method
                         ;



access :         PRIVATE COLON
			  	 | PROTECTED COLON
				 | PUBLIC COLON
                 | PRIVATE error {printf("access error, missing colon in line %d\n", yylval.line); yyerror("error"); yyerrok; }
                 | PROTECTED error {printf("access error, missing colon in line %d\n", yylval.line); yyerror("error"); yyerrok; }
                 | PUBLIC error {printf("access error, missing colong in line %d\n", yylval.line); yyerror("error"); yyerrok; }
                 |
                 ;



member_or_method :		 member
                         | method
                         ;




member :			 var_declaration 
                     ;




var_declaration :		 typename variabledefs SEMI 
                         | typename error SEMI {printf("var_declaration, missing variable name in line %d\n", yylval.line); yyerror("error"); yyerrok; }




variabledefs :			 variabledefs COMMA variabledef
                         | variabledef
                         ;



variabledef :			 ID dims 
                         ;



method :			 short_func_declaration 
                     ;




short_func_declaration :	 short_par_func_header SEMI
                             | nopar_func_header SEMI
                             ;




short_par_func_header :		 func_header_start LPAREN parameter_type_list RPAREN
                             ;



func_header_start :		 typename ID 
                         ;




parameter_type_list :		 parameter_type_list COMMA typename pass_dims
                             | typename pass_dims
                             ;



pass_dims :			 dims
                     | REFER
                     ;



nopar_func_header :		 func_header_start LPAREN RPAREN 
                         ;




global_var_declaration :	 typename init_variabledefs SEMI
                             | typename init_variabledefs error {printf("global_var_declaration error, missing semi in line %d\n", yylval.line); yyerror("error"); yyerrok; }
                             ;




init_variabledefs :		 init_variabledefs COMMA init_variabledef
                         | init_variabledef
                         ;



init_variabledef :		 variabledef initializer  
                         ;


initializer :			 ASSIGN init_value
                         |
                         ;


func_declaration :		 short_func_declaration
                         | full_func_declaration
                         ;



full_func_declaration :		 full_par_func_header LBRACE decl_statements RBRACE
                             | nopar_class_func_header LBRACE decl_statements RBRACE
                             | nopar_func_header LBRACE decl_statements RBRACE
                             ;



full_par_func_header :		 class_func_header_start LPAREN parameter_list RPAREN
                             | func_header_start LPAREN parameter_list RPAREN
                             ;


class_func_header_start :	 typename func_class ID  
                             ;



func_class :			 ID METH 
                         ;



parameter_list :		 parameter_list COMMA typename pass_variabledef
                         | typename pass_variabledef
                         ;



pass_variabledef :		 variabledef
                         | REFER ID
                         ;


nopar_class_func_header :	 class_func_header_start LPAREN RPAREN 
                             ;



decl_statements :		 declarations statements
                         | declarations
                         | statements
                         |
                         ;



declarations :			 declarations decltype typename variabledefs SEMI
                         | decltype typename variabledefs SEMI
                         ;



decltype :			 STATIC
                     |
                     ;



statements :			 statements statement
                         | statement
                         ;


statement :			 expression_statement
                     | if_statement
                     | while_statement
                     | for_statement
                     | return_statement
                     | io_statement
                     | comp_statement
                     | CONTINUE SEMI
                     | BREAK SEMI
                     | SEMI
                     | CONTINUE error {printf("statement error, missing semi in line %d\n", yylval.line); yyerror("error"); yyerrok; }
                     | BREAK error {printf("statement error, missing semi in line %d\n", yylval.line); yyerror("error"); yyerrok; }
                     ;



expression_statement :		 general_expression SEMI 
                             | general_expression error {printf("general_expression error, missing semi in line %d\n", yylval.line); yyerror("error"); yyerrok; }
                             ;




if_statement :			 IF LPAREN general_expression RPAREN statement if_tail %prec NO_ELSE
                         ;


if_tail :            ELSE statement
                     | ELSE error COLON {printf("if_tail error in line %d\n", yylval.line); yyerror("error"); yyerrok; }
                     |
                     ;



while_statement :		 WHILE LPAREN general_expression RPAREN statement
                         | WHILE LPAREN error SEMI {printf("while_statement error in line %d\n", yylval.line); yyerror("error"); yyerrok; }
                         | WHILE LPAREN general_expression error SEMI {printf("while_statement error in line %d\n", yylval.line); yyerror("error"); yyerrok; }
                         ;



for_statement :			 FOR LPAREN optexpr SEMI optexpr SEMI optexpr RPAREN statement
                         | FOR error RPAREN {printf("for_statement error in line %d\n", yylval.line); yyerror("error"); yyerrok; }
                         | FOR LPAREN error LPAREN {printf("for_statement error in line %d\n", yylval.line); yyerror("error"); yyerrok; }
                         | FOR LPAREN optexpr SEMI optexpr SEMI optexpr error SEMI {printf("for_statement error in line %d\n", yylval.line); yyerror("error"); yyerrok; }
                         ;



optexpr :			 general_expression
                     |
                     ;



return_statement :		 RETURN optexpr SEMI 
                         RETURN error {printf("return_statement error missing semi, in line %d\n", yylval.line); yyerror("error"); yyerrok; }
                         ;



io_statement :			 CIN INP in_list SEMI
                         | COUT OUT out_list SEMI
                         ;



in_list :			 in_list INP in_item
                     | in_item
                     ;


in_item :			 variable 
                     ;



out_list :       out_list OUT out_item
				 | out_item 
				 ;



out_item :			 general_expression
                     | STRING
                     ;




comp_statement :		 LBRACE decl_statements RBRACE
                         ;



main_function :			 main_header LBRACE decl_statements RBRACE
                         main_header error RBRACE {printf("main_function error in line %d\n", yylval.line); yyerror("error"); yyerrok;}
                         ;


main_header :			 INT MAIN LPAREN RPAREN  
                         | INT MAIN error RPAREN {printf("main_header error in line %d\n", yylval.line); yyerror("error"); yyerrok; }
                         ;


%%
/*C PART */


int main(int argc, char *argv[]){
	
    
    
    init_ht();
    if(yyparse()==0){
        printf("Succesful\n");
    }
    else{
        printf("Unsuccesful\n");
    }
    
    print_ht();
}

void yyerror(const char *mes){
	
	fprintf(stderr," %s ", mes);
    int error=0;
    
	error++;
	if(error==5){
        printf("Abort\n");
        exit(1);
	}

}












