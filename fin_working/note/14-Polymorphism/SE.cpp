#include "SE.h"
#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"
#include <stdexcept>
using namespace std;
SE::SE(const string&a, const string&b, const string&c, double salary)
	:Employee(a,b,c)
{
	setWeeklySalary(salary);
}

SE::~SE()
{
}

void SE::setWeeklySalary(double salary)
{
	if(salary>=0.0)
		weeklySalary = salary;
	else
		throw invalid_argument("Weekly salary must be >=0");
}

double SE::getWeeklySalary() const
{
	return weeklySalary;
}

double SE::earnings() const
{
	return getWeeklySalary();
}

void SE::print() const
{
	cout << "\n\nsalaried employee: ";
	Employee::print();
	cout << "\nweekly salary: " << getWeeklySalary();
}
