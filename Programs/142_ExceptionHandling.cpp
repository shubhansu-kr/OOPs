// Exception handling

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a , b , c : " << endl;
    cin >> a >> b >> c;

    try
    {
        if (c == 0)
        {
            throw c;
        }
        cout << "a = b/c : " << b / c << endl;
    }
    catch (int i)
    {
        cout << "Exception : c can't be zero " << endl;
    }
    cout << "Flag 1 " << endl;   // Executed even after error 
    return 0;
}