// Practice :

#include <iostream>
using namespace std;

class A
{
protected:
    int a, b, c;

public:
    void setData()
    {
        cout << "Enter a : ";
        cin >> a;
        cout << "Enter b : ";
        cin >> b;
        cout << "Enter c : ";
        cin >> c;
    }
};

class B : protected A
{
protected:
    // Inherited a, b, c
    // Inherited setData
    int min;

public:
    void setMin()
    {
        setData();
        min = a;
        if (min < b)
        {
            min = b;
        }
        if (min < c)
        {
            min = c;
        }
    }
    int getData()
    {
        return min;
    }
};

class C : protected A
{
protected:
    int sum;
    // Inherited a, b, c
public:
    bool isPrime(int a)
    {
        for (int i = 2; i < a / 2; i++)
        {
            if (a % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    void setSum()
    {
        sum = 0;
        setData();
        if (isPrime(a))
        {
            sum += a;
        }
        if (isPrime(b))
        {
            sum += b;
        }
        if (isPrime(c))
        {
            sum += c;
        }
    }
    int getSum()
    {
        return sum;
    }
};

class D : protected A
{
protected:
    // Inherited a, b, c ;
    // Inherited setData ;
    int sum;

public:
    void setSum()
    {
        setData();
        sum = a + b + c;
    }
    int getSum()
    {
        return sum;
    }
};

class E : public D
{
protected:
    // inherited a, b, c
    // setData(), setSum(), getSum() ;
    int avg;

public:
    void setData()
    {
        setSum();
        avg = sum / 3;
    }
    void getData()
    {
        cout << "Sum : " << getSum() << endl;
        cout << "Average : " << avg << endl;
    }
};

int main()
{
    B obj1;
    obj1.setMin();
    cout << "Min : " << obj1.getData();

    C obj2;
    
    D obj3;
    return 0;
}