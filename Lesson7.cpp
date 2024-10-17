#include "Employee.h"
#include "Teacher.h"
#include "Manager.h"

int main()
{
    Employee a("Rodion", 20000.9f);

    a.showInfo();
    cout << "Total salary: " << a.calcSalary() << endl;

    Teacher b("Alex", 5000, 20, 1000);

    b.showInfo();
    cout << "Total salary: " << b.calcSalary() << endl;

    Manager c("Bob", 5000, 50, 100000);
    
    c.showInfo();
    cout << "Total salary: " << c.calcSalary() << endl;

}