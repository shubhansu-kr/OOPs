// Result Management System

#include <iostream>
#include <windows.h>
using namespace std;

class Marks
{
protected:
    int roll;
    string name;
    float mth, cse, ece;

public:
    void input()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter roll : ";
        cin >> roll;
        cout << "Enter cse marks : ";
        cin >> cse;
        cout << "Enter ece marks : ";
        cin >> ece;
        cout << "Enter mth marks : ";
        cin >> mth;
    }
};

class Percentage : protected virtual Marks
{
protected:
    // Inherited - name , roll, marks.
    // input() function
    float percent;

public:
    void setPercent()
    {
        percent = (mth + cse + ece) / 3.0;
    }
    void getPercentage()
    {
        cout << "Percentage : " << percent << endl;
    }
};

class Grade : virtual protected Percentage
{
protected:
    // Inherited class marks
    // Inherited : percent, setpercent(), getPercent()
    char grad;

public:
    void setGrad()
    {
        if (percent > 90)
        {
            grad = 'A';
        }
        else if (percent > 80)
        {
            grad = 'B';
        }
        else if (percent > 70)
        {
            grad = 'C';
        }
        else if (percent > 60)
        {
            grad = 'D';
        }
        else
        {
            grad = 'E';
        }
    }
    void getGrad()
    {
        cout << "Grade : " << grad << endl;
    }
};

class Result : virtual protected Percentage, protected Grade
{
protected:
    // Inherited : Percentage class - percent, getPercent(), setPercent()
    // Inherited - Marks class - name , marks , roll, input()
    // Inherited - Grade class - grad , setGrad , getGrad()
public:
    void setResult()
    {
        input();
        setPercent();
        setGrad();
    }
    void getResult()
    {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << "Marks : (cse-" << cse << ",ece-" << ece << ",mth-" << mth << ")" << endl;
        cout << "Percentage : " << percent << endl;
        cout << "Grade : " << grad << endl;
    }
};

int main()
{
    Result student[3];
    cout << "Set data for three students - " << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Student " << i + 1 << " : " << endl;
        student[i].setResult();
        system("cls");
    }
    cout << "Data Set Sucessfully" << endl;
    int n;
A:
    cout << "Enter nth student to check result : ";
    cin >> n;
    cout << endl;
    student[n].getResult();
    cout << endl;

    cout << "1 to recheck , 0 to exit : ";
    cin >> n;

    if (n == 1)
    {
        system("cls");
        goto A;
    }
    return 0;
}