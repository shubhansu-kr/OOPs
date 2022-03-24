// Overload > using MF

#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A(int a, int b) : a(a), b(b){};
    void display()
    {
        cout << "A: " << a << " B: " << b << endl;
    }
    bool operator>(A &x)
    {
        return a + b > x.a + x.b;
    }
};

int main()
{
    A obj1(3, 6), obj2(3, 2);

    obj1.display();
    obj2.display();

    cout << (obj1 > obj2) << endl;
    ;
    cout << obj2.operator>(obj1) << endl;

    return 0;
}