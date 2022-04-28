//

#include <iostream>
using namespace std;

int div(int a, int b, int c)
{

    if (a - b == 0)
    {
        throw a; // No need to create any try block in the function
    }
    return c / (a - b);
}

int main()
{
    // Funciton Try and catch
    try
    {
        cout << div(30, 20, 30) << endl;
        cout << div(10, 10, 23) << endl;
    }
    catch (int i)
    {
        cout << "Exception : a-b should not be zero " << i << endl;
    }
    return 0;
}