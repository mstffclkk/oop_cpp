#ifndef DSA_H
#define DSA_H
#include <iostream>
#include <string>
using namespace std;
class DSA
{	
	friend ostream &operator<<(ostream &,const DSA &);
	friend istream &operator>>(istream &, DSA &);
	
	friend bool operator==(const DSA &,const DSA &);
	friend bool operator!=(const DSA &,const DSA &);
	friend bool operator<(const DSA &,const DSA &);
	friend bool operator>(const DSA &,const DSA &);
	
public:
	DSA(double=0.0, double=0.0, double=0.0);
	
	DSA operator+(const DSA &);
	DSA operator-(const DSA &);
	DSA operator*(const DSA &);
	DSA operator/(const DSA &);
	
	DSA operator++(); 		// prefix preincrement
	DSA operator++(int);	// postfix postincrement
	
	
	
	// Integer& operator++() prefix operator
	// Integer operator++(int) postfix operator
	
    // Integer& operator--() prefix operator
    // Integer operator--(int) postfix operator
   
	~DSA();
private:
	double xNM1;
	double xN;
	double xNP1;
};

#endif
