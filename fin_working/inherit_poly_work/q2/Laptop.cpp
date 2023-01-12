#include "Laptop.h"
#include "Computer.h"

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;


Laptop::Laptop(const string &a,int b, int c, int d, int bat, bool tp)
		:Computer(a,b,c,d)
{
	setBattery(bat);
	setTouchpad(tp);
}

Laptop::~Laptop()
{
}

void Laptop::setBattery(int bat)
{
	if(bat>0)
		battery = bat;
	else
		throw invalid_argument("battery must be greater than 0");
}
void Laptop::setTouchpad(bool tp)
{
	touchpad = tp;
}
int Laptop::getBattery() const
{
	return battery;
}
bool Laptop::getTouchpad() const
{
	return touchpad;
}	
void Laptop::printComputer() const
{
	Computer::printComputer();
	cout << "Battery: " << getBattery() << " cells " << endl;
	cout << "Touchpad: ";
	if(getTouchpad() == true) 
		cout << " YES " << endl;
	else
		cout << " NO " << endl;	
}
double Laptop::performance() const
{
	return ((0.3*10000/getPrice()) + (0.7*(67/getRam())));
}
