%{
#include <string.h>
#include <stdio.h>
#define INFILE_ERROR 1
#define OUTFILE_ERROR 2

int yylex();
void yyerror(char *msg);

int yylineno;
%}
%union 
{
char *text;
int	ival;
};
%token NEWLINE PARAGRAPH LEX_EOF
%token <text> ID
%token <ival> LC
%start wyr
%left '+' '-'
%left '*' '/'
%%
start : line NEWLINE
      | start line NEWLINE
      ;

line :  wyr 		{printf(" \n");}
		| skladnik	{printf(" \n");}
		| czynnik	{printf(" \n");}
		;

wyr
	:wyr '+' skladnik	{printf("wyrazenie z + \n");}
	|wyr '-' skladnik	{printf("wyrazenie z - \n");}
	|skladnik		{printf("wyrazenie pojedyncze \n");}
	;
skladnik
	:skladnik '*' czynnik	{printf("(skladnik '*' czynnik)");} 
	|skladnik '/' czynnik	{printf("(skladnik '/' czynnik)");}
	|czynnik		{}
	;
czynnik
	:ID			{printf("(%s)", $1);} 
	|'(' wyr ')'		{}
	;
	

%%
void yyerror(char *msg){}
int yywrap (void) { return 1; }

int main(int argc, char *argv[])
{
	printf("Progrum run:\n");
	printf("\n\n----------------------------\n");
	yyparse();
	printf("\n----------------------------\n\n");
	printf("Lines: %d\n", yylineno);
	printf("Cleaning: ");
	return 0;
}