// by using loop
// #include <iostream>
// using namespace std;

// int main() {
//   int n, i;
//   cout << "enter the number of elements" << endl;
//   cin >> n;
//   int arr[n], value;
//   cout << "enter the elements : " << endl;
//   for (i = 0; i < n; i++) {
//     cin >> arr[i];
//   }
//   for (i = 0; i < n; i++) {
//     cout << arr[i] <<endl;
//   }
//   for (i = n-1; i >=0; i--) {
//     cout << arr[i] << ' ';
//   }
//   return 0;
// }

// iterative way
#include <iostream>
using namespace std;

int main() {
  int i,n;
    int arr[n];
  cout << "enter the number of elements" << endl;
  cin >> n;

  cout << "enter the elements : " << endl;
  for (i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    cout << arr[i] <<endl;
  }
  int start = 0;
  int end=n-1;
  int temp;
  while(start<end){
      temp = arr[start];
      arr[start] = arr[end];
      arr[end]= temp;
          start = start + 1;
    end = end - 1;
  }
  cout<<"the elements after reversal are : "<<endl;
    for (i = 0; i < n; i++) {
    cout << arr[i] <<' ';
  }
  
  return 0;
}