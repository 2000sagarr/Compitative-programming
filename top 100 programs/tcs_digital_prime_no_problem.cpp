// There is a range given n and m in which we have to find the count all the prime pairs
// whose difference is 6. We have to find how many sets are there within a given range.

// Output:
// The output consists of a single line, print the count prime pairs in a given range. Else print”No Prime Pairs”.
// Constraints:
// 2 ≤ n ≤ 1000
// n ≤ m ≤ 2000
// Sample Input:
// 4
// 30
// Sample Output:
// 6
// Explanation:
// (5, 11) (7, 13) (11, 17) (13, 19) (17, 23) (23, 29) . we have 6 prime pairs.

#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    if(num == 1){
        return false;
    }
    if(num <= 3){
        return true;
    }
    if(num % 2 == 0){
        return false;
    }
    for(int i=3;i*i <= num;i+=2){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int pairCount(int start, int end){
    int count = 0;
    for(int i=start;i<=end-6;i++){
        if(isPrime(i)){
            if(isPrime(i+6)){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int count = pairCount(4, 30);
    if(count > 0){
        cout<<count;
    }else{
        cout<<"No prime Pair";
    }
  return 0;
}