#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 44;
    cout<<"1"<<endl;
    for(int i=2;i<= num /2;i++){
        if(num % i == 0){
            cout<<i<<endl;
        }
    }
    cout<<num;
  return 0;
}