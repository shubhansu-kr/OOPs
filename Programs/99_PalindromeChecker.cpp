// Is Palindrome

#include <iostream>
using namespace std;

class base
{
protected:
    int num;
    void input()
    {
        cout << "Enter num : ";
        cin >> num;
    }
};

class derive1 : protected base
{
protected:
    // inherited - num , input ()

    int revNum = 0;
    void getReverse()
    {
        int temp = num ;        
        while (temp)
        {
            revNum = (revNum*10) + (temp % 10);
            temp /= 10;
        }
    }
};

class derive2 : protected derive1
{
public:
    bool isPalindrome()
    {
        input();
        getReverse();
        if (revNum == num)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    derive2 obj1;
    cout << "isPlaindrome - "<< obj1.isPalindrome() << endl;
    return 0;
}