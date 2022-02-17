// Genric Pointer
// It is pointer of void data type and can be type casted in any data type

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 20;

    void *ptr; // Genric pointer
    ptr = &a;
    cout << *(int *)ptr << endl;
    ptr = &b;
    cout << *(float *)ptr << endl;

    return 0;
}

// #include <iostream>
// using namespace std;
// main()
// {
//     int a = 10;
//     char b = '*';
//     void *p;
//     p = &a;
//     cout << "a= " << *(int *)p; //*p error
//     p = &b;
//     cout << "\n b= " << *(char *)p;
// }