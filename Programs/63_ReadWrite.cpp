// Read and Write are inbuit funtions of fstream library used to
// handle the stream of data

#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    return 0;
}

// #include <iostream>
// using namespace std;
// #include <fstream>
// #include <iomanip>
// class emp
// {
// private:
//     int empno;
//     char name[20];
//     float salary;

// public:
//     void get()
//     {
//         cout << "enter name,emp no and salary";
//         cin >> name >> empno >> salary;
//     }
//     void display()
//     {
//         cout << setw(4) << empno << setw(4) << name << setw(3) << salary << endl;
//     }
// };

// int main()
// {
//     ofstream fout;
//     emp e[3], em[3];
//     int n, i;

//     fout.open("emp.dat", ios::out);
//     cout << "enter the number of employees";
//     cin >> n;
//     for (i = 0; i < n; i++)
//     {
//         e[i].get();
//         fout.write((char *)&e[i], sizeof(e[i]));
//     }
//     fout.close();
//     ifstream iff;
//     iff.open("emp.dat", ios::in);

//     for (i = 0; i < n; i++)
//     {

//         iff.read((char *)&em[i], sizeof(em[i]));
//         em[i].display();
//     }
//     iff.close();

//     return 0;
// }