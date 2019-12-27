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
	| op_assign op_add {
		printf("<op_assign op_add('%s')>", yytext);
	}
	| op_assign identity {
		printf("<op_assign identity('%s')>", yytext);
	}
	| op_assign value {
		printf("<op_assign value('%s')>", yytext);
	}
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
	| op_hset		{}
	| expr			{ printf(">>expression ignored<<"); }
	| line endl		{ 
		//printf(" \r\t\t\t\t\t\t >> %s \n", yytext);
		printf("\n");
	}

op_set
	: SET whitespace {}
	| op_set identity {
		text = (char *)malloc(100);
		strcpy(text, yytext);
	}
	| op_set op_assign value {
		ival = atoi(yytext);
		printf("<op_set '%s' = '%d'>", text, ival);
		saveInt(text, ival);
		
		int valueOfB = getInt("b");
	}
		
op_hset
	: identity op_assign { 
		printf("<op_hset_1('%s')>", yytext);	
	}
	| op_hset expr { 
		printf("<op_hset_2('%s')>", yytext);	
	}
	
expr
	: identity op_add identity	{
		//printf("<%s, %s>", text, yytext);
	}
	
op_assign
	: '=' 						{printf("");}
	| whitespace '=' whitespace {printf("");}
	
op_add
	: '+' 						{printf("");}
	| whitespace '+' whitespace {printf("");}
	
value
	: INT 			{
		printf("int[%d]", atoi(yytext));
	}

identity
	: STR			{
		text = (char *)malloc(100);
		strcpy(text, yytext);
		//printf("str[%s]", yytext);
	}
	
ignore
	: UNKNOWN		{printf("#");}
	| COMMENTLINE	{printf("### %s ###", yytext);}
	| whitespace	{printf(",,");}

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
	int value = 0;
	short found = 0;
	for (int i = 0; i < idxChar; i++) {
		if (strcmp(name, arrChar[i]) == 0) {
			found = 1;
			//printf("Zmienna %s = %d\n", arrChar[i], arrInt[i]);
			value = arrInt[i];
		}
	}
	
	if (!found) {
		printf("Variable '%s' not found.", name);
	}
	else {
		printf("Variable '%s' = %d.", name, value);
	}
	return value;
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