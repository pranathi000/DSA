
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
    cout << arr[i] <<endl;
  }
  if(n<3){
    cout<<"invalid input";
    return 0;
  }
  int first,second,third;
  third = first = second = INT8_MIN;
  for(i=0;i<n;i++){

    if(arr[i]>first){
      third = second;
      second=first;
      first = arr[i];
    }
    else if(arr[i]>second && arr[i]!=first){
      third = second;
      second = arr[i];
    }
    else if(arr[i]>third && arr[i]!=second && arr[i]!=first){
      third = arr[i];
    }
  }
        cout << "Three largest elements are "
        << first << " " << second << " "
        << third << endl;
    

  return 0;
}
