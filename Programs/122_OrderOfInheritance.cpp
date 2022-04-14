// Order of inheritance : Virtual class

#include <iostream>
using namespace std;

// Virtual class gets higher priority
class A
{
    int a;

public:
    A()
    {
        cout << "A ";
    }
    ~A()
    {
        cout << "~A ";
    }
};

class B : virtual public A
{
    int a;

public:
    B()
    {
        cout << "B ";
    }
    ~B()
    {
        cout << "~B ";
    }
};

class C : public virtual A
{
    int a;

public:
    C()
    {
        cout << "C ";
    }
    ~C()
    {
        cout << "~C ";
    }
};

class D : public B, public C
{
    int a;

public:
    D()
    {
        cout << "D ";
    }
    ~D()
    {
        cout << "~D ";
    }
};

int main()
{
    D obj1 ; // A, B, C, D, ~D, ~C, ~B, ~A
    return 0;
}