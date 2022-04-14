// Student Report : Multiple inheritance

#include <iostream>
using namespace std;

class A
{
protected:
    string name;
    int roll;
    int ca1Marks, ca2marks, ca3marks;
    float attendence;

public:
    void setData()
    {
        cout << "Enter name of student : ";
        // cin.ignore();
        getline(cin, name);
        cout << "Enter roll : ";
        cin >> roll;
        cout << "Enter marks CA1, CA2, CA3 : ";
        cin >> ca1Marks >> ca2marks >> ca3marks;
        cout << "Enter Attendence : ";
        cin >> attendence;
    }
    
};

class B
{
protected:
    int mte, ete;

public:
    void setData()
    {
        cout << "Enter mte marks (out of 20) : ";
        cin >> mte;
        cout << "Enter ete marks (out of 45) : ";
        cin >> ete;
    }
};

class C : protected A, protected B
{
protected:
    float totalMarks;
    char grade;

public:
    void setData()
    {
        A::setData();
        B::setData();

        // CA Evaluation : (Weightage 30)
        int min = ca1Marks;
        if (min > ca2marks)
        {
            min = ca2marks;
        }
        if (min > ca3marks)
        {
            min = ca3marks;
        }
        float caTotal = (ca1Marks + ca2marks + ca3marks) - (min);
        caTotal /= 2.0;

        int attMarks = 0;
        if (attendence > 95)
        {
            attMarks = 5;
        }
        else if (attendence > 90)
        {
            attMarks = 4;
        }
        else if (attendence > 85)
        {
            attMarks = 3;
        }
        else if (attendence > 80)
        {
            attMarks = 2;
        }
        else if (attendence > 75)
        {
            attMarks = 1;
        }

        totalMarks = caTotal + attMarks + mte + ete;

        if (totalMarks > 95)
        {
            grade = 'A';
        }
        else if (totalMarks > 90)
        {
            grade = 'B';
        }
        else if (totalMarks > 80)
        {
            grade = 'C';
        }
        else if (totalMarks > 70)
        {
            grade = 'D';
        }
        else if (totalMarks > 60)
        {
            grade = 'E';
        }
    }

    void getData()
    {
        cout << "Percentage : " << totalMarks << endl;
        cout << "Grade : " << grade << endl;
    }
};

int main()
{
    C obj1;
    obj1.setData();
    obj1.getData();
    return 0;
}