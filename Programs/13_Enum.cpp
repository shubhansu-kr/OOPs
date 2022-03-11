// Enum

#include <iostream>
using namespace std;

enum sem
{
    jan,
    feb = 10,
    march = 2,
    april,
    may
};

int main()
{
    sem x, y, z;

    x = jan;
    y = feb;
    z = april;

    cout << x << " " << y << " " << z << ends;
    cout << feb;

    // y = x + 1;  Throws error since y is not integer 
    
    return 0;
}

// #include <iostream>
// using namespace std;

// main()
// {
//     enum days
//     {
//         sun,
//         mon,
//         tues,
//         wed,
//         thur,
//         fri,
//         sat
//     }; // int a,b,c; days a,b,c;
//     days x, y;
//     x = mon; // 1
//     y = wed; // 3

//     // y=x+1;

//     cout << x << " and " << y;
// }

// #include <iostream>
// using namespace std;

// main()
// {
//     enum days
//     {
//         sun = 3,
//         mon,
//         tues,
//         wed = 1000,
//         thur = 3,
//         fri,
//         sat
//     }; // int a,b,c; days a,b,c;
//     days x, y;
//     // x=1;//1 error
//     x = mon;
//     y = wed; // 3

//     // y=x+1; error

//     cout << x << " and " << y + 1; // mon wed 1 3
// }