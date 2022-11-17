#include "Point.h"
using namespace std;
Point::Point(string Name, double X, double Y)
{
	setName(Name);
	setX(X);
	setY(Y);
	
	cout << "\nPoint object constructor for " << getName() << endl;
}

Point::~Point()
{
	cout << "Point object destructor for " << name << endl;
}

void Point::setX(double X){ x = X; }
void Point::setY(double Y){ y = Y; }
void Point::setName(string Name){ name = Name; }

double Point::getX() const { return x; }
double Point::getY() const { return y; }
string Point::getName() const { return name; }

void Point::print() const{
	cout << getName() << "( " << getX() << "," << getY() << " )" << endl;
}





