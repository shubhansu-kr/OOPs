// Using template with array

#include <iostream>
#define MAX 10
using namespace std;

template <class T>
T sum(T A[])
{
    T total = 0;
    for (int i = 0; i < MAX; i++)
    {
        total += A[i];
    }
    return total;
}

template <class T>
void read(T A[])
{
    for (int i = 0; i < MAX; i++)
    {
        cout << "A" << i + 1 << " : ";
        cin >> A[i];
    }
}

int main()
{
    int Arr[MAX];
    float Arrr[MAX];

    // Both are acceptable
    // read(Arr);
    read<int>(Arr);

    // Both are acceptable
    // read(Arrr);
    read<float>(Arrr);

    cout << "SUm int : " << sum(Arr) << endl;
    cout << "SUm float : " << sum(Arrr) << endl;
    return 0;
}
// C++ template program with arrays

// #include <iostream>
// #include <string.h>
// using namespace std;

// template <class TypeName>

// // function using the template
// void printArray(TypeName arr[], int len)
// {
//     for (int i = 0; i < len; i++)
//     {
//         cout << arr[i] << " ";
//         // ++arr; // pointing to next element
//     }
//     cout << endl;
// }

// // main code/ main function
// int main()
// {
//     // declaring character array
//     char chrArr[] = "IncludeHelp";
//     // declaring integer array
//     int numArr[] = {10, 20, 30, 40, 50};

//     // printing array elements
//     cout << "chrArr: ";
//     printArray(chrArr, strlen(chrArr));

//     cout << "numArr: ";
//     printArray(numArr, 5);

//     // passing direct string
//     cout << "Hello: ";
//     printArray("Hello", 5);

//     return 0;
// }