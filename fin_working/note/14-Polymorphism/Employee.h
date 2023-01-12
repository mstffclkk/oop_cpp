#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Employee
{
	public:
		Employee(const string &, const string &, const string &);
		
		void setFirstName(const string&);
		void setLastName(const string &);
		void setSocialSecurityNumber(const string &);
		
		string getFirstName() const;
		string getLastName() const;
		string getSocialSecurityNumber() const;
		
		virtual double earnings() const=0; // pure
		virtual void print() const;
		~Employee();
		
	private:
		string firstName;
		string lastName;
		string socialSecurityNumber;
};

#endif
