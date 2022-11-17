#include "CMYK.h"
#include <string>
#include <iostream>
#include <cmath>
using namespace std;
CMYK::CMYK(string Name, int R, int G, int B)
	:name(Name)
{
	setR(R);
	setG(G);
	setB(B);
	cout<<"CMYK object constructor "<<getName()<<endl;
}

CMYK::~CMYK()
{
	cout<<"CMYK object destructor "<<getName()<<endl;
}
void CMYK::setR(int R)
{
	r = R;
}
void CMYK::setG(int G)
{
	g = G;
}
void CMYK::setB(int B)
{
	b = B;
}
string CMYK::getName()
{
	return name;
}
void CMYK::printCMYK()
{
	cout<<"RGB("<<r<<","<<g<<","<<b<<")=====>"<<"CMYK("<<calculateC()<<","<<calculateM()<<","<<calculateY()<<","<<calculateK()<<")"<<endl;
}
double CMYK::calculateK()
{
	double r1;
	double g1;
	double b1;
	double K;
	double result1;
	double result;
	r1 = r/255;
	g1 = g/255;
	b1 = b/255;
	result1 = max(r1,g1);
	result = max(result1,b1);
	K = 1- result;
	return K;
}

double CMYK::calculateC()
{
	double r1;
	double g1;
	double b1;
	double K;
	double result1;
	double result;
	r1 = r/255;
	g1 = g/255;
	b1 = b/255;
	result1 = max(r1,g1);
	result = max(result1,b1);
	K = 1- result;
	double C;
	C = (1-r1-K)/(1-K);
	return C;
	
}
double CMYK::calculateM()
{
	double r1;
	double g1;
	double b1;
	double K;
	double result1;
	double result;
	r1 = r/255;
	g1 = g/255;
	b1 = b/255;
	result1 = max(r1,g1);
	result = max(result1,b1);
	K = 1- result;
	double M;
	M = (1-g1-K)/(1-K);
	return M;
}

double CMYK::calculateY()
{
	double r1;
	double g1;
	double b1;
	double K;
	double result1;
	double result;
	r1 = r/255;
	g1 = g/255;
	b1 = b/255;
	result1 = max(r1,g1);
	result = max(result1,b1);
	K = 1- result;
	double Y;
	Y = (1-b1-K)/(1-K);
	return Y;
}
void CMYK::printCMYK() const
{
	cout<<"RGB("<<r<<","<<g<<","<<b<<")=====>"<<"CMYK("<<C<<","<<M<<","<<Y<<","<<K<<")"<<endl;
}
