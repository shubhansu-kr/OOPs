// Class template

#include <iostream>
using namespace std;

template <class T>
class Base
{
    T a, b;

public:
    Base() {}
    Base(T a, T b) : a(a), b(b){};
    T sum()
    {
        return a + b;
    }
};

int main()
{
    Base<int> obj(3, 5);
    cout << obj.sum() << endl;

    Base<char> obj1(65, 32); // Passing ascii value (implicit conversion )
    cout << obj1.sum() << endl;

    Base<bool> obj2(true, false);
    cout << obj2.sum() << endl;
    
    return 0;
}