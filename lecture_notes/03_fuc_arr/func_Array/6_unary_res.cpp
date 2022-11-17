#include <iostream>

using namespace std;
/*
class X{
	public:
		const static int count=10; // define static data member
};

int main(){	cout<< X::count << endl; } // use static member of class X



int count = 0;

int main(void) {
	int count = 0;
    ::count = 1;  // set global count to 1
   
    cout << ::count<< endl;
   
    count = 2;    // set local count to 2
	cout << count<< endl;

   
   return 0;
}
*/
#include <iostream>
using namespace std;

class X
{
public:
   static int count;
};
int X::count = 10;                // define static data member

int main ()
{
   int X = 0;                     // hides class type X
   cout << X::count << endl;      // use static member of class X
}
