#include <iostream>
using namespace std;
int main() {

  int n, i;
  int arr[25];
  cout << "enter the elements : " << endl;
  for (i = 0; i < 5; i++) {
    cin >> arr[i];
  }
  for (i = 0; i < 5; i++) {
    cout << arr[i] << endl;
  }
  int d;
  cout << "enter the element to insert : " << endl;
  cin >> d;
  int temp;
  temp = d;
  arr[i] = d;
    for (i = 0; i < 6; i++) {
    cout << arr[i] << endl;
  }
  return 0;
}
