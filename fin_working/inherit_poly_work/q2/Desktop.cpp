#include "Desktop.h"
#include "Computer.h"

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;
Desktop::Desktop(const string &a,int b, int c, int d, int ps, bool mon)
		:Computer(a,b,c,d)
{
	setPowerSupply(ps);
	setMonitor(mon);
}
	
void Desktop::setPowerSupply(int ps)
{
	if(ps>0)
		powerSupply = ps;
	else
		throw invalid_argument("Power Suppyl must be greater than 0");
}

void Desktop::setMonitor(bool mon)
{
	monitor = mon;
}
	
int Desktop::getPowerSupply() const
{
	return powerSupply;
}

bool Desktop::getMonitor() const
{
	return monitor;
}
	
void Desktop::printComputer() const
{
	Computer::printComputer();
	cout << "Power Suppyl: " << getPowerSupply() << " Watt " << endl;
	cout << "Monitor: ";
	if(getMonitor() == true) 
		cout << " YES " << endl;
	else
		cout << " NO " << endl;
}

double Desktop::performance() const
{
	return (0.3*10000/getPrice())+(0.7*64/getRam());
}

Desktop::~Desktop()
{
}
