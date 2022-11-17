#include "Point.h"
#include <iostream>
#include <string>
using namespace std;
Point::Point(string Name,double X,double Y)
{
	setX(X);
	setY(Y);
	setName(Name);
	cout<<"Object name:"<<this->name<<endl;
	
}

Point::~Point()
{
}
void Point::print() const
{
	cout<<getName()<<"("<<getX()<<","<<getY()<<")"<<endl;
}
void Point::setX(double X)
{
	x = X;
}
void Point::setY(double Y)
{
	y = Y;
}
double Point::getX() const
{
	return x;
}
double Point::getY() const
{
	return y;
}
string Point::getName() const
{
	return name;
}
void Point::setName(string Name)
{
	name = Name;
}
