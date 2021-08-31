#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(long binary){
    int decimal = 0;
    int mul = 1;
    while(binary != 0){
        int last_digit = binary % 10;
        decimal = decimal + (mul * last_digit);
        mul *= 2;
        binary /= 10;
    }
    return decimal;
}
int binaryToOctal(long binary){
    int octal = 0;
    int decimal = binaryToDecimal(binary);
    int mul = 1;
    while (decimal != 0)
    {   
        int rem = decimal % 8;
        octal = octal + (rem * mul);
        decimal = decimal /8;
        mul = mul * 10;
    }
    return octal;
    
}
int main(){
    cout<<binaryToOctal(101101);
  return 0;
}