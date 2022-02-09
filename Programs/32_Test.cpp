// Add Complex Number

#include <iostream>
using namespace std;

class sum;

class complex
{
    int r, i;

public:
    void setdata();

    void display()
    {
        cout << "Complex number is " << r << " + " << i << "i" << endl;
    }
    friend class sum;
};

void complex ::setdata()
{
    cout << "Enter real part : " << endl;
    cin >> r;
    cout << "Enter imaginary part : " << endl;
    cin >> i;
}

class sum
{
    int r, i;

public:
    void calculateSum(complex &a, complex &b)
    {
        r = a.r + b.r;
        i = a.i + b.i;
    }
    void displaySum()
    {
        cout << "Sum is : " << r << " + " << i << "i" << endl;
    }
};

int main()
{
    complex C[2];
    sum S1;

    C[0].setdata();
    C[1].setdata();

    S1.calculateSum(C[0], C[1]) ;
    S1.displaySum() ;
    
    return 0;
}