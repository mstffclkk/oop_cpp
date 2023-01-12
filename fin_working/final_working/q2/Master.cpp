#include "Master.h"
#include "Bachelor.h"
#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<stdexcept>

using namespace std;

Master::Master(const string &fn,const string &ln,const string &uni,const string &tit,int noa,int nop)
		:Bachelor(fn,ln,uni,tit)
{
	setNOAMaster(noa);
	setNOPMaster(nop);
}
void Master::setNOAMaster(int noa)
{
	if(noa>0)
		NOAMaster = noa;
	else
		throw invalid_argument("NOA must be greater than 0");
	
}
void Master::setNOPMaster(int nop)
{
	if(nop>0)
		NOPMaster = nop;
	else
		throw invalid_argument("NOP must be greater than 0");
}	
int Master::getNOAMaster()const
{
	return NOAMaster;
}
int Master::getNOPMaster()const
{
	return NOPMaster;
}
void Master::printResume() const
{
	Bachelor::printResume();
	cout << "NOA Master: " << getNOAMaster() << endl
	<< "NOP Master: " << getNOPMaster() << endl;
}
double Master::performance() const
{ 
	return (12.0+(6.2*getNOAMaster())+(14.5*getNOPMaster()));
}
Master::~Master() 
{
}
