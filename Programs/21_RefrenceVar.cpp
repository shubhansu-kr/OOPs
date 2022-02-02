// Refrence Variable

#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    // int &b;  error: We have to initialise a refrence variable while declaration
    int &b = a; // b is just an another name to the variable a ;

    // b is not going to take up any memory

    cout << a << " " << b << endl; // 2, 2
    b += a;
    cout << a << " " << b << endl; // 4, 4

    // int i;      // variable i
    // int &j = i; // refrence variable j
    // int *k = &i; // pointer k to i
    
    return 0;
}

// #include <iostream>
// using namespace std;
// main()
// {
//     int a = 10, &b = a;
//     cout << a << " " << b << endl; // 10 10
//     b = a + b;                     // 10+10
//     cout << a << " " << b;         // 20 20
// }