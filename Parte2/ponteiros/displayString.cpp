//diplayString
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
    const char *szString = "Milnner";
    cout << "The array is '" << szString << "'" << endl;

    cout << "Display the string as an array: ";
    for(int i; i < 7; i++)
    {
        cout << szString[i];
    }
    cout << endl;

    cout << "Display the string as a pointer: ";

    const char *pszString = szString;
    while(*pszString)
    {
        cout << *pszString;
        pszString++;
    }
    
    cout << endl;

    cout << "press Enter to continue";
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}