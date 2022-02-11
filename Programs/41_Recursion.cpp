// Recursion
// A function which calls itself is called a recursive function
// The process of calling itself is called recursion.

// A recursive function should hava a base condition to terminate the
// recursion process.
//                   Usually done via if else condition control

#include <iostream>
using namespace std;

class Num
{
public:
    int Factorial(int a);
};

int Num ::Factorial(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    return a * Factorial(a - 1);
}

int main()
{
    Num F;

    cout << "Factorial 5 : " << F.Factorial(5) << endl;
    return 0;
}