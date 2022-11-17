#include "Line.h"
#include <iostream>	
#include <cmath>


Line::Line(string Name, const Point &p1, const Point &p2)
	: name(Name),
	  start(p1),
	  end(p2)
{
	cout << "\nLine object constructor for " << getName() << endl;
	calculateMagnitude();
}

void Line::setName(string Name){ name = Name; }
void Line::setMagnitude(double m) { magnitude = m; }

Point Line::getStartPoint() const{ return start; }
Point Line::getEndPoint() const{ return end; }
string Line::getName() const{ return name; }
double Line::getMagnitude() const{ return magnitude; }

void Line::print() const{
	cout << "SP( " << start.getX() << "," << start.getY() << ")" << "--------"
		<< "EP( " << end.getX() << "," << end.getY() << " )" << endl; 
}

void Line::calculateMagnitude(){
	
	double mag = sqrt( pow( (start.getX() - end.getX()) ,2) +  pow( (start.getY() - end.getY()) ,2) );
	cout << "magnitude of line segment: " << getName() << " " << mag << endl;
}

Line::~Line()
{
		cout << "\nLine object destructor for " << getName() << endl;
}





