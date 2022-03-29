#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int sumfun(int x)
{
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int x;
    cin >> x;
    cout << sum(x) << endl;
    return 0;
}
