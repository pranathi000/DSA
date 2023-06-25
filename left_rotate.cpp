#include <iostream>
using namespace std;
int main()
{
    int i, n;
    int arr[n];
    cout << "enter the number of elements : ";
    cin >> n;
    cout << "enter the elements : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d;
    cout<<"enter how many rotation to the left you want : "<<endl;
    cin>>d;
    int p = 1;
    while(p<=d){
            int temp;
            temp = arr[0];
        for (i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1]= temp;
    p = p+1;
    } 
    cout<<"the rotated array is"<<endl;
        for (i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}