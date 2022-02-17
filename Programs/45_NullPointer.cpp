// Pointers

#include <iostream>
using namespace std;

int main()
{
    int *p;
    // p = NULL;
    int a = 20;
    p = &a;

    printf("%u \n", p);
    printf("%p \n", p);
    cout << &a << endl;
    cout << p << endl;

    int b = 10;
    int *ptr = NULL;

    cout << b << endl;
    // cout << *ptr << endl; Error but compiler is improvising the code

    // int * const ptrc ; Error : WE need to initialise while declaration
    int *const ptrc = &b;
    cout << *ptrc << endl;
    // ptrc = &a ; Error : Cannot reinitialise the contant ptr (read)

    b = 30;
    cout << "Check : " <<  *ptrc << endl; 

    const int *cpt = &a;
    cout << *cpt << endl;

    cpt = &b;
    cout << *cpt << endl;

    return 0;
}