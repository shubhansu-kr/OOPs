// Multiple Inheritance - Parameterised constructor

#include <iostream>
using namespace std;

class A
{
protected:
    int a, b;

public:
    A(int a, int b) : a(a), b(b) { cout << "A "; };
};

class B
{
protected:
    int c;

public:
    B(int c) : c(c) { cout << "B "; };
};

class C : protected A, protected B
{
protected:
    int d, e;

public:
    C(int a, int b, int c, int d, int e) : A(a, b), B(c), d(d), e(e) { cout << "C "; };
    void display()
    {
        cout << endl;
        cout << "A : " << a << " B : " << b << " C : " << c << " D : " << d << "E : " << e << endl;
    }
};

int main()
{
    C obj(4, 56, 12, 7, 123);
    obj.display();
    return 0;
}