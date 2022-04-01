// Private mode - single Inheritance

#include <iostream>
using namespace std;

class base
{
    int a, b;

public:
    void input()
    {
        a = 10;
        b = 5;
    }
    pair<int, int> getdata()
    {
        pair<int, int> data;
        data.first = a ;
        data.second = b ;
        return data;
    }
};

class derive : private base
{
    // Inherited from base class
    // input()
public:
    void sum()
    {
        // cout << a + b << endl;  error : a and b are not inherited
        // create a function explicitly to get a and b
        cout << getdata().first + getdata().second << endl;
    }
};

int main()
{
    derive b;
    b.sum();
    return 0;
}