/* ******************************************************* 
 * Filename		:	main.cpp
 * Author		:	Burak Kaleci		
 * Date			:	23.11.2018
 * Description	:	Driver program for class Rational
 * ******************************************************/


#include <iostream>
#include "Rational.h" // include definition of class Rational
using namespace std;

main() 
{
	Rational n1,n2,x;
	
	cout << "Enter rational number in the form num/den:" << endl;
	cin >> n1 >> n2;
	
	cout << n1 << endl << n2 << endl << x << endl;
	
	x=n1+n2;
	cout << n1 << " + " << n2 << " = " << x << endl;
	
	x=n1-n2;
	cout << n1 << " - " << n2 << " = " << x << endl;
	
	x=n1*n2;
	cout << n1 << " * " << n2 << " = " << x << endl;
	
	x=n1/n2;
	cout << n1 << " / " << n2 << " = " << x << endl;
	
	
	if (n1<n2)
		cout << "n1 is less than n2" << endl;
	
	if (n1>n2)
		cout << "n1 is greater than n2" << endl;
	
	if (n1==n2)
		cout << "n1 is equal to n2" << endl;
		
	if (n1!=n2)
		cout << "n1 is not equal to n2" << endl;	
		
	if (n1<=n2)
		cout << "n1 is less than or equal to n2" << endl;	
		
	if (n1>=n2)
		cout << "n1 is greater than or equal to n2" << endl;	
				
}
