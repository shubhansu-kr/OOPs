// Find the max val

#include <iostream>
using namespace std;

template <class T1, class T2>
class A
{
    T1 a;
    T2 b;

public:
    A(){};
    A(T1 a, T2 b) : a(a), b(b){};
    void isMax()
    {
        cout << "is Max : " << (a > b ? a : b) << endl;
    }
};

int main()
{
    A<int, int> obj0(3, 4);
    obj0.isMax();

    A<char, int> obj1('s', 4);
    obj1.isMax();

    A<char, char> obj2('s', 'f');
    obj2.isMax();

    A<float, int> obj3(3.4, 4);
    obj3.isMax();

    return 0;
}