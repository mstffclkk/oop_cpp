#include "Date.h"
#include <iostream>
#include <stdexcept>
using namespace std;

Date::Date(int m, int d, int y)
{
	if (m>0 && m<=monthsPerYear)
		month=m;
	else
		throw invalid_argument("month must be 1-12");
	
	year=y;
	day=checkDay(d);
	
	cout << "Date object constructor for date ";
	print();
	cout << endl;
}

void Date::print(void) const{
	cout << month << "/" << day << "/" << year << endl;
}

Date::~Date()
{
	cout << "Date object destructor for date ";
	print();	
	cout << endl;
}

// utility function to confirm proper day value based on 
// month and year; handles leap years, too

int Date::checkDay(int testDay) const{
	static const int daysPerMonth[monthsPerYear + 1] = 
      { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // determine whether testDay is valid for specified month
    if ( testDay > 0 && testDay <= daysPerMonth[ month ] )
       return testDay;

    // February 29 check for leap year 
    if ( month == 2 && testDay == 29 && ( year % 400 == 0 || 
       ( year % 4 == 0 && year % 100 != 0 ) ) )
       return testDay;
    
    throw invalid_argument("invalid ");
} 
