#include <iostream>
#include <stdexcept>
#include "Time.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Time t1;
	Time t2(2);
	Time t3(21,34);
	Time t4(12,25,42);
	
	cout << "Constructed with:\n\nt1: all arguments defaulted\n ";
	t1.printUniversal();
	cout << "\n";
	t1.printStandard();
	
	cout << "\n\nt2: hour specified; minute and second defaulted\n ";
    t2.printUniversal(); // 02:00:00
    cout << "\n ";
    t2.printStandard(); // 2:00:00 AM
	
	cout << "\n\nt3: hour and minute specified; second defaulted\n ";
	t3.printUniversal(); // 21:34:00
	cout << "\n ";
	t3.printStandard(); // 9:34:00 PM

	cout << "\n\nt4: hour, minute and second specified\n ";
	t4.printUniversal(); // 12:25:42
	cout << "\n ";
	t4.printStandard(); // 12:25:42 PM

 // attempt to initialize t6 with invalid values
	try
	{

	} // end try
	catch ( invalid_argument &e )
	{
	cout << "\n\nException while initializing t5: " << e.what() << endl;
	
	}
	return 0;
}
