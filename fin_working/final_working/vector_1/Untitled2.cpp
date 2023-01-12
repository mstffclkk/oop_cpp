

#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector< vector< int > > myVector;
	vector< vector< int > >::iterator it;
	

	vector<int> row;
	
	row.push_back(2);
	row.push_back(1);
	
	myVector.push_back(row);
	myVector.push_back(row);
	/*
	for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            myVector[i][j] = i * j;
        }
    }
	*/
	
	
    //vektörü iterator ile yazdýrýn
    for (vector< vector < int > >::iterator it = myVector.begin(); it != myVector.end(); ++it) {
        for (vector<int>::iterator j = it->begin(); j != it->end(); ++j) {
            cout << *j << " ";
        }
        cout << endl;
    }
	
	
}
