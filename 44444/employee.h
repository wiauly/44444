#pragma once
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class employee
{
protected:
	string name;
	string position;
	float salary;
public:
	employee();
	employee(string name, string posotion, float salary);

	virtual void show()const;
	virtual float calcSalary()const;

};

