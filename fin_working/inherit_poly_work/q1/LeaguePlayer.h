#ifndef LEAGUEPLAYER_H
#define LEAGUEPLAYER_H

#include "Player.h"

#include<iostream>
#include<string>
#include<iomanip>
#include<stdexcept>
#include<vector>

using namespace std;

class LeaguePlayer : public Player
{
public:
	LeaguePlayer(const string &, const string &, const string &, int = 0, int = 0, int = 0, int = 0);
	
	void setNOG(int);
	void setNOW(int);
	void setNOL(int);

	int getNOG()const;
	int getNOW()const;
	int getNOL()const;
	
	virtual void print() const;
	virtual int points() const ; 
	
	~LeaguePlayer();
	
private:
	int NOG;
	int NOW;
	int NOL;
	
};

#endif
