#include "DSA.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <cmath>

DSA::DSA(double x1, double x2, double x3)
	:xNM1(x1),xN(x2),xNP1(x3)
{
}
DSA DSA::operator+(const DSA &b)
{
	DSA x;
	x.xNM1 = this->xNM1 + b.xNM1;
	x.xN = this->xN + b.xN;
	x.xNP1 = this->xNP1 + b.xNP1;
	return x;	
}
DSA DSA::operator-(const DSA &b)
{
	DSA x;
	x.xNM1 = this->xNM1 - b.xNM1;
	x.xN = this->xN - b.xN;
	x.xNP1 = this->xNP1 - b.xNP1;
	return x;
}

DSA DSA::operator*(const DSA &b)
{
	DSA x;
	x.xNM1 = this->xNM1 * b.xNM1;
	x.xN = this->xN * b.xN;
	x.xNP1 = this->xNP1 * b.xNP1;
	return x;
}
DSA DSA::operator/(const DSA &b)
{
	DSA x;
	if (b.xNM1 == 0 || b.xN == 0 || b.xNP1 == 0){
		throw invalid_argument("Zero Division");
	}
	else
	{
		x.xNM1 = this->xNM1 / b.xNM1;
		x.xN = this->xN / b.xN;
		x.xNP1 = this->xNP1 / b.xNP1;
		return x;
	}
}	
DSA DSA::operator++()
{
	this->xNP1 = this->xN;
	this->xN = this->xNM1;
	this->xNM1 = 0;
	return *this;	
}
DSA DSA::operator++(int)
{
	DSA dump(this->xNM1, this-> xN, this->xNP1);
	this->xNP1 = this->xN;
	this->xN = this->xNM1;
	this->xNM1 = 0;
	return dump;
}

bool operator==(const DSA &b1,const DSA &b2)
{
	return (b1.xNM1 == b2.xNM1 && b1.xN == b2.xN && b1.xNP1 == b2.xNP1);
}
bool operator!=(const DSA &b1,const DSA &b2)
{
	return !(b1==b2);
}
bool operator<(const DSA &b1,const DSA &b2)
{
	double magX;
	double magY;
	magX = sqrt(pow(b1.xNM1,2) + pow(b1.xN,2) + pow(b1.xNP1,2));
	magY = sqrt(pow(b2.xNM1,2) + pow(b2.xN,2) + pow(b2.xNP1,2));
	if (magX<magY)
		return true;
	else
		return false;
}
bool operator>(const DSA &b1,const DSA &b2)
{
	return !(b1<b2);
}
ostream &operator<<(ostream &output,const DSA &number)
{
	output << number. xNM1 << "---" << number.xN << "---" << number.xNP1;
	return output;
}
istream &operator>>(istream &input, DSA &number)
{
	input >> setw( 1 ) >> number.xNM1;
	input.ignore( 3 );
	input >> setw( 1 ) >> number.xN;
	input.ignore( 3 );
	input >> setw( 1 ) >> number.xNP1;
	return input;
}	

	

DSA::~DSA()
{
}
