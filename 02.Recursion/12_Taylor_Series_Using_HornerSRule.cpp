#include <iostream>
using namespace std;

double taylorHornerLoop(int x, int n)
{
    double res = 1;
    for (; n > 0; n--)
    {
        res = 1 + ((double)x / (double)n) * res;
    }
    return res;
}

double taylorSlowRecursion(int x, int n)
{
    double res;
    static int p = 1, f = 1;
    if (n == 0)
        return 1;
    else
    {
        res = taylorSlowRecursion(x, n - 1);
        p *= x;
        f *= n;
        return res + ((double)p / (double)f);
    }
}

double taylorSeriesRecursionFast(int x, int n)
{
    static double r = 1;
    if (n == 0)
        return r;
    else
    {
        r = 1 + ((double)x / (double)n) * r;
        return taylorSeriesRecursionFast(x, n - 1);
    }
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << taylorHornerLoop(x, n) << endl;
    cout << taylorSlowRecursion(x, n) << endl;
    cout << taylorSeriesRecursionFast(x, n) << endl;
    return 0;
}
