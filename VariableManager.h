#pragma once
#include <map>
#include <iostream>
#include "Variable.h"
using namespace std;

class VariableManager
{

private:
	map<string, Variable*> variablesMap;

public:
	~VariableManager();
	Variable* getVariable(string name);
	int operator+= (Variable *);
	Variable* operator[](string name);
	Variable* addVariables(Variable *mainVar, Variable *suppVar);
	Variable* subVariables(Variable *mainVar, Variable *suppVar);
	Variable* multipleVariables(Variable *mainVar, Variable *suppVar);
	Variable* divideVariables(Variable *mainVar, Variable *suppVar);
	
};

