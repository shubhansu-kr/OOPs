// Hierarchichal

#include <iostream>
#include <vector>
using namespace std;

class A
{
protected:
    int data;

public:
    void setData()
    {
        cout << "Enter data : " << endl;
        cin >> data;
    }
};

class B : protected A
{
protected:
    // Inherited data, setData () ;
public:
    bool isPrime()
    {
        setData();
        for (int i = 2; i < data / 2; i++)
        {
            if (data % i == 0)
            {
                return false;
            }
        }
        return true;
    }
};

class C : protected A
{
protected:
    // Inherited data , setData() ;
public:
    bool isPalindrome()
    {
        setData();
        vector<int> dig;
        while (data)
        {
            dig.push_back(data % 10);
            data /= 10;
        }
        for (int i = 0; i < dig.size() / 2; i++)
        {
            if (dig[i] != dig[dig.size() - 1 - i])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    B obj1;
    obj1.isPrime();

    C obj2;
    obj2.isPalindrome();
    return 0;
}