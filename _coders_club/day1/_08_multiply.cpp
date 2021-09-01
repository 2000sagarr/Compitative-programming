#include<bits/stdc++.h>
using namespace std;
int main(){
    float num1, num2, ans;
    cin>>num1>>num2;
    ans = num1 * num2;
    cout<<ans<<endl;

    // upto 2 decimal
    printf("%.2f", ans);
    return 0;
}