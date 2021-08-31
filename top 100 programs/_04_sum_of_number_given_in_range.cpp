#include<bits/stdc++.h>
using namespace std;
int sum(int lower_limit, int upper_limit){
    int sum = 0;
    for(int i=lower_limit; i<= upper_limit;i++){
        sum += i;
    }
    return sum;
}
int main(){
    cout<<sum(2,7);
  return 0;
}