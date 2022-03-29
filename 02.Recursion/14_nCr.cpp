#include <iostream>
using namespace std;

// Using factorial
int fact(int x)
{
    if (x == 0)
        return 1;
    return fact(x - 1) * x;
}

double nCr(int n, int r)
{
    int t1, t2;
    t1 = fact(n);
    t2 = fact(r) * fact(n - r);
    return (double)t1 / (double)t2;
}

// Using Pascal's Triangle
int pascalTri(int n, int r)
{
    if (r == 0 || n == r)
        return 1;
    else
        return pascalTri(n - 1, r - 1) + pascalTri(n - 1, r);
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;
    cout << pascalTri(n, r) << endl;
    return 0;
}