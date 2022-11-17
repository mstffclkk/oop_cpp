#include "CCS.h"
#include <cmath>
#include <iostream>
#include <string>
using namespace std;
CCS::CCS(double X,double Y,double Z,double newX,double newY,double newZ,int T)
{
	setCs1_item1(X);
	setCs1_item2(Y);
	setCs1_item3(Z);
	setCs2_item1(newX);
	setCs2_item2(newY);
	setCs2_item3(newZ);
	setChoice(T);
	
}
void CCS::printMenu()
{
	cout<<"*******************************"<<endl<<"1. Cartesian to Spheriacl"<<endl<<"2. Cartesian to Cylindrical"<<endl<<"3. Spherical to Cartesian"<<endl<<"4. Cylindrical to Cartesian"<<endl<<"5. Exit"<<endl<<"*******************************"<<endl;
			
}
void CCS::carToSph()
{
	cs2_item1 = sqrt(cs1_item1*cs1_item1 + cs1_item2*cs1_item2 + cs1_item3*cs1_item3);
	cs2_item2 = getDegreeFromRadian(atan(cs1_item2 / cs1_item1));
	cs2_item3 = getDegreeFromRadian(atan(sqrt(cs1_item1*cs1_item1 + cs1_item2*cs1_item2) / cs1_item3));
	conversionType = "Cartesian to Spherical";
	
}
void CCS::carToCyl()
{
	cs2_item1 = sqrt((cs1_item1*cs1_item1) + (cs1_item2*cs1_item2));
	cs2_item2 = getDegreeFromRadian(atan(cs1_item2 / cs1_item1));
	cs2_item3 = cs1_item3;
	conversionType = "Cartesian to Cylindrical";
}
void CCS::sphToCar()
{
	cs2_item1 = cs1_item1 * sin(getRadianFromDegree(cs1_item3)) * cos(getRadianFromDegree(cs1_item2));
	cs2_item2 = cs1_item1 * sin(getRadianFromDegree(cs1_item3)) * sin(getRadianFromDegree(cs1_item2));
	cs2_item3 = cs1_item1 * cos(getRadianFromDegree(cs1_item3));
	conversionType = "Spherical to Cartesian";
}
void CCS::cylToCar()
{
	cs2_item1 = cs1_item1 * cos(getRadianFromDegree(cs1_item2));
	cs2_item2 = cs1_item1 * sin(getRadianFromDegree(cs1_item2));
	cs2_item3 = cs1_item3;
/*	double newX,newY,newZ;
	newX = cs1_item1 * cos(getRadianFromDegree(cs1_item2));
	newY = cs1_item1 * sin(getRadianFromDegree(cs1_item2));
	newZ = cs1_item3;
	setCs2_item1(newX);
	setCs2_item2(newY);
	setCs2_item3(newZ);*/
	conversionType = "Cylindrical to Cartesian";
}
void CCS::setCoordinates()
{
	double X,Y,Z;
	int choice;
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Enter x,y and z coordinates"<<endl;
			cin>>X;
			setCs1_item1(X);
			cin>>Y;
			setCs1_item2(Y);
			cin>>Z;
			setCs1_item3(Z);
			carToSph();
			break;
		case 2:
			cout<<"Enter x,y and z coordinates"<<endl;
			cin>>X;
			setCs1_item1(X);
			cin>>Y;
			setCs1_item2(Y);
			cin>>Z;
			setCs1_item3(Z);
			carToCyl();
			break;
		case 3:
			cout<<"Enter rho,phi and z coordinates"<<endl;
			cin>>X;
			setCs1_item1(X);
			cin>>Y;
			setCs1_item2(Y);
			cin>>Z;
			setCs1_item3(Z);
			sphToCar();
			break;
		case 4:
			cout<<"Enter rho,phi and z coordinates"<<endl;
			cin>>X;
			setCs1_item1(X);
			cin>>Y;
			setCs1_item2(Y);
			cin>>Z;
			setCs1_item3(Z);
			cylToCar();
			break;
		case 5:
			cout<<"System closed"<<endl;
			break;
		default:
			cout<<"Wrong selection!!"<<endl;
			printMenu();
	}

}
//Set functions
void CCS::setCs1_item1(double X)
{
	cs1_item1 = X;
}
void CCS::setCs1_item2(double Y)
{
	cs1_item2 = Y;
}
void CCS::setCs1_item3(double Z)
{
	cs1_item3 = Z;
}
void CCS::setCs2_item1(double newX)
{
	cs2_item1 = newX;
}
void CCS::setCs2_item2(double newY)
{
	cs2_item2 = newY;
}
void CCS::setCs2_item3(double newZ)
{
	cs2_item3 = newZ;
}
void CCS::setChoice(int T)
{
	choice = T;
}
//Get functions
double CCS::getCs1_item1()
{
	return cs1_item1;
}
double CCS::getCs1_item2()
{
	return cs1_item2;
}
double CCS::getCs1_item3()
{
	return cs1_item3;
}
double CCS::getCs2_item1()
{
	return cs2_item1;
}
double CCS::getCs2_item2()
{
	return cs2_item2;
}
double CCS::getCs2_item3()
{
	return cs2_item3;
}
int CCS::getChoice()
{
	return choice;
}
void CCS::printCoordinates()
{
	cout<<"P("<<getCs1_item1()<<","<<getCs1_item2()<<","<<getCs1_item3()<<")===="<<getConversionType()<<"========>"<<"PCON("<<getCs2_item1()<<","<<getCs2_item2()<<","<<getCs2_item3()<<")"<<endl;
}
double CCS::getRadianFromDegree(double value)
{
	double result;
	result = (value * M_PI / 180);
	return result;
}
double CCS::getDegreeFromRadian(double value)
{
	double result;
	result = (value * 180 / M_PI);
	return result;
}
string CCS::getConversionType()
{
	return conversionType;
}
