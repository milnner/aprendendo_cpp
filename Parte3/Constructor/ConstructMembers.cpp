//ConstructMember

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Course 
{
    public:
        Course()
        {
            cout << "Constructing Course" << endl; 
        }
};

class Student
{
    public:
        Student()
        {
            cout << "Constructing Student" << endl;
            semesterHours = 0;
            gpa = 0.0;
        }

    protected:
        int semesterHours;
        double gpa;
};

class Teacher
{
    public:
        Teacher()
        {
            cout << "Constructing Teacher" << endl;
        }
    protected:
        Course c;
};

class TutorPair
{
    public:
        TutorPair()
        {
            cout << "Constructing TutorPair" << endl;
            noMeetings;
        }

    protected:
        Student student;
        Teacher teacher;
        int noMeetings;
};

int main()
{
    cout << "Creating a TutorPair object" << endl;
    TutorPair tp;

    cout << "press Enter to continue" << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}