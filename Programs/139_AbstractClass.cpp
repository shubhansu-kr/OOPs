// Pure Virtual Function

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void greet()
    {
        cout << "hello !" << endl;
    }

    // pure Virtual function :
    virtual void name() = 0;

    // Any class having atleast one pure virtual class is known as abstract class
};

class Derive : public Base
{
public:
    // void greet()
    // {
    //     cout << "Hi !" << endl;
    // }

    // defining all the pure virtual function in derive class make the
    // the class concrete
    void name()
    {
        cout << "My name is Shubhansu-kr." << endl;
    }
};

int main()
{
    Base *ptr;
    Derive obj; // gives error if derive class does not define the pure virtual class 

    ptr = &obj;
    // ptr->greet(); // Prints Hi if the greet is redefined

    // On removal of greet function from derive class, compiler calls
    // the base class funciton.
    ptr->greet();
    ptr->name(); 

    return 0;
}