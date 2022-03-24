// WAP to add two complex number

#include <iostream>
using namespace std;

class A
{
    int x, y;

public:
    A(){};
    A(int a, int b) : x(a), y(b){};
    void display()
    {
        cout << x << " + " << y << "i" << endl;
    }
    void operator+(A &a)
    {
        cout << "(" << x << " + " << y << "i)";
        cout << " + (" << a.x << " + " << a.y << "i) = ";
        cout << "(" << x + a.x << " + " << y + a.y << "i)";
    }
}obj0; // This will give error if default constructor is not defined 

int main()
{
    A obj1(3, 5), obj2(3, 6);
    obj1.display();
    obj2.display();
    obj1 + obj2;
    
    return 0;
}