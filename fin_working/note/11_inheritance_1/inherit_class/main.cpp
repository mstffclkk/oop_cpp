#include <iostream>
#include <string>
using namespace std;
#include "CE.h"
#include "BSCE.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	BSCE bsce("Sue", "Jones", "222-22-2222", 10000, 0.06,100);
	bsce.print();
	

	return 0;
}


