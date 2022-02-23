// Constructor

#include <iostream>
using namespace std;

class Student
{
    int roll;
    string fullName;
    int age;
    string section;

public:
    // Default constructor
    Student()
    {
        section = "K21GP";
    }

    // Parameterised constructor
    Student(int a)
    {
        section = "K21GP";
        roll = a;
    }

    // Parameterised constructor using scope resolution
    Student(int a, int b);
    void setData(string a, int b);
    void displayData();
};

Student ::Student(int a, int b)
{
    roll = a;
    age = b;
}

void Student ::setData(string a, int b)
{
    fullName = a;
    age = b;
}

void Student ::displayData()
{
    cout << "Student Name : " << fullName << endl;
    cout << "Section : " << section << endl;
    cout << "Roll Number : " << roll << endl;
    cout << "Age : " << age << endl;
}

int main()
{
    Student S[5] = {33}; // Using parameterised constructor with array of
                         // objects
    // (S[0]).displayData();

    Student S1(32);

    Student S2(33, 18);
    S2.displayData();
    
    return 0;
}

// #include <iostream>
// using namespace std;
// class Rectangle
// {
// private:
//     int length, breadth;

// public:
//     Rectangle() // def const
//     {
//         cout << "\n enter l and b";
//         cin >> length >> breadth;
//         // length=5;breadth=6;
//     }

//     void area()
//     {
//         int a = length * breadth;
//         cout << "area is " << a << endl;
//     }
// };

// main()
// {
//     Rectangle r1;
//     r1.area();
//     Rectangle r2;
//     r2.area();
// }