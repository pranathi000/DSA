
#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
   while (start < end) {
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
   }
   return ;
}
void Rotate(int arr[], int d, int n) { 
   if (d == 0) 
      return;
   d = d % n;  
   reverseArray(arr, 0, d - 1); 
   reverseArray(arr, d, n - 1); 
   reverseArray(arr, 0, n - 1); 

   return ;
}
int main() {
   int arr[] = { 1, 2, 3, 4, 5, 6 }; 
   int n = sizeof(arr) / sizeof(arr[0]); 
   int d = 2;
   Rotate(arr, d, n);
   for(int i = 0; i < n; i++) 
      cout << arr[i] << " ";
   cout << "\n";
   return 0;
}