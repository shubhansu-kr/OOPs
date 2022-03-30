// Wap to find the sum of n numbers using basic to class
// conversion

#include <iostream>
using namespace std;

class sum
{
    int a;

public:
    sum()
    {
        a = 0;
    }
    sum(int x)
    {
        a += x;
    }
    int getsum()
    {
        return a;
    }
};

int main()
{
    int n;
    cout << "Enter n " << endl;
    cin >> n;

    sum res1;
    for (int i = 0; i < n; i++)
    {
        res1 = (i + 1);
    }
    cout << "The sum of " << n << " natural number is " << res1.getsum() << endl;
    return 0;
}