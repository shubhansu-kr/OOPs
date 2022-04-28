// Array - Exception

#include <iostream>
using namespace std;

int main()
{
    int A[10], n;
    cout << "Enter the size of the Array : ";
    cin >> n;
    int sum = 0;
    try
    {
        if (n < 1)
        {
            throw 'n';
        }
        if (n > 10)
        {
            throw n;
        }
        for (int i = 0; i < n; i++)
        {
            cout << "Enter num " << i + 1 << " : ";
            cin >> A[i];
            sum += A[i];
        }
        cout << "Sum of array : " << sum << endl;
    }
    // cout << "Flag 1 : " << endl; Error -> cannot put anything between
    // try and catch value
    catch (int i)
    {
        cout << "OverFlow of memory : Array Size should be less than 10" << endl;
    }
    catch (char i)
    {
        cout << "Exception : Array size must be greater than 0 " << endl;
    }
    cout << "Flag 2 " << endl;
    return 0;
}