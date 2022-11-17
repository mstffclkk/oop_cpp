#include <iostream>
#include <stdexcept>
#include "Time.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	Time t;
	
	//initialize hourRef with the reference returned by badSetHour
	int &hourRef = t.badSetHour(20);
	
	cout << "Valid hour before modification: " << hourRef;
	hourRef = 30;
	cout << "\nValid hour before modification: " << t.getHour();
	
	t.badSetHour(12)=74;
	//cout << "Valid hour before modification: " << hourRef;
	//cout << "\nValid hour before modification: " << t.getHour();
	
	
	cout << "\n\n*************************************************\n"
		<< "POOR PROGRAMMING PRACTICE!!!!!!!!\n"
		<< "t.badSetHour( 12 ) as an lvalue, invalid hour: "
		<< t.getHour()
		<< "\n*************************************************" << endl;	
	
	return 0;
}
