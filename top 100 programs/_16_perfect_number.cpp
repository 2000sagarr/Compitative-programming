#include<bits/stdc++.h>
using namespace std;
int isPerfect(int num){
    int sum = 0;
    for(int i=1;i<= num/2;i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum == num){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    if(isPerfect(12)){
        cout<<"yes";
    }else{
        cout<<"No";
    }
  return 0;
}