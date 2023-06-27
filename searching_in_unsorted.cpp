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
   cout<<"enter the element to search : "<<endl;
   cin>>n;
  int flag=0;
  for(i=0;i<n;i++){
    if(arr[i]==n){
       flag=1; 
    }
  }
  if(flag=1){
    cout<<"element is found at index "<<i<<endl;
  }
  else{
      cout<<"element is not found"<<endl;
  }
   return 0;
}
