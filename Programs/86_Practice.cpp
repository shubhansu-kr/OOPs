// WAP to convert dollar to rupees using class to basic conversion

#include <iostream>
using namespace std;

class dollar
{
    int a;

public:
    dollar() {}
    dollar(int a) : a(a) {} // Parameterised contructor 

    operator float() // cast overloading 
    {
        return a * 75.78;
    }
};

int main()
{
    dollar obj1;

    int d;
    float inr;
    cout << "Enter dollar ";
    cin >> d;

    obj1 = d; // basic to object

    inr = obj1; // object ot basic 
    cout << d << " dollar = " << inr << " Inr " << endl;

    return 0;
}