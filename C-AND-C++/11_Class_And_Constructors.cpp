#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    // void initialize(int l, int b)
    // {
    //     length = l;
    //     breadth = b;
    // }
    Rectangle(int len, int br)
    {
        length = len;
        breadth = br;
    }
    int area()
    {
        return length * breadth;
    }
    void changeLength(int len)
    {
        length = len;
    }
};

int main()
{
    Rectangle r(10, 20);
    // r.initialize(10, 20);
    cout << r.area() << endl;
    r.changeLength(4);
    cout << r.area() << endl;
    return 0;
}