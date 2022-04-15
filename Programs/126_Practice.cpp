// Practice :

#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A(int a, int b) : a(a), b(b) { cout << "A "; };
    ~A(){cout << "~A ";};
};

class B
{
    int c;

public:
    B(int c) : c(c) { cout << "B "; };
    ~B(){cout << "~B ";};
};

class C : public A, public B
{
    int d, e;

public:
    C(int a, int b, int c, int d, int e) : A(a, b), B(c), d(d), e(e) { cout << "C "; };
    ~C(){cout << "~C ";};
};

class D : public C
{
    int f;

public:
    D(int a, int b, int c, int d, int e, int f) : C(a, b, c, d, e), f(f) { cout << "D "; };
    ~D(){cout << "~D ";};
};

int main()
{
    D obj(3,6,3,7,2,56);
    return 0;
}