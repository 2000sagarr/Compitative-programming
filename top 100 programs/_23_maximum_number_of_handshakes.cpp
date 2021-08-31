#include<bits/stdc++.h>
using namespace std;
int maxHandshakes(int n){
    int handshakes = (n *(n-1))/2;
    return handshakes;
}
int main(){
    cout<<maxHandshakes(10);
  return 0;
}