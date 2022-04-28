// Multiple Exception

#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    try
    {
        if (a == 1)
            throw 1;
        if (a == -1)
            throw 'a';
    }
    catch (...)
    {
        cout << "Genric catch block " << endl;
    }
    // Error : Handler is masked by default catch block : Compilation error
    // catch (int i ) {
    // cout << "Specific " << endl;
    // }

    // Rule : Always add the genric catch block at the end of the catch queue. 
    // Else : Error 
    return 0;
}