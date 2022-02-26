// Manipulation of string

#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    s1.insert(0, "Shubh");
    s2.insert(0, "Kumar");

    cout << s1 << " " << s2 << endl;
    string s3 = s1 + s2;
    cout << s3 << endl;

    // Insert takes two parameter - (Insertion index, "String") ;

    // Erase takes two parameter - (Deletion index , No. of characters to be erased)
    s3.erase(5, 5);
    cout << "S3 after erase - " << s3 << endl;

    // Replace takes three parameter - (start index , end index , string) ;
    s3.append("ansu Kumar");
    cout << s3 << endl;

    // Replace 'kumar' with 'singh' in s3
    s3.replace(9, 6, " Singh");
    cout << s3 << endl;

    // Clear is used to erase the content of string
    s3.clear();
    cout << s3 << endl;

    return 0;
}