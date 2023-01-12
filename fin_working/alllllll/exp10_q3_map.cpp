#include <map>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

typedef map<int,pair<double,double> > myMap;

main()
{
	myMap map;
	double xCoor[6] = {4.6,7.8,7.8,11.9,11.9,17.8};
	double yCoor[6] = {5.7,10.2,2.1,10.2,2.1,5.7};
	
	for(int i=0;i<6;i++){
		pair<double,double> temp(xCoor[i],yCoor[i]);
		map.insert(myMap::value_type(i+1,temp));
	}
	cout << "IDs\t\tx-coordinates\t\ty-coordinates" << endl;
	for(myMap::const_iterator it=map.begin();it!=map.end();++it)
		cout << setw(3) << it->first << "\t\t" << setw(13) << it->second.first << "\t\t" << setw(13) << it->second.second << endl;
	int path[4] = {1,2,4,6};
	double result = 0.0;
	double length;
	for(int i=0;i<3;i++){
		length = sqrt(pow(map[path[i+1]].second-map[path[i]].second,2) + pow(map[path[i+1]].first-map[path[i]].first,2));
		result = result + length;
		cout << path[i] << "-->" << path[i+1] << " = " << length << endl;
	}
	cout << "Total length: " << result << endl;
	
	
	
	
	
	
}
