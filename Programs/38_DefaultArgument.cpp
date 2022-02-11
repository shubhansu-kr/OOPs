// Default Argument

#include <iostream>
using namespace std;

// Default Arguments are assigned to arguments from last to first

// void sum (int a, int b=21, int c) ; Error

void sum(int a, int b, int c = 21)
{
    cout << a + b + c << endl;
}

void product(int &a, int b = 1)
{
    cout << a * b << endl;
}
int main()
{
    sum(3, 5, 2); // Sum is 10 : Default argument is replaced by passed .
    sum(3, 5);    // sum 29 : C is missing so space is filled by default argument 21

    // product(3,5) ; We cannot pass an interger to refrence argument
    // product(3,) ; Throws error

    return 0;
}


// #include <iostream>
// using namespace std;
// void sum(int a, int b = 1, int c = 10)
// {
//     cout << "Sum " << a + b + c << endl;
// }
// main()
// {
//     sum(2, 3, 5); // 10
//     sum(2, 10);   // 22
//     sum(20);
// }