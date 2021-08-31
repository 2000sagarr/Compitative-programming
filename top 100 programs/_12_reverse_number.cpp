#include<bits/stdc++.h>
using namespace std;
int reverseNumber(int num){
    int reverseNumber = 0;
    do {
        reverseNumber = (reverseNumber * 10) + (num % 10);
        num /= 10;
    }while(num != 0);
    return reverseNumber;
}
int main(){
    cout<<reverseNumber(2457);
  return 0;
}