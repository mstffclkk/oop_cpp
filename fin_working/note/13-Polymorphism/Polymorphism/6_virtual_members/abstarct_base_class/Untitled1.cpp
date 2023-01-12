// virtual members

#include<iostream>

using namespace std;

class Polygon {

public:
	void set_values(int a, int b){
		width = a;
		height = b;
	}
	virtual int area()=0; // pure virtual function (return 0)
protected:
	int width, height;
};

class Rectangle: public Polygon {

public:
	int area(){
		return width * height;
	}	
};

class Triangle: public Polygon {

public:
	int area(){
		return (width * height / 2);
	}	
};

int main(){
	Rectangle rect;
	Triangle trg1;

	Polygon *ppoly1 = &rect;
	Polygon *ppoly2 = &trg1;

	
	ppoly1->set_values(6,5); 
	ppoly2->set_values(4,5); 


	
	cout << ppoly1->area() << endl;
	cout << ppoly2->area() << endl;


}



















