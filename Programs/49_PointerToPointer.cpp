// Pointer to pointer

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &b = a;

    int *p = &a;
    int **q = &p;

    cout << a << " " << b << endl;
    cout << *p << " " << **q << endl;

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 10, y = 20;
//     int *ptr = &x;
//     int &z = y;
//     *ptr++;
//     z++;
//     cout << x << " " << y;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// main()
// {
//     int a = 10, *p, **q;
//     p = &a;
//     q = &p;
//     cout << a << " " << *p << " " << **q;
// }