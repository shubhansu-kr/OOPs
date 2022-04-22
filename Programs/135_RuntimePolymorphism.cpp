// Polymorphism : Run time : Virtual function

#include <iostream>
using namespace std;

class Base
{
protected:
    int a, b, c;

public:
    void sum()
    {
        cout << " BASE : " << a + b + c << endl;
    }
    void setData()
    {
        cout << "Enter : ";
        cin >> a >> b >> c;
    }
};

class Derive : public Base
{
public:
    void sum()
    {
        cout << "Derive : " << a + b << endl;
    }
};

int main()
{
    Base *ptr;
    Derive obj;
    ptr = &obj;

    ptr->setData();
    ptr->sum();
    
    return 0;
}