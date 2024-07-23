//check if an array is sorted or not

#include <bits/stdc++.h>

using namespace std;

int inSorted(vector<int> &a, int n){
    for(int i=1; i<n; i++){
        if(a[i] > a[i-1]){
            return 0;
        }
    }
    return 1;
}

//Remove duplicates from a sorted array

int removeDuplicates(vector<int> &a, int n){
    int j=0;
    for(int i=0; i<n-1; i++){
        if(a[i] != a[i+1]){
            a[j++] = a[i];
        }
    }
    a[j++] = a[n-1];
    return j;
}

