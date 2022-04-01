// Single Inheritance - Private , Protected mode

#include <iostream>
using namespace std;

class base1
{
    int a, b;

protected:
    int c, d;

public:
    int e, f;

    // Constructor is called when derived class object is declared
    base1()
    {
        cout << "Enter the values ";
        cin >> a >> b >> c >> d >> e >> f;
    }
    void display()
    {
        cout << a << " " << b << " " << c << " " << endl;
        cout << d << " " << e << " " << f << " " << endl;
    }
};

// Protected mode inheritance
class derive1 : protected base1
{
    int x, y;

protected:
    // Inherited c, d, e, f
    // Inherited dispaly() function
public:
    int z;
    derive1()
    {
        x = d + c;
        y = f + e;
    }

    // Ambiguity : display() is inherited and defined in derived class
    void display()
    {
        cout << x << " " << y << endl;
    }
};

class base2
{
    int a, b;

protected:
    int c, d;

public:
    int e, f;

    // constructor will be called
    base2()
    {
        cout << "Base 2 constructor called " << endl;
        cout << "Enter values : " << endl;
        cin >> a >> b >> c >> d >> e >> f;
    }
    int sum()
    {
        cout << "a+b+c+d+e+f = " << a + b + c + d + e + f << endl;
        return a + b + c + d + e + f;
    }
};

class derive2 : private base2
{
    // Private
    int x, y;
    // Inherited c,d,e,f
    // Inherited sum() function ;
public:
    derive2()
    {
        cout << "derive 2 constructor called " << endl;
        x = c + d;
        y = e + f;
    }
    void avg()
    {
        float avg = sum() / 6.0;
        // We can find the sum of a and b
        cout << "Average : " << avg << endl;
        cout << "a+b = " << sum() - (x + y);
    }
};

int main()
{
    derive1 obj1;
    obj1.display();

    // base class constructor is called before derive class

    derive2 obj2;
    obj2.avg();

    return 0;
}