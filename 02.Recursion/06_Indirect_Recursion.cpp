#include <iostream>
using namespace std;
void funA(int);
void funB(int);

//  A ---------> B --------> C--|
//  ^---------------------------v

int main()
{
    int x;
    cin >> x;
    funA(x);
    return 0;
}

void funA(int n)
{
    if (n > 0)
    {
        printf("%d\t", n);
        funB(n - 1);
    }
}

void funB(int n)
{
    if (n > 1)
    {
        printf("%d\t", n);
        funA(n / 2);
    }
}