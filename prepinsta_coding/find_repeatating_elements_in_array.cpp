#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int, int> count;
    for(int i=0;i<n;i++){
        count[arr[i]] = count[arr[i]] + 1;
    }
    cout<<"Repeatating elements: ";
    for(auto data: count){
        if(data.second > 1){
            cout<<data.first<<"  ";
        }
    }
    cout<<"\nNon-Repeatating elements: ";
    for(auto data: count){
        if(data.second == 1){
            cout<<data.first<<"  ";
        }
    }
  return 0;
}