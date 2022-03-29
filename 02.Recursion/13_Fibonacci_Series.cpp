#include <iostream>
using namespace std;

int arr[10];

int fib(int n)
{
    if (n == 1 || n == 0)
        return n;
    else
        return fib(n - 2) + fib(n - 1);
}

int fib1(int n)
{
    if (n <= 1)
    {
        arr[n] = n;
        return n;
    }
    else
    {
        if (arr[n - 2] == -1)
            arr[n - 2] = fib1(n - 2);
        if (arr[n - 1] == -1)
            arr[n - 1] = fib1(n - 1);
        return arr[n - 2] + arr[n - 1];
    }
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    for (int i = 0; i < 10; i++)
        arr[i] = -1;
    cout << fib1(n) << endl;
    return 0;
}
