#include<bits/stdc++.h>
using namespace std;
int smallestInArray(int arr[], int size){
    int min = arr[0];
    for(int i=1;i<size;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int arr[] ={23,12,22,34,1,21,35};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<smallestInArray(arr, size);
  return 0;
}