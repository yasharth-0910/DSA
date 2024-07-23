#include <bits/stdc++.h>

using namespace std;

vector<int> moveZeroes(vector<int> &a, int n){
    
    int j = -1;

    for(int i =0;i<n;i++){
        if (a[i]==0)
        {
            j=i;
            break;
        }
        
    }
    //no non zero element found
    if(j==-1){
        return a;
    }

    for(int i=0; i<n; i++){
        if(a[i] != 0){
            j++;
            swap(a[i], a[j]);
        }
    }

}

//Leetcode answer
void moveZeroes(vector<int>& nums) {
    int j = -1;

    for(int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            j = i;
            break;
        }
    }

    // no non-zero element found
    if(j == -1) {
        return;
    }

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != 0) {
            j++;
            swap(nums[i], nums[j]);
        }
    }
}

