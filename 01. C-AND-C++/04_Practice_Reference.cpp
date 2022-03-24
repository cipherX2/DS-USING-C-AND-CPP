#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &r = a;
    cout << a << endl;
    cout << r << endl;
    r++;
    cout << r << endl;
    cout << a << endl;
    cout << sizeof(r) << endl;

    int b = 30;
    r = b; // Here the value of a will change as the value of r is changing.
    cout << a << endl;
    cout << r << endl;
    return 0;
}
