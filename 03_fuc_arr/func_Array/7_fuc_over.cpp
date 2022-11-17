#include <iostream> 
using namespace std; 

// Function Prototypes
int square(int x); 
double square(double y); 

// function main begins program execution each program


int main(void) { 
	cout << square(7) << endl; 
	cout << square(7.5) << endl; 
	return 0; // indicates successfuL termination 
} 

int square(int x) { 
	cout << "square of integer " << x << " is "; 
	return x*x; 
} 

double square(double y) {
	cout << "square of double " << y << " is r; 
	return y*y; 
} 

