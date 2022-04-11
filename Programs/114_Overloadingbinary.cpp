// Write a program to overload binary + operator using friend
// function to add values entered in kilo meters and meters and to
// overload binary – operator using member function to subtract values
// entered in kilograms and grams

#include <iostream>
using namespace std;

class Meter
{
    float m;

public:
    Meter(){};
    Meter(float a) : m(a){};

    void setdata()
    {
        cout << "Enter Meters : ";
        cin >> m;
    }
    float getdata()
    {
        return m;
    }
};

class Kilometer
{
    float km;

public:
    Kilometer(){};
    Kilometer(float a) : km(a){};

    void setdata()
    {
        cout << "Enter Kilometer : ";
        cin >> km;
    }
    float getdata()
    {
        return km;
    }

    friend void operator+(Kilometer &obj1, Meter &obj2);
};

void operator+(Kilometer &obj1, Meter &obj2)
{
    obj1.km += (obj2.getdata() / 1000.0);
}

int main()
{
    Kilometer obj1;
    obj1.setdata();

    Meter obj2;
    obj2.setdata();

    // Sum :
    obj1 + obj2;
    cout << "Sum is " << obj1.getdata() << " Km";
    
    return 0;
}