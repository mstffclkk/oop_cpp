#include "Time.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

Time::Time(int hour, int minute, int second)
{
	setTime(hour, minute, second);
}

void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::setHour(int h)
{
	if(h>=0 && h<24)
		hour = h;
	else
		throw invalid_argument ("hour must be 0-23");	
	
}

void Time::setMinute(int m)
{
	if(m >= 0 && m < 60)
		minute = m;
	else	
		throw invalid_argument ("minute must be 0-59");	
}

void Time::setSecond(int s)
{
	if(s >= 0 && s < 60)
		second = s;
	else	
		throw invalid_argument ("second must be 0-59");	
	
}

int Time::getHour() const
{
	return hour;
}

int Time::getMinute() const
{
	return minute;
}

int Time::getSecond() const
{
	return second;
}

void Time::printUniversal(void) const
{
	cout << setfill('0') << setw(2) << getHour() << ":"
		<< setw(2) << getMinute() << ":" << setw(2) << getSecond();
}

void Time::printStandard(void)
{
	if(getHour()==0 || getHour() == 12)
		cout << 12;
	else
		cout << getHour() % 12;
		
	cout << setfill('0') << setw(2) << getMinute() << ":" << setw(2) 
		<< getSecond();
		
	if(getSecond()< 12)
		cout << " AM";
	else
		cout << " PM";
}














