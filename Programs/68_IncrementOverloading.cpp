// Overloading Increment operator

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

    // Operator overloading for '-' definition (Using member function )
    void operator-()
    {
        x = -x;
        y = -y;
    }
    void operator--()
    {
        x = --x;
        y = --y;
    }
    void operator++()
    {
        x = ++x;
        y = ++y;
    }
};

int main()
{

    A obj(3, 5);
    obj.output();

    ++obj;
    obj.output();

    --obj;
    obj.output();

    // obj--; Error - No operator matches
    // obj.output(); Error

    obj.operator++();
    obj.output();

    obj.operator--();
    obj.output();

    return 0;
}