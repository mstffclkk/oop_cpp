#include "NationalPlayer.h"
#include "LeaguePlayer.h"

#include<iostream>
#include<string>
#include<iomanip>
#include<stdexcept>
#include<vector>

using namespace std;




NationalPlayer::NationalPlayer(const string &a, const string &b, const string &c, int d, int nog , int now, int nol, int nnog)
				:LeaguePlayer(a,b,c,d,nog,now,nol)
{
	setNNOG(nnog);
}	
void NationalPlayer::setNNOG(int nnog)
{
	if(nnog>0)
		NNOG = nnog;
	else
		throw invalid_argument("\nNNOG,must be greater than 0");
}
int NationalPlayer::getNNOG() const
{
	return NNOG;
}	
void NationalPlayer::print() const
{
	LeaguePlayer::print();
	cout << "NNOG: " << getNNOG();	
}
int NationalPlayer::points() const
{
	return LeaguePlayer::points() + 15 * getNNOG();
}
NationalPlayer::~NationalPlayer()
{
}
