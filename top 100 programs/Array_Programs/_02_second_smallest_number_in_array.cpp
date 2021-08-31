#include<bits/stdc++.h>
using namespace std;
int secondSmallest(int arr[], int size){
    int first_small , second_small;
    first_small = second_small = INT_MAX;

    for(int i=0;i<size;i++){

        if(arr[i] < first_small){
            second_small = first_small;
            first_small = arr[i];            
        }

        else if(arr[i] < second_small && arr[i] != first_small){
            second_small = arr[i];
        }
    }
    return second_small;
}
int main(){
    int arr[] = {2,4,5,8,1,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<secondSmallest(arr,size);
  return 0;
}