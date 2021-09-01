#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1 = 20;
    int num2 = 30;

    // method 1: using temp

    cout<<"\nBefore swap:"<<endl;
    cout<<"Num1: "<<num1<<endl;
    cout<<"Num2: "<<num2<<endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout<<"After swap:"<<endl;
    cout<<"Num1: "<<num1<<endl;
    cout<<"Num2: "<<num2<<endl;

    // method 2 using addition
    num1 = 20;
    num2 = 30;
    cout<<"\nBefore swap:"<<endl;
    cout<<"Num1: "<<num1<<endl;
    cout<<"Num2: "<<num2<<endl;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout<<"After swap:"<<endl;
    cout<<"Num1: "<<num1<<endl;
    cout<<"Num2: "<<num2<<endl;

    // method 3: using xor      **** best way (less time complexity) ****
    num1 = 20;
    num2 = 30;
    cout<<"\nBefore swap:"<<endl;
    cout<<"Num1: "<<num1<<endl;
    cout<<"Num2: "<<num2<<endl;

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    cout<<"After swap:"<<endl;
    cout<<"Num1: "<<num1<<endl;
    cout<<"Num2: "<<num2<<endl;


  return 0;
}