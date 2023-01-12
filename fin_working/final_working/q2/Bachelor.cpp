#include "Bachelor.h"
#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<stdexcept>

using namespace std;

Bachelor::Bachelor(const string &fn, const string &ln, const string &uni, const string &tit)
		:firstName(fn),lastName(ln),university(uni),title(tit)
{
}
void Bachelor::setFirstName(const string &fn)
{
	firstName = fn;
}
void Bachelor::setLastName(const string &ln)
{
	lastName = ln;
}
void Bachelor::setUniversity(const string &uni)
{
	university = uni;
}
void Bachelor::setTitle(const string &tit)
{
	title = tit;
}	
string Bachelor::getFirstName() const
{
	return firstName;
}
string Bachelor::getLastName() const
{
	return lastName;
}
string Bachelor::getUniversity() const
{
	return university;
}
string Bachelor::getTitle() const
{
	return title;
}	
void Bachelor::printResume() const
{
	cout << "Name: " << getFirstName() << endl
	<< "Surname: " << getLastName() << endl
	<< "Title: " << getTitle()<< endl;
}
Bachelor::~Bachelor()
{
}
