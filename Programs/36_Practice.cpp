// Practice

#include <iostream>
using namespace std;

void f1();
void f2();

int a = 30;

int main()
{
    a = 20;
    cout << a << " ";
    a++;
    f1();
    cout << a << " ";
    f2();
    a++;
    cout << a << " ";

    return 0;
}

void f1()
{
    int a = 40;
    cout << a << " ";
}

void f2()
{
    a = 40;
    cout << a << " ";
}