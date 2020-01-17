%{
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <stack>
#include <sstream>  
#include "Variable.h"
#include "VariableManager.h"
#define MAX_VARIABLE_LENGTH 100
using namespace std;

extern "C" int yylex();
extern void yyerror(const char* msg);
extern char* yytext;

int getInt(const char* name);
void saveInt(const char* name, int value);
void savingVariableInfo(string varVal, string varName);

//int yylineno = 1;

VariableManager vb;
stack <int> stackInt;
stack <string> stackString; 

extern char *yytext;
char *text;
int	ival;
double dval;
%}
%union 
{
	char *text;
	int	ival;
	double dval;
};
%token <text> NEWLINE
%token <text> SET PRINT
%token <text> STR DBL UNKNOWN 
%token <text> COMMENTLINE
%token <ival> INT
%%
/* Commented -->
%left '+' '-'
%left '*' '/'
<-- Commented */

/* <-- TOKENS --> */
read_all: 
	line 			{ }
	| read_all line { }
	;

line: 
	ignore 			{}
	| op_set		{}
	| double 		{}
	| line endl		{ 
		//printf(" \r\t\t\t\t\t\t >> %s \n", yytext);
		// printf("\n");
	}
	;

op_set: 
	SET whitespace identity {
		stackString.push(yytext);
	}
	| op_set op_assign integer {
		stackInt.push(atoi(yytext));
		int result = (vb += new Variable(stackInt.top(), stackString.top()));
		if (!result){
			savingVariableInfo(to_string(stackInt.top()), stackString.top());
		}
		stackInt.pop();
		stackString.pop();
	}
	| op_set op_assign identity {
		string name = yytext;
		Variable* var = vb[name];
		if (var == nullptr) {
			cout << "Could not find variable named [" << name << "]" << endl;
		}
		else {
			if (var->getType() == Variable::variableType::INT) {
				int result = (vb += new Variable(var->getIValue(), stackString.top()));
				if (!result){
					savingVariableInfo(to_string(var->getIValue()), stackString.top());
				}
				stackString.pop();
			}
			else if (var->getType() == Variable::variableType::DOUBLE) {
				int result = (vb += new Variable(var->getDValue(), stackString.top()));
				if (!result){
					savingVariableInfo(to_string(var->getDValue()), stackString.top());
				}
				stackString.pop();
			}
			else if (var->getType() == Variable::variableType::STRING) {
				int result = (vb += new Variable(var->getSValue(), stackString.top()));
				if (!result) {
					savingVariableInfo(var->getSValue(), stackString.top());
				}
				stackString.pop();
			}
		}
	}
	| op_set op_assign double {
		int result = (vb += new Variable(dval, stackString.top()));
		if (!result) {
			savingVariableInfo(to_string(dval), stackString.top());
		}
		stackString.pop()
	}
	| op_set op_assign quote {
		string value = stackString.top();
		stackString.pop();
		int result = (vb += new Variable(value, stackString.top()));
		if (!result) {
			savingVariableInfo(value, stackString.top());
		}
		stackString.pop();
	}
	;

quote:
	'"' STR {
		stackString.push(yytext);
	}
	| quote '"' {}
	;

expr: 
	identity op_add identity	{
		//printf("<%s, %s>", text, yytext);
	}
	;

op_assign: 
	'=' 						{printf("");}
	| op_assign whitespace	 	{printf("");}
	| whitespace op_assign 	 	{printf("");}
	;

op_add:
	'+' 						{printf("");}
	| op_add whitespace	 		{printf("");}
	| whitespace op_add 	 	{printf("");}
	;

double:
	DBL {
		dval = atof(yytext);
	}
	;

integer: 
	INT	{
		ival = atoi(yytext);
		stackInt.push(ival);
	}
	;

identity: 
	STR {
	}
	;
	
ignore: 
	UNKNOWN			{printf("#");}
	| COMMENTLINE	{printf("### %s ###", yytext);}
	| whitespace	{printf(" ");}
	| PRINT			{printf("print");}
	;

whitespace: 
	' ' 			 {}
	| whitespace ' ' {}
	;

endl: 
	NEWLINE 		{}
	| ';' 			{}
	| endl NEWLINE 	{}
	| endl ';' 		{}
	;
%%
/* <-- FUNCTIONS --> */
extern void yyerror(const char* msg){}
extern "C" int yywrap (void) { return 1; }

void showstack(stack <int> s) 
{ 
    while (!s.empty()) 
    { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 

void savingVariableInfo(string varVal, string varName) {
	cout << "Saving value [" << varVal << "] into variable named [" 
		<< varName << "]" << endl;
}

/* <-- MAIN --> */
int main(int argc, char *argv[])
{
	printf("Progrum run:");
	printf("\n\n----------------------------\n");
	yyparse();
	printf("\n----------------------------\n\n");
	//printf("Lines: %d\n", yylineno);
	printf("Cleaning: ");
	return 0;
}