#ifndef TIME_H
#define TIME_H


#include <iostream>
#include <stdexcept>
#include <iomanip>

using namespace std;
// Declaration of class Time.
// Member functions are defined in Time.cpp

// prevent multiple inclusions of header file

// Time class definition
class Time
{
	public:
		Time(); // constructor
		void setTime(int,int,int); // set hour, minute and second
		void printUniversal(void); // print time in universal-time format
		void printStandard(void); // print time in standard-time format
		
	private:
		
	    int hour; // 0 - 23 (24-hour clock format)
	    int minute; // 0 - 59
	    int second; // 0 - 59
};

#endif
