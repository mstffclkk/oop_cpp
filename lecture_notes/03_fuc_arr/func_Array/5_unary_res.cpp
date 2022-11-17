#include <iostream>

using namespace std;

int number = 5; // global variable named number

int main(void){
	double number = 3; // local variable named number
	
	cout << "local: " << number << endl << "global: " << ::number; 
	return 0;
	
}
