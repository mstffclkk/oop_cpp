#include "SalesPerson.h"
#include <iostream>
#include <iomanip>

using namespace std;


/// constructor initializes elements of array sales to 0.
SalesPerson::SalesPerson()
{
	for(int i =0;i<monthsPerYear;++i)
		sales[i]=0.0;
}

/// get 12 sales figures from the user at the keyboard

void SalesPerson::getSalesFromUser(){
	
	double salesFig;
	
	for(int i=1;i<=monthsPerYear;++i){
		cout << "enter sales amount for month " << i << ": ";
		cin >> salesFig;
		setSales(i,salesFig);
	}
}

/// set one of the 12 monthly sales figures; function subtracts
/// one from month value for proper subscript in sales array
void SalesPerson::setSales(int month,double amount){
	if ( month >= 1 && month <= 12 && amount > 0 )
    	sales[ month - 1 ] = amount; // adjust for subscripts 0-11
    else // invalid month or amount value
    	cout << "Invalid month or sales figure" << endl;
}

void SalesPerson::printAnnualSales(){
	cout << setprecision(2) << fixed << "\nThe total annual sales are: $" 
		<< totalAnnualSales() << endl; // call utility function
}

// private utility function to total annual sales

double SalesPerson::totalAnnualSales()
{
   double total = 0.0; // initialize total

   for ( int i = 0; i < 12; i++ ) // summarize sales results
      total += sales[ i ]; // add month i sales to total

   return total;                   
}










