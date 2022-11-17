#include <iostream>
#include "CMYK.h"
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	const CMYK c1("C1", 213, 242, 160);
	c1.printCMYK();
	
	CMYK c2("C2");
	c2.setR(121);
	c2.setG(25);
	c2.setB(157);
	c2.printCMYK();
	return 0;
}
