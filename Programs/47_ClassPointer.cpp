// Pointer to class-Objects

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    int b;
    inline void getdata(int a, int b);
    void displaydata()
    {
        cout << a << " " << b << endl;
    }
};

void A ::getdata(int a, int b)
{
    this->a = a;
    this->b = b;
}

int main()
{
    A shyam;
    shyam.getdata(3, 5);
    shyam.displaydata();

    // Pointer to object ;
    A *ptr = &shyam;

    // Access data members
    cout << ptr->b << " " << (*ptr).b << endl;

    // Access memberfuntion
    ptr->displaydata();
    (*ptr).displaydata();

    // we can also declare a genral pointer for the public data members and
    // member funtion of a class

    int A::*p = &A::b;
    // It's similar to declaring a pointer inside the class as a data member
    // int *p = &b --> inside class 

    // int A::*q() = &A::displaydata;

    
    return 0;
}

// #include <iostream>
// using namespace std;

// class X
// {
// public:
//     int a;
//     void f(int b)
//     {
//         cout << "The value of b is " << b << endl;
//     }
// };
// int main()
// {
//     // declare pointer to data member
//     int X::*ptiptr = &X::a;

//     // declare a pointer to member function
//     void (X::*ptfptr)(int) = &X::f; // void (*pf)()
//     // create an object of class type X

//     X xobject;

//     // initialize data member
//     xobject.*ptiptr = 10;

//     cout << "The value of a is " << xobject.*ptiptr << endl;

//     // call member function
//     (xobject.*ptfptr)(20);
// }