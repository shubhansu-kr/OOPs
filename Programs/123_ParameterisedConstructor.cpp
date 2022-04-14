// Parameterised constructor in Derived constructor ;

#include <iostream>
using namespace std;

class A
{
protected:
    int a, b;

public:
    A(int a, int b) : a(a), b(b) { cout << "A "; };
};

class B : public A
{
    int c;

public:
    // Order of initialiser list doesn't matter 
    B(int a, int b, int c) :c(c), A(a, b) { cout << "B "; };
    void getData()
    {
        cout << "a : " << a << " b : " << b << " c : " << c << endl;
    }
};

int main()
{
    B obj1(2, 5, 6);
    obj1.getData();
    return 0;
}