#include <iostream>
#include "Date.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	Date date1(7,4,2004);
	Date date2;
	
	cout << "date1 =";
	date1.print();
	cout << "\ndate2 =";
	date2.print();
	
	date2 = date1; // default memberwise assignment
	
	cout << "\n\nAfter default memberwiseassignment, date2= ";
	date2.print();
	return 0;
}
