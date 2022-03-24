#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

struct Cards
{
    int face;
    int shape;
    int size;
};

int main()
{
    struct Rectangle x;
    x.length = 12;
    x.breadth = 10;

    printf("Area is: %d\n", (x.length * x.breadth));
    struct Cards deck[52] = {{1, 0, 0}, {2, 0, 0}, {3, 0, 0}, {1, 1, 0}};

    return 0;
}