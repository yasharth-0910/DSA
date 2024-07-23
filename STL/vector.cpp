#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){

    vector <int> v;

    v.push_back(1);
    v.emplace_back(2);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4); // Fix: Pass the pair of integers as separate arguments

    vector <int> v1(5,100); // 5 elements with value 100

    vector <int> v2(5); //5 elements with value 0 
    vector <int> v3(v1); // Copy of v1

    vector <int>::iterator it = v.begin();
    it++;
    cout<<*it<<endl;

    for (vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }

    for (auto it = v.begin(); it!=v.end(); it++){ //auto it = vector<int>::iterator
        cout<<*it<<" ";
    }

    //this is for each loop
    for(auto it: v){
        cout<<it<<" "; // it is the value of the element
    }


    // {10,20,30,40,50}

    v.erase(v.begin()+2); // {10,20,40,50}

    v.erase(v.begin()+2, v.begin()+4); // {10,20,50}

    //Insert function

    vector<int> v4(2,100); // {100,100}
    v.insert(v.begin(), 300); // {300,100,100}
    v.insert(v.begin()+1, 2, 10); // {300,10,10,100,100}

    vector<int> copy(2,50); // {50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50,50,300,10,10,100,100}

    //Swap function

    v.swap(v4); // v4 = {50,50} v = {100,100}
    

    return 0;
}