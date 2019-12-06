%{
#include <string.h>
#include <stdio.h>
#define INFILE_ERROR 1
#define OUTFILE_ERROR 2

int yylex();
void yyerror(char *msg);
int getInt(char* name);
void saveInt(char* name, int value);

int yylineno = 1;

int 	arrInt[20];
int		idxInt = 0;
char 	*arrChar[20];
int		idxChar = 0;

char *text;
int	ival;
%}
%union 
{
char *text;
int	ival;
};
%token <text> NEWLINE PARAGRAPH LEX_EOF
%token <text> SET
%token <text> STR UNKNOWN
%token <text> COMMENTLINE
%token <ival> INT
%%
/* Commented -->
%left '+' '-'
%left '*' '/'
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
	: SET whitespace identity {
		text = (char *)malloc(100);
		strcpy(text, yytext);
	}
	| op_set whitespace '=' whitespace value {
		ival = atoi(yytext);
		printf("<'%s' = '%d'>", text, ival);
		saveInt(text, ival);
		
		int valueOfB = getInt("b");
		printf("valueOfB = %d", valueOfB)
	}
	
value
	: INT 			{
		//printf("INT");
	}

identity
	: STR			{
		//printf("STR");
	}
	
ignore
	: UNKNOWN		{printf("#");}
	| COMMENTLINE	{printf("### %s ###", yytext);}
	| whitespace	{printf(" ");}
	
whitespace
	: ' ' 			 {}
	| whitespace ' ' {}


endl
	: NEWLINE 		{}
	| ';' 			{}
	| endl NEWLINE 	{}
	| endl ';' 		{}
%%
/* <-- FUNCTIONS --> */
void yyerror(char *msg){}
int yywrap (void) { return 1; }

void saveInt(char* name, int value) {
	arrChar[idxChar++] = name;
	arrInt[idxInt++] = value;
	//printf("Saved %s == %d (%d, %d)\n", name, value, idxChar, idxInt);
}

int getInt(char* name) {
	short found = 0;
	for (int i = 0; i < idxChar; i++) {
		if (strcmp(name, arrChar[i]) == 0) {
			found = 1;
			//printf("Zmienna %s = %d\n", arrChar[i], arrInt[i]);
			return arrInt[i];
		}
	}
	
	if (!found) {
		printf("Nie znaleziono zmiennej o nazwie %s\n", name);
	}
	return 0;
}

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