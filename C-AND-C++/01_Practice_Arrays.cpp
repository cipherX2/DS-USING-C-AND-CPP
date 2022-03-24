#include <iostream>
using namespace std;

int main()
{
    int A[5];
    A[0] = 1;
    A[1] = 2;
    A[2] = 3;
    A[3] = 4;
    A[4] = 5;

    cout << sizeof(A) << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }

    printf("%d\n", A[2]);

    // Initializing an array
    int N[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", N[i]);
    }

    // Printing elements with foreach loop
    cout << "Printing elements with for each loop\n";
    for (int x : A)
    {
        cout << x << endl;
    }

    return 0;
}
