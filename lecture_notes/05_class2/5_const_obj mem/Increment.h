#ifndef INCREMENT_H
#define INCREMENT_H

#include <iostream>
using namespace std;

class Increment
{
	public:
		Increment(int c=0,int i=1);
		void addIncrement(void);
		void print(void) const;
	private:
		
		int count;
		
		/// const data member should be initialized with member initializer
		const int increment;
};

#endif
