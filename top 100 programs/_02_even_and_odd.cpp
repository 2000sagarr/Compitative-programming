#include<bits/stdc++.h>
using namespace std;
int isEven(int num){
    if(num % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int num = 10;
    if(isEven(num)){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }
  return 0;
}