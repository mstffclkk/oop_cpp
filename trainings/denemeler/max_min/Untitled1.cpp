#include "GradeBook.h"
#include <string>
#include <iostream>
using namespace std;

GradeBook::GradeBook(string CourseName,int Grades[students][exams])
{
	setCourseName(CourseName);
	for(int i=0;i<studens;++i){
		for(int j=0;j<exams;++j){
			grades[i][j]=Grades[i][j];
		}
	}
}

GradeBook::~GradeBook()
{
}

int GradeBook::getMinimum(){
	
	int minimum=grades[0][0];
	for(int i=0;i<students;++i){
		for(int j=1;j<exams;++j){
			if(minimum > grades[i][j]){
				minimum=grades[i][j];
			}
		}
	}
	
	return minimum;
}

int GradeBook::getMaximum(){
	int maximum=grades[0][0];
	for(int i=0;i<students;++i){
		for(int j=1;j<exams;++j){
			if(maximum < grades[i][j]){
				maximum=grades[i][j];
			}
		}
	}
	
	return maximum;
	
}

int GradeBook::getAverage(){
	temp=0;
	for(int i=0;i<students;++i){
		for(int j=0;j<exams<++j){
			temp+=grades[i][j];
		}
	}
	return temp/(students*exams);
	
}

void GradeBook::outputBarChart(){
	
	
	
	
	
}
