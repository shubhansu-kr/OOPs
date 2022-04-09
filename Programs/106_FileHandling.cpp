// File handling : GFG

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // Writing a line in the file
    fstream obj("../Dummy.txt", ios::out);
    string line;
    while (obj)
    {
        cout << "Enter line " << endl;
        getline(cin, line);

        // Enter -1 in line input to get out of file writing ;
        if (line == "-1")
        {
            break;
        }

        obj << line << endl;
    }
    obj.close();

    // Reading the file
    fstream obj1("../Dummy.txt", ios::in);

    // Executes the loop until the end of file
    while (obj1)
    {
        // Reading one line from the file
        getline(obj1, line);

        // Logging the line on console
        cout << line << endl;
    }

    return 0;
}