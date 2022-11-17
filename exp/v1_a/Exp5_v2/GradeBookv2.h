#ifndef GRADEBOOKV2_H
#define GRADEBOOKV2_H
#include <string>
using namespace std;
class GradeBookv2
{
	
	public:
		static const int students = 10;
		static const int exams = 3;
		void setCourseName(string);
		int getMinimum();
		int getMaximum();
		int getAverage();
		void outputBarChart();
		void outputGrades();
		void processGrades();
		void displayMessage();
		string getCourseName();	
		
		
		GradeBookv2(string, const int [students][exams]);
		~GradeBookv2();
	protected:
	private:
		int grades[students][exams];
		string courseName;
};

#endif
