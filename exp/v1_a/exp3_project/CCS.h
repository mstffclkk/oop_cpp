#ifndef CCS_H
#define CCS_H
#include <iostream>
using namespace std;
class CCS
{
	private:
		double cs1_item1;
		double cs1_item2;
		double cs1_item3;
		double cs2_item1;
		double cs2_item2;
		double cs2_item3;
		int choice;
		string conversionType;
	public:
		CCS(double,double,double,double,double,double,int);
		//Set functions
		void setCs1_item1(double cs1_item1);
		void setCs1_item2(double cs1_item2);
		void setCs1_item3(double cs1_item3);
		void setCs2_item1(double cs2_item1);
		void setCs2_item2(double cs2_item2);
		void setCs2_item3(double cs2_item3);
		void setChoice(int choice);
		void setCoordinates();
		//Get functions
		double getCs1_item1();
		double getCs1_item2();
		double getCs1_item3();
		double getCs2_item1();
		double getCs2_item2();
		double getCs2_item3();
		int getChoice();
		void printMenu();
		void printCoordinates();
		void carToSph();
		void carToCyl();
		void sphToCar();
		void cylToCar();
		double getRadianFromDegree(double value);
		double getDegreeFromRadian(double value);
		string getConversionType(void);
	protected:
};

#endif
