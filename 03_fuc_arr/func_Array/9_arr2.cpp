#include <iostream> 
using namespace std;

void printArr(const int a[][3]);

const int i=2;
const int j=3;

int main(void){
	
	int arr1[i][j]={{1,2,3},{4,5,6}};
	int arr2[i][j]={1,2,3,4,5};
	int arr3[i][j]={{1,2},{4}};
	
	cout << "Values arr1: " << endl;
	printArr(arr1);
	cout << "\nValues arr2: " << endl;
	printArr(arr2);
	cout << "\nValues arr3: " << endl;
	printArr(arr3);	
	
	return 0;
}

void printArr(const int a[][3]){
	
    for(int x = 0; x < i; ++x)
    	for(int y = 0; y < j; ++y)
    		cout << a[x][y];
      		cout << endl;
}





















