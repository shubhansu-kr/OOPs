//

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A()
    {
        a = 1000;
    }
    A(int x)
    {
        cout << "PC called" << endl;
        cout << a << endl;
        cout << a + x << endl;
        a += x;
        cout << a << endl;
    }
    void display()
    {
        cout << a << endl;
    }
    // void operator=(int x) {
    //     a = a+x ;
    // }
};

int main()
{
    A obj1;
    obj1.display(); // Expecting - 1000
    int count = 5;
    obj1 = count; // operator overloaded 
    obj1.display();

    return 0;
}