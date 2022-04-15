// Dynamic memory allocation

#include <iostream>
using namespace std;

// new operator is used to allocate memory dynamically
// delete memory is used to free the memory

int main()
{
    int *p = NULL;
    p = new int;

    // new operator returns the address to the assigned memory
    // and nullptr in case of failure

    cout << "Enter num : ";
    cin >> *p;

    // We can also initialise the value at the pointer right away
    // using the constructor

    int *q = new int(21);


    // Always free the memory after the requirement is over
    cout << "Before delete : ";
    cout << "P : " << p << " Q : " << q << endl;
    cout << "P : " << *p << " Q: " << *q << endl;
    delete p;
    // free (q);
    // delete q; Not deleting the val at q 
    cout << "After delete : ";
    cout << "P : " << p << " Q : " << q << endl;
    cout << "P : " << *p << " Q: " << *q << endl;

    return 0;
}