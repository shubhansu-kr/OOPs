// Wap to show the concept of explicit conversion

#include <iostream>
using namespace std;

int main()
{
    int a;
    float b = 98.342, c = 87.453, d = 342.64;

    // a = b;    Implicit
    // cout << a << endl;

    // Explicit conversion is used to convert the data type from higher to lower
    a = (int)b;
    cout << a << endl;
    a = (int)(c);
    cout << a << endl;
    a = int(d);
    cout << a << endl;

    // Data is lost in this conversion 
    return 0;
}