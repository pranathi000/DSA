#include <bits/stdc++.h>
using namespace std;

// Function to rotate array
void rotate(int arr[], int d, int n)
{
	// Storing rotated version of array
	int temp[n];

	// Keeping track of the current index
	// of temp[]
	int j = 0;

	// Storing the n - d elements of
	// array arr[] to the front of temp[]
	for (int i = d; i < n; i++) {
		temp[j] = arr[i];
		j++;
	}
	for (int i = 0; i < d; i++) {
		temp[j] = arr[i];
		j++;
	}
	for (int i = 0; i < n; i++) {
		arr[i] = temp[i];
	}
}
void printTheArray(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int N = sizeof(arr) / sizeof(arr[0]);
	int d = 2;

	// Function calling
	rotate(arr, d, N);
	printTheArray(arr, N);

	return 0;
}
