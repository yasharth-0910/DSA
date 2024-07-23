#include <iostream>
#include <string>
#include <list>
#include <map>

using namespace std;

int main(){

    map<int,int> m
    {
        {1,2},
        {2,3},
        {3,4},
        {4,5}
    };

    m.insert({5,6});

    for(auto it: m){
        cout<<it.first<<" "<<it.second<<endl;
    }

    m.erase(1);

    map<int,pair<int,int>> m1
    {
        {1,{2,3}},
        {2,{3,4}},
        {3,{4,5}},
        {4,{5,6}}
    };

    for(auto it: m1){
        cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
    }

    m1.erase(1);

    map<int,list<int>> m2
    {
        {1,{2,3}},
        {2,{3,4}},
        {3,{4,5}},
        {4,{5,6}}
    };

    for(auto it: m2){
        cout<<it.first<<" ";
        for(auto it1: it.second){
            cout<<it1<<" ";
        }
        cout<<endl;
    }

}