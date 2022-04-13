// Swapping of Nums

#include <iostream>
using namespace std;

class A
{
protected:
    int a, b;

public:
    A(){};
    A(int a, int b) : a(a), b(b){};
    void setData()
    {
        cout << "Enter a : ";
        cin >> a;
        cout << "Enter b : ";
        cin >> b;
    }
};

class B : protected A
{
protected:
    // a and b inherited
    // setdata is inherited
public:
    void display()
    {
        cout << "a : " << a << " b : " << b << endl;
    }
    void swap()
    {
        setData();
        display();
        int temp = a;
        a = b;
        b = temp;
    }
};

class C : protected A
{
protected:
    // inherited a and b
    int c;
    // inherited setData
public:
    void setData()
    {
        cout << "Enter c : ";
        cin >> c;
    }
};

class D : protected C
{
protected:
    // Inherited a, b, c
    // Inherited two setData
public:
    void swap()
    {
        // Set data first
        A::setData();
        C::setData();
        display();
        int temp = a;
        a = b;
        b = c;
        c = temp;
    }
    void display()
    {
        cout << "a : " << a << " b : " << b << " c : " << c << endl;
    }
};

int main()
{
    D obj;
    obj.swap();
    obj.display();
    cout << endl;

    B obj1;
    // obj1.setData() ; Inaccesible
    obj1.swap();
    obj1.display();
    return 0;
}