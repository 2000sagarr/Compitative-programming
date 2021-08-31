#include<bits/stdc++.h>
using namespace std;
void replaceSpaces(char str[], int truelength, int size){
    int spaceCount = 0;
    for(int i=0;i<truelength;i++){
        if(str[i] == ' '){
            spaceCount = 0;
        }
    }
    int index = truelength + spaceCount * 2;    //here 2+one spcae in string = 3 char
    // if(truelength < size){
    //     str[truelength] = '\0';
    // }
    for(int i= truelength-1;i >= 0;i--){
        if(str[i] == ' '){
            str[index-1] = '0';
            str[index-2] = '2';
            str[index-3] = '%';
            index = index - 3;
        }else{
            str[index-1] = str[i];
            index--;
        }
    }
}
int main(){
    char str[30] = "Sagar Rejendra Mahajan";
    int length = 22;
    int size = sizeof(str) / sizeof(str[0]);
    replaceSpaces(str, length, size);
    for(int i=0;i<size;i++){
        cout<<str[i];   
    }


  return 0;
}   

// Write a method to replace all spaces in a string with '%20'. You may assume that the string
// has sufficient space at the end to hold the additional characters, and that you are given the "true"
// length of the string. (Note: if implementing in Java, please use a character array so that you can
// perform this operation in place.)
// EXAMPLE
// Input: "Mr John Smith ", 13
// Output: "Mr%20John%20Smith"