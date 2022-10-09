
// includes input/output stream header
// To output data to the screen
#include<iostream>
using namespace std;

class GradeBook
{
public:
    // function that displays a welcome message to the GradeBook user
    void displayMessage()
    {
        cout<<"Welcome to the Grade Book!"<<endl;
    }
    
};

//  function main begins program execution every C++ program must have a main function
int main()
{
    // create a GradeBook object named myGradeBook
    GradeBook myGradeBook;
    // call myGradeBook's displayMessage function
    myGradeBook.displayMessage();
}











