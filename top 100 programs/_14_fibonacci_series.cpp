#include<bits/stdc++.h>
using namespace std;
int main(){
    int first = 0;
    int last = 1;
    int next;
    int n = 10;
    
    for(int i=0;i<n;i++){
        cout<<first<<" ";
        next = first + last;
        first = last;
        last = next;
    }
  return 0;
}