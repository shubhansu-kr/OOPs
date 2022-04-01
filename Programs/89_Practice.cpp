// WAP to find the percentage, using single inheritance

#include <iostream>
using namespace std;

class Marks
{
protected:
    int mth, cse, ece;

public:
    Marks()
    {
        cout << "Enter mth marks : ";
        cin >> mth;
        cout << "Enter ece marks : ";
        cin >> ece;
        cout << "Enter cse marks : ";
        cin >> cse;
    }
    void display()
    {
        cout << "Maths : " << mth << endl;
        cout << "ECE : " << ece << endl;
        cout << "CSE : " << cse << endl;
    }
};

class Result : public Marks
{
    float percent;

public:
    Result()
    {
        percent = (cse + mth + ece) / (3);
    }
    void getOutput()
    {
        cout << "Percentage : " << percent << endl;
    }
};

int main()
{
    Result obj1 ;
    obj1.display();
    obj1.getOutput();
    return 0;
}