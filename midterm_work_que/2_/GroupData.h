#ifndef GROUPDATA_H
#define GROUPDATA_H
#include "DataSpec.h"
#include <iostream>
#include <string>
#include <stdexcept>
#include <iomanip>
#include <cmath>
#include <algorithm>
#define M_PI   3.14159265358979323846

using namespace std;

class GroupData
{
	public:
		GroupData(const DataSpec &, const DataSpec &, const DataSpec &, double x=0.0, double y=0.0, double z=0.0);
		
		double getMaxX() const;
		double getMaxY() const;
		double getMaxZ() const;
		
		void print() const;
		
		void calculateMaxFeatures();
		bool compare(const GroupData &);
		
	private:
		const DataSpec f1; //member initilaze edilmesi lazým.
		const DataSpec f2; //member initilaze edilmesi lazým.
		const DataSpec f3; //member initilaze edilmesi lazým.
		
		double maxX;
		double maxY;
		double maxZ;
		
};

#endif
