// String is compared using characters

#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    string s1 = "Shubh";
    string s2 = "Abc";
    string s3 = "shubh";

    // Compare method is case sensitive

    // Compare the whole string
    cout << s1.compare(s2) << endl; // 1   --> s1 > s2
    cout << s2.compare(s3) << endl; // -1  --> s2 < s3
    cout << s1.compare(s1) << endl; // 0   --> strings are equal

    // Comparing substrings
    cout << s1.compare(1, 2, s3, 1, 2);
    //       index of s1, no. of char , comparing string, index, no. of char

    // strcmp(s1, s2) it is used to comapare strings, without case sensitivity
    // cout << strcmp(s1, s3) << endl;  we need to pass c style string

    char c[4] = "abc";
    cout << c[3] << "hell";
    return 0;
}

// / greater than >

//     if (s1 > s2)
//             cout
//         << "Greater" << endl;
// else cout << "Not greater" << endl;

// // less than <

// if (s1 < s2)
//     cout << "smaller" << endl;
// else
//     cout << "Not smaller" << endl;

// // not Equal to !=

// if (s1 != s2)
//     cout << "not Equal" << endl;
// else
//     cout << "equal" << endl;
// s1 = "Rahul";
// s2 = "Ramu";
// int c = s1.compare(s2);
// cout << c;
// cout << s1.compare(0, 2, s2, 0, 2);
// }
