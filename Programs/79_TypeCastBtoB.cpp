// Type Casting - Basic to Badic data type

#include <iostream>
using namespace std;

int main()
{
    float f = 3.4234;

    int a = f;  // Implicit type conversion (float to int )
    char b = a; // Implicit type conversion (int to char)

    cout << f << " " << a << " " << b << endl;

    a = f + 65; // Implicit conversion
    cout << a << endl;

    double z = 3.324;
    a = int(z) + b; // explicit
    cout << a << endl;

    return 0;
}

// Shilpa Sharma 11 : 50 AM

// An example of implicit conversion

// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 10;   // integer x
//     char y = 'a'; // character y

//     // y implicitly converted to int. ASCII
//     // value of 'a' is 97
//     x = x + y; // char to int// 10+97

//     // x is implicitly converted to float
//     float z = x + 1.56;

//     cout << "x = " << x << endl
//          << "y = " << y << endl
//          << "z = " << z << endl;

//     return 0;
// }

// // C++ program to demonstrate
// // explicit type casting

// #include <iostream>
// using namespace std;

// int main()
// {
//     double x = 1.2;

//     // Explicit conversion from double to int higher to lower
//     int sum = (int)x + 1; // (int)(x) int (x)

//     cout << "Sum = " << sum;

//     return 0;
// }