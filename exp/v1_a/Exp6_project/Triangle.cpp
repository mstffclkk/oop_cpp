#include "Triangle.h"
#include <iostream>
using namespace std;
#include <string>
#include <cmath>

Triangle::Triangle(string Name,const Line &ff,const Line &ss,const Line &tt)
		:name(Name),
		a(ff),
		b(ss),
		c(tt)
{
	cout<<"Object name:"<<this->name<<endl;
}

Triangle::~Triangle()
{
}

void Triangle::outputProperties()
{
	
	calculateAngles();
	calculateArea();
	calculatePerimeter();
	calculateTypeAngles();
	calculateTypeEdges();
}
void Triangle::calculateAngles()
{
	double pi = 3.14;
	angleA = acos((b.getMagnitude()*b.getMagnitude()+c.getMagnitude()*c.getMagnitude()-a.getMagnitude()*a.getMagnitude())/(2*b.getMagnitude()*c.getMagnitude()))*180/pi;
	angleB = acos((a.getMagnitude()*a.getMagnitude()+c.getMagnitude()*c.getMagnitude()-b.getMagnitude()*b.getMagnitude())/(2*a.getMagnitude()*c.getMagnitude()))*180/pi;
	angleC = acos((a.getMagnitude()+b.getMagnitude()*b.getMagnitude()-c.getMagnitude()*c.getMagnitude())/(2*a.getMagnitude()*b.getMagnitude()))*180/pi;
	cout<<"Angle A ="<<angleA<<endl;
	cout<<"Angle B ="<<angleB<<endl;
	cout<<"Angle C ="<<angleC<<endl;
}
void Triangle::calculateArea()
{
	double area;
	double pi = 3.14;
	area = a.getMagnitude()*b.getMagnitude()*sin(angleC*pi/180)/2;
	cout<<"The area of the triangle is "<<area<<endl;
}
void Triangle::calculatePerimeter()
{
	int temp = a.getMagnitude()+b.getMagnitude()+c.getMagnitude();
	cout<<"The perimeter :"<<temp<<endl;
}
void Triangle::calculateTypeAngles()
{
	if (angleA == 90 || angleB == 90 || angleC == 90)
		cout<<"Right triangle"<<endl;
	else if(angleA>90 || angleB>90 || angleC>90)
		cout<<"Obtuse triangle"<<endl;
	else
		cout<<"Acute triangle"<<endl;
}
void Triangle::calculateTypeEdges()
{
	if(a.getMagnitude() == b.getMagnitude() && b.getMagnitude() == c.getMagnitude())
		cout<<"Equilateral triangle"<<endl;
	else if(a.getMagnitude() == b.getMagnitude() || a.getMagnitude() == c.getMagnitude() || b.getMagnitude() == c.getMagnitude())
		cout<<"Isosceles triangle"<<endl;
	else
		cout<<"Scalene triangle"<<endl;
}

