// Find the first repeating element in an array of integers
// Last Updated : 06 Jul, 2023
// Given an array of integers arr[], The task is to find the index of first repeating element in it i.e. the element that occurs more than once and whose index of the first occurrence is the smallest.

// Examples:

// Input: arr[] = {10, 5, 3, 4, 3, 5, 6}
// Output: 5
// Explanation: 5 is the first element that repeats

// Input: arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10}
// Output: 6
// Explanation: 6 is the first element that repeats

// Including necessary header files
#include <bits/stdc++.h>
using namespace std;

// Function to find the index of first repeating element in
// an array
int firstRepeatingElement(int arr[], int n)
{
    // Nested loop to check for repeating elements
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // If a repeating element is found, return its
            // index
            if (arr[i] == arr[j])
            {
                return i;
            }
        }
    }
    // If no repeating element is found, return -1
    return -1;
}

// Driver code
int main()
{
    // Initializing an array and its size
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Finding the index of first repeating element
    int index = firstRepeatingElement(arr, n);

    // Checking if any repeating element is found or not
    if (index == -1)
    {
        cout << "No repeating element found!" << endl;
    }
    else
    {
        // Printing the first repeating element and its
        // index
        cout << "First repeating element is " << arr[index]
             << endl;
    }

    return 0;
}
