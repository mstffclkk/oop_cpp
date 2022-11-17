#include <iostream>
#include <stdexcept>
#include "Time.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	Time wakeup(6,45,0);
	const Time noon(12,0,0);
	
	wakeup.setHour(18);
	noon.setHour(12);
	
	wakeup.getHour();
	noon.getMinute();
	
	noon.printUniversal();
	noon.printStandard();
	
	return 0;
}
