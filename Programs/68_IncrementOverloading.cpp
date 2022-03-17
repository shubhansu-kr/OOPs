// Overloading Increment operator

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
    void operator--()
    {
        x = --x;
        y = --y;
    }

    // To make it post increment -> int key word is passed before paramere
    // void operator++(int) {} // Post increment

    void operator++() // Pre increment by default
    {
        x = ++x;
        y = ++y;
    }
};

int main()
{

    A obj(3, 5);
    obj.output();

    ++obj;
    obj.output();

    --obj;
    obj.output();

    // obj--; Error - No operator matches
    // obj.output(); Error

    obj.operator++();
    obj.output();

    obj.operator--();
    obj.output();

    return 0;
}

// #include <iostream>
// using namespace std;

// class ABC
// {
//     int a, b;

// public:
//     // required constructors
//     ABC()
//     {
//         a = 0;
//         b = 0;
//     }
//     ABC(int h, int m)
//     {
//         a = h;
//         b = m;
//     }

//     // method to display ABC
//     void displayABC()
//     {
//         cout << "a: " << a << " b:" << b << endl;
//     }

//     // overloaded prefix ++ operator
//     friend void operator++(ABC &o1)
//     {
//         cout << "\n prefix op called:\n";
//         ++o1.a;
//         ++o1.b;
//     }

//     // overloaded postfix ++ operator
//     ABC operator++(int)
//     {
//         cout << "\n postfix op called:\n";
//         a++;
//         b++;
//     }
// };

// int main()
// {
//     ABC T1(11, 59), T2(10, 40);

//     ++T1;            // operator ++(T1) // increment T1
//     T1.displayABC(); // display T1
//     ++T1;            // increment T1 again
//     T1.displayABC(); // display T1

//     T2++;            // increment T2
//     T2.displayABC(); // display T2
//     T2++;            // increment T2 again
//     T2.displayABC(); // display T2
//     return 0;
// }