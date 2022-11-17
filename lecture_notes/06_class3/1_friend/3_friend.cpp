#include <iostream>

using namespace std;

class B;
class A{
	public:
		A(): numA(12) { }
		friend int add(A,B);		
	private:
		int numA;
};

class B{
	public:
		B(): numB(1) {}
		friend int add(A,B);
	private:
		int numB;
};

int add(A objectA, B objectB){
	return (objectA.numA + objectB.numB);
}

int main(){
	A objectA;
	B objectB;
	cout << "Sum: " << add(objectA, objectB);
	return 0;
}
