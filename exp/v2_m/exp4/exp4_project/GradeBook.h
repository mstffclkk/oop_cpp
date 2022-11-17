#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include "GradeBook.h"
#include <iostream>
#include <string>
using namespace std;
class GradeBook
{
	private:
		string courseName;
		int number_of_students;
	public:
		GradeBook(string);
		void setCourseName(string);
		string getCourseName();
		void displayMessage();
		void determineClassAverage(int);
	
		void determineClassAverage();
		//void inputGrades();
		//void displayGradeReport();
		
		
	
};

#endif
