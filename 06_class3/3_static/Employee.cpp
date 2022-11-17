#include "Employee.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>

using namespace std;
int Employee::count = 0;

int Employee::getCount(){ return count; }

Employee::Employee(const string &first,const string &last)
		: firstName(first),
		  lastName(last)
{
	++count;
	cout << "Employee constructor for " << firstName << " " << lastName << " called." << endl;
}

Employee::~Employee()
{
	cout << "Employee desturctor for " << firstName << " " << lastName << " called." << endl;
	--count;

}
