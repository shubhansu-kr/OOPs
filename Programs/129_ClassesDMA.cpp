// Dynamic Memory allocation - CLasses

#include <iostream>
using namespace std;

class student
{
    string name;
    int roll;

public:
    float cgpa;
    void getdata()
    {
        cout << "enter name : ";
        // name=new char[6];
        cin >> name;
        cout << "enter roll : ";
        cin >> roll;
        cout << "Enter cgpa : ";
        cin >> cgpa;
    }
    void display()
    {
        cout << "the name of student = " << name << endl;
        cout << "the roll of student = " << roll << endl;
        cout << "the cgpa of student = " << cgpa << endl;
        cout << endl;
    }
};
int main()
{
    cout << "Enter Number of students : ";
    int n;
    cin >> n;
    student *s;
    int i;
    s = new student[n];
    for (i = 0; i < n; i++)
    {
        (*(s + i)).getdata();
        // or (s+i)->getdata();
        // (s+i)->display();
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i].cgpa > 7.5)
        {
            s[i].display();
        }
    }

    delete[] s;
    return 0;
}

// #include <iostream>
// #include <conio.h>
// #include <string>
// using namespace std;
// class student
// {
//     string name;
//     int roll;

// public:
//     void getdata()
//     {
//         cout << "enter name";
//         // name=new char[6];
//         cin >> name;
//         cout << "enter roll";
//         cin >> roll;
//     }
//     void display()
//     {
//         cout << "the name of student=" << name << endl;
//         cout << "the roll of student=" << roll << endl;
//     }
// };
// int main()
// {

//     student *s;
//     int i;
//     s = new student[2];
//     for (i = 0; i < 2; i++)
//     {
//         (*(s + i)).getdata();
//         // or (s+i)->getdata();
//         // (s+i)->display();
//         s[i].display();
//     }

//     return 0;
// }