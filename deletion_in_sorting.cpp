//applicable only for positive integers
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
  cout << "enter the element that you wanna delete : " << endl;
  cin >> num;
  int flag = 0;
  for (i = 0; i < n; i++) {
    if (arr[i] == num) {
      flag = 1;
      break;
    }
  }
  if (flag == 1) {
    cout << "the element is present at index " << i << endl;
  }
  else if(num<0){
          for (i = 0; i < n; i++) {
    cout << "enter positive numbers only especially positive "<<arr[i] << ' ';
        break;
          }
  }
  else{
    cout<<"the element is not present"<<endl;
      for (i = 0; i < n; i++) {
    cout << "the array you enterted remains same as : "<<arr[i] << ' ';
        break;
      }
  }

  for (int j = i; j < n; j++) {
    arr[j] = arr[j + 1];
  }
  n = n - 1;
  for (i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
  return 0;
}
