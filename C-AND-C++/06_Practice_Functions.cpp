#include <iostream>
using namespace std;

int add(int a, int b)
{
    int z;
    z = a + b;
    return z;
}

int main()
{
    int x = 10, y = 30, z;
    z = x + y;
    printf("The sum is %d", z);
    return 0;
}
