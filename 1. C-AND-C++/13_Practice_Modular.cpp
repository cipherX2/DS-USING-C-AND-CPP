#include <iostream>
using namespace std;

int area(int len, int br)
{
    return len * br;
}

int perimeter(int len, int br)
{
    return 2 * (len + br);
}

int main()
{
    int area_rectangle = area(10, 20);
    cout << "Area of rectangle is : " << area_rectangle << endl;
    int perimeter_rectangle = perimeter(15, 2);
    cout << "Perimeter of rectangle is : " << perimeter_rectangle << endl;
    return 0;
}
