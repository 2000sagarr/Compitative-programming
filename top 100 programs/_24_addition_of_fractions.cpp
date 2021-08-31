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

int lcm(int num1, int num2){
    static int fact = num1;
    if(fact % num1 == 0 && fact % num2 == 0){
        return fact;
    }else{
        fact = fact + num1;
        return lcm(num1, num2);
    }
    return fact;
}

void addFractions(int n1,int d1, int n2, int d2,int ans[]){
    if(d1 == d2){
        int temp = gcd(n1+n2, d1);
        ans[0] = (n1+n2) / temp;
        ans[1] = d1 / temp;
    }
    else{
        int lcm_d = lcm(d1, d2);
        n1 = n1 * d2;
        n2 = n2 * d1;
        ans[0] = n1 + n2;
        ans[1] = lcm_d;

        int gcd_ans = gcd(ans[0], ans[1]);
        ans[0] = ans[0] / gcd_ans;
        ans[1] = ans[1] / gcd_ans;
    }
    

}


int main(){
    int ans[] = {0,0};
    addFractions(2,2,4,2,ans);
    cout<<ans[0]<<"/"<<ans[1];
  return 0;
}