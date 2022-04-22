// Find max;

#include <iostream>
using namespace std;

class Base
{
protected:
    int n;
    int *Arr;

public:
    Base()
    {
        cout << "Enter n : ";
        cin >> n;
        Arr = new int[n];
    }

    void setData()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Enter num : ";
            cin >> *(Arr + i);
        }
    }

    virtual void max()
    {
        cout << "Base class : " << endl;
    }
};

class Derive : public Base
{
    int maxNum;

public:
    Derive()
    {
        maxNum = 0;
        cout << "Derive Conc called " << endl;
    }
    // Redefine the max func
    void max()
    {
        for (int i = 0; i < n; i++)
        {
            if (Arr[i] > maxNum)
            {
                maxNum = Arr[i];
            }
        }
    }

    int getData()
    {
        return maxNum;
    }
};

int main()
{
    Derive obj;
    Base *ptr;

    ptr = &obj;

    ptr->setData();
    ptr->max();

    // cout << "Max : " << ptr->getData() ; Cannot access the funciton of base class
    cout << "Max : " << obj.getData() << endl;
    return 0;
}