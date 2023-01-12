#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <ctime>
#include <map>
#include <iomanip>
using namespace std;

struct Point{
	int id;
	int x;
	int y;
	int z;
};
vector <Point> points(20);
Point randPoint(void);
void printVector(vector <Point> &a);
typedef map<int,pair<int,vector<int> > > myMap;
main()
{
	cout << "SIZE" << points.size() << endl;
	generate(points.begin(),points.end(),randPoint);
	printVector(points);
	myMap map;
	
	
	
	
	
	
}

Point randPoint(void)
{
	Point point;
	static int k = 0;
	point.x = rand()%9;
	point.y = rand()%9;
	point.z = rand()%9;
	point.id = k;
	k++;
	return point;
}

void printVector(vector <Point> &a)
{
	int cnt = 0;
	for(int i=0;i<a.size();i++)
	{
		cout << setw(2) <<points[i].id << "-->  " << points[i].x << "  " << points[i].y << "  " << points[i].z << "| ";
		cnt++;
		if(cnt==5){
			cout << endl;
			cnt =0;
		}
			
		
	}
}
