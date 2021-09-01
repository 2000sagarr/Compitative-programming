#include<bits/stdc++.h>
using namespace std;
int main(){

    // *** Set *** ordered set
    // given n element find unique elements
    int arr[] = {11,24,15,12,11,32,12,23,25};  //unique elements  => 3,5,6
    set<int> unique;
    //data will be stored in ascending order to set
    for(int data: arr){
        unique.insert(data);            //o(log n)
    }

    // size of set
    cout<<"\nSize: "<<unique.size();
    cout<<endl;

    for(auto data: unique){
        cout<<data<<" ";
    }

    cout<<endl;
    for(auto itr = unique.begin(); itr != unique.end();itr++){
        cout<<(*itr)<<" ";
    }

    // unique.erase(iterator);
    // unique.erase(Start_iterator, end_iterator);
    // unique.erase(data);
    // unique.erase(unique.begin(), unique.end());  //delete all data

    unique.erase(unique.begin());       // delete first element in set
    auto itr = unique.find(15);         //return iterator
    // if element doesn't exist then return end()

    unique.emplace(42);     //same as insert(data)

    // *** unordered set ***
    unordered_set<int> set_;
    set_.insert(2);
    set_.insert(1);
    set_.insert(5);
    set_.insert(3);
    set_.insert(2);
    set_.insert(6);

    cout<<endl;
    for(auto data: set_){
        cout<<data<<" ";
    }

    // *** multiset ***
    // it will store all the data in sorted order
    // same functions as set/vector
    multiset<int> ms = {1,2,3,4,2,1,2,3,4,5,6,3,3,2,2};
    cout<<endl;
    for(auto data: ms){
        cout<<data<<" ";
    }
    // 1 1 2 2 2 2 2 3 3 3 3 4 4 5 6

    //count(data); // return count of data
    auto data = ms.find(1);  // return first occurance iterator
    ms.clear();  //delete all data
    return 0;
}