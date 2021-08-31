// Check Permutation: Given two strings, write a method to decide if one is a permutation of the
// other.

// If two strings are permutations, then we know they have the same characters, but in different orders. Therefore,
// sorting the strings will put the characters from two permutations in the same order. We just need to
// compare the sorted versions of the strings.

#include<bits/stdc++.h>
using namespace std;

bool permutation(string s, string t){
    if(s.length() != t.length()){
        return false;
    }

    sort(s.begin(), s.end());
    sort(t.begin(),t.end());
    for(int i=0;i<s.length();i++){
        if(s.at(i) != t.at(i)){
            return false;
        }
    }
    return true;
}
int main(){

    cout<<permutation("sagaar", "raags");
  return 0;
}