// WAP to display the fibonacci series

#include <iostream>
using namespace std;

int Fibonnaciterm(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return Fibonnaciterm(n - 1) + Fibonnaciterm(n - 2);
    }
}

int main()
{
    int n;
    cout << "Enter n " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << Fibonnaciterm(i) << " "  ;
    }

    return 0;
}