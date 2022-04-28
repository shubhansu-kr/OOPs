// Rethrow - Try Catch

#include <iostream>
using namespace std;

int divi(int a, int b)
{
    cout << "divi " << endl;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        return a / b;
    }
    catch (...)
    {
        cout << "Div catch " << endl;
        throw; // Rethrow of error
    }
}

int main()
{
    cout << "Inside main " << endl;
    int a, b;
    cout << "Enter a, b : " << endl;
    cin >> a >> b;

    try
    {
        cout << divi(a, b) << endl;
    }
    catch (...)
    {
        cout << "Main catch " << endl;
        cout << "Exception : b can't be zero " << endl;
    }
    return 0;
}