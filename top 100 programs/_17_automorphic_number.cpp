#include<bits/stdc++.h>
using namespace std;
int isAutomorphic(int num){
    int square = num * num;
    while(num > 0){
        if(num % 10 != square % 10){
            return 0;
        }
        num /= 10;
        square /= 10;
    }
    return 1;
}
int main(){
    cout<<isAutomorphic(376);
  return 0;
}