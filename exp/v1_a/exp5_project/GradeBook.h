#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <string>
using namespace std;
class GradeBook
{
	
	public:
		static const int students = 10;
		void setCourseName(string);
		int getMinimum();
		int getMaximum();
		int getAverage();
		void outputBarChart();
		void outputGrades();
		void processGrades();
		void displayMessage();
		string getCourseName();	
		
		
		GradeBook(string, const int []);
		~GradeBook();
	protected:
	private:
		int grades[students];
		string courseName;
};

#endif
