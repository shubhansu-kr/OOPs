// Multiple Inheritance

#include <iostream>
using namespace std;

class base1
{
protected:
    int a, b;

public:
    base1()
    {
        cout << "Base 1 constructor called " << endl;
        cout << "Enter a ";
        cin >> a;
        cout << "Enter b ";
        cin >> b;
    }
    void display()
    {
        cout << "A : " << a << "   B : " << b << endl;
    }
};

class base2
{
protected:
    int c;

public:
    base2()
    {
        cout << "Base2 constructor called " << endl;
        cout << "Enter c ";
        cin >> c;
    }
};

class base3
{
protected:
    int d, e;

public:
    base3()
    {
        cout << "Base 3 constructor called " << endl;
        cout << "Enter d ";
        cin >> d;
        cout << "Enter e ";
        cin >> e;
    }
    void display()
    {
        cout << "D : " << d << "   E : " << e << endl;
    }
};

// Order do matter -> conctructor call 
class derive1 : public base1, public base3, public base2
{
    int sum;

protected:
    // Inherited a, b, c, d, e

public:
    derive1()
    {
        sum = a + b + c + d + e;
    }
    void display()
    {
        cout << "sum : " << sum << endl;
    }
};

int main()
{
    derive1 obj1;
    obj1.display();
    return 0;
}