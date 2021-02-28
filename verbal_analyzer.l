%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "syntactic_analyzer.tab.h"
#include "symbols_table.h"

 //CREATED by


 //Errikos Marios Kiriklidis:
 //Giwrgos kougioumhs:
 //Nikos Rozis:
 //Ilias Kamilarakis:


YYSTYPE yylval;



void error(char *message);

int line_number=1;
int error_cnt;

%}






LETTER [A-Za-z]
DIGIT [0-9]
ALPHA[0-9A-Za-z]
DIGITNOZ [1-9]


%option noyywrap
%option case-insensitive


%%


"TYPEDEF" {
    printf("TYPEDEF\n");
	return TYPEDEF;
}


"CHAR" {
	return CHAR;
}


"INT" {
	return INT;
}


"FLOAT" {
	return FLOAT;
}


"CONST" {
	return CONST;
}


"CLASS" {
	return CLASS;
}


"PRIVATE" {
	return PRIVATE;
}


"PROTECTED" {
	return PROTECTED;
}


"PUBLIC" {
	return PUBLIC;
}


"VOID" {
	return VOID;
}


"STATIC" {
	return STATIC;
}


"CONTINUE" {
	return CONTINUE;
}


"BREAK" {
	return BREAK;
}


"THIS" {
	return THIS;
}


"IF" {
	return IF;
}


"ELSE" {
	return ELSE;
}


"WHILE" {
	return WHILE;
}


"FOR" {
	return FOR;
}


"RETURN" {
	return RETURN;
}


"CIN" {
	return CIN;
}


"COUT" {
	return COUT;
}


"MAIN" {
	return MAIN;
}


"(" {
	return LPAREN;
}

")" {
	return RPAREN;
}


";" {
	return SEMI;
}


"." {
	return DOT;
}


"," {
	return COMMA;
}


"=" {
	return ASSIGN;
}


":" {
	return COLON;
}


"[" {
	return LBRACK;
}


"]" {
	return RBRACK;
}


"&" {
	return REFER;
}


"}" {
	return RBRACE;
}


"{" {
	return LBRACE;
}


"::" {
	return METH;
}


">>" {
	return INP;
}


"<<" {
	return OUT;
}


"||" {
	return OROP;
}


"&&" {
	return ANDOP;
}


"=="  {
	return EQUOP;
}


"!="  {
	return EQUOP;
}


">"|">="|"<"|"<=" {
	return RELOP;
}


"+"|"-" {
	return ADDOP;
}


"*"|"/"|"%" {
	return MULOP;
}


"!" {
	return NOTOP;
}


"++"|"--" {
	return INCDEC;
}


"SIZEOF" {
	return SIZEOP;
}


(_)*({LETTER})(({ALPHA})|(_)*({ALPHA}))* {
    
    int hash_val = 0;
    strcpy(yylval.id, yytext);
    
    hash_val = hash_func(yylval.id);
    
    insert(yylval.id, line_number, hash_val);

    printf("%s  is an ID \n ", yylval.id);
    return ID;
}




(0|[1-9][0-9]*) {
    
    yylval.iconst=atoi(yytext);
    printf("%d is ICONST \n", yylval.iconst);
    return ICONST;

}


(0X[1-9A-F][0-9A-F]*) {
    
    
    char *hexa = yytext;
    
    hexa = hexa + 2;
    sscanf(hexa, "%x", &yylval.iconst);
    printf("%x is ICONST\n", yylval.iconst);
    
    return ICONST;
}

0B1[0|1]* {
    
    
    char *binary = yytext;
    
    binary = binary + 2;
    sscanf(binary, "%d", &yylval.iconst);
    printf("%d is ICONST\n", yylval.iconst);
    
    return ICONST;
}



