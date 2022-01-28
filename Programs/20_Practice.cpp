// Practice/ Homework - 28 Jan 2022

#include <iostream>
using namespace std;

class items
{
    int id;
    int cost;
    static int count;

public:
    void setitem();
    void display()
    {
        cout << "ID - : " << id << ", Cost - : " << cost << endl;
    }
    inline static void getcount();
};

int items ::count = 1000;

void items ::setitem()
{
    cout << "Enter cost : ";
    cin >> cost;
    id = count;
    count++;
}

void items ::getcount()
{
    cout << "count is " << count << endl;
}

int main()
{
    items x, y, z;

    x.setitem();
    y.setitem();
    z.setitem();

    items ::getcount();

    x.display();
    y.display();
    z.display();
    return 0;
}