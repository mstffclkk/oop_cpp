#include <iostream>
using namespace std;

class Test
{
	public:
		Test(int value = 0);
		void print() const;
	private:
		int x;
};

Test::Test(int value)
	:x(value) // initialize x to value
{
	//empty body
}

void Test::print() const
{
	// implicitly use the this pointer to access the member x
	cout << "x= " << x;
	// explicitly use the this pointer and the arrow operator
	// to access the member x
	cout << endl << "this->x = " << this->x;
	
	// explicitly use the dereferenced this pointer and
	// the dot operator to access the member x
	cout << endl << "(*this).x = " << (*this).x << endl;
}

main()
{
	Test testObject(12);
	testObject.print();
}






























