#include <bits/stdc++.h>

using namespace std;

int secondLargest(vector<int> &a , int n){

    int largest = a[0];
    int slargest = -1;
    for(int i=0; i<n;i++){
        if(a[i] > largest){
            slargest = largest;
            largest = a[i];
        }
        else if(a[i] > slargest && a[i] != largest){
            slargest = a[i];
        }
    }
    return slargest;
}


int secondsmallest(vector<int> &a , int n){

    int smallest = a[0];
    int ssmallest = INT_MAX;
    for(int i=0; i<n;i++){
        if(a[i] < smallest){
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] < ssmallest && a[i] != smallest){
            ssmallest = a[i];
        }
    }
    return ssmallest;
}


vector <int> getSecondOrderElement(int n, vector<int> a){
    int slarget= secondLargest(a, n);
    int ssmallest= secondSmallest(a, n);
    return(largest, ssmallest);
}
