#ifndef MASTER_H
#define MASTER_H

#include "Bachelor.h"

class Master : public Bachelor
{
public:
	Master(const string &,const string &,const string &,const string &, int, int );
	void setNOAMaster(int);
	void setNOPMaster(int);
	
	int getNOAMaster()const;
	int getNOPMaster()const;

	virtual void printResume() const;
	virtual double performance() const;
	~Master();
private:
	int NOAMaster;
	int NOPMaster;
};

#endif
