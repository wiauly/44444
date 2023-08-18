#pragma once
#include "employee.h"
class staff:public employee
{
protected:
	float bonus;
public:
	staff();
	staff(string name, string position, float salary, float bonus);

	virtual void show()const override;
	virtual float calcSalary()const override;
};

