#include "Employee.h"

int main()
{
    Employee a("Rodion", 20000.9f);

    a.showInfo();

    cout << "Total salary: " << a.calcSalary() << endl;
}