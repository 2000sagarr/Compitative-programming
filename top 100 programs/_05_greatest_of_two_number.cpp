#include<bits/stdc++.h>
using namespace std;
int greatest(int num1, int num2){
    if(num1 == num2){
        return num1;
    }else if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
}
int main(){
    cout<<greatest(32,29);
  return 0;
}