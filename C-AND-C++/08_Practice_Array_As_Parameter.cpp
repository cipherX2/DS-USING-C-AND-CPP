#include <iostream>
using namespace std;

// Arrays are always passed by address. For Example A[] is a pointer to an array, i.e A[]
//or we can replace a A[] with *A that is a general pointer which can pointer every type.

void fun(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}

void fun1(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}

int *fun2(int size)
{
    int *p;
    p = new int[size];
    for (int i = 0; i < size; i++)
        p[i] = i + 1;
    return p;
}

int main()
{
    int A[] = {1, 22, 3, 4, 5};
    int n = 5;
    cout << sizeof(A) / sizeof(int) << endl;

    for (int x : A)
    {
        cout << x << "\t";
    }
    fun(A, n);
    fun1(A, n);
    int *ptr = fun2(n);
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << "\t";
    }
    return 0;
}
