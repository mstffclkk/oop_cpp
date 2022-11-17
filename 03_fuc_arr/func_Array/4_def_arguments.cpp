#include <iostream>

using namespace std;

int boxVolume(int len=1, int width=1, int height=1 );

int main(void){
	
	cout << "default volume: " << boxVolume();
	cout << endl << boxVolume(10) << endl << boxVolume(10, 2) << endl << boxVolume(10, 2, 5);
	
	
}

int boxVolume(int len, int width, int height){
	return len*width*height;
}
