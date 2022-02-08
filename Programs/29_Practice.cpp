// Wap to find the square root of a number

#include <iostream>
#include <math.h>
using namespace std;

void root()
{
    int n;
    cout << "Enter n " << endl;
    cin >> n;
    cout << "Square root : " << sqrt(n) << endl;
}

void root(int a)
{
    cout << "Square root of " << a << " is : " << sqrt(a) << endl;
}

float rootRet()
{
    cout << "Enter n " << endl;
    int n;
    cin >> n;
    return sqrt(n);
}

float rootRet(int a)
{
    return sqrt(a);
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    root(n);
    root();
    float root = rootRet();
    root = rootRet(n);
    return 0;
}