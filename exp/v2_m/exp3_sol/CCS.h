#ifndef CCS_H
#define CCS_H

#include <iostream>
#include <string>

class CCS
{
	public:
		CCS(double cs1_1, double cs1_2 , double cs1_3, double cs2_1, double cs2_2, double cs2_3 ,int c);
		void setCoordinates();
		void setCs1_item1(double a);
		void setCs1_item2(double a);
		void setCs1_item3(double a);
		void setCs2_item1(double a);
		void setCs2_item2(double a);
		void setCs2_item3(double a);
		
		void setChoice(int a);
		
		double getCs1_item1() const;
		double getCs1_item2() const;
		double getCs1_item3() const;
		double getCs2_item1() const;
		double getCs2_item2() const;
		double getCs2_item3() const;
		
		int getChoice() const;
		void printMenu() const;
		void printCoordinates() const;
		
		
		
	private:
		double cs1_item1;
		double cs1_item2;
		double cs1_item3;
		double cs2_item1;
		double cs2_item2;
		double cs2_item3;
		
		int choice;
		string conversionType;
		
		carToSph();
		carToCyl();
		sphToCar();
		cylToCar();
		
		double getRadianFromDegree(double a);
		double getDegreeFromRadian(double a);
		string getConversionType();
};

#endif
