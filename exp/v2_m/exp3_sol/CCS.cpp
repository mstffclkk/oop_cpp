#include "CCS.h"

CCS::CCS(double cs1_1, double cs1_2 , double cs1_3, double cs2_1, double cs2_2, double cs2_3 ,int c)
{
	setCs1_item1(cs1_1);
	setCs1_item2(cs1_2);
	setCs1_item3(cs1_3);
	setCs2_item1(cs2_1);
	setCs2_item2(cs2_2);
	setCs2_item3(cs2_3);
	
	setChoice(c);
	
}

void CCS::printMenu() const{
	cout << "*****************************************" << endl;
	cout << "1. Cartesian to Spherical " << endl;
	cout << "2. Cartesian to Cylindrical " << endl;
	cout << "3. Spherical to Cartesian " << endl;
	cout << "4. Cylindrical to Cartesian " << endl;
	cout << "5. Exit " << endl;
	cout << "*****************************************" << endl;
	cout << "Enter your chocie: " << endl
	
	
	
}
