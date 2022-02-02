// Function calling - value , refrence and address
// HW - 2 Feb 2022 

#include <iostream>
using namespace std;

// call by value -> Passing a copy of variable as argument
void swap0(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

// call by address -> Passing pointers to the variable as an argument
void swap1(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// call by refrence -> Passing refrence variable as an argument
void swap2(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10, b = 20;
    cout << a << " " << b << endl;

    // Call by value
    swap0(a, b);
    cout << " Call by value : ";
    cout << a << " " << b << endl;
    a = 10, b = 20;

    // call by address
    swap1(&a, &b);
    cout << " Call by address : ";
    cout << a << " " << b << endl;
    a = 10, b = 20;

    // Call by refrence
    swap2(a, b);
    cout << " Call by Refrence : ";
    cout << a << " " << b << endl;
    a = 10, b = 20;

    return 0;
}