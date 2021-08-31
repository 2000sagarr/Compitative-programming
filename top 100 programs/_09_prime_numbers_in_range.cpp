#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num){
     if(num % 2 == 0 || num % 3 == 0){
        return false;
    }
    for(int i =5; i*i <= num;i+=2){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int i = 1;
    int j = 100;
    if(i == 1){
        cout<<i<<endl;
        i++;
    } 
    if(i == 2){
        cout<<i<<endl;
        cout<<++i<<endl;     //print 3
    }
    for(int i=5; i<= j;i += 2){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
  return 0;
}