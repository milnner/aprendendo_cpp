//breakDemo

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    int accumulator;
    cout << "this program sums values from the user\n"
         << "terminate by a negative number"
         << endl;

    for (;;)
    {
        int nValue;
        cout << "Enter the next value: " ;
        cin >> nValue;

        if (nValue < 0) 
        {
            break;
        }
        accumulator += nValue;
    }
    cout << "\nThe total is "<<accumulator << endl;

    cout << "press Enter to be continue... " << endl;
    cin.ignore(10,'\n');
    cin.get();
    return 0;
}