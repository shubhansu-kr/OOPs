// Single Inheritance - Deriving one derive class from one base class

#include <iostream>
using namespace std;

class base
{
    // a and b are private - wont be inherited by derive class
    int a, b;

public:
    // x and y will be inherited in public mode
    int x, y;

    void setData()
    {
        cout << "Enter x ";
        cin >> x;
        cout << "Enter y ";
        cin >> y;
        cout << "Enter a ";
        cin >> a;
        cout << "Enter b ";
        cin >> b;
    }

    void display()
    {
        cout << "X : " << x << " || Y : " << y << endl;
        cout << "A : " << a << " B : " << b << endl;
    }
};

class derive : public base
{
    int temp;

public:
    void swap()
    {
        temp = x;
        x = y;
        y = temp;
    }
};

int main()
{
    derive obj1;
    obj1.setData();
    obj1.display();
    obj1.swap();
    obj1.display();

    return 0;
}