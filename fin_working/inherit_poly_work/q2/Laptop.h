#ifndef LAPTOP_H
#define LAPTOP_H

#include "Computer.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;

class Laptop : public Computer
{
public:
	Laptop(const string &, int=0, int=0, int=0, int=0, bool = false);

	void setBattery(int);
	void setTouchpad(bool);
	
	int getBattery() const;
	bool getTouchpad() const;
	
	virtual void printComputer() const;
	virtual	double performance() const;
	
	~Laptop();
private:
	int battery;
	bool touchpad;
};

#endif
