#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <stdexcept>
#include <string>
#include "Date.h"

using namespace std;

class Employee
{
	public:
		Employee(const string &first, const string &last,
				 const Date &dateOfBirth, const Date &dateOfHire);
				 
		void print(void) const;
		~Employee();
	private:
		string firstName;
		string lastName;
		const Date birthDate; /// composition: member object
		const Date hireDate; /// composition: member object
};

#endif
