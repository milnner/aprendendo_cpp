//SquareDemo
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

double square(double doubleVar)
{
    return doubleVar * doubleVar;
}

void displayExplanation()
{
    cout << "This Program sums square of mutiple\n"
         << "series of numbers. Terminate each sequence\n"
         << "by entering a negative number.\n"
         << "Terminate the series by entering an\n"
         << "empty sequence.\n" << endl;
    return;
}

double sumSquareSequence(void)
{
    double accumulator = 0.0;
    for (;;)
    {
        double dValue;
        cout << "Enter the next number: " ;
        cin >> dValue;

        if (dValue < 0)
        {
            break;
        }

        double value = square(dValue);
        accumulator += value;
    }

    return accumulator;
}

int main()
{
    displayExplanation();
    for (;;)
    {
        cout << "Enter the next sequence" << endl;
        double accumulatedValue = sumSquareSequence();

        if (accumulatedValue <= 0)
        {
            break;
        }

        cout << "the total of the values squared is "
             << accumulatedValue << endl << endl;
    }
    cout << "press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}