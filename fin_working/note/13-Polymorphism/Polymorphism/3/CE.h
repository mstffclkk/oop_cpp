#ifndef CE_H
#define CE_H

#include<iostream>
#include<iomanip>
#include<string>
#include<stdexcept>

using namespace std;

class CE
{
public:
	CE(const string &, const string &, const string &, double = 0.0, double = 0.0);
	
	//set functions
	void setFirstName(const string &);
	void setLastName(const string &);
	void setSocialSecurityNumber(const string &);
	void setGrossSales(double);
	void setCommissionRate(double);

	//get functions
	string getFirstName() const;
	string getLastName() const;
	string getSocialSecurityNumber() const;
	double getGrossSales() const;
	double getCommissionRate() const;

	double earnings() const; // print fonk içimne yaýlýrsa güncellenmiyor
	void print() const;
	
		
	~CE();
private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales;
	double commissionRate;
};

#endif

