#include "Manager.h"

Manager::Manager()
{
    percent = 5;
    sales = 0;
}

Manager::Manager(string name, float salary, int percent, 
    float sales):Employee(name,salary)
{
    this->percent = percent;
    this->sales = sales;
}

int Manager::getPercent() const
{
    return percent;
}

float Manager::getSales() const
{
    return sales;
}

void Manager::setPrecent(int percent)
{
    this->percent = percent;
}

void Manager::setSales(float sales)
{
    this->sales = sales;
}

float Manager::calcSalary() const
{
    return (salary + sales * percent / 100) * 0.805;
}

void Manager::showInfo() const
{
    Employee::showInfo();
    cout << "Percent: " << percent << endl;
    cout << "Sales: " << sales << endl;

}
