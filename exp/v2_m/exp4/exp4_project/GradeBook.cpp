#include "GradeBook.h"
#include <iostream>
#include <string>
using namespace std;

GradeBook::GradeBook(string name)
{
	setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
	if(name.length() <= 30)
		courseName = name;
	else{
		courseName = name.substr(0, 30);
		cout<<"Name \""<<name<<"\" exceeds maximum length(30).\n"<<"Limiting courseName to first 30 characters.\n"<<endl;
	}
}
string GradeBook::getCourseName()
{
	return courseName;
}

void GradeBook::displayMessage()
{
	cout<<"Welcome to the Grade Book for "<<getCourseName()<<"!"<<endl;
}

void GradeBook::determineClassAverage(int x)
{
	int total;
	int i;
	double average = 0.0;
	number_of_students = x;
	for (i=1;i<number_of_students+1;i++)
	{
		cout << "enter the student" << i << ": ";
		int grades = 0;
		cin>>grades;
		total = total + grades;
		average = total / number_of_students;
	}
	cout<<"Average grade of the class:"<<average<<endl;
		
}

void GradeBook::determineClassAverage()
{
	
	double total = 0;						// total grades that come from user
	int count = 0;		// number of student initially		
	cout << "Enter the grade or -1 to quit ";							
	int grades = 0;
	
	
	
	while (grades!=-1)					// Sentinel or signal value												
	{																	
		total = total + grades;			 // total grade			
		count = count + 1; // total students	
		cout << "Enter the grade or -1 to quit: ";						
		cin >> grades;		
		average = total / number_of_students;										
	}
	cout<<"Average grade of the class:"<<average<<endl;

	
}
/*
void GradeBook::inputGrades()
{
	string A;
	string B;
	string C;
	string D;
	string F;
	
	
}


*/













