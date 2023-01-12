#include "BSCE.h"

using namespace std;

BSCE::BSCE(const string &fn, const string &ln, const string &ssn, double sales, double rate, double salary)
	:CE(fn, ln, ssn, sales, rate)
{
	setBaseSalary(salary);
}	

void BSCE::setBaseSalary(double salary)
{
	baseSalary = salary;
}

double BSCE::getBaseSalary() const
{
	return baseSalary;
}	

double BSCE::earnings() const
{	
	return CE::earnings() + getBaseSalary();
}

void BSCE::print() const
{
	cout << "base salaried: " << endl;
	CE::print();
	cout << "\nBase Salary: " << getBaseSalary();
	cout << "\nEarnings: " << earnings();
}

BSCE::~BSCE()
{
}

