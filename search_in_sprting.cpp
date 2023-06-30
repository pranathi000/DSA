#include <iostream>
using namespace std;
int main() {
  int i, num, low, high, mid;
  int n;
  cout << "enter the keyber of elements" << endl;
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
  cout << "enter the element that you wanna search : " << endl;

  cin >> num;
  low = arr[0];
  high = arr[n - 1];
  mid = (low + high) / 2;
  while (low <= high) {
    if (arr[mid] < num)
      low = mid + 1;
    else if (arr[mid] == num) {
      cout << "\nThe number, " << num << " found at Position " << mid + 1;
      break;
    } else
      high = mid - 1;
    mid = (low + high) / 2;
  }
  if (low > high)
    cout << "\nThe number, " << num << " is not found in given Array";
  cout << endl;
  return 0;
}