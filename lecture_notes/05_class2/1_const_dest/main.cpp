#include <iostream>
#include "CreateAndDestroy.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
//function protoype
void create(void);

//global object
CreateAndDestroy first(1,"(global before main)");

int main() {
	cout << "\nMAIN FUNC: EXECUTION BEGINS" << endl;
	
	CreateAndDestroy second(2,"(local in main)");
	static CreateAndDestroy third(3,"(local static in main)");
	
	create();
	
	cout << "\nMAIN FUNC: EXECUTION RESUMES" << endl;
	CreateAndDestroy fourth(4,"(local in main)");
	cout << "\nMAIN FUNC: EXECUTION " << endl;
	
	return 0;
}

void create(void)
{
	cout << "\nCREATE FUNC: EXECUTION BEGINS" << endl;
	CreateAndDestroy fifth(5,"(local in create)");
	static CreateAndDestroy  sixth(6,"(local static in create)");
	CreateAndDestroy  seventh(7,"(local in create)");
	cout << "\nCREATE FUNC: EXECUTION ENDS" << endl;

}
