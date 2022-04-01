// Hierarchical Inheritace -

#include <iostream>
using namespace std;

class base
{
protected:
    int a, b, c, d, e, f;

public:
    base()
    {
        cout << "Enter values : " << endl;
        cin >> a >> b >> c >> d >> e;
    }
};

class derive1 : public base
{
    int max;

protected:
    // Inherited a, b, c, d, e
public:
    derive1()
    {
        max = a;
        if (max < b)
        {
            max = b;
        }
        if (max < c)
        {
            max = c;
        }
        if (max < d)
        {
            max = d;
        }
        if (max < e)
        {
            max = e;
        }
    }
    void display()
    {
        cout << "Max (" << a << ", " << b << ", " << c << ", " << d << ", " << e << ")"
             << " is " << max << endl;
    }
};

class derive2 : public base
{
    int sum;

protected:
    // Inherited a, b, c, d, e
public:
    derive2()
    {
        sum = a + b + c + d + e;
    }
    void display()
    {
        cout << "sum is " << sum << endl;
    }
};

class derive3 : public base
{
protected:
    // Inherited a, b, c, d, e
public:
    void display()
    {
        cout << "Even : ";
        if (a % 2 == 0)
            cout << a << " ";
        if (c % 2 == 0)
            cout << c << " ";
        if (d % 2 == 0)
            cout << d << " ";
        if (b % 2 == 0)
            cout << b << " ";
        if (e % 2 == 0)
            cout << e << " ";

        cout << endl;
    }
};

int main()
{
    // Everytime you creare a new object of derive class, constructor of base class is called
    derive1 obj1; // base class contructor called
    derive2 obj2; // base class contructor called
    derive3 obj3; // base class contructor called

    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}