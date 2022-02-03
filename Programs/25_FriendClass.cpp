// Friend class

#include <iostream>
using namespace std;

class A;
class B;

class A
{
    int a = 33, b = 54;

public:
    friend class B; // B is a friend now
};

class B
{
    int s;

public:
    void sum(A &X);
    float Avg()
    {
        return s / 2.0;
    };
};

void B ::sum(A &X)
{
    s = X.a + X.b;
}

int main()
{
    A obj1;
    B obj2;
    obj2.sum(obj1);
    cout << "Average : " << obj2.Avg() << endl;
    return 0;
}

// #include <iostream>
// using namespace std;
// class A
// {
//     int a, b;

// public:
//     void ip()
//     {
//         a = 10;
//         b = 20;
//     }
//     friend class B;
// };
// class B
// {
//     int s, ar;

// public:
//     void area(A o1)
//     {
//         ar = o1.a * o1.b;
//         cout << "area of rect= " << ar << endl;
//     }
// };
// main()
// {
//     A objA;
//     B objB;
//     objA.ip();
//     objB.area(objA);
// }