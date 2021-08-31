#include<bits/stdc++.h>
using namespace std;
int gcd(int num1, int num2){
    if(num1 == 0){
        return num2;
    }
    if(num2 == 0){
        return num1;
    }
    if(num1 == num2){
        return num1;
    }
    if(num1 > num2){
        return gcd(num1-num2, num2);
    }else{
        return gcd(num1, num2-num1);
    }
}
int main(){
    cout<<gcd(100, 50);
  return 0;
}


// the GCD doesn’t change when smaller number is subtracted from the greater number. 
// This keeps on going until only the GCD left.