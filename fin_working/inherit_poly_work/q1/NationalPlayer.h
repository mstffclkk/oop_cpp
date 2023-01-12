#ifndef NATIONALPLAYER_H
#define NATIONALPLAYER_H

#include "LeaguePlayer.h"
#include<iostream>
#include<string>
#include<iomanip>
#include<stdexcept>
#include<vector>

using namespace std;

class NationalPlayer : public LeaguePlayer
{
public:
	NationalPlayer(const string &, const string &, const string &, int = 0, int = 0, int = 0, int = 0, int = 0);
	
	void setNNOG(int);
	int getNNOG() const;
	
	virtual void print() const;
	virtual int points() const; 
	
	~NationalPlayer();
private:
	int NNOG;
};

#endif
