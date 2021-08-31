#include<bits/stdc++.h>
using namespace std;
int isPositive(int num){
    if(num > 0){
        return 1;
    }
    return 0;
}
int main(){
    cout<<isPositive(10);
  return 0;
}