// Operator overloading

#include <iostream>
using namespace std;

class A
{
    int data;

public:
    A(){};
    A(int a) : data(a){};
    A operator-(A obj)
    {
        A temp;
        temp.data = data - obj.data;
        return temp;
    }

    A operator>(A obj)
    {
        A temp;
        temp.data = (data > obj.data);
        return temp;
    }

    // void operator=(A obj)
    // {
    //    data = obj.data;
    // }
    void display()
    {
        cout << "data : " << data << endl;
    }
};

int main()
{
    A O1, O2(4), O3(4), O4(0);
    O1 = O2 > O3 - O4;

    // A O6 = O3;
    // O6.display();
    
    cout << endl;
    O1.display();
    return 0;
}