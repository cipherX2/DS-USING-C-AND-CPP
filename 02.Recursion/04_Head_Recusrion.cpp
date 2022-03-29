#include <iostream>
using namespace std;

// Head-Recursion --> If there are no statement before the recursive call then it's head-recursion.

void headRecursion(int x)
{
    if (x > 0)
    {
        headRecursion(x - 1);
        printf("%d\t", x);
    }
}

// It is not easy to convert the head-recursion into loop.But it can be converted...

void recursionToLoop(int x)
{
    int i = 1;
    while (x > 0)
    {
        printf("%d\t", i);
        x--;
    }
}

int main()
{
    int x;
    cin >> x;
    headRecursion(x);
    return 0;
}