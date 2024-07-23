class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int counter = 0;

        unordered_map<int, int> mp;

        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }

        for(auto x: mp){
            if(x.second == 1){
                return x.first;
            }
        }

        return -1;
    }
};

//Time complexity: O(n)
//Space complexity: O(n)

//Binary search

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low =0;
        int high = n-1;

        while(low <= high){
            int mid = (high + low)/2;

            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                return nums[mid];
            }

            if(mid % 2 == 0){
                if(nums[mid] == nums[mid+1]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
            else{
                if(nums[mid] == nums[mid-1]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }

        return -1;  
    }

};

//Time complexity: O(logn)
//Space complexity: O(1)