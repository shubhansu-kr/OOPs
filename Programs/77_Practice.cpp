// Operator

#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A(){};
    A(int a, int b) : a(a), b(b){};
    void display()
    {
        cout << "A: " << a << " B: " << b << endl;
    }
    bool operator>(A &x)
    {
        return a + b > x.a + x.b;
    }
    A operator+(A &x)
    {
        A temp(a + x.a, b + x.b);
        return temp;
    }
    // int operator+(A &x)
    // {
    //     return a + b + x.a + x.b;
    // }
    int operator-(int x)
    {
        return a + b - x;
    }
    friend void operator*(A &x, A &y);
};

void operator*(A &x, A &y)
{
    cout << x.a * y.a << endl;
}

int main()
{
    A obj1(4, 2), obj2(5, 2);
    A obj3 = obj1 + obj2;

    obj1.display();
    obj2.display();
    obj3.display();

    cout << obj1.operator-(4) << endl;
    cout << obj2.operator-(4) << endl;
    cout << obj3.operator-(4) << endl;

    obj1 *obj2;
    operator*(obj1, obj2);

    return 0;
}