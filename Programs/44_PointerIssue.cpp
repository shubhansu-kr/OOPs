// Dangling pointer -
// Wild pointer -

#include <iostream>
using namespace std;

int main()
{
    int *ptr; // Wild pointer, Since ptr is not initialised

    int a = 10;
    int *p = &a;

    cout << a << endl;
    cout << *p << endl;

    int *dptr;
    {
        int a = 20;
        dptr = &a;
        cout << "Inside block : ";
        cout << a << " " << *dptr << endl; // 20, 20
    }

    cout << "Outside block : ";
    cout << a << " " << *dptr << endl; // 10, 20

    // Dangling pointer holds the value even after the variable is deleted
    // To avoid this, we Assign the NULL value to pointer when the variable
    // its pointing towards is deleted .

    return 0;
}

// Shilpa Sharma 10 : 49 AM
// #include <iostream>
// using namespace std;
// main()
// {
//     int *p;
//     // cout<<p;
//     {
//         int a = 10;
//         p = &a;
//         cout << a << " " << *p; // 10 10
//     }
//     // cout<<a;//error
//     cout << " \noutside scope " << *p; // getting value of a var "a" which is deleted---wrong concept
// }

// Shilpa Sharma 10 : 49 AM

// #include <iostream>
// using namespace std;
// main()
//     {
//     int a = 100, *p, b = 1, *q;
//     // p=&a; q=&b;
//     cout << p << endl; // address of a
//     cout << *p + *q;   // gv-- no output
// }
