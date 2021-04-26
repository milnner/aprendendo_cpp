//displayArray
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void displayArray(int intArray[], int nSize)
{
    cout << "The value of the array is: \n" ;

    int *pArray = intArray;
    for (int n =0; n < nSize; n++, pArray++)
    {

        cout << n << ": " << *pArray << "\n";
    }
    cout << endl;
    return;
}

int main()
{
    int array[4] = {4, 3, 2, 1};
    displayArray(array, 4);
    
    cout << "press Enter to continue";
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}