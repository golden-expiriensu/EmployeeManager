#pragma once
#include <string>

namespace Records
{
	const int kDefaultSalary = 80000;

	class Employee
	{
	public:
		Employee() = default;
		Employee(const std::string firstName,
			const std::string lastName);
	
		void promote(int value = 1000);
		void demote(int value = 1000);
		void hire();
		void fire();
		void display() const;

		// getters and setters
		const std::string& getFirstName() const;
		void setFirstName(const std::string& name);
		const std::string& getLastName() const;
		void setLastName(const std::string& name);
		int getNumber() const;
		void setNumber(int number);
		int getSalary() const;
		void setSalary(int salary);
		bool isHired() const;

	private:
		std::string mFirstName;
		std::string mLastName;
		int mNumber = -1;
		int mSalary = kDefaultSalary;
		bool mHired = false;
	};
}