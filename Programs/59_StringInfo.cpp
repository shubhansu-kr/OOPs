// String Info

#include <iostream>
using namespace std;

int main()
{

    string s1("Shubhansu"), s2("Kumar"), s3;
    string s4("Shubhansu Kumar Singh");

    // capacity is used to find the number of characters a string can
    // store before reallocating more memory

    // length() is used to get the length of string
    // size () is used for the same

    cout << s1.capacity() << " " << s1.length() << endl;
    cout << s2.capacity() << " " << s2.size() << endl;
    cout << s3.capacity() << " " << s3.length() << endl;
    cout << s4.capacity() << " " << s4.length() << endl;

    // Default capacity of string is 15 depending upon hardware 

    // Clear is used to erase all the characters of string
    s4.clear();
    cout << s4.capacity() << " " << s4.length() << endl;
    // capacity remains the same even after clearing

    // empty() is used to check if string is empty or not
    // if empty - 1 else 0

    cout << "s1 - " << s1.empty() << endl;
    cout << "s2 - " << s2.empty() << endl;
    cout << "s3 - " << s3.empty() << endl; // 1
    cout << "s4 - " << s4.empty() << endl; // 1

    // swap() - takes a string obj and swaps the strings 
    cout << "Before Swap " << s1 << " " << s2 << endl;
    s1.swap(s2);
    // s1.swap("abc"); Error since we have to pass an string object 
    cout << "After Swap " << s1 << " " << s2 << endl;


    return 0;
}