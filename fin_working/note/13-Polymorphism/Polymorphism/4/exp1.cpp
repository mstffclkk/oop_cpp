#include<iostream>

using namespace std;

class Shape {

public:
	Shape(int a=0, int b=0){
		width = a;
		height = b;
	}
	int area(){
		cout << "parent class area; " << endl;
		return 0;
	}
protected:
	int width, height;
};

class Rectangle: public Shape {

public:
	Rectangle(int a=0, int b=0):Shape(a,b){	}
	
	int area(){
		cout << "Rectangle class area; " << endl;
		return (width * height);
	}	
};

class Triangle: public Shape {

public:
	Triangle(int a=0, int b=0):Shape(a,b){	}
	
	int area(){
		cout << "Triangle class area; " << endl;
		return (width * height / 2);
	}
};

int main(){
	
	Shape *shape;
	Rectangle rec(10,7);
	Triangle tri(10,5);
	
	// store the address of Rectangle
	shape = &rec;
	
	// call Rectangle area
	shape->area();
	
	// store the address of Rectangle
	shape = &tri;
	
	// call Triangle area
	shape->area();
	
	return 0;
	
}







