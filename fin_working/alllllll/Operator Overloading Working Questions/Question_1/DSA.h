#ifndef DSA_H
#define DSA_H
#include <iostream>
#include <string>
using namespace std;
class DSA
{
	friend ostream &operator<<(ostream &, const DSA &);
	friend istream &operator>>(istream &, DSA &);
	friend bool operator<(const DSA& , const DSA& );
	friend bool operator>(const DSA& , const DSA& );
	friend bool operator!=(const DSA& , const DSA& );
	friend bool operator==(const DSA& , const DSA& );
public:
	DSA(double x1 = 0.0, double x2 = 0.0, double x3 = 0.0);
	DSA operator+(const DSA& );
	DSA operator-(const DSA& );
	DSA operator*(const DSA& );
	DSA operator/(const DSA& );	
	DSA operator++(int);
	DSA operator++();
	~DSA();
protected:
private:
	double xNM1;
	double xN;
	double xNP1;
			
};

#endif
