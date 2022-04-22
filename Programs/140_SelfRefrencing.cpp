// Self refrencing Class - Linked list in disguise

#include <iostream>
using namespace std;

int main()
{

    return 0;
}

// #include <iostream>
// using namespace std;
// class student
// {
//     int rollno;
//     char name[10];
//     int age;
//     student *next;

// public:
//     student()
//     {
//         next = NULL;
//     }
//     void getdata()
//     {
//         cout << "Enter rollno, name, age " << endl;
//         cin >> rollno >> name >> age;
//     }
//     void link(student *t)
//     {
//         next = t;
//     }
//     void print()
//     {
//         student *p = this;
//         while (p != NULL)
//         {
//             cout << "Roll no = " << p->rollno << endl;
//             cout << "Name = " << p->name << endl;
//             cout << "Age =" << p->age << endl;
//             p = p->next;
//         }
//     }
// };
// main()
// {
//     student n1, n2, n3;
//     n1.getdata();
//     n2.getdata();
//     n3.getdata();
//     n1.link(&n2);
//     n2.link(&n3);
//     n1.print();
// }