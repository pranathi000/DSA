
// C++ Program to move all zeros to the end
 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[] = { 456, 457, 0, 89, 63, 0, 56, 0, 32 };
    int n = sizeof(A) / sizeof(A[0]);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] != 0) {
            swap(A[j], A[i]); 
            j++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << A[i] << " "; 
    }
    return 0;
}