// Access sepecifiers

#include <iostream>
using namespace std;

class student
{
private:
    int roll;
    float percentage;

public:
    void input();
    void output();
    // char grade(float a);
    char grade() ;
};

void student ::input()
{
    cout << "Enter roll " << endl;
    cin >> roll;
    cout << "Enter Percentage " << endl;
    cin >> percentage;
}

char student ::grade()
{
    if (percentage >= 90)
    {
        return 'A';
    }
    else if (percentage >= 80)
    {
        return 'B';
    }
    else if (percentage >= 70)
    {
        return 'C';
    }
    else
    {
        return 'D';
    }
}

void student ::output()
{
    cout << "Roll - " << roll << " Percentage - " << percentage << endl;
    cout << "Grade - " << this->grade() << endl;
}

int main()
{
    student harsh;
    harsh.input();
    harsh.output();

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
cout<<"Enter the info of 3rd student: rno and per";
cin>>s3.rno>>per;
//s3.input();
s3.output();
} */

// #include<iostream>
// using namespace std;
// class student
// {
// public: int rno;
// float per;
// /*public:
// void input()
// {
// cout<<"Enter the info of 3rd student: rno and per";
// cin>>rno>>per;
// }*/
// void output()
// {
// cout<<"\nrno= "<<rno<<" and per = "<<per;
// }
// }s3;
// main()
// {
// cout<<"Enter the info of 3rd student: rno and per";
// cin>>s3.rno>>per;
// //s3.input();
// s3.output();
// }

// #include<iostream>
// using namespace std;
// class student
// {
// int rno;
// float per;
// public:
// void input()
// {
// cout<<"Enter the info of 3rd student: rno and per";
// cin>>rno>>per;
// output();
// }

// private: void output()
// {
// cout<<"\nrno= "<<rno<<" and per = "<<per;
// }
// }s3;
// main()
// {

// s3.input();
// //s3.output();
// }