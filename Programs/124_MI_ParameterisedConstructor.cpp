// MultiLevel inheritance : parameterised constructor

#include <iostream>
using namespace std;

class A
{
protected:
    int a, b;

public:
    A(int a, int b) : a(a), b(b) { cout << "A "; };
};

class B : protected A
{
protected:
    int c;

public:
    B(int a, int b, int c) : A(a, b), c(c) { cout << "B "; };
};

class C : protected B
{
protected:
    int d;

public:
    C(int a, int b, int c, int d) : B(a, b, c), d(d) { cout << "C "; };
    void display()
    {
        cout << endl;
        cout << "A : " << a << " B : " << b << " C : " << c << " D : " << d << endl;
    }
};

int main()
{
    C obj(4, 23, 6, 2);
    obj.display();
    return 0;
}