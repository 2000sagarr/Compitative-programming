#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n){
    int flag = 1;
    for(int i=1;i<n && flag == 1;i++){
        for(int j=0;j<n-i;j++){
            flag = 0;
            if(arr[j] > arr[j+1]){
                flag = 1;
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}