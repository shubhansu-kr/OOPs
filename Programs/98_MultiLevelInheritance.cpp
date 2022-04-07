// Multi-level Inheritance

#include <iostream>
using namespace std;

class base
{
protected:
    int a, b, c, d;
    void input()
    {
        cout << "Enter values ";
        cin >> a >> b >> c >> d;
    }
};

class derive1 : protected base
{
protected:
    // int a, b, c, d inherited
    // void input inherited

    int sum()
    {
        return a + b + c + d;
    }
};

class derive2 : protected derive1
{
protected:
    // int a, b, c, d inherited
    // void input inherited
    // int sum inherited
public:
    float average()
    {
        input();
        return sum() / 4.0;
    }
};

int main()
{
    derive2 obj;
    cout << obj.average() << endl;
    return 0;
}