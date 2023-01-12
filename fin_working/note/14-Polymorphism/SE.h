#ifndef SE_H
#define SE_H
#include "Employee.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class SE : public Employee
{
	public:
		SE(const string&, const string&, const string&, double=0.0);
		void setWeeklySalary(double);
		double getWeeklySalary() const;
		
		virtual double earnings() const;
		virtual void print() const;
		~SE();
	private:
		double weeklySalary;
};

#endif
