#include "employee.h"

employee::employee()
{
    name = "Noname";
    position = "Noposition";
    salary = 0;
}

employee::employee(string name, string posotion, float salary)
{
    this->name = name;
    this->position = position;
    this->salary = salary;
}

void employee::show() const
{
    cout << "Name:" << name << endl;
    cout << "Position:" << position << endl;
    cout << "Salary:" << salary << "uah" << endl;
}

float employee::calcSalary() const
{
    return salary;
}
