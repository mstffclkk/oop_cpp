#include <iostream>
#include "DSA.h"
#include <iomanip>
#include <stdexcept>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	DSA d1,d2,d3,x;
	
	cout << "Enter discrete signals in the form xNM1---xN---xNP1" << endl;
	cin >> d1 >> d2;
	
	cout << d1 << endl << d2 << endl << x << endl;
	
	x = d1+d2;
	cout << d1 << " + " << d2 << " = " << x << endl;
	
	x = d1-d2;
	cout << d1 << " - " << d2 << " = " << x << endl;
	
	x = d1*d2;
	cout << d1 << " * " << d2 << " = " << x << endl;
	
	try
	{
		x = d1/d2;
		cout << d1 << " / " << d2 << " = " << x << endl;	
	}
	catch(invalid_argument &e)
	{
		cout << "\nException: " << e.what() << endl << endl;
	}
	
	try
	{
		x = d1/d3;
		cout << d1 << " / " << d3 << " = " << x << endl;	
	}
	catch(invalid_argument &e)
	{
		cout << "\nException: " << e.what() << endl << endl;
	}
	
	cout << d1++ << endl << ++d2 << endl;
	
	if (d1==d2)
		cout << "d1 is equal to d2" << endl;
	if (d1!=d2)
		cout << "d1 is not equal to d2" << endl;
	if (d1>d2)
		cout << "d1 is greater than d2" << endl;
	if (d1<d2)
		cout << "d1 is less than d2" << endl;
	return 0;
}
