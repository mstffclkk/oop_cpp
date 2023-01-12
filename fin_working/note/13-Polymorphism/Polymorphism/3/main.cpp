#include <iostream>
#include <string>
using namespace std;
#include "CE.h"
#include "BSCE.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
/*
	//BSCE bsce("Sue", "Jones", "222-22-2222", 10000, 0.06,100);
	//bsce.print();
	
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
	
	
	 bsceptr = &ce; hata
	"CE" sýnýfýndan türetilmiþ nesnelerin adreslerini "CE" tipinde 
	pointer nesnelerine atayabilirsiniz. Ancak "CE" sýnýfýndan türetilmiþ nesnelerin 
	adreslerini "BSCE" tipinde pointer nesnelerine atayamazsýnýz. */
	
	
	CE *ceptr=0;
	
	BSCE bsce("Bob", "Lewis", "333-33-3333", 50000, 0.04,300);

	ceptr = &bsce;
	
	string firstName = ceptr->getFirstName();
	string lastName = ceptr->getLastName();
	string ssn = ceptr->getSocialSecurityNumber();
	double grossSales = ceptr->getGrossSales();
	double commisionRate = ceptr->getCommissionRate();
	
	//double baseSalary = ceptr->getBaseSalary(); !!
	//ceptr->setBaseSalary(500); 				  !!
	
	return 0;
}


