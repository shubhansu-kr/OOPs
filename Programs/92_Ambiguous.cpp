// Ambiguity

#include <iostream>
using namespace std;

class base
{
    int a;

public:
    void greet()
    {
        cout << "Hello " << endl;
    }
};

class derive : public base
{
    int b;

public:
    // greet is also inherited from the base class -> created ambiguity 
    void greet()
    {
        cout << "Bye " << endl;
    }
};

int main()
{
    derive obj1 ;
    base obj2 ; 

    obj1.greet() ; // calls the greet function of derive class = BYE
    obj2.greet() ; // calls the greed funtion of base class = hello 
    
    obj1.base::greet() ; // Using scope resolution we can access the greet 
    // function of base class using the object of derive class = HELLO  

    return 0;
}