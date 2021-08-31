#include<bits/stdc++.h>
using namespace std;
vector<string> v;
void permute(string s, int l, int r){
    //base condition
    if(l == r){
        v.push_back(s);
    }else{
        for(int i=l;i<=r;i++){
            swap(s[l], s[i]);
            permute(s, l+1, r);
            
            swap(s[l],s[i]);
        }
    }
}
int main(){
    string s = "sgaar";
    int n = s.size();
    permute(s,0,n-1);
    cout<<"ans : "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}