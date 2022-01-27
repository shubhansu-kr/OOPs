// Student info through structure

#include <iostream>
using namespace std;

struct student
{
    // cpp has this private access specifiers
private:
    int roll;

public:
    string name;

    // IN cpp, we have the option to declare function inside the structure
    // and access it using dot operator and structure object ;

    void setdata()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter roll : ";
        cin >> roll;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
    }

    void displayRoll();
};

void student ::displayRoll()
{
    cout << "Roll : " << roll << endl;
    // We can define funtion outside the struct definition
}

void setdata(struct student &A)
{
    cout << "Enter name : ";
    cin >> A.name;
    // cout << "Enter roll : ";
    // cin >> A.roll; Cannot access since roll is private now
}

void display(struct student &A)
{
    cout << "Name : " << A.name << endl;
    // cout << "Roll : " << A.roll << endl;
    // private
}

int main()
{
    student S1;
    // setdata(S1);
    // display(S1);
    S1.setdata();
    S1.display();
    S1.displayRoll();
    return 0;
}