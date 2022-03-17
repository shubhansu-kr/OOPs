// Friend function overload

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

    friend void operator-(A &a);
};

void operator-(A &a)
{
    a.x = -a.x;
    a.y = -a.y;
}

int main()
{
    A obj1(4, 6);
    obj1.output();

    -obj1;
    obj1.output();

    operator-(obj1);
    obj1.output();
    
    return 0;
}