// binary operator overload

#include <iostream>
using namespace std;

class A
{
    int x, y;

public:
    A(int a, int b) : x(a), y(b) {}

    void output()
    {
        cout << "x : " << x << " | y : " << y << endl;
    }

    void operator-(A &a);
};

void A ::operator-(A &a)
{
    x -= a.x;
    y -= a.y;
}

int main()
{
    A obj1(2, 9);
    A obj2(7, 4);

    obj1.output();
    obj2.output();

    // Calling Using operand and operator

    // Subtracting the obj2 from obj1
    cout << "Obj1 - Obj2 : " << endl;
    obj1 - obj2;
    obj1.output();
    obj2.output();

    // Subtracting the obj1 from obj2
    cout << "Obj2 - Obj1 : " << endl;
    obj2 - obj1;
    obj1.output();
    obj2.output();

    // Subtracting the obj1 from obj1
    cout << "Obj1 - Obj1 : " << endl;
    obj1 - obj1;
    obj1.output();
    obj2.output();

    // Subtracting the obj2 from obj2
    cout << "Obj2 - Obj2 : " << endl;
    obj2 - obj2;
    obj1.output();
    obj2.output();

    // Calling funtion using overloading

    A obj3(18, 9);
    A obj4(4, 0);

    obj3.output();
    obj4.output();

    // Subtracting the obj4 from obj3
    cout << "Obj3 - Obj4 : " << endl;
    obj3.operator-(obj4);
    obj3.output();
    obj4.output();

    // Subtracting the obj3 from obj4
    cout << "Obj4 - Obj3 : " << endl;
    obj4.operator-(obj3);
    obj3.output();
    obj4.output();

    // Subtracting the obj3 from obj3
    cout << "Obj3 - Obj3 : " << endl;
    obj3.operator-(obj3);
    obj3.output();
    obj4.output();

    // Subtracting the obj4 from obj4
    cout << "Obj4 - Obj4 : " << endl;
    obj4.operator-(obj4);
    obj3.output();
    obj4.output();

    return 0;
}