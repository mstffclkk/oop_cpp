#include <iostream>

using namespace std;

class Box{
	
	public:
		friend void printWidth(Box b);
		void setWidth(double wid);
		
	private:
		double width;
};

void Box::setWidth(double wid){
	width = wid;
}

void printWidth(Box b){
	cout << "width of box : " << b.width << endl;
}

main(){
	Box box;
	box.setWidth(10.0);
	printWidth(box);
}








