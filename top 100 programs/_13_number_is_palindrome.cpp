#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int num){
    int temp = num;
    int reverseNumber = 0;
    do {
        reverseNumber = (reverseNumber * 10) + (num % 10);
        num /= 10;
    }while(num != 0);
    return reverseNumber == num;
}
int main(){
  cout<<isPalindrome(12321);
  return 0;
}