#include <iostream>
using namespace std;

// Tail Recursion -- > The recursive call is done at the end.
void tailRecursion(int n)
{
    if (n > 0)
    {
        printf("%d\t", n);
        tailRecursion(n - 1);
    }
}

// it is advised to convert tail recursion to loop because the recursion takes more space
// i.e, O(n) whereas loop takes O(1) time.

void recursionToLoop(int x)
{
    while (x > 0)
    {
        printf("%d\t", x);
        x--;
    }
}

int main()
{
    int x;
    cin >> x;
    tailRecursion(x);
    return 0;
}
