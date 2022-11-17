#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;
class Time
{
	public:
		Time(int hour=0, int minute=0, int second=0);
		
		void setTime(int,int,int);
		void setHour(int);
		void setMinute(int);
		void setSecond(int);
		
		int getHour() const;
		int getMinute() const;		
		int getSecond() const;
		
		void printUniversal(void) const;
		void printStandard(void);
		
	private:
		
		int hour;
		int minute;
		int second;
};

#endif
