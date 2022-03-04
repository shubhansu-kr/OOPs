// get(), put()

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    
    return 0;
}

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     int pos;
//     fstream outfile;
//     outfile.open("name.txt", ios::out);
//     outfile << "Shilpa sharma"; // cin>>n; outfile<<n;
//     cout << "\n The current position of write pointer is:";
//     cout << outfile.tellp(); // 13
//     cout << "\n Enter the position to move:";
//     cin >> pos; // 2
//     outfile.seekg(pos, ios::beg);
//     cout << "\n The position of Get pointer is:";
//     cout << outfile.tellg(); // 2
//     cout << "\n Enter the position to move from current position:";
//     cin >> pos; // 3
//     outfile.seekg(pos, ios::cur);
//     cout << "\n The position of Get pointer is:";
//     cout << outfile.tellg(); // 5
//     cout << "\n Enter the position to move from end:";
//     cin >> pos; // 4
//     outfile.seekg(-pos, ios::end);
//     cout << "\n The position of Get pointer is:";
//     cout << outfile.tellg() << endl;
//     cout << outfile.tellp();
//     // outfile<<"PROGRAMMING";
//     return 0;
// }