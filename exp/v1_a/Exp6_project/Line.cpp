#include "Line.h"
#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;
Line::Line(string Name,const Point &first,const Point &second)
	:name(Name),
	first_value(first),
	second_value(second)
{
	cout<<"Object name:"<<this->name<<endl;
	calculateMagnitude();
}

Line::~Line()
{
}

void Line::setName(string Name)
{
	name = Name;
}
void Line::setMagnitude(double M)
{
	magnitude = M;
}
void Line::print() const
{
	cout<<"SP("<<first_value.getX()<<","<<first_value.getY()<<")------EP("<<second_value.getX()<<","<<second_value.getY()<<")"<<endl;
	
}
void Line::calculateMagnitude()
{
	magnitude = sqrt(pow((first_value.getX()-second_value.getX()),2)+pow((first_value.getY()-second_value.getY()),2));
	cout<<"Magnitude of the line segment:"<<magnitude<<endl;
}
Point Line::getStartPoint() const
{
	return first_value;
}
Point Line::getEndPoint() const
{
	return second_value;
}
string Line::getName() const
{
	return name;
}
double Line::getMagnitude() const
{
	return magnitude;
}

