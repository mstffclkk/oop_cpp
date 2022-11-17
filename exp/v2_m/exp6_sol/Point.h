#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <string>
#include <stdexcept>
#include <iomanip>
#include <cmath>
#include <algorithm>
#define M_PI   3.14159265358979323846

using namespace std;

class Point
{
	public:
		Point(string Name, double X=0.0, double Y=0.0);
		
		void setX(double);
		void setY(double);
		void setName(string);
		
		double getX() const;
		double getY() const;
		string getName() const;
		
		void print() const;
		
		~Point();
		
	private:
		double x;
		double y;
		string name;
		
		
};

#endif
