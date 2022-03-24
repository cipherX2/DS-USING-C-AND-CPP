#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length = 10;
    p->breadth = 20;
    cout << (*p).length << endl;
    cout << (*p).breadth << endl;

    Rectangle *k; // we can remove struct in c++ code
    // k = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    k = new Rectangle;
    (*k).length = 20;
    (*k).breadth = 7;

    cout << k->length << endl;
    cout << k->breadth << endl;
    return 0;
}
