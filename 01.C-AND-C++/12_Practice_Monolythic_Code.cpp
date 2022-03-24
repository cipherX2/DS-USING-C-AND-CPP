#include <iostream>
using namespace std;

int main()
{
    int length, breadth;
    cout << "Enter lenght and breadth: " << endl;
    cin >> length >> breadth;
    int area;
    area = length * breadth;
    int perimeter = 2 * (length + breadth);
    cout << "Area is: " << area << "\t"
         << "Perimeter: " << perimeter << endl;
}