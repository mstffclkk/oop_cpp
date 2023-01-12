#ifndef BSCE_H
#define BSCE_H
#include <iostream>
#include <iomanip>
#include <string>
#include "CE.h"
using namespace std;
class BSCE : public CE
{
	public:
		BSCE(const string&, const string&, const string&, double=0.0, double=0.0, double=0.0);
		void setBaseSalary(double);
		double getBaseSalary() const;
		virtual double earnings() const;
		virtual void print() const;
		~BSCE();
	private:
		double baseSalary;
};

#endif
