// scope of var

#include <iostream>
using namespace std;

int a = 1;

int main()
{
    int a = 2;
    cout << a << " "; // 2
    {
        int a = 3; // 3 -> 4 in line 17

        cout << a << " "; // 3
        {
            a = 4;            // Assigns 4 to the var a in the block (Not a global)
            cout << a << " "; // 4
        }
        cout << a << " "; // prints a from line 13 (4)
    }

    cout << a << " "; // Prints a from line 10 (2)

    return 0;
}