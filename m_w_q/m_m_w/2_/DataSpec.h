#ifndef DATASPEC_H
#define DATASPEC_H

#include <iostream>
#include <string>
#include <stdexcept>
#include <iomanip>
#include <cmath>
#include <algorithm>
#define M_PI   3.14159265358979323846

using namespace std;

class DataSpec
{
	public:
		DataSpec(string name , double x =0.0, double y =0.0, double z=0.0);
		void setFX(double);
		void setFY(double);
		void setFZ(double);
		void setName(string);
		
		double getFX() const;
		double getFY() const;
		double getFZ() const;
		string getName() const;
		
		void print() const;
		
	private:
		double featureX;
		double featureY;
		double featureZ;
		
		string dataName;
		
		
};

#endif
