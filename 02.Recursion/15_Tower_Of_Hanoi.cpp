#include <iostream>
using namespace std;

void TOH(int n, int A, int B, int C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        printf("From %d to %d\n", A, C);
        TOH(n - 1, B, A, C);
    }
}

int main()
{
    int n, A, B, C;
    cin >> n >> A >> B >> C;
    TOH(n, A, B, C);
    return 0;
}
