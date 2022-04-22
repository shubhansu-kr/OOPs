// Virtual Function

#include <iostream>
using namespace std;

class Base
{
public:
    void greet()
    {
        cout << "Hello !" << endl;
    }

    virtual void dis()
    {
        cout << "Bye !" << endl;
    }
};

class Derive : public Base
{
public:
    // redefined greet
    void greet()
    {
        cout << "Hi !" << endl;
    }

    // redefined dis
    void dis()
    {
        cout << "Bye-Bye !" << endl;
    }
};

int main()
{
    Derive obj;
    Base *ptr;

    ptr = &obj;
    ptr->greet(); // Will call the function of base class

    ptr->dis();
    // Will call the function of derive class since we are using a virtual function

    return 0;
}