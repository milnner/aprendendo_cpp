#include <cstdio>
#include <cstdlib>
#include <iostream> 

using namespace std;

int main()
{
    int nArg1;
    cout << "Enter arg1: " ;
    cin >> nArg1;

    int nArg2;
    cout << "Enter arg2: ";
    cin >> nArg2;

    if (nArg1 > nArg2)
    {
        cout << "Argument 1 is greater than argument 2"
             << endl;
    }
    else
    {
        cout << "Argument 1 is not greater than argument 2"
             << endl;
    }
    cin.ignore(10, '\n');
    cout << "press enter to continue" ;
    cin.get();
    return 0;
}