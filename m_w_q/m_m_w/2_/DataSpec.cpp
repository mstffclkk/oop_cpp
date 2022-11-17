#include "DataSpec.h"

DataSpec::DataSpec(string name , double x, double y, double z)
{
	setName(name);
	setFX(x);
	setFY(y);
	setFZ(z);
	
	cout << "constructor for object: " << getName() << endl;
}
void DataSpec::setFX(double x){	featureX = x; }
void DataSpec::setFY(double y){	featureY = y; }
void DataSpec::setFZ(double z){	featureZ = z; }
void DataSpec::setName(string name){ dataName = name; }

double DataSpec::getFX() const{ return featureX; }
double DataSpec::getFY() const{ return featureY; }
double DataSpec::getFZ() const{ return featureZ; }
string DataSpec::getName() const{ return dataName; }

void DataSpec::print() const{
	cout << getName() << "(" << getFX() << "," << getFY() << "," << getFZ() << ")" << endl;
}













