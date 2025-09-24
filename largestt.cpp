// brute force approach
// #include <bits/stdc++.h>
// using namespace std;

// // Enhanced to take array size
// int largestt(int arr[], int n){
//     sort(arr, arr + n); // sort raw array using pointers
//     return arr[n - 1];  // largest element is last after sorting
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\nThe largest element is: " << largestt(arr, n);
//     return 0;
// }


// optimal approach

#include <bits/stdc++.h>
using namespace std;
int l = -1;
int largestt(int arr[], int n){
    for(int i =0;i<n;i++){
         if(arr[i]>l){
             l = arr[i];
         }
    }
    return l;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"largest is : "<<largestt(arr, n);
}
