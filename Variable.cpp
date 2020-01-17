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
