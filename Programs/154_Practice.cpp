// Find the matrix

#include <iostream>
using namespace std;

int main()
{
    int N = 10;
    // Given a N*N matrix
    int A[N][N];
    int trace = 0;
    int antiSum = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j) {
                // Diagonal element 
                trace += A[i][j] ;
            }
            else {
                antiSum += (A[i][j]*A[i][j]) ;
            }
        }
    }
    int sum = trace + antiSum ;
    // check if absolute sum is prime or not 
    if (sum < 0) {
        sum = (-sum) ;
    } 
    
    // Check if prime 
    for (int i = 2; i < sum/2; i++)
    {
        if (sum % i == 0) {
            // false 
        }
    }
    // Handle the edge case seprately 
    // sum = 0 or 1 

    
    // true 

    // display the ans 
    return 0;
}