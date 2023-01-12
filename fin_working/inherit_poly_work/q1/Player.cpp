#include "Player.h"
#include<iostream>
#include<string>
#include<iomanip>
#include<stdexcept>
#include<vector>


using namespace std;

Player::Player(const string &a, const string &b, const string &c, int d)
	  :firstName(a),lastName(b),nation(c)
{
	setAge(d);
}

void Player::setFirstName(const string &a)
{
	firstName = a;
}

void Player::setLastName(const string &b)
{
	lastName = b;
}

void Player::setNation(const string &c)
{
	nation = c;
}

void Player::setAge(int d)
{
	age = d;
}
	
string Player::getFirstName()const
{
	return firstName;
}

string Player::getLastName()const
{
	return lastName;
}

string Player::getNation()const
{
	return nation;
}

double Player::getAge() const
{
	return age;
}
	
void Player::print() const
{
	cout << "League Player : " << getFirstName() << " " << getLastName() << endl
	<< "Nation: " << getNation() << endl
	<< "Age: " << getAge() << endl;
}

Player::~Player()
{
}
