// Order of execution of constructor

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A()
    {
        cout << "A " ;
    }
    ~A()
    { 
        cout << "~A " ;
    }
};

class B
{
    int a;

public:
    B()
    {
        cout << "B " ;
    }
    ~B()
    {
        cout << "~B " ;
    }
};

// Mode of inheritance does not matter 
class C : public A, private B
{
    int a;

public:
    C()
    {
        cout << "C " ;
    }
    ~C()
    {
        cout << "~C " ;
    }
};

int main()
{
    C obj1; // A B C ~c ~b ~a
    
    return 0;
}