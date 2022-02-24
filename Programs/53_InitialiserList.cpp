// Initialiser list is used to initialise the data members without ambiguity

#include <iostream>
using namespace std;

class A
{
    int a, b, c, d, e;

public:
    A() {}
    A(int a, int b, int c) : a(a), b(b), c(c)
    {
        d = a + b + c;
    }
    A(int a, int b = 5) : a(a), b(b)
    {
        c = a + b;
    }
    void setdata(int, int);
};

void A::setdata(int a, int b = 5)
{
    d = a * b;
    e = a / b;
}

int main()
{
    A obj1;
    A obj2(10, 5);
    A obj3(10);

    return 0;
}

// #include <iostream>
// using namespace std;

// class Base
// {
// private:
//     int c;

// public:
//     Base(int c) : c(c)
//     {
//         cout << "Value is " << c; // c=c_var error
//     }
// };

// int main()
// {
//     Base il(10);
// }