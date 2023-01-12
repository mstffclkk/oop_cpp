#ifndef PLAYER_H
#define PLAYER_H


#include<iostream>
#include<string>
#include<iomanip>
#include<stdexcept>
#include<vector>

using namespace std;

class Player
{
public:
	Player(const string &, const string &, const string &, int = 0);
	
	void setFirstName(const string &);
	void setLastName(const string &);
	void setNation(const string &);
	void setAge(int);
	
	string getFirstName()const;
	string getLastName()const;
	string getNation()const;
	double getAge() const;
	
	virtual void print() const;
	virtual int points() const = 0; // pure

	
	~Player();
	
private:
	string firstName;
	string lastName;
	string nation;
	int age;

};

#endif
