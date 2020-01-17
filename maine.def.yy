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

VariableManager vm;
stack <int> stackInt;
stack <double> stackDouble;
stack <string> stackString;
stack <Variable*> stackVariables;

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
	ignore 			{ cout << endl; }
	| op_set		{}
	| identity		{}
	| print 		{}
	| line endl		{}
	;
	
print:
	PRINT				{}
	| print '(' 		{}
	| print identity  	{
		Variable *var = vm[stackString.top()];
		stackString.pop();
		if (var != nullptr) {
			stackVariables.push(var);
			cout << stackVariables.top()->getSValue();
		}
	}
	| print quoteEnd		{
		cout << stackString.top();
		stackString.pop();
	}
	| print whitespace 		{}
	| print whitespace '+' 	{}
	| print '+' 			{}
	| print ')' 		 	{
		cout << endl;
	}
	;

op_set: 
	SET whitespace identity {
		stackString.push(yytext);
	}
	| op_set op_assign integer {
		int result = (vm += new Variable(stackInt.top(), stackString.top()));
		if (!result){
			savingVariableInfo(to_string(stackInt.top()), stackString.top());
		}
		stackInt.pop();
		stackString.pop();
	}
	| op_set op_assign identity {
		string name = yytext;
		Variable* var = vm[name];
		if (var == nullptr) {
			cout << "Could not find variable named [" << name << "]" << endl;
		}
		else {
			if (var->getType() == Variable::variableType::INT) {
				int result = (vm += new Variable(var->getIValue(), stackString.top()));
				if (!result){
					savingVariableInfo(to_string(var->getIValue()), stackString.top());
				}
				stackString.pop();
			}
			else if (var->getType() == Variable::variableType::DOUBLE) {
				int result = (vm += new Variable(var->getDValue(), stackString.top()));
				if (!result){
					savingVariableInfo(to_string(var->getDValue()), stackString.top());
				}
				stackString.pop();
			}
			else if (var->getType() == Variable::variableType::STRING) {
				int result = (vm += new Variable(var->getSValue(), stackString.top()));
				if (!result) {
					savingVariableInfo(var->getSValue(), stackString.top());
				}
				stackString.pop();
			}
		}
	}
	| op_set op_assign double {
		int result = (vm += new Variable(dval, stackString.top()));
		if (!result) {
			savingVariableInfo(to_string(dval), stackString.top());
		}
		stackString.pop()
	}
	| op_set op_assign quoteEnd {
		string value = stackString.top();
		stackString.pop();
		int result = (vm += new Variable(value, stackString.top()));
		if (!result) {
			savingVariableInfo(value, stackString.top());
		}
		stackString.pop();
	}
	| op_set op_assign op_add {
		stackVariables.top()->setName(stackString.top());
		int result = (vm += stackVariables.top());
		if (!result) {
			savingVariableInfo(stackVariables.top()->getSValue(), stackVariables.top()->getName());
		}
		stackVariables.pop();
		stackString.pop();
	}
	| op_set op_assign op_sub {
		if (stackVariables.top() != nullptr) {
			stackVariables.top()->setName(stackString.top());
			int result = (vm += stackVariables.top());
			if (!result) {
				savingVariableInfo(stackVariables.top()->getSValue(), stackVariables.top()->getName());
			}
		}
		stackVariables.pop();
		stackString.pop();
	}
	| op_set op_assign op_multi {
		if (stackVariables.top() != nullptr) {
			stackVariables.top()->setName(stackString.top());
			int result = (vm += stackVariables.top());
			if (!result) {
				savingVariableInfo(stackVariables.top()->getSValue(), stackVariables.top()->getName());
			}
		}
		stackVariables.pop();
		stackString.pop();
	}
	| op_set op_assign op_div {
		if (stackVariables.top() != nullptr) {
			stackVariables.top()->setName(stackString.top());
			int result = (vm += stackVariables.top());
			if (!result) {
				savingVariableInfo(stackVariables.top()->getSValue(), stackVariables.top()->getName());
			}
		}
		stackVariables.pop();
		stackString.pop();
	}
	;

