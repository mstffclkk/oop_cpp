#include <iostream>

using namespace std;

class Count{
	friend void setX(Count &, int);
	
	public:
		Count()
			:x(0)
	{
		// empty body
	}
	
	void print() const{ cout << x << endl;}
	private:
		int x;
	
};

void setX(Count &c, int value){
	c.x = value;
}

main()
{
	Count counter;
	
	cout << "counter.x after instantination: ";
	counter.print();
	//setX using afriend func
	setX(counter,8);
	
	cout << "counter.x after call to setX friend function: ";
	counter.print();
}
