// Function overloading

#include <iostream>
using namespace std;

void sum(int a, int b)
{
    cout << a + b << endl;
}

// Ambiguos function since a Function with 3 arguments is available
// Throws error

// void sum(int a, int b, int c = 9)
// {
//     cout << a + b + c;
// }

void sum(float a, int b)
{
    cout << a + b + 100 << endl;
}

void sum(int a, int b, int c)
{
    cout << a + b + c << endl;
}

void sum(float a, float b)
{
    cout << a + b << endl;
}

int main()
{
    sum(3, 4);    // Sum 7
    sum(5, 3, 7); // Sum 15

    // sum(3.1, 4) ;  Throws an error
    float a = 3.1, b = 6.5;
    sum(a, 4); // Sum 107.1

    sum(a, b); 

    return 0;
}
