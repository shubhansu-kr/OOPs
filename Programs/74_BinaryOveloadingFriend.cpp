// Binary overloading using friend function

#include <iostream>
using namespace std;

class A
{
    int x, y;

public:
    A(int a, int b) : x(a), y(b) {}

    void output()
    {
        cout << "x : " << x << " | y : " << y << endl;
    }
    friend void operator+(A &a, A &b);
};

void operator+(A &a, A &b)
{
    a.x += b.x;
    a.y += b.y;
}

int main()
{
    A obj1(3, 5);
    A obj2(6, 3);

    obj1.output();
    obj2.output();

    // Calling function 
    operator+(obj1, obj2);
    obj1.output();
    obj2.output();

    // Operand 
    obj2 + obj1;
    obj1.output();
    obj2.output();

    return 0;
}