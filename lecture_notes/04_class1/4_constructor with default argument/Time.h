#ifndef TIME_H
#define TIME_H

class Time
{
	public:
		Time(int hour=0, int minute=0, int second=0);
		
	
	    // set functions
	    void setTime( int, int, int ); // set hour, minute, second
	    void setHour( int ); // set hour (after validation)
	    void setMinute( int ); // set minute (after validation)
	    void setSecond( int ); // set second (after validation)
	
 	    // get functions
	    int getHour(); // return hour
	    int getMinute(); // return minute
	    int getSecond(); // return second
	
	    void printUniversal(); // output time in universal-time format
	    void printStandard(); // output time in standard-time format
	private:
	    int hour; // 0 - 23 (24-hour clock format)
	    int minute; // 0 - 59
	    int second; // 0 - 59
};

#endif
