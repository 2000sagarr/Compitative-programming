#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int size){
    int first = 0;
    int last = size-1;
    while(first < last){
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
  return 0;
}