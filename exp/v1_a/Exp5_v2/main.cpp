#include <iostream>
#include <cstdlib>
#include "GradeBookv2.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int gradesArray[GradeBookv2::students][GradeBookv2::exams];
	
	for(int i = 0;i<GradeBookv2::students;i++){
		for(int j=0;j<GradeBookv2::exams;j++){
			gradesArray[i][j] = rand() % 100;
			
		}
		
	}
	GradeBookv2 myGradeBook("CS101 Introduction to C++ Programming", gradesArray);
	myGradeBook.displayMessage();
	myGradeBook.processGrades();
	return 0;
}
