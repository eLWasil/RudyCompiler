#include "Variable.h"
using namespace std;

Variable::Variable()
{
	this->exists = false;
}

Variable::Variable(string value, string name) {
	this->exists = true;
	this->sVal = value;
	this->vName = name;
	this->type = STRING;
}

Variable::Variable(int value, string name) {
	this->exists = true;
	this->iVal = value;
	this->vName = name;
	this->type = INT;
}

Variable::Variable(double value, string name) {
	this->exists = true;
	this->dVal = value;
	this->vName = name;
	this->type = DOUBLE;
}


string Variable::getSValue()
{
	if (this->type == Variable::variableType::DOUBLE) {
		return to_string(dVal);
	}	
	else if (this->type == Variable::variableType::INT) {
		return to_string(iVal);
	}
	return this->sVal;
}

int Variable::getIValue()
{
	return this->iVal;
}

double Variable::getDValue()
{
	return this->dVal;
}

Variable* Variable::operator=(Variable* newValue) {
	this->iVal = newValue->getIValue();
	this->dVal = newValue->getDValue();
	this->sVal = newValue->getSValue();
	this->type = newValue->getType();
	return this;
}