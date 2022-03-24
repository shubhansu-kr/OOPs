// Wap to overload subtraction operator using MF
// Wap to overload == operator using a friend function

#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A(){};
    A(int a) : x(a){};
    void display()
    {
        cout << x << endl;
    }
    void operator-(A &a)
    {
        cout << x - a.x << endl;
    }
    friend bool operator==(A &a, A &b);
};

bool operator==(A &a, A &b)
{
    return a.x == b.x;
}
int main()
{
    A obj1(2), obj2(4);
    obj1.display();
    obj2.display();

    obj2 - obj1;
    cout << (obj1 == obj2) << endl;
    
    return 0;
}