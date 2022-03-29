#include <iostream>
using namespace std;

// Printing numbers in descending order.....
void fun1(int n)
{
    if (n > 0)
    {
        printf("%d\t", n);
        fun1(n - 1);
    }
}

// printing numbers in ascending order
void fun2(int n)
{
    if (n > 0)
    {
        fun2(n - 1);
        printf("%d\t", n);
    }
}

int main()
{
    int n;
    cin >> n;
    fun1(n);
    cout << "\n";
    fun2(n);
    return 0;
}