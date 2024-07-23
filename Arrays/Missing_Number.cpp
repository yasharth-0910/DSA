#include <bits/stdc++.h>

using namespace std;

//Better 

//hashing

int missingNumber(vector<int> &a, int n){
    hash[n+1] = {0};
    for(int i=0; i<n; i++){
        hash[a[i]] = 1;
    }

    for(int i=1; i<=n; i++){
        if(hash[i] == 0){
            return i;
        }
    }
}

//Time complexity: O(n)
//Space complexity: O(n)

//Optimal

//XOR
int missingNumber(vector<int>& nums) {

    int N = nums.size();  
    int n =N-1;

    int XOR1 = 0;
    int XOR2 = 0;

    for(int i=0; i<n; i++){
        XOR2 = XOR2 ^ nums[i];
        XOR1= XOR1 ^ (i+1);
    }

    XOR1 = XOR1 ^ N;
    return XOR1 ^ XOR2;

}


