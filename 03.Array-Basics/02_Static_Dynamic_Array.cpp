#include <iostream>
using namespace std;

int main()
{
    int A[5], n;
    cin >> n;
    int B[n];
    int *p;
    p = new int[5];
    // p = (int*)malloc(n*sizeof(int));
    delete[] p;
    return 0;
}
