//ForDemo1 - insere um loop count

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int nLoopCount;
    cout << "Enter loop count: ";
    cin >> nLoopCount;

    for (; nLoopCount > 0; nLoopCount--)
    {
        cout << "Only " << nLoopCount
             << " loops to go" << endl;

    }
    cout << "Press enter to continue... " << endl;

    cin.ignore(10, '\n');
    cin.get();
    return 0;
}