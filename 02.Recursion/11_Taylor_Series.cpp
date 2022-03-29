#include <iostream>
using namespace std;

double taylorSeries(int x, int n)
{
    double r;
    static int p = 1, f = 1;
    if (n == 0)
        return 1;
    else
    {
        r = taylorSeries(x, n - 1);
        p *= x;
        f *= n;
        return r + (double)((double)p / (double)f);
    }
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << taylorSeries(x, n) << endl;
    return 0;
}