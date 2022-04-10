// CA - 2 Question 2

#include <iostream>
using namespace std;

class Overloading
{
    int data;

public:
    friend bool operator>=(Overloading &obj1, Overloading &obj2);
    friend bool operator<(Overloading &obj1, Overloading &obj2);
    friend bool operator&&(Overloading &obj1, Overloading &obj2);
    void operator=(int x)
    {
        data = x;
    }

    void setdata(int x)
    {
        data = x;
    }
    int Display()
    {
        return data;
    }
};

bool operator>=(Overloading &obj1, Overloading &obj2)
{
    if (obj1.data >= obj2.data)
    {
        return 1;
    }
    return 0;
}

bool operator<(Overloading &obj1, Overloading &obj2)
{
    if (obj1.data < obj2.data)
    {
        return 1;
    }
    return 0;
}

bool operator&&(Overloading &obj1, Overloading &obj2)
{
    if (obj1.data && obj2.data)
    {
        return 1;
    }
    return 0;
}

int main()
{
    Overloading O1, O2, O3, O4, O5, O6, O7;

    O1.setdata(3);
    O2.setdata(4);
    O3.setdata(6);
    O4.setdata(2);
    O5.setdata(6);
    O6.setdata(2);
    O7.setdata(1);

    O7 = ((O1 >= O2) + (O3 && O4) * (O5 < O6));
    cout << O7.Display() << endl;

    return 0;
}