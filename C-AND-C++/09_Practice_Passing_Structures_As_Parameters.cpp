#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

// Call By Value
int area(Rectangle r1)
{
    return (r1.length * r1.breadth);
}

//Call By Reference
int areaByReference(Rectangle &r1)
{
    return (r1.length * r1.breadth);
}

//Call By Address
void changeLength(Rectangle *p, int value)
{
    p->length = value;
}

int main()
{
    Rectangle r = {10, 5};
    cout << area(r) << endl;

    cout << areaByReference(r) << endl;

    changeLength(&r, 15);
    cout << r.length << "\t" << r.breadth << endl;
    return 0;
}
