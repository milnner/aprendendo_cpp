//Constructor 
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Student
{
    public:
        Student()
        {
            cout << "Constructing student" << endl;
            semesterHours = 0;
            gpa = 0.0;
        }
    protected:
        int semesterHours;
        double gpa;
};

int main()
{
    cout << "Creating a new Student object" << endl;
    Student s;

    cout << "Creating a new object off the heap" << endl;
    Student* pS = new Student;

    cout << "press Enter to continue" << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}