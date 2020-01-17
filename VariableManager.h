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
	void operator+= (Variable *);


};

