// Swap the data of a class using friend functoin

#include <iostream>
using namespace std;

class A;
class B;

class A
{
    int a = 10, b = 20;

public:
    friend void display(A &X, B &Y);
    friend void intraSwappin(A &X);
    friend void interSwappin(A &X, B &Y);
};

class B
{
    int a = 100, b = 200;

public:
    friend void display(A &X, B &Y);
    friend void interSwappin(A &X, B &Y);
};

void display(A &X, B &Y)
{
    cout << "A : " << X.a << " " << X.b << endl;
    cout << "B : " << Y.a << " " << Y.b << endl;
    cout << endl;
}

void intraSwappin(A &X)
{
    int temp = X.a;
    X.a = X.b;
    X.b = temp;
}

void interSwappin(A &X, B &Y)
{
    int temp = X.a;
    X.a = Y.a;
    Y.a = temp;
}

int main()
{
    A Q;
    B W;
    display(Q, W);

    intraSwappin(Q); // Swapping a and b of class A obj Q
    display(Q, W);

    intraSwappin(Q); // Swapping back a and b ;
    display(Q, W);

    interSwappin(Q, W); // Swapping a of class A with class B
    display(Q, W);

    return 0;
}