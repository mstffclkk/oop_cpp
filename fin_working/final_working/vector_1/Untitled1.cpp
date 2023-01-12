#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector< int >integers;
	vector< int >::iterator it;
	
    
	
	integers.push_back(2);
	integers.push_back(3);
	integers.push_back(4);
	
	
	for (it=integers.begin(); it!=integers.end(); it++)
		cout << " " << *it; 
	cout << endl;
	
	
}
