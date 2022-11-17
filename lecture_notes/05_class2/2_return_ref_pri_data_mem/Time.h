#ifndef TIME_H
#define TIME_H

class Time
{
	public:
		Time(int hr = 0, int min = 0, int sec = 0);
	    void setTime( int, int, int );
	    int getHour(void);
	    int &badSetHour( int ); // DANGEROUS reference return
	private:
	    int hour;
	    int minute;
	    int second;
}; 

#endif
