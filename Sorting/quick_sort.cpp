#include <bits/stdc++.h>

using namespace std;

void partition(vector<int> &arr, int low, int high){
    if(low >= high) return;
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= pivot && i <= high-1) i++;
        while(arr[j] > pivot && j >= low+1) j--;

        if(i < j) swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    qs(arr, low, j-1);
    qs(arr, j+1, high);
}

void qs

vector <int> quicksort(vector<int>, arr){

    qs(arr, 0, arr.size()-1);
    return arr;
}