#include "Player.h"
#include "LeaguePlayer.h"
#include "NationalPlayer.h"

#include<iostream>
#include<string>
#include<iomanip>
#include<stdexcept>
#include<vector>



using namespace std;

void virtualViaPointer(const Player * const);

int main(int argc, char** argv) {
	
	LeaguePlayer l1("Shane","Larkin","USA",27,28,24,4);
	LeaguePlayer l2("Roger","Federer","Switzerland",38,14,13,1);
	
	NationalPlayer n1("Zlatan","Ibrahimovic","Sweden",38,24,14,10,6);
	NationalPlayer n2("Malwina","Smarzek","Poland",23,32,29,3,12);
	
	// create vector of four base class pointers
	vector <Player *> player(4);
	
	player[0]= &l1;
	player[1]= &l2;
	player[2]= &n1;
	player[3]= &n2;
	
	for(int i = 0;i < player.size(); i++)
	{
		virtualViaPointer(player[i]);
	}
	
	return 0;
}

void virtualViaPointer(const Player * const baseClassPtr)
{
	baseClassPtr->print();
	cout << "\nPoints: " <<baseClassPtr->points() << "\n\n";
}
