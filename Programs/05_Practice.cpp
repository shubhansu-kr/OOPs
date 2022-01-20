// WAP to calculate the sum of natural number

#include <iostream>
using namespace std;

int sumN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sumN(n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter no. of terms " << endl;
    cin >> n;
    cout << "Sum of " << n << " natural number is " << sumN(n) << endl;

    return 0;
}