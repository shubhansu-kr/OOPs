// Find min.

#include <iostream>
using namespace std;

template <class T1, class T2>
void myMin(T1 a, T2 b)
{
    cout << "Min : " << (a < b ? a : b) << endl;
}

int main()
{
    int a ;
    float b ;
    cout << "Enter num : " ;
    cin >> a >> b ;
    myMin(a, b);
    return 0;
}