// Find the area of rectangle
// Homework 3rd Feb 2022

#include <iostream>
using namespace std;

class Area;

class Dimensions
{
    int length = 42;
    int breadth = 32;

public:
    friend Area;
    friend void display(Dimensions &X, Area &Y);
};

class Area
{
    int ar;

public:
    void area(Dimensions &X);
    friend void display(Dimensions &X, Area &Y);
};

void Area::area(Dimensions &X)
{
    ar = X.breadth * X.length;
}

void display(Dimensions &X, Area &Y)
{
    cout << "Length : " << X.length << " Breadth : " << X.breadth << " ";
    cout << "Area : " << Y.ar << endl;
    cout << endl;
}

int main()
{
    Dimensions D1;
    Area A1;

    A1.area(D1);
    display(D1, A1);
    return 0;
}