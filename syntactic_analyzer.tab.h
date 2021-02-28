/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_SYNTACTIC_ANALYZER_TAB_H_INCLUDED
# define YY_YY_SYNTACTIC_ANALYZER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TYPEDEF = 258,
     CHAR = 259,
     INT = 260,
     FLOAT = 261,
     CONST = 262,
     CLASS = 263,
     PRIVATE = 264,
     PROTECTED = 265,
     PUBLIC = 266,
     VOID = 267,
     MAIN = 268,
     STATIC = 269,
     CONTINUE = 270,
     BREAK = 271,
     THIS = 272,
     IF = 273,
     ELSE = 274,
     WHILE = 275,
     FOR = 276,
     RETURN = 277,
     CIN = 278,
     COUT = 279,
     LPAREN = 280,
     RPAREN = 281,
     SEMI = 282,
     DOT = 283,
     COMMA = 284,
     ASSIGN = 285,
     COLON = 286,
     LBRACK = 287,
     RBRACK = 288,
     LBRACE = 289,
     RBRACE = 290,
     INP = 291,
     OUT = 292,
     METH = 293,
     ID = 294,
     ICONST = 295,
     FCONST = 296,
     CCONST = 297,
     STRING = 298,
     OROP = 299,
     ANDOP = 300,
     EQUOP = 301,
     RELOP = 302,
     ADDOP = 303,
     MULOP = 304,
     NOTOP = 305,
     INCDEC = 306,
     SIZEOP = 307,
     REFER = 308,
     SIGNOP = 309,
     NO_ELSE = 310
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2053 of yacc.c  */
#line 14 "syntactic_analyzer.y"

    
    char id[100];
	int iconst;
	double fconst;
	char cconst;
	char string[100];
    int line;


/* Line 2053 of yacc.c  */
#line 123 "syntactic_analyzer.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_SYNTACTIC_ANALYZER_TAB_H_INCLUDED  */
