/* ******************************************************* 
 * Filename		:	Rational.h
 * Author		:	Burak Kaleci		
 * Date			:	23.11.2018
 * Description	:	Rational Class Interface
 * ******************************************************/
 
// prevent multiple inclusions of header
#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>
using namespace std;

// Rational class definition
class Rational
{
	/// Friend Overloaded << operator
	friend ostream &operator<<(ostream &, const Rational &);
	/// Friend Overloaded >> operator
	friend istream &operator>>(istream &, Rational &);
	

public:
	
	/// Default constructor
	Rational(double n=0.0, double d=1.0);
	/// Overload + operator 
   	Rational operator+(const Rational& b);
   	/// Overload - operator 
   	Rational operator-(const Rational& b);
   	/// Overload * operator 
   	Rational operator*(const Rational& b);
   	/// Overload / operator 
   	Rational operator/(const Rational& b);
   	
   	/// Overload < operator 
   	bool operator<(const Rational& b);
   	/// Overload > operator 
   	bool operator>(const Rational& b);
   	/// Overload == operator 
   	bool operator==(const Rational& b);
   	/// Overload != operator 
   	bool operator!=(const Rational& b);
   	/// Overload <= operator 
   	bool operator<=(const Rational& b);
   	/// Overload >= operator 
   	bool operator>=(const Rational& b);
	
private:
	
	/// Store numerator
	double num;
	/// Store denominator
	double den;
};

#endif
