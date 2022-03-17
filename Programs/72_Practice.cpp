// WAP to overload the greaterthan operator '>'

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
    bool operator>(A &a);
};

bool A ::operator>(A &a)
{
    return (x + y) > (a.x + a.y) ? true : false;
}

int main()
{

    // Overloading the > operator to check which obj is greater
    // Obj is said to be greater if sum of all the int data memeber
    // is greater.

    A obj1(4, 2);
    A obj2(0, 8);

    obj1.output();
    obj2.output();

    cout << "obj1 > obj2 : " << (obj1 > obj2) << endl;
    cout << "obj2 > obj1 : " << (obj2 > obj1) << endl;

    return 0;
}