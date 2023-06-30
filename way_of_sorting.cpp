#include <iostream>
using namespace std;

int main() {
  int n, i;
  cout << "enter the number of elements" << endl;
  cin >> n;
  int arr[n], value;
  cout << "enter the elements : " << endl;
  for (i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
  cout << "the sorted array is as follows" << endl;
  int temp;
  for (i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for (i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
  return 0;
}
