#include "staff.h"

staff::staff()
{
	bonus = 0;
}

staff::staff(string name, string position, float salary, float bonus)
	:employee(name, position, salary)
{
	this->bonus = bonus;
}

void staff::show() const
{
	employee::show();
	cout << "Bonus" << bonus << endl;
}

float staff::calcSalary() const
{
	return salary+bonus;
}
