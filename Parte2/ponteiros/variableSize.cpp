//variableSize
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    bool b; int i; char c; float f; double d;
    long l; long long ll; long double ld;

    cout << "siseof a b = " << sizeof(b) << endl;
    cout << "siseof a i = " << sizeof(i) << endl;
    cout << "siseof a c = " << sizeof(c) << endl;
    cout << "siseof a f = " << sizeof(f) << endl;
    cout << "siseof a d = " << sizeof(d) << endl;
    cout << "siseof a l = " << sizeof(l) << endl;
    cout << "siseof a ll = " << sizeof(ll) << endl;
    cout << "siseof a ld = " << sizeof(ld) << endl;

    cout << "press Enter to continue";
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}