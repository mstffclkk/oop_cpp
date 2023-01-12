#include<iostream>

using namespace std;

class A {
	
public:
	void disp(){
		cout << "Super class func " << endl; 
	}	
};

class B: public A {
	
public:
	void disp(){
		cout << "Sub class func " << endl; 
	}	
};

int main(){
	//Parent class object
	A obj;
	obj.disp();
	
	//Child class object
	B obj2;
	obj2.disp();
	return 0;
}

