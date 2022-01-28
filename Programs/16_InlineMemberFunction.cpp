// Non inline member function

#include <iostream>
using namespace std;

// Class member function can be defined in two different ways 
// Inside the class definition : These functions are inline by default 
// Outside the class definiton : These functions are noninline by default

class student
{
    int roll;
    char name[20];

public:
    // Non inline by default 
    void setdata(); 
    // Inline by default 
    void display()
    {
        cout << "Name : " << name << " Roll : " << roll << endl;
    }
};

void student ::setdata()
{
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter roll : ";
    cin >> roll;
}

int main()
{
    student S;
    S.setdata();
    S.display();
    return 0;
}