#include <iostream>
using namespace std;

// Call by Value
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

// Call by address
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//Call By Reference
void swapByReference(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1 = 10, num2 = 20;
    int sum = add(num1, num2);
    cout << sum << endl;

    int x = 10, y = 30;
    cout << x << "\t" << y << endl;
    swap(&x, &y);
    cout << x << "\t" << y << endl;

    int i = 12, p = 21;
    cout << x << "\t" << y << endl;
    swapByReference(x, y);
    cout << x << "\t" << y << endl;

    return 0;
}
