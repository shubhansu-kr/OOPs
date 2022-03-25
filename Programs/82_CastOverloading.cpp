// Cast Overloading -> Class to basic data type

#include <iostream>
using namespace std;

class A
{
    int a;   // a will be returned if assigned to int
    float b; // b will be returned if assigned to float
public:
    A() { cout << "DC " << endl; };
    A(int a) : a(a) { cout << "PC int " << endl; };     // Parameterised constructor to type converting int to class
    A(float b) : b(b) { cout << "PC float " << endl; }; // Parameterised constructor to type converting float to class

    A(int a, float b) : a(a), b(b) { cout << "PC - int float" << endl; };
    // Overloading the cast operator --> No parameter

    // Overloading int cast --> called when obj is assigned to int
    // operator int(int a) // error - NO argument allowed on type conversion
    operator int()
    {
        cout << "Operator int " << endl;
        return a;
    }

    // Overloading int cast --> called when obj is assigned to float
    operator float()
    {
        cout << "Operator float " << endl;
        return b;
    }

    void display()
    {
        cout << "a : " << a << " || b : " << b << endl;
    }
};

int main()
{
    int x;
    float y;

    A obj1(4, 6.53);

    obj1.display();

    // Convert class A object to int
    x = obj1; // operator int() is called

    // Convet class A object to float
    y = obj1; // operator float () is called

    cout << "x : " << x << " || y : " << y << endl;

    x++;
    y++;

    // Convert basic to class
    A obj2;   // DC called
    obj2 = x; // PC - int is called
    obj2 = y; // PC - float is called

    obj2.display();

    return 0;
}