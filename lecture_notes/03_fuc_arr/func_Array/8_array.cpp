#include <iostream> 
using namespace std; 
/*
int main(){
	//int b[2][2]= { {1,2}, {3,4}};
	
	int arr[3]={1,2,3};
	
	for(int i = 0; i<3 ; i++)
		cout << arr[i] << endl;
}
*/

int main() {
	
	//int twoDimArray[2][4] = { 6, 0, 9, 6, 2, 0, 1, 1 };
	int twoDimArray[2][4] = { { 6, 0, 9, 6 } , { 2, 0, 1, 1 } };

    for(int i = 0; i < 2; i++)
    	for(int j = 0; j < 4; j++)
    		cout << twoDimArray[i][j];
      		cout << endl;
			
	
    	

  return 0;

}
