// Overload Function

#include <iostream>
using namespace std;

class A
{
    int data;

public:
    A(){};
    A(int a) : data(a){};
    bool check(char a)
    {
        for (int i = 2; i < data / 2; i++)
        {
            if (data % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    void check(int a)
    {
        a = 0;
        while (data)
        {
            a = a * 10 + (data % 10);
            data /= 10;
        }
        data = a;
    }
    int getData()
    {
        return data;
    }
};

int main()
{
    A obj(7879);

    cout << "Obj is prime : " << obj.check('p') << endl;
    cout << "Before reverse : " << obj.getData() << endl;
    obj.check(0);
    cout << "After reverse : " << obj.getData() << endl;

    return 0;
}