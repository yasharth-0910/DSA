//counting sort

#include <bits/stdc++.h>

using namespace std;

void counting_sort(int arr[], int n, int exp){
    int output[n];
    int count[10] = {0};

    for(int i=0; i<n; i++){
        count[(arr[i]/exp)%10]++;
    }

    for(int i=1; i<10; i++){
        count[i] += count[i-1];
    }

    for(int i=n-1; i>=0; i--){
        output[count[(arr[i]/exp)%10]-1] = arr[i];
        count[(arr[i]/exp)%10]--;
    }

    for(int i=0; i<n; i++){
        arr[i] = output[i];
    }
}


void radix_sort(int arr[], int n){
    int max = *max_element(arr, arr+n);

    for(int exp=1; max/exp > 0; exp*=10){
        counting_sort(arr, n, exp);
    }
}

int main(){

    int n;
    cin >>n;

    int arr[n];

    for (int i = 0; i < n; i++) cin>>arr[i];

    radix_sort(arr, n);

    for (int i = 0; i < n; i++) cout<<arr[i]<<" ";
    

    return 0;
}