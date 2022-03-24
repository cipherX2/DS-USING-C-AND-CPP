#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(Rectangle *r, int l, int b)
{
    r->length = 10;
    r->breadth = 5;
}

int area(Rectangle r)
{
    return r.length * r.breadth;
}

void changeLength(Rectangle *r, int l)
{
    r->length = l;
}

int main()
{
    struct Rectangle r;
    initialize(&r, 10, 5);
    area(r);
    changeLength(&r, 15);
    return 0;
}
