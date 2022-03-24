#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    cout << a << endl;
    cout << *p << endl;

    // Pointer to an array

    int arr[5] = {1, 2, 3, 4, 5};
    int *b;
    // b = arr; is same as b = arr[0]
    b = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << *(b + i) << endl;
    }

    // Create array in heap memory
    int *c;
    c = (int *)malloc(5 * sizeof(int));
    c[0] = 11;
    c[1] = 123;
    c[2] = 43;
    c[3] = 54;
    c[4] = 65;

    int *q;
    q = new int[10]; // just like malloc function in c

    delete [ ]q; // Used for deallocating the memory
    free(c);
    
    // Pointers take same amount memory regardless of their type.
    return 0;
}
