#include "GradeBookv2.h"
#include <iostream>
using namespace std;
GradeBookv2::GradeBookv2(string Name, const int gradesArray[students][exams])
{
	setCourseName(Name);
	for(int grade = 0;grade<students;grade++){
		for (int exam = 0;exam<exams;exam++){
			grades[grade][exam] = gradesArray[grade][exam];
		}
		
	}

}

GradeBookv2::~GradeBookv2()
{
}

void GradeBookv2::setCourseName(string name)
{
	courseName = name;
}

int GradeBookv2::getMinimum()
{
	int lowGrade = 100;
	for (int i=0;i<students;i++){
		for (int j=0;j<exams;j++){
			if (grades[i][j] < lowGrade){
			lowGrade = grades[i][j];
		}
			
		}
		
	}
	return lowGrade;
}

int GradeBookv2::getMaximum()
{
	int highGrade = 0;
	for(int i=0;i<students;i++){
		for (int j=0;j<exams;j++){
			if(grades[i][j] > highGrade){
			highGrade = grades[i][j];
		}
			
		}
		
	}
	return highGrade;
}

int GradeBookv2::getAverage()
{
	double total = 0;
	for(int i=0;i<students;i++){
		for(int j =0;j<exams;j++){
			total = total + grades[i][j];	
			
		}
			
	}
	double average = 0.0;
	average = total / (students*exams);
	return average;
}

void GradeBookv2::outputBarChart()
{
	const int frequencySize = 11;
	int frequency[frequencySize] = {};
	
	for (int i = 0;i < students;++i){
		for(int j=0;j<exams;j++){
			cout << ++frequency[grades[i][j] / students] << endl;
		}
		
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

void GradeBookv2::outputGrades()
{
	double avg = 0.0;
	for (int i=0;i<students;i++){
		for(int j=0;j<exams;j++){
			cout <<"Student "<<i+1<<"     Exam"<<j+1<<":"<<grades[i][j]<<endl;
		}
	}
	cout <<endl;
	int total[exams] = {};
	
	for (int k=0;k<exams;k++){
		for (int l=0;l<students;l++){
			total[k] = total[k] + grades[l][k];		
		}
	}
	for (int m=0;m<exams;m++){
		avg = double(total[m]) / students;
		cout << "Exam "<<m+1<<" average: "<<avg<<endl;
	}
	
	cout<<endl;
}

void GradeBookv2::processGrades()
{
	outputGrades();
	cout<<"Class Average is "<<getAverage()<<endl;
	cout<<"Lowest Grade is "<<getMinimum()<<endl;
	cout<<"Highest Grade is "<<getMaximum()<<endl;
	cout<<endl;
	outputBarChart();
}

void GradeBookv2::displayMessage()
{
	cout << "Welcome to the GradeBook for " << getCourseName() << "!" << endl;
}

string GradeBookv2::getCourseName()
{
	return courseName;					
}





