#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    std::pair<int, int> p;
    p.first = 10;
    p.second = 20;
    cout<<p.first<<" "<<p.second<<endl;


    std::pair <int, std::pair<int, int>> p2;
    p2.first = 10;
    p2.second.first = 20;
    p2.second.second = 30;
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    std::pair<int, int> p3 = make_pair(100, 200);

    cout<<p3.first<<" "<<p3.second<<endl;

    std::pair<int, string> p4 = make_pair(100, "Audi");
    cout<<p4.first<<" "<<p4.second<<endl;

    std::pair<int, int> arr[] = {make_pair(10, 20), make_pair(30, 40), make_pair(50, 60)};
    cout<<arr[0].first<<" "<<arr[0].second<<endl;
    cout<<arr[1].first<<" "<<arr[1].second<<endl;
    cout<<arr[2].first<<" "<<arr[2].second<<endl;

    vector<std::pair<int, int>> v;
    v.push_back(make_pair(10, 20));
    v.push_back(make_pair(30, 40));
    v.push_back(make_pair(50, 60));

    for(int i=0; i<v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    map<int, int> m;
    m[1] = 100;
    m[2] = 200;

    map<int, std::pair<int, int>> m2;
    m2[1] = make_pair(10, 20);
    m2[2] = make_pair(30, 40);

    for(auto it=m2.begin(); it!=m2.end(); it++){
        cout<<it->first<<" "<<it->second.first<<" "<<it->second.second<<endl;
    }
}

