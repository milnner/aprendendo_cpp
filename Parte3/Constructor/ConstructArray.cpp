//ConstructArray
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Student
{
    public:
        Student()
        {   
        cout << "Constructing Student" << endl;
        }
};

int main()
{
    cout << "Creating a array of 5 students objects" << endl;
    Student s[5];

    cout << "press Enter to continue" << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}