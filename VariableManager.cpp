#include "VariableManager.h"

VariableManager::~VariableManager()
{
	for (auto const& x : variablesMap)
	{
		delete x.second;
	}
}

Variable* VariableManager::getVariable(string name)
{
	if (this->variablesMap.find(name) != variablesMap.end()) {
		Variable *v = variablesMap[name];
		cout << "Found variable named [" << name << "] type = ";
		if (v->getType() == Variable::variableType::DOUBLE)
		{
			cout << "double and value = " << v->getDValue() << endl;
		}
		else if (v->getType() == Variable::variableType::INT)
		{
			cout << "int and value = " << v->getIValue() << endl;
		}
		else if (v->getType() == Variable::variableType::STRING)
		{
			cout << "string and value = " << v->getSValue() << endl;
		}
		return v;
	}
	return nullptr;
}

void VariableManager::operator+=(Variable *v)
{
	if (this->variablesMap.find(v->getName()) != variablesMap.end()) {
		cout << "ERROR: " << "Variable named [" << v->getName() << "] already exists." << endl;
	}
	else {
		this->variablesMap[v->getName()] = v;
	}
}
