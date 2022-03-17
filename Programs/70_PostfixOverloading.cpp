// Post decrement using friend function

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

    friend void operator--(A &a, int);
};

void operator--(A &a, int)
{
    a.x--;
    a.y--;
}

int main()
{
    A obj1(2, 9);
    obj1.output();

    obj1--;
    obj1.output() ;

    operator--(obj1, 5); // Passing a fake int to match the parameters
    obj1.output() ;

    return 0;
}