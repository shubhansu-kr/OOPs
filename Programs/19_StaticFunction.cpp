// Static Function

#include <iostream>
using namespace std;

class student
{
    int roll;
    static int count;
    char name[20];

public:
    void setdata();
    void display();
    static void getcount();
    // {
    //     cout << count << endl;
    // }
};

void student ::getcount()
{
    cout << count << endl;
}
int student ::count = 12100;

void student ::setdata()
{
    cout << "Enter name : ";
    cin >> name;
    roll = count;
    count++;
}

void student ::display()
{
    cout << "Name : " << name << ", Roll : " << roll;
}

int main()
{
    student x, y;
    x.setdata();
    y.setdata();
    student ::getcount();
    return 0;
}

// #include <iostream>
// using namespace std;
// class item
// {
//     static char count;
//     int number;

// public:
//     void getdata(int d) // static data + non static data
//     {
//         number = d;
//         count++;
//     }
//     static void getcount()
//     {
//         cout << count;
//     }
// };
// char item ::count = 97;
// main()
// {
//     item a, b, c;
//     a.getcount();
//     b.getcount();
//     c.getcount();

//     a.getdata(100);
//     b.getdata(200);
//     c.getdata(300);

//     cout << "\nAfter increment" << endl;
//     a.getcount();
//     b.getcount();
//     c.getcount();
//     return 0;
// }
