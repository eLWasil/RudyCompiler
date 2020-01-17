#pragma once
#include <string>
using namespace std;

class Variable
{
public: enum variableType
{
	INT = 1,
	DOUBLE = 2,
	STRING = 3
};

private:
	int iVal;
	double dVal;
	string sVal;
	string vName;
	variableType type;

public:
	bool exists = false;
	Variable();
	Variable(int value, string name);
	Variable(double value, string name);
	Variable(string value, string name);

	int getIValue();
	double getDValue();
	string getSValue();
	void setSValue(string value) { this->sVal = value; this->type = STRING; }
	void setName(string name) { this->vName = name; }
	string getName() { return this->vName; }
	variableType getType() { return type; }
};