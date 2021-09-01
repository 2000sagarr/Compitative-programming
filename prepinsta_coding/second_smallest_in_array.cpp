#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cout<<"Smallest: "<<arr[0]<<endl;
    cout<<"Second Smallest: "<<arr[1]<<endl;
    cout<<"Largest: "<<arr[n-1]<<endl;
    cout<<"Second Largest: "<<arr[n-2]<<endl;


  return 0;
}