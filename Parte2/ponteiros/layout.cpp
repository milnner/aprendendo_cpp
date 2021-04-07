//layout
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    int start;
    int n; long l; long long ll;
    float f; double d; long double ld;
    int end;

    cout.setf(ios::hex);
    cout.unsetf(ios::dec);

    cout << "--- " << &start << endl;
    cout << "&n " << &n << endl;
    cout << "&l " << &l << endl;
    cout << "&ll " << &ll << endl;
    cout << "&f " << &f << endl;
    cout << "&d " << &d << endl;
    cout << "&ld " << &ld << endl;
    cout << "&end " << &end << endl;


    cout << "press Enter to continue";
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}