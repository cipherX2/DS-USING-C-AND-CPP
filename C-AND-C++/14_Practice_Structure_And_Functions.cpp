#include <iostream>
using namespace std;

struct Rectangle
{
    int length, breadth;
};

int area(Rectangle i)
{
    return i.length * i.breadth;
}

int perimeter(Rectangle k)
{
    return 2 * (k.breadth + k.length);
}

int main()
{
    Rectangle r = {0, 0};
    cin >> r.length >> r.breadth;
    cout << "Area is: " << area(r) << "\tPerimeter is: " << perimeter(r) << endl;
}