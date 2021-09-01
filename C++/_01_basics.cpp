#include<bits/stdc++.h>
using namespace std;
//  *** structure *** 
// note: struct always ends with ;

struct student{
    string name;
    int age;
    string city;
    //  *** constructor in struct ****
    student(string name_, int age_, string city_){
        name = name_;
        age = age_;
        city = city_;
    }
};


//  *** array outside main() ***
// if we declare array outside main() then all values are set to 0
// and if we declare in main() then they are set to garbage value 
// we can also declare array like this (container array)
// array<int, 10> a;   
// int a[10];

int main(){

    //  *** structure ***
    // structure obj creation 2 methods
    student s1 = student("Sagar", 21, "Faizpur");
    student *s = new student("Sagar Mahajan", 21, "Kartik boys hostel");
    cout<<s->name<<" "<<s->age<<" "<<s->city;
    


    //  *** simple array ***
    // max size inside main => 10^6 ( for boolean array => 10^7)
    // globally => 10^7 ( for boolean array => 10^8)
    // if we assign only first value like this then all other values are set to 0
    /*
    int a[10] = {1};
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    fill(a, a+10, 10);  // set all values of array to 10
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";    
    }
    */
    
    //  *** container array ***
    /*
    array<int, 10> arr;
    arr.fill(101);
    for(int i=0;i<10;i++){
        cout<<arr.at(0)<<" ";  //to access array
    }
    */

    // *** iterators ***
    // begin() -->  points to first element
    // end() --> points after last element
    // rbegin() --> last element
    // rend() --> before first element
    // auto itr =  arr.begin();
    /*
    array<int, 10> arr = {1,2,3,4,5,6,7,8,9,0};
     for(auto itr=arr.begin(); itr != arr.end(); itr++){
         cout<<(*itr)<<" ";
     }
    cout<<"\n";
     for(auto itr=arr.rbegin(); itr != arr.rend(); itr++){
         cout<<(*itr)<<" ";
     }
    cout<<"\n";

    // for each loop
     for(auto data: arr){
         cout<<data<<" ";
     }
    
    // size of array
    arr.size();

    // first element
    arr.front();

    // last element
    arr.back()
    */

    // *** vector ***
    // max size inside main => 10^6 ( for boolean array => 10^7)
    // globally => 10^7 ( for boolean array => 10^8)
    /*
    vector<int> vec;        //empty vector
    
    vector<int> v1(4,1);    // {1,1,1,1}

    // *add value at end
    vec.push_back(1);       //vec.emplace_back(1); => eplace_back() take less tile
    vec.push_back(2);
    
    // *remove last element
    vec.pop_back();

    // *size of vector
    vec.size();

    // *erase/clear all data
    vec.clear();
    */

    // //  *** copy vector
    /*
    // copy one vector to another vector
     vector<int> v2 = {1,2,3,4,5};
    //  now we have to copy v2 to v3 then
    vector<int> v3(v2.begin(), v2.end());   
    // or
    vector<int> v4(v2);
    // copy only 3 elements
    vector<int> v5(v2.begin(),v2.begin()+3);
    */

    // *** 2d vector ***
    // vector<vector<int>> vect;
    // vector<int> ve1 = {1,2,3};
    // vect.push_back(ve1); 

    // vector<int> ve2 = {11,21,31};
    // vect.push_back(ve2); 

    // for(auto v: vect){
    //     for(auto data: v){
    //         cout<<data<<" ";
    //     }
    //     cout<<endl;
    // }
    //     cout<<endl;
    // for(int i=0;i<vect.size();i++){
    //     for(int j=0;j<vect[i].size();j++){
    //         cout<<vect[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //  10 * 20 vector
    // vector<vector<int>> vect(10, vector<int> (20));

}