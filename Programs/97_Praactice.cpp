// Multiple inheritance

#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int id;
    static int count;

public:
    Employee()
    {
        cout << "Enter employee name ";
        getline(cin, name);
        id = count;
        count++;
    }
};

int Employee::count = 1000;

class Leaders
{
protected:
    string teamLead, teamManager;

public:
    Leaders()
    {
        cout << "Enter team Lead name ";
        getline(cin, teamLead);
        cout << "Enter team Manager name ";
        getline(cin, teamManager);
    }
};

class newEmployee : public Employee, public Leaders
{
protected:
    // inherited name, id, team lead, team manager
    float ctc;
    string location;

public:
    newEmployee()
    {
        cout << "enter location ";
        getline(cin, location);
        cout << "enter ctc ";
        cin >> ctc;
    }

    void info()
    {
        cout << "Name : " << name << endl;
        cout << "ID : " << id << endl;
        cout << "Team Lead : " << teamLead << endl;
        cout << "Team manager : " << teamManager << endl;
        cout << "Location : " << location << endl;
        cout << "CTC : " << ctc << endl;
    }
};

int main()
{
    newEmployee o1;
    o1.info();
    
    return 0;
}