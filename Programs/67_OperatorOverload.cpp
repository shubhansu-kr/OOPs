// Operator overloading

#include <iostream>
using namespace std;

class A
{
    int x, y;

public:
    A(int a, int b) : x(a), y(b) {}
    void output()
    {
        cout << "x : " << x << " | y : " << y << endl;
    }

    // Operator overloading for '-' definition (Using member function )
    void operator-()
    {
        x = -x;
        y = -y;
    }

    // Using friend function to overload
    // friend void operator-(A &a);
};

// Using friend function to overload the operator 
// void operator-(A &a)
// {
//     a.x = -a.x;
//     a.y = -a.y;
// }

int main()
{
    A obj(3, 5);
    obj.output();

    // Calling overloading

    // Method 1
    -obj;
    obj.output();

    // Method 2 - Member function
    obj.operator-();
    obj.output();

    return 0;
}