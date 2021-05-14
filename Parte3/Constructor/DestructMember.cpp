//DestructMember
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

class Course
{
    public:
        Course()
        {  
            cout << "Constructing Course" << endl;
        }
        ~Course()
        {
            cout << "Destructing Course" << endl;
        }
};

class Student
{
    public: 
        Student()
        {
            cout << "Constructing Student" << endl;
        }
        ~Student()
        {
            cout << "Destructing Student" << endl;
        }
};

class Teacher
{
    public:
        Teacher()
        {
            cout << "Constructing Teacher" << endl;
            pC = new Course;
        }
        ~Teacher()
        {
            cout << "Destructing Teacher" << endl;
            delete pC;
        }

    protected:
        Course* pC;
};

class TutorPair
{
    public:
        TutorPair()
        {
            cout << "Constructing TutorPair" << endl;
        }
        ~TutorPair()
        {
            cout << "Destructing TutorPair" << endl;
        }

    protected:
        Student student;
        Teacher teacher;
};

TutorPair* fn()
{
    cout    << "Creating a TutorPair object in a function fn()"
            << endl;
    TutorPair tp;

    cout << "Allocating TutorPair off the heap" << endl;
    TutorPair* pTP = new TutorPair;

    cout << "Returnig from fn()" << endl;
    return pTP;
}

int main()
{
    TutorPair* pTPReturned = fn();
    cout << "Return heap object to the heap" << endl;
    delete pTPReturned;

    cout << "press Enter to continue" << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
