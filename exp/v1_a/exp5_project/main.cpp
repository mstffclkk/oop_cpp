#include <iostream>
#include <cstdlib>
#include "GradeBook.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int gradesArray[GradeBook::students];
	
	for(int i = 0;i<GradeBook::students;i++){
		gradesArray[i] = rand() % 100;
	}
	GradeBook myGradeBook("CS101 Introduction to C++ Programming", gradesArray);
	myGradeBook.displayMessage();
	myGradeBook.processGrades();
	return 0;
}
