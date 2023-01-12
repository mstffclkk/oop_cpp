#ifndef DOCTORAL_H
#define DOCTORAL_H

#include "Master.h"

class Doctoral : public Master
{
public:
	Doctoral(const string &,const string &,const string &,const string &, int, int, int, int);
	
	void setNOAPhd(int);
	void setNOPPhd(int);
	
	int getNOAPhd()const;
	int getNOPPhd()const;
	
	virtual void printResume() const;
	virtual double performance() const;
	
	~Doctoral();
	
private:
	int NOAPhd;
	int NOPPhd;
};

#endif
