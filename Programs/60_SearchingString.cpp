// Finding Elements in string

#include <iostream>
using namespace std;

int main()
{
    string s1 = "ABAABCDA";

    // Find_first_of('char') - return the index of first occurence
    // Find_last_of('char') - returns the occurence of last occurence

    cout << "First of " << endl;
    cout << "A " << s1.find_first_of('B') << endl;
    cout << "B " << s1.find_first_of('A') << endl;
    cout << "C " << s1.find_first_of('C') << endl;
    cout << "D " << s1.find_first_of('D') << endl;
    cout << "E " << s1.find_first_of('E') << endl; // gv
    // gives garbage if element is not present

    cout << "Find last of " << endl;
    cout << "A " << s1.find_last_of('A') << endl;
    cout << "B " << s1.find_last_of('B') << endl;
    cout << "C " << s1.find_last_of('C') << endl;
    cout << "D " << s1.find_last_of('D') << endl;
    cout << "E " << s1.find_last_of('E') << endl; // gv
    // gives garbage if element is not present

    // cannot find string, it takes the first char of string and use
    // it as target
    cout << "BC " << s1.find_first_of("BC") << endl;
    // Here the function takes B as target and returns the first occurrence
    // index of B (ie 1 in this case ) ;

    // Find first not of gives the index of first element which is not
    // specified in the parametes

    cout << "Find not first" << endl;
    cout << "A Not - " << s1.find_first_not_of('A') << endl;
    cout << "B Not - " << s1.find_first_not_of('B') << endl;
    cout << "C Not - " << s1.find_first_not_of('C') << endl;
    cout << "D Not - " << s1.find_first_not_of('D') << endl;
    cout << "E Not - " << s1.find_first_not_of('E') << endl;

    // Passing multiple parameters -
    cout << "A, B Not - " << s1.find_first_not_of("AB") << endl;
    cout << endl;

    // find - returns the index of matching target starting

    cout << "Find " << endl;
    cout << "A " << s1.find('A') << endl;
    cout << "A " << s1.find("BC") << endl;
    // Element not present
    cout << "X " << s1.find('X') << endl; // gv 

    // rfind - searches the string from the last
    cout << "A " << s1.rfind('A') << endl;

    return 0;
}