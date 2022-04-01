// Multiple inheritance -> Protected mode

#include <iostream>
using namespace std;

class Details
{
protected:
    int roll;
    string name;

public:
    Details()
    {
        cout << "Enter roll ";
        cin >> roll;
        cout << "Enter Name ";
        cin >> name;
    }
    void display()
    {
        cout << "Name : " << name << " Roll : " << roll << endl;
    }
};

class Marks
{
protected:
    int mth, cse, ece;

public:
    Marks()
    {
        cout << "Marks mth ";
        cin >> mth;
        cout << "Marks cse ";
        cin >> cse;
        cout << "Marks ece ";
        cin >> ece;
    }
};

class Result : protected Details, protected Marks
{
    float per;

protected:
    // Inherited mth, cse, ece , roll, name
public:
    Result()
    {
        per = (mth + cse + ece) / 3.0;
    }
    void getresult()
    {
        cout << "Name : " << name << " Roll : " << roll << endl;
        cout << "Marks : " << endl;
        cout << "mth - " << mth << endl;
        cout << "cse - " << cse << endl;
        cout << "ece - " << ece << endl;
        cout << endl;
        cout << "Percentage " << per << endl;
    }
};

int main()
{
    Result obj1;
    obj1.getresult();
    return 0;
}