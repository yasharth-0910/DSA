// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
 

    class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int n = nums.size();
            unordered_map<int, int> hash;

            for (int i = 0; i < n; i++) {
                hash[nums[i]]++;
            }

            for (auto it = hash.begin(); it != hash.end(); ++it) {
                if (it->second > n / 2) {
                    return it->first;
                }
            }

            return -1;
        }
    };
//Monne voting algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;
        
        for(int i=0;i<nums.size();i++){
            if(count == 0){
                candidate = nums[i];
            }
            if(nums[i] == candidate){
                count++;
            }
            else{
                count--;
            }
        }
        
        return candidate;
    }
};