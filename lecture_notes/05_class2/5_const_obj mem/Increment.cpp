#include "Increment.h"
#include <iostream>
using namespace std;

Increment::Increment(int c, int i)
		 :count(c),		///initializer for non-const member
		 increment(i)   ///required initilizer for const member
{
	//count = c;
	//increment = i;
	//empty body
}

void Increment::addIncrement(void){
	count = count + increment;
}

void Increment::print(void) const{
	cout << "count: " << count << ", increment: " << increment << endl;
}
