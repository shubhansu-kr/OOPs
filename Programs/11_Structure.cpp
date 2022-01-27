// Student info through structure

#include <iostream>
using namespace std;

struct student
{
    int roll;
    string name;
};

void setdata(struct student &A)
{
    cout << "Enter name : ";
    cin >> A.name;
    cout << "Enter roll : ";
    cin >> A.roll;
}

void display(struct student &A)
{
    cout << "Name : " << A.name << endl;
    cout << "Roll : " << A.roll << endl;
}

int main()
{
    student S1;
    setdata(S1);
    display(S1);
    return 0;
}