#include "CE.h"
#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"
#include <stdexcept>
using namespace std;
CE::CE(const string&a, const string&b, const string&c, double sales, double rate)
	:Employee(a,b,c)
{
	setGrossSales(sales);
	setCommissionRate(rate);
}

CE::~CE()
{
}

void CE::setGrossSales(double sales)
{
	if (sales>=0.0)
		grossSales = sales;
	else
		throw invalid_argument("Gross sales must be >=0.0");
}

void CE::setCommissionRate(double rate)
{
	if(rate >0.0 && rate<1.0)
		commissionRate = rate;
	else
		throw invalid_argument("Commission rate must be >0.0 and <1.0");
}

double CE::getGrossSales() const
{
	return grossSales;
}

double CE::getCommissionRate() const
{
	return commissionRate;
}

double CE::earnings() const
{
	return getCommissionRate()*getGrossSales();
}

void CE::print() const
{
	cout << "commission employees: ";
	Employee::print();
	cout << "\ngross sales: " << getGrossSales() << "\ncommission rate: "  << getCommissionRate();
}
