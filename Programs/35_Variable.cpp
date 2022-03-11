// Variable scope

#include <iostream>
using namespace std;

int a = 30; // Global var (Default val is 0)
int b;

int main()
{
    int a = 20; // Local var for main
    cout << a << endl;
    cout << ::a << endl; // prints global 30

    {
        int a = 10;
        cout << a << endl;   // local to the block
        cout << ::a << endl; // prints global 30
        // cout << ::(::a) << endl;  Error, Wrong syntax
    }

    {
        cout << a << endl;   // Finds the nearest a and prints 20
        cout << ::a << endl; // prints global 30
        // cout << ::(::a) << endl;  Error, Wrong syntax
        int d = 20;
    }
    // cout << "d : " << d << endl; Error: Variable was not declared in the scope.

    cout << b << endl; // prints zero

    int b;
    cout << b << endl; // garbage

    int c = 21;
    {
        int c = 13;
        cout << c << endl;
        // cout << ::c << endl; Error , NO global variable named c
    }

    return 0;
}