// Inline Function

#include <iostream>
using namespace std;

// Non-Inline Function
void sum(int a, int b);

// here, we have two blocks - main and sum function
// when we call the sum function the control jumps back
// and forth from main to sum fxn - which consumes cpu resources

// When the function definition has less than four line, its better
// to create an inline function and avoid the control jump
// for better cpu utilisation

// Inline function
inline void prod(int a, int b);
// Use the keyword inline during declaration - It tell the compiler to
// replace the function calling statement with the funtion definition
// to avoid the control jump and save cpu resource .

// However, inlining is just a request to the compiler, not a command.
// Compiler may refuse the request if the funtion definition contains :
// loops, jump statement, recursive function, morethan 5 lines, 
// static variables and missing return statement.  

int main()
{
    sum(3, 5); // control will jump
    sum(4, 2); // from main to sum

    prod(3, 5); // Replaces this line with function declaration
    return 0;
}

void sum(int a, int b)
{
    cout << a + b << endl;
    return;
}

void prod(int a, int b)
{
    cout << a * b << endl;
}