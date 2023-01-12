#include "Computer.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;

Computer::Computer(const string &a, int b, int c, int d )
		:cpu(a),ram(b),weight(c),price(d)
{
}

void Computer::setCpu(const string &a)
{
	cpu = a;
}

void Computer::setRam(int b)
{
	ram = b;
}

void Computer::setWeight(int c)
{
	weight = c;
}

void Computer::setPrice(int d)
{
	price = d;
}	
	
string Computer::getCpu()const
{
	return cpu;
}

int Computer::getRam()const
{
	return ram;
}

int Computer::getWeight()const
{
	return weight;
}

int Computer::getPrice()const
{
	return price;
}

void Computer::printComputer() const
{
	cout << "Initializer for" << getRam() << " GB " << getCpu() << endl
	 << "RAM: " << getRam() << " GB" << endl 
	 << "CPU: " << getCpu() << endl
	 << "Weight: " << getWeight() << " gram" << endl
	 << "Price: " << getPrice() << " TL" << endl;
}
//virtual	double performance() const = 0;

Computer::~Computer()
{
}
