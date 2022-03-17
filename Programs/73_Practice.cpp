// WAP to check if two numbers are same or not

#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A()
    {
        cout << "Enter num : ";
        cin >> x;
    }
    bool operator==(A &a)
    {
        return (x == a.x);
    }
};

int main()
{
    A obj1;
    A obj2;
    cout << "Obj1 == obj2 : " << (obj1 == obj2) << endl;
    return 0;
}