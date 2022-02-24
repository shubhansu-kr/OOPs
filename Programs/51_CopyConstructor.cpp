// Copy Constructor are used to copy the data members of one object to
// data members of another object

// Always define a default constructor to avoid error

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A(); // Default constructor to avoid error
    A(int a)
    {
        this->a = a;
    }
    // Copy constructor
    A(A &obj)
    {
        a = obj.a;
    }
};

int main()
{
    // There are two ways to copy objects

    // 1. Using copy constructor
    A obj1(4);
    A obj2(obj1);

    // 2. Using assignment operator
    A obj3 = obj1;

    return 0;
}

// #include <iostream>
// using namespace std;
// class Rectangle
// {
// private:
//     int a;
//     int length, breadth;

// public:
//     Rectangle() // def constr
//     {
//         cout << "\n def cons invoked";
//         length = 5;
//         breadth = 6;
//     }
//     Rectangle(int l, int b) // param. constr
//     {
//         cout << "\n para cons invoked";
//         length = l;
//         breadth = b;
//     }
//     Rectangle(Rectangle &r) // obj as a paramtr copy const
//     {
//         cout << "\n copy cons invoked";
//         length = r.length;
//         breadth = r.breadth;
//     }

//     void area()
//     {
//         a = length * breadth;
//         cout << "\narea is " << a;
//     }
// };
// main()
// {
//     Rectangle r1, r2(2, 3), r3(r1); // Rectangle r2, r3(r2), r4=r2; r3=r2
//     r1.area();
//     r2.area();
//     r3.area();
// }