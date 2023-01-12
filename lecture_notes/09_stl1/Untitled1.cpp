#include<iostream>
#include<vector>

using namespace std;

main(){
	vector< int >integers; //create vector of units
	vector<int>::iterator it;
	
	cout << "The initial size of integers is: " << integers.size()
		<< "\nThe initial capacity of integers is: " << integers.capacity()
	
	integers.push_back(2);
	integers.push_back(3);
	integers.push_back(4);
	
	cout << "\n\nThe initial size of integers is: " << integers.size()
		<< "\nThe initial capacity of integers is: " << integers.capacity()
	
	cout << "\nOutput vector using iterator notation: "
	
	for(it=integers.begin(); it!=integers.end(); it++)
	cout << " " << *it << endl;
	
	
	
	 
	
	
}
