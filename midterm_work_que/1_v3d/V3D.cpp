#include "V3D.h"
#include <iostream>
#include <string>
#include <stdexcept>
#include <iomanip>
#include <cmath>
#define M_PI   3.14159265358979323846

using namespace std;

int V3D::count = 0;



V3D::V3D(const string Name, double X, double Y, double Z)
   : name(Name)
{
	++count;
	setX(X);
	setY(Y);
	setZ(Z);
	
	cout << "V3D object constructor: " << getName() << endl;
}

V3D::~V3D()
{
	cout << "V3D object destructor: " << getName() << endl;
	--count;
}

void V3D::setX(double X) { x = X;}
void V3D::setY(double Y) { y = Y;}
void V3D::setZ(double Z) { z = Z;}

double V3D::getX() const { return x; }
double V3D::getY() const { return y; }
double V3D::getZ() const { return z; }

int V3D::getCount(){ return count; }
string V3D::getName() const { return name;}

void V3D::print(void) const{
	cout << getName() << "(" << getX() << "," << getY() << "," << getZ() << ")" << endl;
}

V3D &V3D::algebra(const V3D &b){
	
	this->x = this->x - 4*b.getX();
	this->y = this->y - 4*b.getY();
	this->z = this->z - 4*b.getZ();

	return *this;	
}

V3D V3D::crossProduct(const V3D &b){
	
	double f,s,t;
	f = (this->y * b.getZ()) - (this->z * b.getY());
	s = (this->z * b.getX()) - (this->x * b.getZ());
	t = (this->x * b.getY()) - (this->y * b.getX());
	V3D dump("dump",f,s,t);
	return dump;
}
void angle (const V3D &obj1, const V3D &obj2){
	double dot;
	dot = (obj1.getX() * obj2.getX()) + (obj1.getY() * obj2.getY()) + (obj1.getZ() * obj2.getZ());
	double a_mag, b_mag;
	a_mag = sqrt( pow( obj1.getX() ,2) + pow(obj1.getY() ,2) + pow(obj1.getZ() ,2) );
	b_mag = sqrt( pow( obj2.getX() ,2) + pow(obj2.getY() ,2) + pow(obj2.getZ() ,2) );

	cout <<"\ndot product:"<<dot<<"\nvector 5 magnitude:"<<a_mag<<"\nvector 6 magnitude:"<<b_mag<<endl;
	
	double cos_teta = dot/ (a_mag * b_mag);
	
	cout << "\ncos_teta: " << (180 / M_PI ) * cos_teta << endl;
	
	obj1.print();
	obj2.print();
	double teta = acos(cos_teta);
	cout << "\nteta: " << teta << endl;	

}

