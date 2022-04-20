// Swap two number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int *num = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter num : ";
        cin >> num[i];
    }
    cout << "Before Swap : ";
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    // Swap each num with its right num
    int temp = num[0];
    for (int i = 0; i < n - 1; i++)
    {
        num[i] = num[i + 1];
    }
    num[n - 1] = temp;

    cout << "After Swap : ";
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

    // Delete num
    delete[] num;
    return 0;
}