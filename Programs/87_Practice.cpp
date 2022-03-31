// WAP to convert the decimal to binary

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int decimalToBinary(int x)
{
    vector<int> v;
    while (x != 0)
    {
        v.push_back(x % 2);
        x /= 2;
    }
    int bin = 0;
    for (int i = 0; i < v.size(); i++)
    {
        bin += v[i] * pow(10, i);
    }
    return x;
}

class decimal
{
    int data;

public:
    decimal()
    {
        cout << "Enter decimal ";
        cin >> data;
    }
    int getdata()
    {
        return data;
    }
};

class binary
{
    int data;

public:
    binary(){};

    // Logic in destination class -> Parameterised constructor
    binary(decimal &A)
    {
        int x = A.getdata();
        data = decimalToBinary(x);
    }
    void display()
    {
        cout << data << endl;
    }
};

int main()
{
    decimal obj1;
    binary obj2;
    obj2 = obj1;
    obj2.display();
    return 0;
}