// #include <bits/stdc++.h>
// #include <iostream>

// using namespace std;

// // Function to perform one pass of Bubble Sort
// void bubblePass(int target[], int n, int i)
// {
//     if (i == n - 1)
//         return;

//     if (target[i] > target[i + 1])
//     {
//         int temp = target[i];
//         target[i] = target[i + 1];
//         target[i + 1] = temp;
//     }

//     bubblePass(target, n, i + 1);
// }
// void recursiveBubbleSort(int target[], int n)
// {
//     if (n <= 1)
//         return;

//     // Perform one pass of Bubble Sort
//     bubblePass(target, n, 0);

//     // Recursively call for remaining elements
//     recursiveBubbleSort(target, n - 1);
// }
// int main()
// {
//     int target[] = {9, 3, 5};
//     int n = sizeof(target) / sizeof(target[0]);

//     // Sort the array recursively
//     recursiveBubbleSort(target, n);

//     // Print the sorted array
//     for (int i = 0; i < n; i++)
//     {
//         cout << target[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int target[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // Last i elements are already sorted
        for (int j = 0; j < n - i - 1; j++)
        {
            // Swap if the element found is greater than the next element
            if (target[j] > target[j + 1])
            {
                int temp = target[j];
                target[j] = target[j + 1];
                target[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int target[] = {9, 3, 5};
    int n = sizeof(target) / sizeof(target[0]);

    // Sort the array using Bubble Sort
    bubbleSort(target, n);

    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << target[i] << " ";
    }
    cout << endl;

    return 0;
}
