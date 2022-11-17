#include "Machine.h"
#include <string>
using namespace std;
#include <iostream>
#include <cmath>
Machine::Machine(const Sensor &object1, const Sensor &object2, double ppv, double af, double bf)
		:s1(object1),  //member initializer for const objects
		s2(object2),
		PPV(ppv),
		AF(af),
		BF(bf)
{
	//empty body
}

double Machine::getPPV() const
{
	return PPV;
}
double Machine::getAF() const
{
	return AF;
}
double Machine::getBF() const
{
	return BF;
}

void Machine::print() const
{
	cout<< "PPV= "<<getPPV()<<endl<<"AF= "<<getAF()<<endl<<"BF= "<<getBF()<<endl;
}

void Machine::calculateMachineStats()
{
	PPV = getMax(s1.getRMS(),s2.getRMS()) - getMin(s1.getRMS(),s2.getRMS());
	AF = getMax(s1.getRMS(), s2.getRMS()) - getMin(s1.getSRA(), s2.getSRA());
	BF = getMax(s1.getSRA(), s2.getSRA()) - getMin(s1.getRMS(), s2.getRMS());
/*	PPV = max(s1.getRMS(), s2.getRMS()) - min(s1.getRMS(), s2.getRMS());
	AF = max(s1.getRMS(), s2.getRMS()) / min(s1.getSRA(), s2.getSRA());
	BF = max(s1.getSRA(), s2.getSRA()) / min(s1.getRMS(), s2.getRMS());*/
}

bool Machine::compare(const Machine &object3)
{
	if(abs(this->PPV - object3.PPV) < 0.5 && abs(this->AF - object3.AF) < 0.5 && abs(this->BF - object3.BF) < 0.5) 
		return true;
	else
		return false;
}

double Machine::getMax(double a, double b) const
{
	if (a>b)
		return a;
	else
		return b;
}

double Machine::getMin(double a, double b) const
{
	if (a>b)
		return b;
	else
		return a;
}

