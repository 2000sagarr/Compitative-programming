#include<bits/stdc++.h>
using namespace std;
long decimalToBinary(int decimal){
    long binary = 0;
    int mul = 1, rem;
    while(decimal != 0){
        rem = decimal % 2;
        decimal /= 2;
        binary = binary + (mul * rem);
        mul *= 10;
    }
    return binary;
}
int main(){
    cout<<decimalToBinary(123);
  return 0;
}