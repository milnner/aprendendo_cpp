//ForDemo2 -insere um loop for 

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int nLoopCount;
    cout << "Enter loop cont: " ;
    cin >> nLoopCount;

    for (int n = 1;n <= nLoopCount; n++)
    {
        cout << "We've fineshed " << n 
             << " Loops" << endl;
    };
    cout << "Press enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}