#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>

using namespace std;

class Employee
{
	public:
		Employee(const string &first, const string &last);
		~Employee();
		
		string getFirstName() const;
		string getLastName() const;
		
		static int getCount();
	
	private:
		string firstName;
		string lastName;
		static int count;
};

#endif
