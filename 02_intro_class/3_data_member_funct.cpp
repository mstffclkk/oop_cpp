#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
public:
	// Public Declarations
    void setCourseName(string name) //member functions
    {
        courseName = name;
    }

    string getCourseName()			//member functions
    {
        return courseName;
    }

    void displayMessage()			//member functions
    {
        cout<<"Welcome to the Grade Book for " << getCourseName() << "!" <<endl;
    }

private:
	// Private Declarations
    string courseName; 				// private data member

};

int main()
{
    string nameofCourse;

    GradeBook myGradeBook;

    cout << "imitial course name is: " << myGradeBook.getCourseName() << endl;
    
    cout << "Please enter the course name: " << endl;
    cin >> nameofCourse;

    myGradeBook.setCourseName(nameofCourse);
    cout << endl;

    myGradeBook.displayMessage();

    
}
