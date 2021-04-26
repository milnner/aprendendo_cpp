//printArgs
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberOfArgs, char* charArgs[])
{
    cout << "Number of Args: " << nNumberOfArgs << endl;
    
    cout << "The Args: " << endl;
    for (int i; i < nNumberOfArgs; i++, charArgs++) 
    {
        cout << *charArgs  << endl;
    }
    cout << "press Enter to continue";
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}