//

#include <iostream>
using namespace std;

int main()
{
    
    return 0;
}

// #include <iostream>
// using namespace std;
// class Base
// {
// public:    /* A public access specifier defines Constructor and Destructor function to call by any object in the class. */
//     Base() // Constructor function.
//     {
//         cout << "\n Constructor Base class";
//     }
//     virtual ~Base() // Destructor function
//     {
//         cout << "\n Destructor Base class";
//     }
// };

// class Derived : public Base
// {
// public:       /* A public access specifier defines Constructor and Destructor function to call by any object in the class. */
//     Derived() // Constructor function
//     {
//         cout << "\n Constructor Derived class";
//     }
//     ~Derived() // Destructor function
//     {
//         cout << "\n Destructor Derived class"; /* Destructor function is not called to release its space. */
//     }
// };
// int main()
// {
//     Base *bptr = new Derived; // Create a base class pointer object
//     delete bptr;              /* Here pointer object is called to delete the space occupied by the destructor.*/
// }