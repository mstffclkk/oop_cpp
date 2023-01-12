#ifndef CE_H
#define CE_H
#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"
using namespace std;
class CE : public Employee
{
	public:
		CE(const string&, const string&, const string&, double=0.0, double=0.0);
		void setGrossSales(double);
		void setCommissionRate(double);
		
		double getGrossSales() const;
		double getCommissionRate() const;
		
		virtual double earnings() const;
		virtual void print() const;
		~CE();
	private:
		double grossSales;
		double commissionRate;
};

#endif
