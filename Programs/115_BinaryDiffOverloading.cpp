// Write a program to overload binary + operator using friend
// function to add values entered in kilo meters and meters and to
// overload binary – operator using member function to subtract values
// entered in kilograms and grams

#include <iostream>
using namespace std;

class Grams
{
    float g;

public:
    Grams(){};
    Grams(float a) : g(a){};

    void setdata()
    {
        cout << "Enter Grams : ";
        cin >> g;
    }
    float getdata()
    {
        return g;
    }
};

class Kilograms
{
    float kg;

public:
    Kilograms(){};
    Kilograms(float a) : kg(a){};

    void setdata()
    {
        cout << "Enter Kilograms : ";
        cin >> kg;
    }
    float getdata()
    {
        return kg;
    }

    friend void operator-(Kilograms &obj1, Grams &obj2);
};

void operator-(Kilograms &obj1, Grams &obj2)
{
    obj1.kg -= (obj2.getdata() / 1000.0);
}

int main()
{   
    cout << endl;
    Kilograms obj1;
    obj1.setdata();

    Grams obj2;
    obj2.setdata();

    // Difference :
    obj1 - obj2;
    cout << "Difference is  " << obj1.getdata() << " Kg";
    cout << " " <<  endl;
    return 0;
}