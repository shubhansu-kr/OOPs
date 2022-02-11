// Practice - !!th Feb 2022

#include <iostream>
using namespace std;

class Sum
{
public:
    void sum(int x, char y)
    {
        cout << "\n sum of integer+ char is " << x + y;
    }
    void sum(double x, double y)
    {
        cout << "\n sum of two floating no are " << x + y;
    }
    void sum(char x, char y)
    {
        cout << "\n sum of characters are " << x + y;
    }
};

int main()
{
    Sum S1;
    int a = 10;
    char b = 'A'; // 65
    double c = 7.52, d = 8.14;
    char e = 'a', f = 'b';
    S1.sum(a, b);
    S1.sum(e, f);
    S1.sum(c, d);

    return 0;
}

// #include <iostream>
// using namespace std;
// void sum(int x, char y)
// {
//     cout << "\n sum of integer+ char is" << x + y;
// }
// void sum(double x, double y)
// {
//     cout << "\n sum of two floating no are" << x + y;
// }
// void sum(char x, char y)
// {
//     cout << "\n sum of characters are" << x + y;
// }

// main()
// {
//     int a = 10;
//     char b = 'A'; // 65
//     double c = 7.52, d = 8.14;
//     char e = 'a', f = 'b';
//     sum(a, b);
//     sum(e, f);
//     sum(c, d);
// }