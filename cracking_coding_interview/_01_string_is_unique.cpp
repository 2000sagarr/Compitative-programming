//Implement an algorithm to determine if a string has all unique characters. What if you
//cannot use additional data structures?

#include<bits/stdc++.h>
using namespace std;
bool isUniqueChars(string str){
    if(str.length() > 128){  //128-character alphabet.
        return false;
    }
    bool set_char[128] = {false};
    for(int i=0 ;i<str.length();i++){
        int val = str.at(i);
        if(set_char[val]){
            return false;
        }
        set_char[val] = true;
    }
    return true;
}
int main(){
    string s = "qwertyuiopl";
    cout<<isUniqueChars(s);
  return 0;
}