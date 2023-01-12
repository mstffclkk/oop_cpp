#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;

class Computer
{
public:
	Computer(const string &, int=0, int=0, int=0);
	
	// set func
	void setCpu(const string &);
	void setRam(int);
	void setWeight(int);
	void setPrice(int);
	
	// get func
	string getCpu()const;
	int getRam()const;
	int getWeight()const;
	int getPrice()const;
	
	virtual void printComputer() const;
	virtual	double performance() const = 0; // pure
	~Computer();
	
private:
	string cpu;
	int ram;
	int	weight;
	int	price;
};

#endif
