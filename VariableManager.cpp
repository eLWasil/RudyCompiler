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
		// cout << "Found variable named [" << name << "] type = ";
		// if (v->getType() == Variable::variableType::DOUBLE)
		// {
		// 	cout << "double and value = " << v->getDValue() << endl;
		// }
		// else if (v->getType() == Variable::variableType::INT)
		// {
		// 	cout << "int and value = " << v->getIValue() << endl;
		// }
		// else if (v->getType() == Variable::variableType::STRING)
		// {
		// 	cout << "string and value = " << v->getSValue() << endl;
		// }
		return v;
	}
	else {
		cout << "ERROR: " << "Could not find variable named [" << name << "]." << endl;
	}
	return nullptr;
}

int VariableManager::operator+=(Variable *v)
{
	if (this->variablesMap.find(v->getName()) != variablesMap.end()) {
		cout << "ERROR: " << "Variable named [" << v->getName() << "] already exists." << endl;
		return 1;
	}
	else {
		this->variablesMap[v->getName()] = v;
	}
	return 0;
}

Variable* VariableManager::operator[](string name) {
	return this->getVariable(name);
}

Variable* VariableManager::addVariables(Variable *mainVar, Variable *suppVar) {
	if (mainVar->getType() == Variable::variableType::STRING) {
		string val = mainVar->getSValue();
		val += suppVar->getSValue();
		return (new Variable(val, "result"));
	}
	else if (suppVar->getType() == Variable::variableType::STRING)
	{
		Variable *tempVar = new Variable(mainVar->getSValue(), "temp");
		return addVariables(tempVar, suppVar);
	}
	else if (mainVar->getType() == Variable::variableType::DOUBLE) {
		if (suppVar->getType() == Variable::variableType::DOUBLE) {
			double val = mainVar->getDValue() + suppVar->getDValue();
			return (new Variable(val, "result"));
		}
		else if (suppVar->getType() == Variable::variableType::INT) {
			return addVariables(suppVar, mainVar);
		}
	}
	else if (mainVar->getType() == Variable::variableType::INT) {
		if (suppVar->getType() == Variable::variableType::INT) {
			int val = mainVar->getIValue() + suppVar->getIValue();
			return (new Variable(val, "result"));
		}
		else if (suppVar->getType() == Variable::variableType::DOUBLE) {
			double val = mainVar->getIValue() + suppVar->getDValue();
			return (new Variable(val, "result"));
		}
	}
	return nullptr;
}

Variable* VariableManager::subVariables(Variable *mainVar, Variable *suppVar) {
	if (mainVar->getType() == Variable::variableType::STRING) {
		cout << "ERROR: Operation not allowed\n";
		return nullptr;
	}
	else if (suppVar->getType() == Variable::variableType::STRING)
	{
		cout << "ERROR: Operation not allowed\n";
		return nullptr;
	}
	else if (mainVar->getType() == Variable::variableType::DOUBLE) {
		if (suppVar->getType() == Variable::variableType::DOUBLE) {
			double val = mainVar->getDValue() - suppVar->getDValue();
			return (new Variable(val, "result"));
		}
		else if (suppVar->getType() == Variable::variableType::INT) {
			double val = mainVar->getDValue() - suppVar->getIValue();
			return (new Variable(val, "result"));
		}
	}
	else if (mainVar->getType() == Variable::variableType::INT) {
		if (suppVar->getType() == Variable::variableType::INT) {
			int val = mainVar->getIValue() - suppVar->getIValue();
			return (new Variable(val, "result"));
		}
		else if (suppVar->getType() == Variable::variableType::DOUBLE) {
			double val = mainVar->getIValue() - suppVar->getDValue();
			return (new Variable(val, "result"));
		}
	}
	return nullptr;
}

Variable* VariableManager::multipleVariables(Variable *mainVar, Variable *suppVar) {
	if (mainVar->getType() == Variable::variableType::STRING) {
		if (suppVar->getType() == Variable::variableType::INT) {
			int multipleVal = suppVar->getIValue();
			string val = "";
			for (int i = 0; i < multipleVal; i++)
			{
				val += mainVar->getSValue();
			}
			return (new Variable(val, "result"));
		}
		else {
			cout << "ERROR: Operation not allowed\n";
			return nullptr;
		}
	}
	else if (suppVar->getType() == Variable::variableType::STRING)
	{
		if (mainVar->getType() == Variable::variableType::INT) {
			Variable *tempVar = new Variable(mainVar->getIValue(), "temp");
			return multipleVariables(suppVar, tempVar);
		}
		else {
			cout << "ERROR: Operation not allowed\n";
			return nullptr;
		}
	}
	else if (mainVar->getType() == Variable::variableType::DOUBLE) {
		if (suppVar->getType() == Variable::variableType::DOUBLE) {
			double val = mainVar->getDValue() * suppVar->getDValue();
			return (new Variable(val, "result"));
		}
		else if (suppVar->getType() == Variable::variableType::INT) {
			double val = mainVar->getDValue() * suppVar->getIValue();
			return (new Variable(val, "result"));
		}
	}
	else if (mainVar->getType() == Variable::variableType::INT) {
		if (suppVar->getType() == Variable::variableType::INT) {
			int val = mainVar->getIValue() * suppVar->getIValue();
			return (new Variable(val, "result"));
		}
		else if (suppVar->getType() == Variable::variableType::DOUBLE) {
			double val = mainVar->getIValue() * suppVar->getDValue();
			return (new Variable(val, "result"));
		}
	}
	return nullptr;
}


Variable* VariableManager::divideVariables(Variable *mainVar, Variable *suppVar) {
	if (mainVar->getType() == Variable::variableType::STRING) {
		cout << "ERROR: Operation not allowed\n";
		return nullptr;
	}
	else if (suppVar->getType() == Variable::variableType::STRING)
	{
		cout << "ERROR: Operation not allowed\n";
		return nullptr;
	}
	else if (mainVar->getType() == Variable::variableType::DOUBLE) {
		if (suppVar->getType() == Variable::variableType::DOUBLE) {
			double val = mainVar->getDValue() / suppVar->getDValue();
			return (new Variable(val, "result"));
		}
		else if (suppVar->getType() == Variable::variableType::INT) {
			double val = mainVar->getDValue() / suppVar->getIValue();
			return (new Variable(val, "result"));
		}
	}
	else if (mainVar->getType() == Variable::variableType::INT) {
		if (suppVar->getType() == Variable::variableType::INT) {
			double val = mainVar->getIValue() / suppVar->getIValue();
			return (new Variable(val, "result"));
		}
		else if (suppVar->getType() == Variable::variableType::DOUBLE) {
			double val = mainVar->getIValue() / suppVar->getDValue();
			return (new Variable(val, "result"));
		}
	}
	return nullptr;
}