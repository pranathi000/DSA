//Modify array to another given array by replacing array elements with the sum of the array


//Input: input[] = { 1, 1, 1 }, target[] = { 9, 3, 5 } 
// Output: YES 
// Explanation: 
// Replacing input[1] with (input[0] + input[1] + input[2]) modifies input[] to { 1, 3, 1 } 
// Replacing input[2] with (input[0] + input[1] + input[2]) modifies input[] to { 1, 3, 5 } 
// Replacing input[0] with (input[0] + input[1] + input[2]) modifies input[] to { 9, 3, 5 } 
// Since the array input[] equal to the target[] array, the required output is “YES”.

// Input: input[] = { 1, 1, 1, 1 }, target[] = { 1, 1, 1, 2 } 
// Output: NO




// Approach: The problem can be solved using Greedy technique. The idea is to always decrement the largest element of target[] array by the sum of the remaining array elements and check if the largest element of the target[]. If found to be true then print “YES”. Otherwise, print “NO”. Following are the observations:

// If target[] = { 9, 3, 5 } and input[] = { 1, 1, 1 } 
// Decrementing target[0] by (target[1] + target[2]) modifies target[] to { 1, 3, 5 } 
// Decrementing target[2] by (target[0] + target[1]) modifies target[] to { 1, 3, 1 } 
// Decrementing target[1] by (target[0] + target[2]) modifies target[] to { 1, 1, 1 } 
// Since input[] array and target[] equal, the required output is YES. 
 



 // CPP program to implement
// the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check if the arr[] can be
// converted to target[] by replacing
// any element in arr[] by the sum of arr[]
bool isPossible(int target[], int n)
{

// Store the maximum element
int max = 0;

// Store the index of
// the maximum element
int index = 0;

// Traverse the array target[]
for (int i = 0; i < n; i++) {

	// If current element is
	// greater than max
	if (max < target[i]) {
	max = target[i];
	index = i;
	}
}

// If max element is 1
if (max == 1)
	return true;

// Traverse the array, target[]
for (int i = 0; i < n; i++) {

	// If current index is not equal to
	// maximum element index
	if (i != index) {

	// Update max
	max -= target[i];

	// If max is less than
	// or equal to 0,
	if (max <= 0)
		return false;
	}
}

// Update the maximum element
target[index] = max;

// Recursively call the function
return isPossible(target,n);
}

// Driver Code
int main()
{
int target[] = { 9, 3, 5 };

// Size of the array
int n = sizeof(target) / sizeof(target[0]);

bool res = isPossible(target,n);

if (res) 
{

	cout << "YES";
}
else
{
	cout << "NO";
}
return 0;
}

// This code is contributed by 29AjayKumar
