#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
void largest_three(int arr[], int n)
{
    if (n < 3)
    {
        cout << "invalid input" << endl;

        return;
    }
    int third, second, first;

    third = second = first = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > first && arr[i] != second && arr[i] != third)
        {
            third = arr[i];
        }
        }
    cout << "the 3 largest elements are : " << first << " " << second << " " << third << " " << endl;
}

int main()
{
    int arr[] = {12, 13, 1, 10, 34, 11, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    largest_three(arr, n);
    return 0;
}