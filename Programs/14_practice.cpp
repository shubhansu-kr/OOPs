// Student info - structure , union and one instance of enum.

#include <iostream>
using namespace std;

struct student
{
private:
    int roll;
    char name[20];

public:
    void setdata();
    void display();
};

void student ::setdata()
{
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter roll : ";
    cin >> roll;
}
void student ::display()
{
    cout << "Name : " << name << " Roll : " << roll << endl;
}

union stud
{
    int registration;
    int roll;
};

enum day
{
    mon,
    tue = 8,
    wed,
    thur = 5,
    fri,
    sat,
    sun
};

int main()
{
    student S1;
    S1.setdata();
    S1.display();

    stud S2;
    cout << "Enter registration no. :: ";
    cin >> S2.registration;
    cout << "Resgistration number is " << S2.registration << endl;
    cout << "Enter Roll : ";
    cin >> S2.roll;
    cout << "Roll is : " << S2.roll << endl;

    day x, y, z;
    x = mon;
    y = fri;
    z = wed;

    cout << x << endl;
    cout << x + 3 << endl;
    cout << y << endl;
    cout << z << endl;
    return 0;
}