#include <iostream>
#include "Time.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Time t;
	
	t.setHour(18).setMinute(30).setSecond(22);
	
	cout << "Universal Time:";
	t.printUniversal();
	
	cout << "\nStandard time:";
	t.printStandard();
	
	cout << "\n\nNew standard time:";
	
	t.setTime(20,20,20).printStandard();
	cout << endl;
	
	
	return 0;
}
