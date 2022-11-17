#include <iostream>
#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include "Employee.h"

using namespace std;

int main() {
	cout << "Number of employees before instantiation of any objects is "
		<< Employee::getCount() << endl;
	
	{
		Employee e1("susan","baker");
		Employee e2("robert","jones");
		
		cout << "Number of employees after objects are instantiated is "
			<< Employee::getCount() << endl;
		
		cout << "\n\nEmployee 1: "
			<< e1.getFirstName() << " " << e1.getLastName()
			<< "\nEmployee 2: "
			<< e2.getFirstName() << " " << e2.getLastName() << "\n\n";
	}	
	
	cout << "\nNumber of employees after objects are deleted is "
		<< Employee::getCount() << endl;
	return 0;
}
