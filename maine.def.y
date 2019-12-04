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
{char *text;
int	ival;};
%token <text> ID
%token <text> NEWLINE
%token <ival> LC
%left '+' '-'
%left '*' '/'
%%
/* Commented
skladnik
	:skladnik '*' czynnik	{printf("skladnik z * \n");}
	|skladnik '/' czynnik	{printf("skladnik z / \n");}
	|czynnik		{printf("skladnik pojedynczy \n");}
	;
strona
	: lista lista { printf("|strona++|\n"); }
	| lista { printf("|strona+|\n"); }

Commented */
lista
	: line line { printf("|lista++|\n"); }
	| line {printf("|lista+|\n");}

line
	:czynnik NEWLINE {printf("|czynnik NEWLINE|\n");}
	| NEWLINE {printf("|czynnik NEWLINE|\n");}

czynnik
	:ID			{printf("ID\n");} 
	|LC			{printf("LC\n");} 
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