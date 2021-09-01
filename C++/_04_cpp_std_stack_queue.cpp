#include<bits/stdc++.h>
using namespace std;
int main(){
    // *** stack ***
    stack<int> stk;

    //push and emplace
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);

    //pop
    stk.pop();
    
    //top
    cout<<stk.top();

    //size
    stk.size();
    
    //empty
    stk.empty();



    // *** queue ***
    queue<int> que;
    //push
    que.push(1);
    que.push(2);
    que.push(3);

    //front
    que.front(); //print front
    //pop
    que.pop(); //remove
    //size
    //empty
    return 0;
}