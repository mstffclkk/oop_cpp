#include <iostream>
#include <string>
using namespace std;
#include "CE.h"
#include "BSCE.h"

int main(int argc, char** argv) {
	CE ce("Sue", "Jones", "222-22-2222", 10000, 0.06);
	
	// create base-class pointer
	CE *ceptr=0;
	
	BSCE bsce("Bob", "Lewis", "333-33-3333", 50000, 0.04,300);
	// create derived-class pointer
	BSCE *bsceptr=0;
	
	
	cout << "\n1" << endl;
	ce.print();
	cout << "\n\n";
	bsce.print();
	
	
	cout << "\n2" << endl;
	ceptr = &ce;
	cout << "\n\n";
	ceptr->print();
	
	
	cout << "\n3" << endl;
	bsceptr = &bsce;
	cout << "\n\n";
	bsceptr->print();	
	
	
	cout << "\n4" << endl;
	ceptr = &bsce;
	cout << "\n\n";
	ceptr->print();	
}
