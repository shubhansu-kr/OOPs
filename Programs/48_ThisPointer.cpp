// This pointer
// this pointer stores the address of current object

#include <iostream>
using namespace std;

class A
{
    int a = 8;

public:
    void setdata(int a)
    {
        cout << this->a << endl;
        this->a = a;
        cout << a << endl;
    }
    void display()
    {
        cout << a << endl;
        cout << this << endl;
    }
};

int main()
{
    A shyam;
    shyam.setdata(4);
    shyam.display();
    cout << &shyam << endl;

    A ram;
    ram.display();

    return 0;
}

// #include <iostream>
// using namespace std;
// class X
// {
// private:
//     int a;

// public:
//     void Set_a(int a)
//     {
//         // The 'this' pointer is used to retrieve 'xobj.a'
//         // hidden by the automatic variable 'a'
//         cout << this << endl;
//         this->a = a; // fnc formal para
//     }
//     void Print_a()
//     {
//         cout << "a = " << a << endl;
//     }
// };
// int main()
// {
//     X xobj, x2;
//     int a = 5;
//     xobj.Set_a(a);
//     xobj.Print_a();

//     x2.Set_a(10);
//     x2.Print_a();
// }