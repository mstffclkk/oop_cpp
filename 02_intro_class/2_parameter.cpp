#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
public:
    void displayMessage(string courseName)
    {
        cout<<"Welcome to the Grade Book for " << courseName << endl;
    }

};

int main()
{
    string nameOfCourse;
    //creates an object of class GradeBook named myGradeBook.
    GradeBook myGradeBook;

    cout<<"Please enter the course name:"<<endl;
    cin >> nameOfCourse;

    //myGradeBook's displayMessage member function
    myGradeBook.displayMessage(nameOfCourse);

}