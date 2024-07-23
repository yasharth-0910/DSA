#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

    string s;
    cin >>s;

    //precomputer

    int hash[26] = {0};

    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;  //hashing the characters
    }

    int q;
    cin >>q;

    while(q--){
        char c;
        cin >> c;
        cout << hash[c-'a'] << endl;
    }

}