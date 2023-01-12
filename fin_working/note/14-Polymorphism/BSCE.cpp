#include "BSCE.h"
#include <iostream>
#include <iomanip>
#include <string>
#include "CE.h"
#include <stdexcept>
using namespace std;
BSCE::BSCE(const string&a, const string&b, const string&c, double sales, double rate, double salary)
	:CE(a,b,c,sales,rate)
{
	setBaseSalary(salary);
}

BSCE::~BSCE()
{
}

void BSCE::setBaseSalary(double salary)
{
	if (salary>=0.0)
		baseSalary = salary;
	else
		throw invalid_argument("Salary must be >=0.0");
}

double BSCE::getBaseSalary() const
{
	return baseSalary;
}

double BSCE::earnings() const
{
	return getBaseSalary()+CE::earnings();
}

void BSCE::print() const
{
	cout << "\n\nbase-salaried";
	CE::print();
	cout << "\nbase salary: " << getBaseSalary();
}
