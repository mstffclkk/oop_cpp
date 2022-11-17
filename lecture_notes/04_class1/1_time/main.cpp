#include "Time.h"



int main(){
	
	Time t;
	
	cout << "The initial universal time is ";
	t.printUniversal(); // 00:00:00
	
	cout << "\nThe initial standard time is ";
	t.printStandard(); // 12:00:00 AM
	
	t.setTime(13,27,6); 
	
	cout << "\n\nUniversal time after setTime is ";
	t.printUniversal(); // 13:27:06
	
	cout << "\nStandard time after setTime is ";
	t.printStandard(); // 1:27:06
	
	try{
		t.setTime(99,99,99);
	}
	catch(invalid_argument &e){
		cout << "\nException: " << e.what() << endl << endl;
	}
	
	cout << "\n\nAfter attempting invalidsettings: " << "\nUniversal time: ";
	t.printUniversal(); //00:00:00
	
	cout << "\nStandard time: ";
	t.printStandard(); //12:00:00
	cout << endl;
	
	
	return 0;
}
