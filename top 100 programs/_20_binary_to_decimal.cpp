#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(long binary){
    int mul = 1;
    int decimal = 0;
    while(binary != 0){
        int last_digit = binary % 10;
        binary /= 10;
        decimal = decimal + mul * last_digit;
        mul *= 2;
    }
    return decimal;
}
int main(){
    cout<<binaryToDecimal(101100);
  return 0;
}