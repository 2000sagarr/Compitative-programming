#include<bits/stdc++.h>
using namespace std;
int sumOfDigitsOfNumber(int num){
    int sum = 0;
    while(num > 0){
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}
int main(){
    cout<<sumOfDigitsOfNumber(1000);
  return 0;
}