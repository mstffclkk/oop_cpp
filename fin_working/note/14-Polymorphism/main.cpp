#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SE.h"
#include "CE.h"
#include "BSCE.h"
using namespace std;

void virtualViaPointer(const Employee *const);
void virtualViaReference(const Employee&);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << fixed << setprecision(2);
	
	SE se("John", "Smith", "111-11-1111", 800);
	CE ce("Sue", "Jones", "222-22-2222", 10000, .06);
	BSCE bsce("Bob", "Lewis", "333-33-3333", 5000, .04, 300);
	
	cout << "Employees processed individually using static linkage:";
	
	se.print();
	cout << "\nearned $" << se.earnings() << "\n\n";
	ce.print();
	cout << "\nearned $" << ce.earnings() << "\n\n";
	bsce.print();
	cout << "\nearned $" << bsce.earnings() << "\n\n";
	
	vector <Employee *> employees(3);
	
	employees[0] = &se;
	employees[1] = &ce;
	employees[2] = &bsce;
	
	cout << "Employees processed polymorphically via dynamic linkage:";
	
	for(int i=0;i<employees.size();i++)
		virtualViaPointer(employees[i]);
	cout << "Virtual function calls made off base-class references:";
	
	for(int i=0;i<employees.size();i++)
		virtualViaReference(*employees[i]);
	return 0;
}

void virtualViaPointer(const Employee* const baseClassPtr)
{
	baseClassPtr->print();
	cout << "\nearned $" << baseClassPtr->earnings() << "\n\n";
}

void virtualViaReference(const Employee &baseClassRef)
{
	baseClassRef.print();
	cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
}
