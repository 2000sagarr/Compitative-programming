#include<bits/stdc++.h>
using namespace std;
int lcm(int num1, int num2){
    static int fact = num1;
    if(fact % num1 == 0 && fact % num2 == 0){
        return fact;
    }else{
        fact += num1;
        return lcm(num1, num2);
    }
    return fact;
}
int main(){
    cout<<lcm(12,100);
  return 0;
}