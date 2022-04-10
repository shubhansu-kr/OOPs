// Initialiser list

#include <iostream>
using namespace std;

class A
{
    const int a;
    int &b ;
public:
    // Error :
    // A(){};
    // A(int a)
    // {
    //     this.a = a;
    // }

    // Use initialiser list to initialise a const data member and refrecne var
    A(int a, int &b) : a(a), b(b){};
};

int main()
{

    return 0;
}