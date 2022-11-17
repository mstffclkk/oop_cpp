#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <stdexcept>
using namespace std;

class Date
{
	public:
		/// class' data member
		static const int monthsPerYear=12;
		/// default constructor
		Date(int m=1, int d=1, int y=2000);
		/// print date month/day/year format
		void print(void) const;		
		/// destructor
		~Date();
	private:
		int month;
		int day;
		int year;
		
		/// utility fuction to check if day is proper for month and year
		int checkDay(int) const;
};

#endif
