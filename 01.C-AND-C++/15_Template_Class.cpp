#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
private:
    T a, b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::add()
{
    T c;
    c = a + b;
    return c;
}

template <class T>
T Arithmetic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}

int main()
{
    Arithmetic<int> ar(10, 20);
    cout << ar.add() << "\t" << ar.sub() << endl;
    Arithmetic<float> arr(40, 20);
    cout << arr.add() << "\t" << arr.sub() << endl;
    return 0;
}
