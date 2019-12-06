%{
#include <string.h>
#include <stdio.h>
#define INFILE_ERROR 1
#define OUTFILE_ERROR 2

int yylex();
void yyerror(char *msg);

int yylineno = 1;
%}
%union 
{char *text;
int	ival;};
%token <text> NEWLINE PARAGRAPH LEX_EOF
%token <text> SET
%token <text> STR UNKNOWN
%token <text> COMMENTLINE
%token <ival> INT

%%
/* Commented -->
%left '+' '-'
%left '*' '/'

forloop 
	: FOR { printf("{FOR}\n"); }
	| FOR line { printf("{FOR line}\n"); }

script
	: fullline { printf(""); }
	| script fullline { printf(""); yylineno++; }

fullline
	: line newline { printf("<<\n"); }
	| op_set newline { printf("op_set ';'"); }
	| ignore line newline { printf("<<\n"); }

newline
	: NEWLINE {}
	| ';' {}
	| newline NEWLINE {}

ignore
	: COMMENTLINE {printf("COMMENTLINE>> ");}

line
	: czynnik {printf("");}
	| line czynnik {  }

	
czynnik
	:STR			{printf("STR");} 
	|INT			{printf("INT");}
	|UNKNOWN		{printf("#");}
	|' ' 			{printf(" ");}
	;
	
set_variable
	: op_set INT 	{ printf("set_variable"); }

	
set_variable 	{}
<-- Commented */

/* <-- TOKENS --> */
read_all
	: line 			{ }
	| read_all line { }

line
	: ignore 		{}
	| value 		{}
	| identity		{}
	| op_set		{}
	| line endl		{ 
		//printf(" \r\t\t\t\t\t\t >> %s \n", yytext);
		printf("\n");
	}

op_set
	: SET ' ' identity ' ' {
		//printf("op_set_1('%s')", yytext);
	}
	| op_set endl {
		printf("op_set_2('%s')", yytext);
	} 
	| op_set '=' ' ' value {
		printf("op_set_3('%s')", yytext);
	}
	
value
	: INT 			{printf("INT");}

identity
	: STR			{printf("STR");}
	
ignore
	: ' ' 			{printf(" ");}
	| UNKNOWN		{printf("#");}
	| COMMENTLINE	{printf("### %s ###", yytext);}
	
endl
	: NEWLINE 		{}
	| ';' 			{}
	| endl NEWLINE 	{}
	| endl ';' 		{}
%%
/* <-- FUNCTIONS --> */
void yyerror(char *msg){}
int yywrap (void) { return 1; }


/* <-- MAIN --> */
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