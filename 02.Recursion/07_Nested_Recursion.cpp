#include <iostream>
using namespace std;

// Recursion inside Recursion.

int fun(int n)
{
    if (n > 100)
        return n - 10;
    else
        fun(fun(n + 11));
}

int main()
{
    int x;
    cin >> x;
    cout << fun(x) << endl;
    return 0;
}