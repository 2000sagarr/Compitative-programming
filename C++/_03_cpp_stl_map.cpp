#include<bits/stdc++.h>
using namespace std;
int main(){

    // *** map *** sorted map
    map<int, string> mp;
    mp[1] = "Sagar";
    mp[2] = "Girish";
    mp[3] = "Purva";

    mp.emplace(4,"Jayesh");
    mp.erase(4);
    // mp.erase(mp.begin());
    // mp.clear();

    auto data = mp.find(1); //return iterator 

    mp.empty();  //return true or false 

    for(auto data: mp){
        cout<<data.first<<"  "<<data.second<<endl;
    }

    // for(auto itr = mp.begin(); itr != mp.end(); itr++){
    //     cout<<(*itr).first<<" "<<(*itr).second;
    // }


    //  *** unordered_map ***
    unordered_map<string, int> map1;            // o(1)

    // ***multimap ***
    multimap<int, int> mMap;    //it will store every data in sorted order
    mMap.emplace(1,2);      //both will be added to map
    mMap.emplace(1,3);

    // *** pair ***
    pair<int, int> pr = {1,2};
    cout<<pr.first;
    cout<<pr.second<<endl;

    pair<int,  pair<int, int> > nPair = {1, {2,3}};
    cout<<nPair.first<<" "<<nPair.second.first<<" "<<nPair.second.second;


    return 0;
}