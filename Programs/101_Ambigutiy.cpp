// Ambiguity - Multiple Inheritance

#include <iostream>
using namespace std;

class base1
{
public:
    int a;
    void input()
    {
        a = 10;
    }
};

class base2
{
public:
    int b;
    void input()
    {
        b = 16;
    }
};

class derive : public base1, public base2
{
public:
    // input ()  is inherited from base 1 and base2 as well
    void sum()
    {
        cout << a + b;
    }
};

int main()
{
    derive obj;
    // obj.input();  error : Ambiguous

    obj.base1::input();
    obj.base2::input();

    obj.sum();

    return 0;
}