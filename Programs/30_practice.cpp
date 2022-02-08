// Find power

#include <iostream>
using namespace std;

int power(int &a, int &x)
{
    int p = 1;
    while (x > 0)
    {
        p *= a;
        x--;
    }
    return p;
}

int main()
{
    int n, x;
    cout << "Enter n " << endl;
    cin >> n;
    cout << "Enter power " << endl;
    cin >> x;

    cout << "Answer : " << power(n, x) << endl;
    return 0;
}