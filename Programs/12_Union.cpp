// Union

#include <iostream>
using namespace std;

// union stud
// {
//     int a = 10; // we can initialise data during declaration
//     // int b = 29;  Error: since we can only initialise at max one member
//     int b ;
//     // Here a and b share the same memory location
// };

union student {
    int roll;
    float percentage ;
    // string name ;
    // Throwing error if i include a string data type 
};

// void set (union student &A) {
//     cout << "Enter roll : " ;
//     cin >> A.roll ;
//     cout << A.roll << endl; 
// }

int main()
{
    // stud A;
    // // A.a = 10;
    // cout << A.a;

    // student s1;

    student S1 ;

    return 0;
}