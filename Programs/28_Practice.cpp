// Practice program - $ Feb 2022

#include <iostream>
using namespace std;

class result;

class student
{
    char name[20];
    int roll;
    int sub[5];
    friend class result;

public:
    void setdata();
    friend void getdata (student &X) ;
};

void student ::setdata()
{
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter roll : ";
    cin >> roll;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks in sub " << i + 1 << " : ";
        cin >> sub[i];
    }
    cout << endl;
}

inline void getdata (student &X) {
    cout << X.name << " " << X.roll << endl ;
    cout << "Marks : " << X.sub[0] << " " << X.sub[1] << " " << X.sub[2] << " " << X.sub[3] << " " << X.sub[4] << " " << endl; 
}

class result
{
    float percentage = 0;
    char grade;

public:
    void setresult(student &X);
    inline void getresult(student &X);
};

void result ::setresult(student &X)
{
    for (int i = 0; i < 5; i++)
    {
        percentage += X.sub[i];
    }
    percentage /= 5.0;

    if (percentage > 90)
    {
        grade = 'A';
    }
    else if (percentage > 80)
    {
        grade = 'B';
    }
    else if (percentage > 70)
    {
        grade = 'C';
    }
    else
    {
        grade = 'D';
    }
}

void result ::getresult(student &X)
{
    cout << "Marks : " << X.sub[0] << " " << X.sub[1] << " " << X.sub[2] << " " << X.sub[3] << " " << X.sub[4] << " " << endl;
    cout << "Percentage : " << percentage << endl;
    cout << "Grade : " << grade;
}

int main()
{
    student S1, S2, S3;
    S1.setdata();
    result R;
    R.setresult(S1);
    R.getresult(S1);
    return 0;
}