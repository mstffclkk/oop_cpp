#ifndef DESKTOP_H
#define DESKTOP_H

#include "Computer.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;
class Desktop : public Computer
{
public:
	Desktop(const string &,int=0, int=0, int=0, int=0, bool = false);
	
	void setPowerSupply(int);
	void setMonitor(bool);
	
	int getPowerSupply() const;
	bool getMonitor() const;
	
	virtual void printComputer() const;
	virtual	double performance() const;
	
	~Desktop();
	
private:
	int powerSupply;
	bool monitor;
};

#endif
