#include "V3D.h"
#include <string>
using namespace std;
#include <iostream>
#include <cmath>
int V3D::count = 0;
V3D::V3D(string Name, double X, double Y, double Z)
	:name(Name)
{
	setX(X);
	setY(Y);
	setZ(Z);
	cout <<"Constructor created for: "<<getName()<<endl;
	count++;
}

V3D::~V3D()
{
	cout<<"Destructor destroyed for: "<<getName()<<endl;
	count--;
}

void V3D::setX(double X)
{
	x = X;
}

void V3D::setY(double Y)
{
	y = Y;
}

void V3D::setZ(double Z)
{
	z = Z;
}

double V3D::getX() const
{
	return x;
}

double V3D::getY() const
{
	return y;
}

double V3D::getZ() const
{
	return z;
}

string V3D::getName() const
{
	return name;
}

int V3D::getCount()
{
	return count;
}

void V3D::print() const
{
	cout<<"name("<<getX()<<","<<getY()<<","<<getZ()<<")"<<endl;
}

V3D &V3D::algebra(const V3D &b)
{
	this->x = this->x - 4*b.x;
	this->y = this->y - 4*b.y;
	this->z = this->z - 4*b.z;
	return *this;
}

V3D V3D::crossProduct(const V3D &b)
{
	double first;
	double second;
	double third;
	first = (this->y)*b.z - (this->z)*b.y;
	second = (this->z)*b.x - (this->x)*b.z;
	third = (this->x)*b.y - (this->y)*b.x;
	V3D dump("dump", first, second, third);
	return dump;
}

void angle(const V3D &Object1, const V3D &Object2)
{
	double dot;
	dot = Object1.getX()*Object2.getX() + Object1.getY()*Object2.getY() + Object1.getZ()*Object2.getZ();
	double a_mag;
	a_mag = sqrt(Object1.getX()*Object1.getX()+Object1.getY()*Object1.getY()+Object1.getZ()*Object1.getZ());
	double b_mag;
	b_mag = sqrt(Object2.getX()*Object2.getX()+Object2.getY()*Object2.getY()+Object2.getZ()*Object2.getZ());
	cout <<"dot product:"<<dot<<"  vector 1 magnitude:"<<a_mag<<"  vector 2 magnitude:"<<b_mag<<endl;
	double result1;
	result1 = dot/(a_mag*b_mag);
	double result2;
	result2 = acos(result1);
	Object1.print();
	Object2.print();
	cout<<"\nvectors "<<result2<<endl;
}

