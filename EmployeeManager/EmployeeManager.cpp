#include <iostream>
#include "DataBase.h"

using namespace std;
using namespace Records;

int main()
{
	DataBase db;
	Employee& emp1 = db.addEmployee("John", "Watson");
	emp1.promote(500);
	Employee& emp2 = db.addEmployee("Sherlock", "Holmes");
	emp2.demote();
	db.DisplayAll();
	emp2.fire();
	db.DisplayCurrent();
	db.DisplayFormer();
	Employee& emp3 = db.getEmployee("Sherlock", "Holmes");
	emp3.hire();
	db.DisplayCurrent();
}
