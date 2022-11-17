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

int main(){
	// create two GradeBook objects
	GradeBook gB1("Computer_programming");
	GradeBook gB2("Advance_programming");
	
	// display initial value of courseName for each GradeBook
	cout << "gradeBook1 created for the course: "<< gB1.getCourseName()
		<< endl << "gradeBook2 created for the course: " << gB2.getCourseName() << endl;
	
}
