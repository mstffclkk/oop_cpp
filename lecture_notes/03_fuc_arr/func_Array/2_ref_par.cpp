#include <iostream>

using namespace std;

//function prototype
int squareByVal(int x);
int squareByRef(int &y);

int main(void){
	int num1 = 2;
	int num2 = 4;
	
	// demonstrate squareByVal
	cout << "num1 =  " << num1 << " before squareByVal" << endl;
	cout << "Value returned by squareByVal: " << squareByVal(num1) << endl;
	cout << "num1 =  " << num1 << " after squareByVal" << endl << endl;
	
	// demonstrate squareByRef
	cout << "num2 =  " << num2 << " before squareByRef" << endl;
	squareByRef(num2);
	cout << "num2 =  " << num2 << " after squareByRef" << endl;

}

int squareByVal(int x){ return x*x; }

int squareByRef(int &y){ y=y*y; }
