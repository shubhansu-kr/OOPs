// CA-2 Question 2

#include <iostream>
using namespace std;

class Overloading
{
    int data;

public:
    Overloading(){};
    Overloading(int data) : data(data){};
    friend bool operator>=(Overloading &obj1, Overloading &obj2);
    friend bool operator<(Overloading &obj1, Overloading &obj2);
    friend bool operator&&(Overloading &obj1, Overloading &obj2);
    void operator=(int &x);

    int getData()
    {
        return data;
    }
};

bool operator>=(Overloading &obj1, Overloading &obj2)
{
    if (obj1.data >= obj2.data)
    {
        return true;
    }
    return false;
}

bool operator<(Overloading &obj1, Overloading &obj2)
{
    if (obj1.data < obj2.data)
    {
        return true;
    }
    return false;
}

bool operator&&(Overloading &obj1, Overloading &obj2)
{
    if (obj1.data && obj2.data)
    {
        return true;
    }
    return false;
}

void Overloading ::operator=(int &x)
{
    data = x;
}

int main()
{
    Overloading O1(1), O2(2), O3(0), O4(2), O5(2), O6(8), O7;

    O7 = ((O1 >= O2) + (O3 && O4) * (O5 < O6));
    cout << O7.getData() << endl;

    return 0;
}