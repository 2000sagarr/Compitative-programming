#include<bits/stdc++.h>
using namespace std;
int countOFUnique(int first, int last){
    int count[10] = {0};
    int ans = 0;
    for(int i=first;i<=last;i++){
        int num = i;
        while(num != 0){
            int lastDigit = num%10;
            count[lastDigit]++;
            num /= 10;
        }
    }
    for(int i=0;i<10;i++){
        if(count[i] == 1){
            ans++;
        }
    }
    return ans;
}
int main(){
    int first,last;
    cin>>first>>last;
    cout<<countOFUnique(first,last);

}