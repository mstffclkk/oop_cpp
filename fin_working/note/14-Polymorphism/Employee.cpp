#include "Employee.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
Employee::Employee(const string &a, const string &b, const string &c)
		:firstName(a), lastName(b), socialSecurityNumber(c)
{
	
}

Employee::~Employee()
{
}

void Employee::setFirstName(const string &a)
{
	firstName = a;
}

void Employee::setLastName(const string &b)
{
	lastName = b;
}

void Employee::setSocialSecurityNumber(const string &c)
{
	socialSecurityNumber = c;
}

string Employee::getFirstName() const
{
	return firstName;
}

string Employee::getLastName() const
{
	return lastName;
}

string Employee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}

void Employee::print() const
{
	cout << getFirstName() << " " << getLastName() << 
	"\n social security number:" << getSocialSecurityNumber();
}
