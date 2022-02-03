// Homework - 3 Feb 2022
// Swap members using friend class

#include <iostream>
using namespace std;

class A;
class B;

class B
{
    int b = 76;

public:
    friend void display(A &X, B &Y);
    void swap(A &X);
};

class A
{
    int a = 43;

public:
    // friend class B;
    friend void B ::swap(A &X);
    friend void display(A &X, B &Y);
};

void B ::swap(A &X)
{
    int temp = b;
    b = X.a;
    X.a = temp;
}

void display(A &X, B &Y)
{
    cout << "A : " << X.a << " B : " << Y.b << endl;
    cout << endl;
}

int main()
{
    A obj1;
    B obj2;

    display(obj1, obj2);

    obj2.swap(obj1);
    display(obj1, obj2);

    return 0;
}

// Swapping using friend class

// #include <iostream>
// using namespace std;

// class A;
// class B;

// class A
// {
//     int a = 43;

// public:
//     friend class B;
//     friend void display(A &X, B &Y);
// };

// class B
// {
//     int a = 76;

// public:
//     friend void display(A &X, B &Y);
//     void swap(A &X);
// };

// void B ::swap(A &X)
// {
//     int temp = a;
//     this->a = X.a;
//     X.a = temp;
// }

// void display(A &X, B &Y)
// {
//     cout << "A : " << X.a << " B : " << Y.a << endl;
//     cout << endl;
// }

// int main()
// {
//     A obj1;
//     B obj2;

//     display(obj1, obj2);

//     obj2.swap(obj1);
//     display(obj1, obj2);

//     return 0;
// }