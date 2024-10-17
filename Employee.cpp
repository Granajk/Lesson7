#include "Employee.h"

Employee::Employee()
{
    name = "undefined";
    salary = 7000.0f;
}

Employee::Employee(string name, float salary)
{
    this->name = name;
    this->salary = salary;
}

string Employee::getName() const
{
    return name;
}

float Employee::getSalary() const
{
    return salary;
}

void Employee::setName(string name)
{

    this->name = name;
}

void Employee::setSalary(float salary)
{
    this->salary = salary;
}

float Employee::calcSalary() const
{
    return salary * 0.805f;
}

void Employee::showInfo() const
{
    cout << "________________________\n";
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
}
