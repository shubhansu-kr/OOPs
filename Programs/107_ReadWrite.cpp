// Read-Write : File Handling

#include <iostream>
#include <fstream>
using namespace std;

class Programmer
{
public:
    string name;
    int pId, age, rating;
    static int id;
    Programmer(){};
    Programmer(int a)
    {
        pId = ++id;
        cout << "pId : " << pId << endl;

        cout << "Name : ";
        cin.ignore();
        getline(cin, name);

        cout << "Age : ";
        cin >> age;

        cout << "Rating : ";
        cin >> rating;
        cout << endl;
    };

    void display()
    {
        cout << endl;
        cout << "pId : " << pId << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Rating : " << rating << endl;
    }
};

int Programmer::id = 1000;
int main()
{
    Programmer p[3];

    // ofstream fout("../Dummy.txt");

    // Writing using the write function
    // syntax : fout.write((char*) &object_address, sizeof (object) );

    // for (int i = 0; i < 3; i++)
    // {
    //     fout.write((char *)&p[i], sizeof(p[i]));
    // }
    // fout.close();

    // Now lets copy the data from file back to objects
    Programmer cp[3];

    // Creating object to read
    ifstream fin("../Dummy.txt");

    for (int i = 0; i < 3; i++)
    {
        fin.read((char *)&cp[i], sizeof(cp[i]));
        cp[i].display();
        cout << endl;
    }

    return 0;
}