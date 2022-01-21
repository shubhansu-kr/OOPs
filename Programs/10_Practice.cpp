// WAP To represent the details of two students

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
    char grade();
} harsh, utkarsh;

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

    harsh.input();
    utkarsh.input();
    harsh.output();
    utkarsh.output();
    
    return 0;
}