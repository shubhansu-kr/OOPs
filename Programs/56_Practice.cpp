// Practice

#include <iostream>
using namespace std;

class Database
{
    int data;
    static Database *ins;
    Database(int i) : data(i) {}

public:
    int get()
    {
        return data;
    }
    static Database *getInstance(int i)
    {
        if (!ins)
        {
            ins = new Database(i);
        }
        return ins;
    }
};

Database *Database::*ins = 0;

int main()
{
    int a[5] = {3, 5, 2, 1, 8};
    for (int i = 0; i < 5; i++)
    {
        Database *ins = Database::getInstance(a[i]);
        cout << ins->get();
    }

    return 0;
}