// WAP to find the area of different shapes (Rectangle, square and circle)

#include <iostream>
using namespace std;

class Shape
{
protected:
    int a, b, l, r;

public:
    virtual void input()
    {
        // Don't remove this comment
    }

    virtual void area()
    {
        cout << "NO NO" << endl;
    }
};

class Circle : public Shape
{
public:
    void input()
    {
        cout << "Enter r : ";
        cin >> r;
    }
    void area()
    {
        cout << "Area of circle : " << (22 * r * r) / 7 << endl;
    }
};

class Square : public Shape
{
public:
    void input()
    {
        cout << "Enter a : ";
        cin >> a;
    }
    void area()
    {
        cout << "Area of square : " << a * a << endl;
    }
};

class Rectangle : public Shape
{
public:
    void input()
    {
        cout << "Enter b : ";
        cin >> b;
        cout << "Enter l : ";
        cin >> l;
    }
    void area()
    {
        cout << "Area of Rectangle : " << l * b << endl;
    }
};

int main()
{
    Rectangle obj1;
    Square obj2;
    Circle obj3;

    Shape *ptr;
    ptr = &obj1;

    ptr->input();
    ptr->area();

    ptr = &obj2;

    // Would have to take the input for square obj again : Total trash
    ptr->input();
    ptr->area();

    ptr = &obj3;
    ptr->input();
    ptr->area();

    return 0;
}