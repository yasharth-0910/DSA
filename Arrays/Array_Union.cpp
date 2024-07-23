#include <bits/stdc++.h>

using namespace std;
//BRUTE FORCE
vector<int> sortedUnion(vector<int>a, vector<int>b){
    int n1= a.size();
    int n2= b.size();

    set<int> st;
    for(int i=0; i<n1; i++){
        st.insert(a[i]);
    }

    for(int i=0; i<n2; i++){
        st.insert(b[i]);
    }

    vecotr<int> temp;
    for(auto it: st){
        temp.push_back(it);
    }

    return temp;
}

//OPTIMIZED

vector<int> sortedUnion(vector<int>a, vector<int>b){
    int n1= a.size();
    int n2= b.size();

    int i=0;
    int j=0;

    vector<int> UnionArr;

    while(i<n1 && j<n2){
        if(a[i] <= b[j]){
            if(UnionArray.size()==0 || UnionArray.back() != a[i]){
                UnionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(UnionArray.size()==0 || UnionArray.back() != b[j]){
                UnionArr.push_back(b[j]);
            }
            j++;
        }
        

        while(j<n2){
            if(UnionArray.size()==0 || UnionArray.back() != b[j]){
                UnionArr.push_back(b[j]);
            }
            j++;
        }

        while(i<n1){
            if(UnionArray.size()==0 || UnionArray.back() != a[i]){
                UnionArr.push_back(a[i]);
            }
            i++;
        }
    }
}