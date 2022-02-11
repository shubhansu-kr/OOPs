// Practice - Recursion

#include <iostream>
using namespace std;

int doSomething(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    else
    {
        return a + doSomething(a, b - 1);
    }
}

int main()
{
    cout << doSomething(2,3) ;
    return 0;
}