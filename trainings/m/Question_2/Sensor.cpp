#include "Sensor.h"
#include <string>
using namespace std;
#include <iostream>
#include <cmath>
Sensor::Sensor(string name, double T1, double T2, double T3, double rms, double sra)
{
	if((T1 > 1 || T1 < -1) || (T2 > 1 || T2 < -1) || (T2 > 1 || T2 < -1))
		cout<<"Wrong choice for T values!!"<<endl;
	else
		setT1(T1);
		setT2(T2);
		setT3(T3);
		setID(name);
		cout <<"Sensor object constructor for "<<getID()<<endl;
}

Sensor::~Sensor()
{
}

void Sensor::setT1(double T1)
{
		t1 = T1;
}

void Sensor::setT2(double T2)
{
		t2 = T2;
}

void Sensor::setT3(double T3)
{
		t3 = T3;
}

void Sensor::setID(string name)
{
	ID = name;
}

double Sensor::getT1() const
{
	return t1;
}

double Sensor::getT2() const
{
	return t2;
}

double Sensor::getT3() const
{
	return t3;
}

double Sensor::getRMS() const
{
	return RMS;
}

double Sensor::getSRA() const
{
	return SRA;
}

string Sensor::getID() const
{
	return ID;
}
              
void Sensor::calculateSensorStats()
{
	RMS = sqrt((t1*t1+t2*t2+t3*t3)/3);
	SRA = pow((sqrt(abs(t1))+sqrt(abs(t2))+sqrt(abs(t3)))/3, 2);
}
//sqrt(pow((sqrt(abs(t1))+sqrtfabs(t2))+sqrt(abs(t3)))/3,2));
void Sensor::print() const
{
	cout<<getID()<<"***"<<getT1()<<" "<<getT2()<<" "<<getT3()<<"***"<<getRMS()<<","<<getSRA()<<endl;
}












