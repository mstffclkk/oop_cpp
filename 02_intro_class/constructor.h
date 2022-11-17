#include <iostream>
#include <string>
using namespace std;


class GradeBook{
	
	public:
		// Public Declarations
		
		// constructor initializes courseName with string supplied as argument
		GradeBook(string name){
			setCourseName(name); // call set function to initialize courseName
		}
		
		// function that sets the course name
		void setCourseName(string name){
			courseName = name; // store the course name in the object
		}
		
		// function that gets the course name
		string getCourseName(){
			return courseName; // return the object's courseName
		}
		
		// function that displays a welcome message
		void displayMessage(){
			cout << "Welcome to the Grade Book for" << getCourseName() << "!" << endl;
		}
	private:
		// Private Declarations
		string courseName; // courseName for this GradeBook
};
