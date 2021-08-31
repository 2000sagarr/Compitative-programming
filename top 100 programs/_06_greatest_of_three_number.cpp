#include<bits/stdc++.h>
using namespace std;
int greatestOfThree(int num1, int num2, int num3){
    if(num1 >= num2 && num1 >= num3){
        return num1;
    }else if(num2 >= num1 && num2 >= num3){
        return num2;
    }else{
        return num3;
    }
}
int main(){
    cout<<greatestOfThree(30,30,20);
  return 0;
}