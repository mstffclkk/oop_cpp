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
	double tot;
	int counter;
	double average = 0.0;
	number_of_students = tot;
	for (counter=1;counter<number_of_students+1;counter++)
	{
		cin>>tot;
		grades[counter] = tot;
		average = (average + grades[counter]) / number_of_students;
	}
	cout<<"Average grade of the class:"<<average<<endl;
		
}
/*
void GradeBook::determineClassAverage()
{
	int grade;
	int count = 0;
	double sum = 0.0;
	double average = 0.0;
	cout<<"Please enter grade"<<endl;
	cin>>grade;
	if (grade > 0)
	{
		sum = sum + grade;
		cin>>grade;
		count = count + 1 ;
	}
	else{
		cout<<"Wrong grade!!"<<endl;
	}
	average = sum / count;
	
}

void GradeBook::inputGrades()
{
	string A;
	string B;
	string C;
	string D;
	string F;
	
	
}
*/















