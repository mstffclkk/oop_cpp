#include "LeaguePlayer.h"
#include "Player.h"


#include<iostream>
#include<string>
#include<iomanip>
#include<stdexcept>
#include<vector>

using namespace std;

LeaguePlayer::LeaguePlayer(const string &a, const string &b, const string &c, int d, int nog , int now, int nol )
			:Player(a,b,c,d)
{
	setNOG(nog);
	setNOW(now);
	setNOL(nol);
}	
void LeaguePlayer::setNOG(int nog)
{
	if(nog>0)
		NOG = nog;
	else
		throw invalid_argument("\nNOG must be greater than 0");
}
void LeaguePlayer::setNOW(int now)
{
	if(now>0)
		NOW = now;
	else
		throw invalid_argument("\nNOW,must be greater than 0");
}
void LeaguePlayer::setNOL(int nol)
{
	if(nol>0)
		NOL = nol;
	else
		throw invalid_argument("\nNOL must be greater than 0");
}
int LeaguePlayer::getNOG()const
{
	return NOG;
}
int LeaguePlayer::getNOW()const
{
	return NOW;
}
int LeaguePlayer::getNOL()const
{
	return NOL;
}	
void LeaguePlayer::print() const
{
	Player::print();
	cout << "NOG: " << getNOG() << endl;
	cout << "NOW: " << getNOW() << endl;
	cout << "NOL: " << getNOL() << endl;
}
int LeaguePlayer::points() const
{
	return (10 * getNOG()) + (3 * getNOW()) - (2 * getNOL());
}
LeaguePlayer::~LeaguePlayer()
{
}
