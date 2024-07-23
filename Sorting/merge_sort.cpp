#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &arr, int low, int high, int mid){

    vector <int> temp;

    int left = low;
    int right = mid + 1;
    while(left <= mid && right <= high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }

}

void qs(vector<int> &arr, int low, int high){
    
    if (low < high){
        int pindex = partition(arr, low, high);
        qs(arr, low, pindex-1);
        qs(arr, pindex+1, high);
    }
}
    

void mergesort(vector<int> &arr, int low, int high){
    
    if(l>=r) return;
    int mid = (low + high)/2;
    mergesort(arr, low, mid);
    mergesort(arr, m+1, high);
    merge(arr, low, mid, high);
}

