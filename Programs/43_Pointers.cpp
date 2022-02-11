// Pointers - Pointers are Variables which stores address of other variable
// of same data type.

// Any poiter takes the size equal to the size of unsigned interger
// Because the address is in the form of unsigned interger only.

#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int *p = &a;

    // * --> Indirection, derefrence , value of operator
    // & --> Ampersand , address of , And operartor

    cout << a << endl;
    cout << *p << endl;
    cout << p << endl;

    cout << sizeof(p) << endl; // Size of unsigned int

    return 0;
}