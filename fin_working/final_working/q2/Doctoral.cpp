#include "Doctoral.h"
#include "Master.h"
#include "Bachelor.h"

#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<stdexcept>

using namespace std;

Doctoral::Doctoral(const string &fn,const string &ln,const string &uni,const string &tit,int noa,int nop, int noaphd, int nopphd )
		:Master(fn,ln,uni,tit,noa,nop)
{
	setNOAPhd(noaphd);
	setNOPPhd(nopphd);
}

void Doctoral::setNOAPhd(int noaphd)
{
	if(noaphd>0)
		NOAPhd = noaphd;
	else
		throw invalid_argument("NOAPhd must be greater than 0");
}
void Doctoral::setNOPPhd(int nopphd)
{
	if(nopphd>0)
		NOPPhd = nopphd;
	else
		throw invalid_argument("NOPPhd must be greater than 0");
}
int Doctoral::getNOAPhd()const
{
	return NOAPhd;
}
int Doctoral::getNOPPhd()const
{
	return NOPPhd;
}
void Doctoral::printResume() const
{
	Master::printResume();
	cout << "NOAPhd: " << getNOAPhd() << endl
	<< "NOPPhd: " << getNOPPhd() << endl;
}
double Doctoral::performance() const
{
	return (Master::performance()+(8.5*getNOAPhd())+(26.5*getNOPPhd()));
}	

Doctoral::~Doctoral()
{
}
