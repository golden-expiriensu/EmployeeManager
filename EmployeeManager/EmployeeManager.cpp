#include <iostream>
#include "Employee.h"

using namespace std;
using namespace Records;

int main()
{
    Employee emp;
    emp.setFirstName("John");
    emp.setLastName("Wick");
    emp.setNumber(37);
    emp.display();

    emp.promote();
    emp.promote(100);
    emp.hire();
    emp.display();

    emp.demote(700);
    emp.fire();
    emp.display();
}