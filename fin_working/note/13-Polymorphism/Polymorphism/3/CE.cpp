#include "CE.h"

CE::CE(const string &fn, const string &ln, const string &ssn, double sales, double rate )
	:firstName(fn),lastName(ln) ,socialSecurityNumber(ssn)
{
	setGrossSales(sales); // validation için bu þekilde yazýlýr
	setCommissionRate(rate);
}
	
//set functions
void CE::setFirstName(const string &fn)
{
	firstName = fn;
}

void CE::setLastName(const string &ln)
{
	lastName = ln;
}

void CE::setSocialSecurityNumber(const string &ssn)
{
	socialSecurityNumber = ssn;
}

void CE::setGrossSales(double sales)
{
	grossSales = sales;
}

void CE::setCommissionRate(double rate)
{
	commissionRate = rate;
}

//get functions
string CE::getFirstName() const
{
	return firstName;
}

string CE::getLastName() const
{
	return lastName;
}

string CE::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
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
	return commissionRate * grossSales;
}
		
void CE::print() const
{
	cout << "First name: " << getFirstName() << endl
	<< "Last name: "  << getLastName() << endl
	<< "Social Security Number: " << getSocialSecurityNumber() << endl
	<< "Gross sales: " << getGrossSales() << endl
	<< "Commission Rate: " << getCommissionRate() << endl
	<< "Earnings: " << earnings();
	
}

CE::~CE()
{
}

