#include<bits/stdc++.h>
using namespace std;
int factorail(int num){
    int fact = 1;
    for(int i=2;i<=num;i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int num = 245;
    int temp = num;
    int sum = 0;
    do{
        int unit_digit = temp % 10;
        sum += factorail(unit_digit);
        temp /= 10;
    }while(temp != 0 );
    if(sum == num){
        cout<<"Strong number";
    }else{
        cout<<"Not Strong";
    }
  return 0;
}