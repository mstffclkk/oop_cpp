#include "GradeBook.h"
#include <iostream>
using namespace std;
GradeBook::GradeBook(string Name, const int gradesArray[students])
{
	setCourseName(Name);
	for(int grade = 0;grade<students;grade++){
		grades[grade] = gradesArray[grade];
	}

}

GradeBook::~GradeBook()
{
}

void GradeBook::setCourseName(string name)
{
	courseName = name;
}

int GradeBook::getMinimum()
{
	int lowGrade = 100;
	for (int i=0;i<students;i++){
		if (grades[i] < lowGrade){
			lowGrade = grades[i];
		}
	}
	return lowGrade;
}

int GradeBook::getMaximum()
{
	int highGrade = 0;
	for(int i=0;i<students;i++){
		if(grades[i] > highGrade){
			highGrade = grades[i];
		}
	}
	return highGrade;
}

int GradeBook::getAverage()
{
	int total = 0;
	for(int i=0;i<students;i++){
		total = total + grades[i];		
	}
	double average = 0.0;
	average = double(total) / students;
	return average;
}

void GradeBook::outputBarChart()
{
	const int frequencySize = 11;
	int frequency[frequencySize] = {};
	
	for (int i = 0;i < students;++i){
		++frequency[grades[i] / students];
	}
	
	for (int count = 0;count < frequencySize;++count){
		if(count == 0){
			cout<<"  0-9:";
		}
		else if (count == 10){
			cout<<"  100:";
		}
		else{
			cout<<count*10<<"-"<<(count*10)+ 9<<":";
		}
		
		for(int stars = 0;stars<frequency[count];++stars){
			cout<<"*";
		}
		cout<<endl;
	}
}

void GradeBook::outputGrades()
{
	for (int i=0;i<students;i++){
		cout <<"Student"<<i+1<<":"<<grades[i]<<endl;
	}
	cout<<endl;
}

void GradeBook::processGrades()
{
	outputGrades();
	cout<<"Class Average is "<<getAverage()<<endl;
	cout<<"Lowest Grade is "<<getMinimum()<<endl;
	cout<<"Highest Grade is "<<getMaximum()<<endl;
	cout<<endl;
	outputBarChart();
}

void GradeBook::displayMessage()
{
	cout << "Welcome to the GradeBook for " << getCourseName() << "!" << endl;
}

string GradeBook::getCourseName()
{
	return courseName;					
}





