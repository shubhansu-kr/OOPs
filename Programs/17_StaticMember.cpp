// Static member

#include <iostream>
using namespace std;

class student
{
    static int reg;
    char name[20];
    int roll;

public:
    void setdata();
    void getdata();
};
int student ::reg = 121000;

void student ::setdata()
{
    roll = reg;
    cout << "Enter name : ";
    cin >> name;
    reg++;
}

void student ::getdata()
{
    cout << "Name : " << name << ", Roll : " << roll << endl;
}

int main()
{
    student S1, S2;
    S1.setdata();
    S2.setdata();

    S1.getdata();
    S2.getdata();

    return 0;
}