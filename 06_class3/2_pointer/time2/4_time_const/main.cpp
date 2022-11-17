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
/*#include <iostream>
#include <stdexcept>

#include "Time.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main() {
	Time t;
	
	t.setHour(18);
	t.setMinute(30);
	t.setSecond(22);
	
	cout << "Universal Time:";
	t.printUniversal();
	
	cout << "\nStandard time:";
	t.printStandard();
	
	cout << "\n\nNew standard time:";
	
	t.setTime(20,20,20);
	t.printStandard();
	cout << endl;
	
	
	return 0;
}
*/
