#include "DataBase.h"
#include <stdexcept>
#include <iostream>

namespace Records
{
	Employee& DataBase::addEmployee(const std::string& firstName,
		const std::string& lastName)
	{
		Employee emp(firstName, lastName);
		emp.setNumber(mNextEmployeeNumber++);
		emp.hire();
		mEmployees.push_back(emp);
		return mEmployees[mEmployees.size() - 1];
	}

	Employee& DataBase::getEmployee(int number)
	{
		for (Employee& emp : mEmployees)
			if (emp.getNumber() == number)
				return emp;

		throw std::logic_error("No employee with number " + number);
	}

	Employee& DataBase::getEmployee(const std::string firstName,
		const std::string& lastName)
	{
		for (Employee& emp : mEmployees)
			if (emp.getFirstName() == firstName &&
				emp.getLastName() == lastName)
				return emp;

		throw std::logic_error("No employee: " + firstName
			+ " " + lastName);
	}

	void DataBase::DisplayAll() const
	{
		std::cout << "========================================="
			<< "\nAll employees:" << std::endl;
		for (const Employee& emp : mEmployees)
			emp.display();
	}

	void DataBase::DisplayCurrent() const
	{
		std::cout << "========================================="
			<< "\nCurrent employees:" << std::endl;
		for (const Employee& emp : mEmployees)
			if (emp.isHired())
				emp.display();
	}

	void DataBase::DisplayFormer() const
	{
		std::cout << "========================================="
			<< "\nFormer employees:" << std::endl;
		for (const Employee& emp : mEmployees)
			if (!emp.isHired())
				emp.display();
	}
}