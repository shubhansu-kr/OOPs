// Practice - Hierarchical Inheritance

#include <iostream>
using namespace std;

class base
{
protected:
    int a, b, c;

public:
    base()
    {
        cout << "Enter a ";
        cin >> a;
        cout << "Enter b ";
        cin >> b;
        cout << "Enter c ";
        cin >> c;
    }
};

class derive1 : public base
{
protected:
    // a , b , c inherited
    int x, y, z;

public:
    derive1()
    {
        x = a;
        y = b;
        z = c;
    }

    void display()
    {
        cout << x << " " << y << " " << z << endl;
    }

    void swap()
    {
        int temp = x;
        x = y;
        y = z;
        z = temp;
    }
};

class derive2 : public base
{
protected:
    // a, b, c inherited
    int mid;

public:
    derive2()
    {
        if ((a <= b) && (b <= c))
        {
            mid = b;
        }
        else if (b <= a && a <= c)
        {
            mid = a;
        }
        else
        {
            mid = c;
        }
    }
    void display()
    {
        cout << "mid val is " << mid << endl;
    }
};

class derive3 : public base
{
protected:
    // a, b, c inherited
    int sum = 0;

public:
    derive3()
    {
        if (a % 2 != 0)
        {
            sum += a;
        }
        if (b % 2 != 0)
        {
            sum += b;
        }
        if (c % 2 != 0)
        {
            sum += c;
        }
    }

    void display()
    {
        cout << "Sum of odd number is " << sum << endl;
    }
};

int main()
{
    derive1 obj1;

    obj1.display();
    obj1.swap();
    obj1.display();

    derive2 obj2;
    obj2.display();

    derive3 obj3;
    obj3.display();
    return 0;
}