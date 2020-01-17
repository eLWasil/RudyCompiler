%{
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <stack>
#include "Variable.h"
#include "VariableManager.h"
#define MAX_VARIABLE_LENGTH 100
using namespace std;

extern "C" int yylex();
extern void yyerror(const char* msg);
extern char* yytext;

int getInt(const char* name);
void saveInt(const char* name, int value);

//int yylineno = 1;

stack <int> stackInt;
stack <string> stackString; 
int 	arrInt[20];
int		idxInt = 0;
char 	*arrChar[20];
int		idxChar = 0;

extern char *yytext;
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
		stackString.push(yytext);
	}
	| op_set op_assign value {
		
		cout << stackString.top() << " = " << yytext;
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
	| op_assign whitespace	 	{printf("");}
	| whitespace op_assign 	 	{printf("");}
	
op_add
	: '+' 						{printf("");}
	| whitespace '+' whitespace {printf("");}

value
	: INT 			{
		ival = atoi(yytext);
		stackInt.push(ival);
		cout << "INT(" << ival << ")";
		
	}

identity
	: STR			{
		//cout << "STR";
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
	| ';' 			{printf(";");}
	| endl NEWLINE 	{}
	| endl ';' 		{}
%%
/* <-- FUNCTIONS --> */
extern void yyerror(const char* msg){}
extern "C" int yywrap (void) { return 1; }

void saveInt(const char* name, int value) {
	//char* tmp = new char(MAX_VARIABLE_LENGTH);
	//strcpy(tmp, name);
	//arrChar[idxChar++] = tmp;
	//arrInt[idxInt++] = value;
	//printf("Saved %s == %d (%d, %d)\n", name, value, idxChar, idxInt);
}

int getInt(const char* name) {
	//short found = 0;
	//for (int i = 0; i < idxChar; i++) {
	//	if (strcmp(name, arrChar[i]) == 0) {
	//		found = 1;
	//		return arrInt[i];
	//	}
	//}
	//
	//if (!found) {
	//	printf("Nie znaleziono zmiennej o nazwie %s\n", name);
	//}
	return 0;
}

void showstack(stack <int> s) 
{ 
    while (!s.empty()) 
    { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 

/* <-- MAIN --> */

int main(int argc, char *argv[])
{
    VariableManager vb;
	vb += new Variable("value", "name");
	cout << vb.getVariable("name")->getSValue();
	cout << "---tadam---";
	
	printf("Progrum run:\n");
	printf("\n\n----------------------------\n");
	yyparse();
	printf("\n----------------------------\n\n");
	//printf("Lines: %d\n", yylineno);
	printf("Cleaning: ");
	return 0;
}