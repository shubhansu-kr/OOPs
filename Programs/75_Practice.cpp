// Overload postfix using freind function

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
    friend void operator++(A &x, int i);
};

void operator++(A &x, int i)
{
    x.a++;
    x.b++;
}

int main()
{
    A obj1(3, 6);
    obj1.display();

    obj1++;
    obj1.display();

    return 0;
}