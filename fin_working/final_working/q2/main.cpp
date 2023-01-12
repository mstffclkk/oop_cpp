#include "Bachelor.h"
#include "Master.h"
#include "Doctoral.h"

#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<stdexcept>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void virtualViaPointer(const Bachelor * const);

int main(int argc, char** argv) {
	
	Master m1(" Riacrdo ", " Charles ","?","Research Asistant", 16, 3);
	Master m2(" Jonas ", " Benz ","?","Research Asistant", 4, 1);
	
	Doctoral d1(" Andrew ", " Liang ","?"," Asistant Professor ", 26, 8, 18, 13);
	Doctoral d2(" Lilian ", " Bartezz ","?"," Professor ", 13, 2, 23, 5);
	
	vector <Bachelor *> b(4);
	
	b[0] = &m1;
	b[1] = &m2;
	b[2] = &d1;
	b[3] = &d2;
	
	for(int i = 0;b.size();i++)
		virtualViaPointer(b[i]);

	return 0;
}

void virtualViaPointer(const Bachelor * const baseClassPtr)
{
	baseClassPtr->printResume();
	cout << "\nPerformance: " <<baseClassPtr->performance() << "\n\n";

}