op_div:
	'/' 					{}
	| op_div whitespace		{}
	| whitespace op_div		{}
	| identity op_div identity	{
		string suppVal = stackString.top(); 
		stackString.pop();
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		Variable* suppVar = vm[suppVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else if (suppVar == nullptr) {
			cout << "Could not find variable named [" << suppVal << "]";
		}
		else {
			stackVariables.push(vm.divideVariables(mainVar, suppVar));
		}
	}
	| identity op_div integer {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(ival, "temp");
			stackVariables.push(vm.divideVariables(mainVar, suppVar));
		}
	}
	| identity op_div quoteEnd {
		string stringValue = stackString.top();
		stackString.pop();
		string mainVal = stackString.top();
		stackString.pop();


		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			// cout << "TEST = " << mainVar->getIValue();
			Variable *suppVar = new Variable(stringValue, "temp");
			stackVariables.push(vm.divideVariables(mainVar, suppVar));
		}
	}
	| identity op_div double {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(dval, "temp");
			stackVariables.push(vm.divideVariables(mainVar, suppVar));
		}
	}
	| integer op_div identity {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(stackInt.top(), "temp");
			stackVariables.push(vm.divideVariables(suppVar, mainVar));
		}
		stackInt.pop();
	}
	| integer op_div integer {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	}
	| integer op_div quoteEnd {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	}
	| integer op_div double {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	}
	| quote op_div identity {
		string varName = stackString.top();
		stackString.pop();
		string stringValue = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[varName];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << varName << "]";
		}
		else {
			Variable *suppVar = new Variable(stringValue, "temp");
			stackVariables.push(vm.divideVariables(suppVar, mainVar));
		}
	}
	| quote op_div integer {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	}
	| quote op_div quoteEnd {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	}
	| quote op_div double {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	}
	| double op_div identity {
		Variable *suppVar = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		string varName = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[varName];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << varName << "]";
		}
		else {
			stackVariables.push(vm.divideVariables(suppVar, mainVar));
		}
	}
	| double op_div integer {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	}
	| double op_div quoteEnd {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	}
	| double op_div double {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.divideVariables(suppVar1, suppVar2));
	}
	;

op_multi:
	'*'								{}
	| op_multi whitespace			{}
	| whitespace op_multi			{}
	| identity op_multi identity	{
		string suppVal = stackString.top(); 
		stackString.pop();
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		Variable* suppVar = vm[suppVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else if (suppVar == nullptr) {
			cout << "Could not find variable named [" << suppVal << "]";
		}
		else {
			stackVariables.push(vm.multipleVariables(mainVar, suppVar));
		}
	}
	| identity op_multi integer {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(ival, "temp");
			stackVariables.push(vm.multipleVariables(mainVar, suppVar));
		}
	}
	| identity op_multi quoteEnd {
		string stringValue = stackString.top();
		stackString.pop();
		string mainVal = stackString.top();
		stackString.pop();


		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			// cout << "TEST = " << mainVar->getIValue();
			Variable *suppVar = new Variable(stringValue, "temp");
			stackVariables.push(vm.multipleVariables(mainVar, suppVar));
		}
	}
	| identity op_multi double {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(dval, "temp");
			stackVariables.push(vm.multipleVariables(mainVar, suppVar));
		}
	}
	| integer op_multi identity {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(stackInt.top(), "temp");
			stackVariables.push(vm.multipleVariables(suppVar, mainVar));
		}
		stackInt.pop();
	}
	| integer op_multi integer {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	}
	| integer op_multi quoteEnd {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	}
	| integer op_multi double {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	}
	| quote op_multi identity {
		string varName = stackString.top();
		stackString.pop();
		string stringValue = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[varName];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << varName << "]";
		}
		else {
			Variable *suppVar = new Variable(stringValue, "temp");
			stackVariables.push(vm.multipleVariables(suppVar, mainVar));
		}
	}
	| quote op_multi integer {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	}
	| quote op_multi quoteEnd {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	}
	| quote op_multi double {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	}
	| double op_multi identity {
		Variable *suppVar = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		string varName = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[varName];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << varName << "]";
		}
		else {
			stackVariables.push(vm.multipleVariables(suppVar, mainVar));
		}
	}
	| double op_multi integer {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	}
	| double op_multi quoteEnd {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	}
	| double op_multi double {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.multipleVariables(suppVar1, suppVar2));
	}
	;

