#include<bits/stdc++.h>
using namespace std;
int main(){
    int divisor, divident, rem, quo;
    cout<<"Enter divisor and divident: ";
    cin>>divisor>>divident;
    quo = divident / divisor;
    rem = divident % divisor;
    cout<<"Quotient: "<<quo<<"  Remainder: "<<rem;
    return 0;
}