// Copy constructor with default argument

#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    Rectangle() {}
    Rectangle(int a, int b = 2)
    {
        length = a;
        breadth = b;
    }

    // Rectangle(int a)
    // {
    //     length = a;                  Genrates error (More than one instance
    //     breadth = a;                 of constructor available)
    // }
    void area()
    {
        cout << length * breadth << endl;
    }
};
int main()
{
    Rectangle R1;
    Rectangle R2(3);
    Rectangle R3(4, 5);

    R1.area();
    R2.area();
    R3.area();

    return 0;
}

// #include <iostream>
// using namespace std;
// class Rectangle
// {
// private:
//     int length, breadth;

// public:
//     Rectangle(int l, int b = 10) // fnc with def values
//     {
//         length = l;
//         breadth = b;
//     }
//     void area()
//     {
//         int a = length * breadth;
//         cout << "\narea is " << a;
//     }
// };
// main()
// {
//     Rectangle r1(2, 3), r2(2);
//     r1.area();
//     r2.area();
// }