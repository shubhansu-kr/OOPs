// Swapping of two numbers

#include <iostream>
using namespace std;

int a = 10, b = 20;

void swap()
{
    int temp = a;
    a = b;
    b = temp;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int swap1()
{
    int temp = a;
    a = b;
    b = temp;

    return 1;
}

int swap1(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    return 1;
}

int main()
{
    int a = 100, b = 200;
    // cout << "Enter a " << endl;
    // cin >> a;
    // cout << "Enter b " << endl;
    // cin >> b;

    // Without passing the argument we cannot swap the local variable
    cout << "Before swapping global var " << endl;
    cout << ::a << " " << ::b << endl;
    swap();
    cout << "Global variable after swap " << endl;
    cout << ::a << " " << ::b << endl;
    cout << endl;

    // Swapping using parameters
    cout << "Before swapping local var " << endl;
    cout << a << " " << b << endl;
    swap(a, b);
    cout << "After swapping : " << endl;
    cout << a << " " << b << endl;
    cout << endl;

    // Return type swapping
    cout << "Before swapping global var " << endl;
    cout << ::a << " " << ::b << endl;
    swap1();
    cout << "Global variable after swap " << endl;
    cout << ::a << " " << ::b << endl;
    cout << endl;

    // Swapping using parameters and return type
    cout << "Before swapping local var " << endl;
    cout << a << " " << b << endl;
    swap1(a, b);
    cout << "After swapping : " << endl;
    cout << a << " " << b << endl;
    cout << endl;

    return 0;
}