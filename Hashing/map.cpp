#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){


    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    //precompute

    map<int,int> mpp;

    for(int i=0; i<n; i++){
        mpp[arr[i]]++;  //hashing the characters
    }

    for(auto it:mpp){
        cout << it.first << " " << it.second << endl;  //printing the hash table
    }

    int q;  
    cin >>q;

    while(q--){
        int number;
        cin >> number;
        //fetch
        cout << mpp[number] << endl;
    }
}