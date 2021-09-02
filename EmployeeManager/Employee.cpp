#include "Employee.h"
#include <iostream>

using namespace std;

namespace Records
{
	Employee::Employee(const std::string firstName,
		const std::string lastName)
		: mFirstName(firstName), mLastName(lastName)
	{ }

	void Employee::promote(int value) { mSalary += value; }
	void Employee::demote(int value) { mSalary -= value; }
	void Employee::hire() { mHired = true; }
	void Employee::fire() { mHired = false; }
	void Employee::display() const
	{
		cout << "Employee: " << getFirstName()
			<< " " << getLastName() << endl;
		cout << "----------------------------" << endl;
		cout << "Number: " << getNumber() << endl;
		cout << (isHired() ? "Current employee" : "Former employee") << endl;
		cout << "Salary: " << getSalary() << "\n\n";
	}

	// getters and setters
	const std::string& Employee::getFirstName() const
	{
		return mFirstName;
	}
	void Employee::setFirstName(const std::string& name)
	{
		mFirstName = name;
	}
	const std::string& Employee::getLastName() const
	{
		return mLastName;
	}
	void Employee::setLastName(const std::string& name)
	{
		mLastName = name;
	}
	int Employee::getNumber() const { return mNumber; }
	void Employee::setNumber(int number) { mNumber = number; }
	int Employee::getSalary() const { return mSalary; }
	void Employee::setSalary(int salary) { mSalary = salary; }
	bool Employee::isHired() const { return mHired; }
}