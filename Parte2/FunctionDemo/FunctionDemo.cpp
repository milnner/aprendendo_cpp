//FunctioDemo
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void displayExplanation (void)
{
    cout << "This Program sums mutiple series\n"
         << "of numbers. Terminate each sequence\n"
         << "by entering a negative number.\n"
         << "Terminate the series by entering an\n"
         << "empty sequence.\n";
    return;
}

int sumSequence(void)
{
    int accumulator;

    for (;;)
    {
        int nValue;
        cout << "Enter next number: ";
        cin >> nValue;

        if (nValue < 0)
        {
            break;
        }

        accumulator += nValue;
    }

    return accumulator;
}

int main()
{
    displayExplanation();

    for (;;)
    {
        cout << "Enter next sequence" << endl;

        int accumulatedValue = sumSequence();

        if (accumulatedValue == 0)
        {
            break;
        }

        cout << "The total this is " <<  accumulatedValue
             << endl << endl;
    }

    cout << "press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}