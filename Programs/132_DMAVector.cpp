// DMA - 2D Array implementation

#include <iostream>
using namespace std;

int main()
{
    // Method 1 : Using single Pointer

    // Matrix m*n
    int m, n;
    cout << "Enter m : ";
    cin >> m;
    cout << "Enter n : ";
    cin >> n;

    int *arr = new int[m * n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(arr + i * m + j) = (i + j);
            cout << *(arr + i * m + j) << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Method 2 : Using an array of arrays
    // We use a pointer to pointer

    // creating m integer pointer
    int **A = new int *[m];
    for (int i = 0; i < m; i++)
    {
        // Creating n integer element
        A[i] = new int[n];
    }

    // Now A holds the address of the first array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = i * j;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}