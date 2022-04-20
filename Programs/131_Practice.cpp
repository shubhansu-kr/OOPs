// Find the sum of diagonal element :

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Given : Square matrix
    vector<vector<int>> v = {{3, 6, 2, 6}, {5, 3, 7, 12}, {5, 3, 7, 2}, {4, 5, 2, 6}};

    int n = v.size();
    int sum = 0;
    for (int i = n - 1, j = 0; i >= 0; --i, ++j)
    {
        sum += v[i][j];
    }
    cout << "Sum of diagonal : " << sum << endl;
    return 0;
}