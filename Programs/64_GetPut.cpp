// Get and Put are used to handle characters of files

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // get and put is used to operate on char in files
    string s;
    cout << "Enter a string " << endl;
    getline(cin, s);

    ofstream obj("../Dummy.txt");
    for (int i = 0; i < s.length(); i++)
    {
        // Overwrites the previous data
        obj.put(s[i]);
    }
    for (int i = 0; i < s.length(); i++)
    {
        // Appends the string since the file was already opened
        obj.put(s[i]);
    }
    obj.close();
    obj.open("../Dummy.txt");
    for (int i = 0; i < s.length(); i++)
    {
        // Overwrites the previous data
        obj.put(s[i]);
    }
    
    return 0;
}

// #include <iostream>
// using namespace std;
// #include <fstream>
// int main()
// {
//     char ch;
//     ofstream outfile;
//     outfile.open("h.txt");
//     while (ch != '.')
//     {
//         cin >> ch; // AbC 12E if(ch>='0' && ch<='9')
//         outfile.put(ch);
//     }
//     outfile.close();
//     ifstream infile;
//     infile.open("h.txt");
//     while (!infile.eof()) // while(o1) while(o1.eof()
//     {
//         infile.get(ch);
//         if (ch == 'a' || ch == 'e')
//         {
//             cout << ch;
//         }
//     }

//     return 0;
// }