// Create an object and initialise its value

#include <iostream>
using namespace std;

class student
{
    int roll;
    char name[30];

public:
    void setdata();
    void display();
};

void student::setdata()
{
    cout << "Enter roll" << endl;
    cin >> roll;
    cout << "Enter name " << endl;
    cin >> name;
}
void student ::display()
{
    cout << "Name : " << name << endl;
    cout << "Roll : " << roll << endl;
}

int main()
{
    student Harsh;
    Harsh.setdata();
    Harsh.display();

    return 0;
}

/*
#include<iostream>
using namespace std;
class student
{
int rno;
float per;
public:
void input()
{
cout<<"Enter the info of 3rd student: rno and per";
cin>>rno>>per;
}
void output()
{
cout<<"\nrno= "<<rno<<" and per = "<<per;
}
}s3;
main()
{

s3.input();
s3.output();
}
*/