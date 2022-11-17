#include "Triangle.h"
#include <iostream>	
#include <cmath>
using namespace std;

Triangle::Triangle(string Name,const Line &A,const Line &B,const Line &C)
		: name(Name),
		  a(A),
		  b(B),
		  c(C)
{
	cout << "\nTriangle object constructor for " << name << endl;
}

void Triangle::outputProperties(){
		calculateAngles();
		calculateArea();
		calculatePerimeter();
		determineTypeAngles();
		determineTypeEdges();
}

void Triangle::calculateAngles(){
	double magA = a.getMagnitude();
	double magB = b.getMagnitude();
	double magC = c.getMagnitude();
	
	angleA = ( acos( pow( magB ,2) + pow( magC ,2) - pow( magA ,2) ) / (2*magB*magC) ) * 180/M_PI;
	angleB = ( acos( pow( magA ,2) + pow( magC ,2) - pow( magB ,2) ) / (2*magA*magC) ) * 180/M_PI;
	angleC = ( acos( pow( magA ,2) + pow( magB ,2) - pow( magC ,2) ) / (2*magA*magB) ) * 180/M_PI;
	
	cout << "angleA: " << angleA << endl;
	cout << "angleB: " << angleB << endl;
	cout << "angleC: " << angleC << endl;
}

void Triangle::calculateArea(){
	double area = (1/2) * a.getMagnitude() * b.getMagnitude() * sin(angleC * M_PI/180);
	cout << "The area of the triangle is: " << area << endl; 
}
void Triangle::determineTypeAngles(){
	if (angleA==90 || angleB==90 || angleC==90)
		cout << "The triangle is a right triangle " << endl;
	else if (angleA>90 || angleB>90 || angleC>90)
		cout << "The triangle is an obtuse triangle " << endl;
	else 
		cout << "The triangle is a acute triangle " << endl;
}

void Triangle::determineTypeEdges(){
	double magA=a.getMagnitude();
	double magB=b.getMagnitude();
	double magC=c.getMagnitude();
	
	if (magA==magB && magB==magC)
		cout << "The triangle is a equilateral triangle " << endl;
	else if (magA==magB || magA==magC || magB==magC)
		cout << "The triangle is a isosceles triangle " << endl;
	else 
		cout << "The triangle is a scalene triangle " << endl;
}

void Triangle::calculatePerimeter(void)
{
	int temp=a.getMagnitude()+b.getMagnitude()+c.getMagnitude();
	cout << "The perimeter of the triangle is " << temp << endl;
}

Triangle::~Triangle()
{
	cout << "\nTriangle object destructor for " << name << endl;
}
