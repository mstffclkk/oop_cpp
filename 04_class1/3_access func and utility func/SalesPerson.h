#ifndef SALESPERSON_H
#define SALESPERSON_H

class SalesPerson
{
	public:
		static const int monthsPerYear = 12; //months in one year
		SalesPerson(); //constructor
		void getSalesFromUser(void); //input sales from keyboard
		void setSales(int, double);  //set sales for a specific month
		void printAnnualSales(void); //summarize and print sales
			
	private:
		double totalAnnualSales(void); //prototype for utility func
		double sales[monthsPerYear];   //12 monthly sales figures
};

#endif
