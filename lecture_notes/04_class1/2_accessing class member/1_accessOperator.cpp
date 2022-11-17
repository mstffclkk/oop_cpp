#include <iostream>
/*

an object name Time t
a reference to an object Time &tRef = t
a pointer to an object Time *timePtr = &tRef 

*/
using namespace std;

class Count {
	public:
		void setX(int value){ x=value; } //sets the value of private data member x
		void print(){ cout << x << endl; }	// print the value of private data member x

	private:
		int x;
	
};

int main(){
	
	Count counter; // create count object
	Count &counterRef = counter; // create reference to counter
	Count *counterPtr = &counter; // create pointer to counter
	
	cout << "set x to 1 and print using object's name: ";
	counter.setX(1);
	counter.print();

	cout << "set x to 2 and print using a reference to an object: ";	
	counterRef.setX(2);
	counter.print();

	cout << "set x to 3 and print using a pointer to an object: ";
	counterPtr->setX(3);
	counterPtr->print();

	
	
}
