#include "Computer.h"
#include "Desktop.h"
#include "Laptop.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;

void virtualViaPointer(const Computer * const);

int main(int argc, char** argv) {
	Desktop d1("Intel Core i7",12,3250,6000,180,true);
	Desktop d2("Intel Core i9",8,2860,7450,180,false);
	
	Laptop l1("AMD Ryzen 5 4600H",16,1760,5500,3,false);
	Laptop l2("AMD Threadripper 3990X",8,1950,12500,3,false);
	
	vector <Computer *> com(4);
	
	com[0] = &d1;
	com[1] = &d2;
	com[2] = &l1;
	com[3] = &l2;
	
	for(int i=0;com.size(); i++)
		virtualViaPointer(com[i]);
	return 0;
}

void virtualViaPointer(const Computer * const baseClassPtr)
{
	baseClassPtr->printComputer();
	cout << "\nPerformance: " <<baseClassPtr->performance() << "\n\n";
}
