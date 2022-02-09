// Celsius to Fahrenheit

#include <iostream>
using namespace std;

class Celsius;
class Fahrenheit;

class Fahrenheit
{
    float f;

public:
    inline void setdata();
    friend class Celsius;
};

void Fahrenheit ::setdata()
{
    cout << "Enter the Temperature in fahrenheit " << endl;
    cin >> f;
}

class Celsius
{
    float c;

public:
    inline void setdata(Fahrenheit &a);
    void display()
    {
        cout << "Temp : " << c << "^ Celsius";
    }
};

void Celsius ::setdata(Fahrenheit &a)
{
    c = (a.f - 32) / 1.8;
}

int main()
{
    Fahrenheit F;
    F.setdata();

    Celsius C;
    C.setdata(F);
    C.display();
    return 0;
}