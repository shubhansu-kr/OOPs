// File Handling

#include <iostream>
#include <fstream> // Header file for handling files

using namespace std;

int main()
{

    return 0;
}

// #include <iostream>
// using namespace std;
// #include <fstream> //everytime
// int main()
// {
//     int rollno;
//     char name[10];
//     fstream o1("student.txt", ios::app); // o1 is the object of class ofstream
//     cout << "enter details roll no and name...";
//     cin >> rollno >> name; // user will enetr
//     cout << "writing student details into file..";
//     o1 << rollno << endl
//        << name; // writing pro
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <fstream> //everytime
// int main()
// {
//     int rollno;
//     char name[10];
//     ofstream o1("student.txt"); // o1 is the object of class ofstream
//     cout << "enter details roll no and name...";
//     cin >> rollno >> name; // user will enetr
//     cout << "writing student details into file..";
//     o1 << rollno << endl
//        << name; // writing pro
//     o1.close();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <string.h>
// #include <fstream>
// int main()
// {
//     char s[80];
//     cout << "enter a string ";
//     cin >> s;            // shilpa file<<s;
//     int len = strlen(s); // 6
//     fstream file;        // Input and output stream
//     cout << "\n Opening the TEXT file and storing the string in it. \n\n";
//     file.open("ITEM.txt", ios::out);
//     for (int i = 0; i < len; i++)
//     {
//         file.put(s[i]); // Putcharacter to file
//     }
//     file.close();
//     // ifstream file("item.txt");

//     file.open("ITEM.txt", ios::in);
//     char ch;
//     cout << "Reading the file contents: ";
//     while (file)
//     {
//         file.get(ch); // compiler will read
//         // if(ch=='a'||ch=='A')
//         cout << ch; //
//     }
//     file.close();
//     return 0;
// }

// Each file has two associated pointer known as file pointer.
// One of them is called
// the input or (get pointer) and second is for output or (put pointer).
// while reading or writing the file we can use this
// get is used for reading
// put is used for writing
// Seekg() Moves get pointer(input) to a specified location
// Seekp() Moves put pointer(output) to a specified location
// tellg() Gives the current position of the get pointer
// tellp() Gives the current position of the put pointer