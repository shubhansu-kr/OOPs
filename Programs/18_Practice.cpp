// Practice

#include <iostream>
using namespace std;

class item
{
    static int count;
    int number;

public:
    void getdata(int a)
    {
        number = a;
        count++;
    }
    void getcount()
    {
        cout << count << " " << endl;
    }
};

int item ::count = 1;
int main()
{
    item a, b, c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(321);
    b.getdata(43);
    c.getdata(76);

    cout << "After reading " << endl;
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}