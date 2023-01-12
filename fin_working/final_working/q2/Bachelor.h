#ifndef BACHELOR_H
#define BACHELOR_H

#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<stdexcept>

using namespace std;

class Bachelor
{
public:
	Bachelor(const string &, const string &, const string &, const string &);
	
	void setFirstName(const string &);
	void setLastName(const string &);
	void setUniversity(const string &);
	void setTitle(const string &);
	
	string getFirstName() const;
	string getLastName() const;
	string getUniversity() const;
	string getTitle() const;
	
	virtual void printResume() const;
	virtual double performance() const = 0; // const dememiþ ?
	
	~Bachelor();
	
private:
	string firstName;
	string lastName;
	string university;
	string title;
	
};

#endif
