// Function template

#include <iostream>
using namespace std;

template <class T>
T mySum(T a = 0, T b = 0, T c = 0)
{
    return a + b + c;
}

template <class T1, class T2>
void myMax(T1 a, T2 b)
{
    cout << "Max : " << (a > b ? a : b) << endl;
}

int main()
{
    int A[3];
    float B[3];
    cout << "Enter int : " << endl;
    cin >> A[0] >> A[1] >> A[2];
    cout << "Sum Int : " << mySum(A[0], A[1], A[2]) << endl;

    cout << "Enter float : " << endl;
    cin >> B[0] >> B[1] >> B[2];
    cout << "Sum Float : " << mySum(B[0], B[1], B[2]) << endl;

    myMax(A[0], B[0]);
    myMax(A[1], A[0]);

    return 0;
}

// #include <iostream>
// using namespace std;
// template <class X>
// void sum(X a, X b)
// {
//     cout << "sum= " << a + b << endl;
// }
// main()
// {
//     sum(2, 5);
//     sum(3.4, 2.2);
// }