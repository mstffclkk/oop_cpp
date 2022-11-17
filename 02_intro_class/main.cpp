#include <iostream>
#include "constructor.h"

int main(){
	// create two GradeBook objects
	GradeBook gB1("Computer_programming");
	GradeBook gB2("Advance_programming");
	
	// display initial value of courseName for each GradeBook
	cout << "gradeBook1 created for the course: "<< gB1.getCourseName()
		<< endl << "gradeBook2 created for the course: " << gB2.getCourseName() << endl;
	
}
