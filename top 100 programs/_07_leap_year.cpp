#include<bits/stdc++.h>
using namespace std;
int isLeapYear(int year){
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    cout<<isLeapYear(2000);
  return 0;
}