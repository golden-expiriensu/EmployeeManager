#pragma once
#include <vector>
#include "Employee.h"

namespace Records
{
	const int kFirstEmployeeNumber = 1;

	class DataBase
	{
	public:
		Employee& addEmployee(const std::string& firstName,
			const std::string& lastName);
		Employee& getEmployee(int number);
		Employee& getEmployee(const std::string firstName,
			const std::string& lastName);

		void DisplayAll() const;
		void DisplayCurrent() const;
		void DisplayFormer() const;

	private:
		std::vector<Employee> mEmployees;
		int mNextEmployeeNumber = kFirstEmployeeNumber;
	};
}