([1-9][0-9]*\.00)|([1-9][0-9]*\.00*[1-9][0-9])|([1-9][0-9]*\.[1-9][0-9]*)|((0|[1-9][0-9]*)\.?([0-9]*[1-9][0-9]*)?(E(\+|\-)?(0|([1-9][0-9]*)))?)|(\.00*)|(\.00*[1-9][0-9]*)|(\.[1-9][0-9]*)|([1-9]E(\+|\-)[0-9][0-9]*)|([1-9]E[0-9][0-9]*)([1-9][0-9]*\.[1-9][0-9]*E(\+|\-)[0-9][0-9]*)|([1-9][0-9]*\.[1-9][0-9]*E[0-9][0-9]*)|(\.[1-9][0-9]*E[0-9][0-9]*)|(0X[1-9A-F][0-9A-F]*\.)|(0X\.)|(0B1[0-1]*\.)|(0X[1-9A-F][0-9A-F]*\.[1-9A-F][0-9A-F]*)|(0X[1-9A-F][0-9A-F]*\.00*)|(0X[1-9A-F][0-9A-F]*\.00*[1-9A-F][0-9A-F]*)|(0X\.[1-9A-F][0-9A-F]*)|(0x.00*)|(0X\.00*[1-9A-F][0-9A-F]*)|(0B1[0-1]*\.0*)|(0B1[0-1]*\.00*)|(0B1[0-1]*\.1[0-1]*)|(0B1[0-1]*\.00*1[0-1]*)|(0B1\.0*) {
    
    
    
    yylval.fconst=atof(yytext);
    printf("%f is FCONST \n ", yylval.fconst);
    return FCONST;
    
}







'([\x20-\x7E]|(\\[nftrvb]))'   {
    
    char *temp_char = yytext;
	
	if(*(temp_char+1) == '\\') {
        if ( *(temp_char + 2) == 'n' ){
            yylval.cconst = '\n';
        }
        else if( *(temp_char + 2) == 'f' ){
            yylval.cconst = '\f';
        }
        else if( *(temp_char + 2) == 't' ){
            yylval.cconst = '\t';
        }
        else if( *(temp_char + 2) == 'r' ){
            yylval.cconst = '\r';
        }
        else if( *(temp_char + 2) == 'v' ){
            yylval.cconst = '\v';
        }
        else if( *(temp_char + 2) == 'b' ){
            yylval.cconst = '\b';
        }
        else if( *(temp_char + 2) == '\'' ){
            yylval.cconst = '\'';
        }
		
	}
	else {
		yylval.cconst = *(temp_char+1);
	}
	printf("%c is CCONST \n", yylval.cconst);
    
    
    return CCONST;


}



\"((([\x20\x21\x23-\x5B\x5D-\x7E])|(\\[\x20-\x7E])*|(\\[\xA]))*)\" {


char *temp_string = yytext;
char *temp_char = NULL;
int str_length = 0;


while( *temp_string != '\0' ){
    if( *(temp_string+1) == '\n' ) {
        line_number++;
        yylval.line = line_number;
    }
    str_length++;
    temp_string++;

}

temp_string = yytext;
temp_char = temp_string;


while ( str_length > 2 ){
    
    if( *temp_string == '\\' ){
        if( *(temp_string+1) == '\n' ) {
           
        }
    
    
    else if( *(temp_string+1) == 'f'){
            *temp_string = '\f';
            strcpy( temp_string+1, temp_string+2 );
            temp_string++;
        }
        else if( *(temp_string+1) == 't'){
            *temp_string = '\t';
            strcpy( temp_string+1, temp_string+2 );
            temp_string++;
        }
        else if( *(temp_string++) == 'r'){
            *temp_string = '\r';
            strcpy( temp_string+1, temp_string+2 );
            temp_string++;
        }
        else if( *(temp_string+1) == 'b'){
            *temp_string = '\b';
            strcpy( temp_string+1, temp_string+2 );
            temp_string++;
        }
        else if( *(temp_string+1) == 'v'){
            *temp_string = '\v';
            strcpy( temp_string+1, temp_string+2 );
            temp_string++;
        }
        else if( *(temp_string+1) == '\''){
            *temp_string = '\'';
            strcpy( temp_string+1, temp_string+2 );
            temp_string++;
        }
        
    }
    
    
    if(str_length==0)  break;
    //temp_string++;
    str_length--;
    
}


strcpy(yylval.string, yytext);
printf(" %s is string\n", yylval.string);
//printf("char is:%s\n",temp_string);

return STRING;
}



" " {
    /*space*/
}


"" {
    
}




