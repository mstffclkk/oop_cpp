/* ******************************************************* 
 * Filename		:	Rational.cpp
 * Author		:	Burak Kaleci		
 * Date			:	23.11.2018
 * Description	:	Rational Class Implementation
 * ******************************************************/

#include <iomanip> 
#include <stdexcept>
#include "Rational.h" // include definition of class Rational
using namespace std;

/// Default constructor
Rational::Rational(double n, double d)
{
	if (den!=0){
		num=n;
		den=d;	
	}
	else 
		throw invalid_argument( "Denominator must be different than 0" );
}


/// Overload + operator 
/// (a/b) + (c/d) = (ad + bc) / (bd)
Rational Rational::operator+(const Rational& r)
{
	return Rational(this->num*r.den+this->den*r.num, this->den*r.den);	
}

/// Overload - operator 
/// (a/b) - (c/d) = (ad - bc) / (bd).
Rational Rational::operator-(const Rational& r)
{
	return Rational(this->num*r.den-this->den*r.num, this->den*r.den);	
}

/// Overload * operator 
/// (a/b) * (c/d) = (ac) / (bd).
Rational Rational::operator*(const Rational& r)
{
	return Rational(this->num*r.num, this->den*r.den);	
}

/// Overload / operator 
/// (a/b) / (c/d) = (ad) / (bc)
Rational Rational::operator/(const Rational& r)
{
	return Rational(this->num*r.den, this->den*r.num);	
}


/// Overload < operator 
bool Rational::operator<(const Rational& b)
{
	if ( (this->num*b.den-b.num*this->den)<0 )
		return true;
	else  	
		return false;
}

/// Overload > operator 
bool Rational::operator>(const Rational& b)
{

	return !(*this < b);	// invokes operator <	
}

   	
/// Overload == operator 
bool Rational::operator==(const Rational& b)
{
	if (this->num==b.num && this->den==b.den)
		return true;
	else 
		return false;
}  	
	   
/// Overload != operator 
bool Rational::operator!=(const Rational& b)
{
	return !(*this == b); // invokes operator ==	
}

/// Overload <= operator 
bool Rational::operator<=(const Rational& b)
{
	return (*this < b || *this == b); // invokes operator < and ==
}
   	
/// Overload >= operator 
bool Rational::operator>=(const Rational& b)
{
	return (*this > b || *this == b); // invokes operator > and ==
}

// overloaded stream insertion operator;cannot be
// a member function if we would like to invoke it with
// cout << someRational;
ostream &operator<<(ostream &output, const Rational &number)
{
	output<< number.num << "/" << number.den;
	return output; // enables cout << a << b << c;
} 

// overloaded stream extraction operator; cannot be
// a member function if we would like to invoke it with
// cin >> someRational;
istream &operator>>(istream &input,Rational &number)
{
	
	input >> setw( 1 ) >> number.num; // input numerator
	input.ignore( 1 ); // skip /
	input >> setw( 1 ) >> number.den; // input denominator

	return input; // enables cin >> a >> b >> c;
}
