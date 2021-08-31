#include<bits/stdc++.h>
using namespace std;
int secondLargestNumber(int arr[], int size){
    int first_largest = 0;
    int second_largest = 0;
    for(int i=0;i<size;i++){
        if(arr[i] > first_largest){
            second_largest = first_largest;
            first_largest = arr[i];
        }else if(arr[i] > second_largest && arr[i] != first_largest){
            second_largest = arr[i];
        }
    }
    return second_largest;
}

int main(){
    int arr[] = {13,23,43,21,54};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<secondLargestNumber(arr, size);
  return 0;
}