#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    if(num == 1){
        return false;
    }
    if(num <= 3){
        return true;
    }
    if(num % 2 == 0 ){
        return false;
    }
    for(int i =3; i*i <= num;i+=2){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    cout<<isPrime(23);
  return 0;
}