op_sub:
	'-'							{}
	| op_sub whitespace			{}
	| whitespace op_sub			{}
	| identity op_sub identity	{
		string suppVal = stackString.top(); 
		stackString.pop();
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		Variable* suppVar = vm[suppVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else if (suppVar == nullptr) {
			cout << "Could not find variable named [" << suppVal << "]";
		}
		else {
			stackVariables.push(vm.subVariables(mainVar, suppVar));
		}
	}
	| identity op_sub integer {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(ival, "temp");
			stackVariables.push(vm.subVariables(mainVar, suppVar));
		}
	}
	| identity op_sub quoteEnd {
		string stringValue = stackString.top();
		stackString.pop();
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(stringValue, "temp");
			stackVariables.push(vm.subVariables(mainVar, suppVar));
		}
	}
	| identity op_sub double {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(dval, "temp");
			stackVariables.push(vm.subVariables(mainVar, suppVar));
		}
	}
	| integer op_sub identity {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(stackInt.top(), "temp");
			stackVariables.push(vm.subVariables(suppVar, mainVar));
		}
		stackInt.pop();
	}
	| integer op_sub integer {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	}
	| integer op_sub quoteEnd {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	}
	| integer op_sub double {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	}
	| quote op_sub identity {
		string varName = stackString.top();
		stackString.pop();
		string stringValue = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[varName];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << varName << "]";
		}
		else {
			Variable *suppVar = new Variable(stringValue, "temp");
			stackVariables.push(vm.subVariables(suppVar, mainVar));
		}
	}
	| quote op_sub integer {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	}
	| quote op_sub quoteEnd {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	}
	| quote op_sub double {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	}
	| double op_sub identity {
		Variable *suppVar = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		string varName = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[varName];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << varName << "]";
		}
		else {
			stackVariables.push(vm.subVariables(suppVar, mainVar));
		}
	}
	| double op_sub integer {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	}
	| double op_sub quoteEnd {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	}
	| double op_sub double {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.subVariables(suppVar1, suppVar2));
	}
	;

op_add:
	'+' 						{}
	| op_add whitespace	 		{}
	| whitespace op_add 	 	{}
	| identity op_add identity	{
		string suppVal = stackString.top(); 
		stackString.pop();
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		Variable* suppVar = vm[suppVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else if (suppVar == nullptr) {
			cout << "Could not find variable named [" << suppVal << "]";
		}
		else {
			stackVariables.push(vm.addVariables(mainVar, suppVar));
		}
	}
	| identity op_add integer {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(ival, "temp");
			stackVariables.push(vm.addVariables(mainVar, suppVar));
		}
	}
	| identity op_add quote {
		string stringValue = stackString.top();
		stackString.pop();
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(stringValue, "temp");
			stackVariables.push(vm.addVariables(mainVar, suppVar));
		}
	}
	| identity op_add double {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(dval, "temp");
			stackVariables.push(vm.addVariables(mainVar, suppVar));
		}
	}
	| integer op_add identity {
		string mainVal = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[mainVal];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << mainVal << "]";
		}
		else {
			Variable *suppVar = new Variable(stackInt.top(), "temp");
			stackVariables.push(vm.addVariables(mainVar, suppVar));
		}
		stackInt.pop();
	}
	| integer op_add integer {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	}
	| integer op_add quote {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	}
	| integer op_add double {
		Variable *suppVar1 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	}
	| quote op_add identity {
		string varName = stackString.top();
		stackString.pop();
		string stringValue = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[varName];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << varName << "]";
		}
		else {
			Variable *suppVar = new Variable(stringValue, "temp");
			stackVariables.push(vm.addVariables(suppVar, mainVar));
		}
	}
	| quote op_add integer {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	}
	| quote op_add quote {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	}
	| quote op_add double {
		Variable *suppVar1 = new Variable(stackString.top(), "temp");
		stackString.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	}
	| double op_add identity {
		Variable *suppVar = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		string varName = stackString.top();
		stackString.pop();

		Variable* mainVar = vm[varName];
		if (mainVar == nullptr) {
			cout << "Could not find variable named [" << varName << "]";
		}
		else {
			stackVariables.push(vm.addVariables(suppVar, mainVar));
		}
	}
	| double op_add integer {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackInt.top(), "temp");
		stackInt.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	}
	| double op_add quote {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackString.top(), "temp");
		stackString.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	}
	| double op_add double {
		Variable *suppVar1 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		Variable *suppVar2 = new Variable(stackDouble.top(), "temp");
		stackDouble.pop();
		stackVariables.push(vm.addVariables(suppVar1, suppVar2));
	}
	;

op_assign: 
	'=' 						{}
	| op_assign whitespace	 	{}
	| whitespace op_assign 	 	{}
	;

quoteEnd:
	quote '"' 	{}
	;

quote:
	'"' STR {
		stackString.push(yytext);
	}
	| quote '=' {
		string quoteVal = stackString.top();
		stackString.pop();
		quoteVal += "=";
		stackString.push(quoteVal);
	}
	| quote whitespace {
		string quoteVal = stackString.top();
		stackString.pop();
		quoteVal += " ";
		stackString.push(quoteVal);
	}
	;

double:
	DBL {
		dval = atof(yytext);
		stackDouble.push(dval);
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
		stackString.push(yytext);
	}
	;

ignore: 
	UNKNOWN			{printf("#");}
	| COMMENTLINE	{printf("*** %s\\\\ ***", yytext);}
	| whitespace	{printf(" ");}
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
	cout << "[" << varName << "] = [" << varVal << "]" << endl;
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