// brute force approach
#include <bits/stdc++.h>
using namespace std;

pair<int, int> second_smallest_largest(int arr[], int n) {
    if (n < 2) {
        // Not enough elements for second smallest or largest
        return {-1, -1};
    }
    sort(arr, arr + n);
    
    // Find second smallest (first distinct from arr[0])
    int smallest = arr[0];
    int second_smallest = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > smallest) {
            second_smallest = arr[i];
            break;
        }
    }

    // Find second largest (first distinct from arr[n-1])
    int largest = arr[n - 1];
    int second_largest = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < largest) {
            second_largest = arr[i];
            break;
        }
    }

    return {second_smallest, second_largest};
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    auto result = second_smallest_largest(arr, n);
    cout << "\nSecond smallest: " << result.first << endl;
    cout << "Second largest: " << result.second << endl;

    return 0;
}






 // better approach



#include <bits/stdc++.h>
using namespace std;

pair<int,int> second_smallest_largest(int arr[], int n) {
    int smallest = INT_MAX, second_smallest = INT_MAX;
    int largest = INT_MIN, second_largest = INT_MIN;

    // First pass: find smallest and largest
    for(int i = 0; i < n; i++) {
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
    }

    // Second pass: find second smallest and second largest distinct from smallest/largest
    for(int i = 0; i < n; i++) {
        if(arr[i] > smallest && arr[i] < second_smallest)
            second_smallest = arr[i];
        if(arr[i] < largest && arr[i] > second_largest)
            second_largest = arr[i];
    }
    
    if(second_smallest == INT_MAX) second_smallest = -1;
    if(second_largest == INT_MIN) second_largest = -1;

    return {second_smallest, second_largest};
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    auto result = second_smallest_largest(arr, n);
    cout << "Second smallest: " << result.first << endl;
    cout << "Second largest: " << result.second << endl;

    return 0;
}

















// optimal approach
#include <bits/stdc++.h>
using namespace std;

pair<int,int> second_smallest_largest(int arr[], int n) {
    // Initialize values with extremes
    int largest = INT_MIN, second_largest = INT_MIN;
    int smallest = INT_MAX, second_smallest = INT_MAX;

    // Find largest and second largest in one pass
    for(int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    // Find smallest and second smallest in one pass
    for(int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }

    // If no second largest/smallest found, return -1
    if (second_largest == INT_MIN) second_largest = -1;
    if (second_smallest == INT_MAX) second_smallest = -1;

    return {second_smallest, second_largest};
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;

    auto result = second_smallest_largest(arr, n);
    cout << "Second smallest: " << result.first << endl;
    cout << "Second largest: " << result.second << endl;

    return 0;
}









