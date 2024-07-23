#include <bits/stdc++.h>

using namespace std;

void leftRotate(vector<int> &a, int n, int d){
    
    d = d % n;
    int temp[d];

    for(int i=0; i<d; i++){
        temp[i] = a[i];
    }

    for(int i=d; i<n; i++){
        a[i-d] = a[i];
    }

    for(int i=0; i<d; i++){
        a[n-d+i] = temp[i];
    }
    //another way to implement this loop is

    for(int i = n-d; i<n; i++){
        a[i] = temp[i-n+d];
    }
}

void rightRotate(vector<int> &a, int n, int d){
    
    d = d % n;
    int temp[d];

    for(int i=0; i<d; i++){
        temp[i] = a[n-d+i];
    }

    for(int i=n-d-1; i>=0; i--){
        a[i+d] = a[i];
    }

    for(int i=0; i<d; i++){
        a[i] = temp[i];
    }
}

void leftRotatebyRevserse(vector<int> &a, int n, int d){
    reverse(a.begin(), a.begin()+d);
    reverse(a.begin()+d, a.end());
    reverse(a.begin(), a.end());
}


voidRightRotatebyReverse(vector<int> &a, int n, int d){
    reverse(a.begin(), a.begin()+n-d);
    reverse(a.begin()+n-d, a.end());
    reverse(a.begin(), a.end());
}