((\/)+[\x20-\x7E]*)|((\/)(\*)[\x20-\x7E]?*([^\*]|[\r\n]|((\*)*(([^\*^\/])|[\r\n])))*(\*)*(\/)) {
    char *temp_char = yytext;
    
    
    while(*temp_char != '\0') {
        if(*temp_char == '\n') {
            line_number++;
            yylval.line = line_number;
        }
        temp_char++;
    
    }//(\/\*([^*]|[\r\n]|(\*+([^\*]|[\r\n])))*\*+/)
    /*comments*/
}

[ \t]+ {
    /* tab with space*/
    
}

\n {
    line_number++;
    yylval.line = line_number;
    
}


. {
	error("verbal error\n");
}

%%



/*

 int main(int argc, char* argv[]) {
	int lexic_number;
	
	while ((lexic_number = yylex()) != 0)  {
    printf("code %d  verbal unit \"%s\"\n", lexic_number, yytext);


	}
	
    return 0;
}
*/



void error(char *message) {
    error_cnt++;
    printf("%s in line: %d ", message,line_number);
    
    
}
/*
void final_print(int lexic_num) {


	switch(lexic_num) {
        case 1:
		printf("TYPEDEF\n");
		break;

		case 2: 
		printf("CHAR\n");
		break;

		case 3: 
		printf("INT\n");
		break;

		case 4: 
		printf("FLOAT\n");
		break;		
		
		case 5: 
		printf("CONST\n");
		break;
		
		case 6: 
		printf("CLASS\n");
		break;
		
		case 7: 
		printf("PRIVATE\n");
        break;
        
		case 8: 
		printf("PROTECTED\n");
		break;

		case 9: 
		printf("PUBLIC\n");
		break;

		case 10: 
		printf("VOID\n");
		break;

		case 11: 
		printf("STATIC\n");
		break;

		case 12: 
		printf("CONTINUE\n");
		break;

		case 13: 
		printf("BREAK\n");
		break;

		case 14: 
		printf("THIS\n");
		break;

		case 15: 
		printf("IF\n");
		break;

		case 16: 
		printf("ELSE\n");
		break;

		case 17:
		printf("WHILE\n");
		break;

		case 18:
		printf("FOR\n");
		break;

		case 19: 
		printf("RETURN\n");
		break;

		case 20: 
		printf("CIN\n");
		break;

		case 21: 
		printf("COUT\n");
		break;

		case 22: 
		printf("MAIN\n");
		break;

		case 23: 
		printf("LPAREN\n");
		break;

		case 24: 
		printf("RPAREN\n");
		break;

		case 25: 
		printf("SEMI\n");
		break;

		case 26: 
		printf("DOT\n");
		break;

		case 27: 
		printf("COMMA\n");
		break;

		case 28: 
		printf("ASSIGN\n");
		break;

		case 29: 
		printf("COLON\n");
		break;
		
		case 30: 
		printf("LBRACK\n");
		break;

		case 31: 
		printf("RBRACK\n");
		break;

		case 32: 
		printf("REFER\n");
		break;

		case 33: 
		printf("LBRACE\n");
		break;

		case 34: 
		printf("RBRACE\n");
		break;

		case 35: 
		printf("METH\n");
		break;

		case 36: 
		printf("INP\n");
		break;

		case 37: 
		printf("OUT\n");
		break;

		case 38: 
		printf("OROP\n");
		break;

		case 39: 
		printf("ANDOP\n");
		break;

		case 40: 
		printf("EQUOP\n");
		break;

		case 41: 
		printf("RELOP\n");
		break;

		case 42: 
		printf("MULOP\n");
		break;
		
		case 43: 
		printf("ADDOP\n");
		break;

		case 44: 
		printf("NOTOP\n");
		break;

		case 45: 
		printf("INCDEC\n");
		break;
				
		case 46: 
		printf("SIZEOP\n");
		break;
	

		case 48:
        printf("ICONST: %s\n", yytext);
        break;
		
		case 49:
        printf("FCONST: %s\n", yytext);
        break;

        //case 50:
        //printf("CCONST: %s\n", yytext);
        //break;
        
        
        case 51:
        printf("STRING: %s\n", yytext);
        break;
 

    }

}
*/