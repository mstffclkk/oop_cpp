#ifndef DATE_H
#define DATE_H

class Date
{
	public:
		Date(int m=1, int d=1, int y=2000);
		void print(void);
		
	private:
		int month;
		int day;
		int year;
};

#endif
