// Find maximum element from n elements

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    // Allocate memory for n elements
    int *ptr = new int[n];
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter num : ";
        cin >> ptr[i];
        if (max < ptr[i])
        {
            max = ptr[i];
        }
    }
    cout << "Max number is : " << max << endl;

    delete []ptr ;
    return 0;
}