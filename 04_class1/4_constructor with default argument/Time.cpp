#include "Time.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

// Time constructor initializes each data member to zero;
// ensures that Time objects start in a consistent state
Time::Time(int hour, int minute, int second)
{
	setTime( hour, minute, second ); // validate and set time
}

// set new Time value using universal time; ensure that
// the data remains consistent by setting invalid values to zero
void Time::setTime( int h, int m, int s )
{
   setHour( h ); // set private field hour
   setMinute( m ); // set private field minute
   setSecond( s ); // set private field second
}

// set hour value
void Time::setHour( int h )
{
	if( h >= 0 && h < 24 )
		hour = h;
	else
		throw invalid_argument("hour must be 0-23");
}
// set minute value
void Time::setMinute( int m )
{
	if( m >= 0 && m < 60 )
		minute = m;
	else
		throw invalid_argument("minute must be 0-59");
}

// set second value
void Time::setSecond( int s )
{
	if( s >= 0 && s < 60 )
		second = s;
	else
		throw invalid_argument("second must be 0-59");
} 

// return hour value
int Time::getHour()
{
   return hour;
} // end function getHour

// return minute value
int Time::getMinute()
{
   return minute;
} // end function getMinute

// return second value
int Time::getSecond()
{
   return second;
} // end function getSecond

// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal()
{
   cout << setfill( '0' ) << setw( 2 ) << getHour() << ":"
      << setw( 2 ) << getMinute() << ":" << setw( 2 ) << getSecond();
}

void Time::printStandard()
{
    if( getHour() == 0 || getHour() == 12 )
		cout << 12;
	else
		cout << getHour() % 12;
		 
    cout << ":" << setfill( '0' ) << setw( 2 ) << getMinute()
       << ":" << setw( 2 ) << getSecond();
	if( getSecond() < 12)
	    cout << " AM";
	else
		cout << " PM";
} 




