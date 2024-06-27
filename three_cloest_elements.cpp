// Find three closest elements from given three sorted arrays
// Last Updated : 26 Oct, 2023
// Given three sorted arrays A[], B[] and C[], find 3 elements i, j and k from A, B and C respectively such that max(abs(A[i] – B[j]), abs(B[j] – C[k]), abs(C[k] – A[i])) is minimized. Here abs() indicates absolute value.

// Example :

// Input : A[] = {1, 4, 10}
//             B[] = {2, 15, 20}
//             C[] = {10, 12}

// Output: 10 15 10
// Explanation: 10 from A, 15 from B and 10 from C

// C++ program to find 3 elements such that max(abs(A[i]-B[j]),
// abs(B[j]-C[k]), abs(C[k]-A[i])) is minimized.

#include <bits/stdc++.h>
using namespace std;

void findClosest(int A[], int B[], int C[], int p, int q, int r)
{
    // Three variable to store answer
    int a, b, c;

    // To Store minimum of max(abs(A[i]-B[j]),abs(B[j]-C[k]),
    // abs(C[k]-A[i]))
    int ans = INT_MAX;

    // Run three nested loop
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            for (int k = 0; k < r; k++)
            {
                int curr = max(abs(A[i] - B[j]), abs(B[j] - C[k]));
                int temp = max(curr, abs(C[k] - A[i]));
                // If that is minimum than previous then update answer
                if (temp < ans)
                {
                    ans = temp;
                    a = A[i];
                    b = B[j];
                    c = C[k];
                }
            }
        }
    }

    // Printing final answer
    cout << a << " " << b << " " << c << endl;
}

// Driver program
int main()
{
    int A[] = {1, 4, 10};
    int B[] = {2, 15, 20};
    int C[] = {10, 12};

    int p = sizeof A / sizeof A[0];
    int q = sizeof B / sizeof B[0];
    int r = sizeof C / sizeof C[0];

    findClosest(A, B, C, p, q, r);
    return 0;
}
