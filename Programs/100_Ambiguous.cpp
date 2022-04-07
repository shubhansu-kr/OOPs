// Ambiguity

#include <iostream>
using namespace std;

class base
{
protected:
    int a;
    void input()
    {
        cout << "Enter a " << endl;
        cin >> a;
    }
};

class derive1 : virtual protected base
{
protected:
    int b;
    void input()
    {
        cout << "Enter b " << endl;
        cin >> b;
    }
};

class derive2 : protected virtual base
{
protected:
    int c;
    void input()
    {
        cout << "Enter c " << endl;
        cin >> c;
    }
};

class derive3 : protected derive1, protected derive2
{
public:
    // Ambiguous Since base::a is being derived fron 1 and 2 , thus twice
    // This ambiguity could be solved using scope resolution
    // but the iherited ambiguous fxn like input cant be solved using scope resolution

    // virtual class is used to resolve this ambiguity
    // Add virtual to the inherited mode
    // virtual - Takes only one copy out of multiple duplicates
    void getSum()
    {
        base::input();
        derive1::input();
        derive2::input();
        int sum = a + b + c;
        cout << "Sum is " << sum;
    }
};

int main()
{
    derive3 obj1;
    obj1.getSum();

    return 0;
}