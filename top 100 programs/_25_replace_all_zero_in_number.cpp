//replace all zero with 1
#include<bits/stdc++.h>
using namespace std;
int removeZero(int num){
    int newNumber = 0;
    int i=1;
    while(num != 0){
        int last_digit = num % 10;
        num /= 10;
        if(last_digit == 0){
            last_digit = 1; 
        }
        int temp = last_digit * i;
        i *= 10;
        newNumber = temp + newNumber;
    }
    return newNumber;
}
int main(){
    cout<<removeZero(10200120);
  return 0;
}