#include <iostream>
#include <string>
using namespace std;


class GradeBook{
	
	public:
		// Public Declarations
		GradeBook(string); // constructor initializes courseName
		void setCourseName(string); // function that sets the course name
		string getCourseName(); 	// function that gets the course name
		void displayMessage(); 		// function that displays a welcome message
		
	private:
		// Private sections
		string courseName; // courseName for this GradeBook
};


