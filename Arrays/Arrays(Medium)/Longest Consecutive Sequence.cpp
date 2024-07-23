// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.

 

// Example 1:

// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
// Example 2:

// Input: nums = [0,3,7,2,5,8,4,6,0,1]
// Output: 9
 


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> s;
        
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        
        int res = 0;
        
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1) == s.end()){
                int j = nums[i];
                while(s.find(j) != s.end()){
                    j++;
                }
                res = max(res,j-nums[i]);
            }
        }
        
        return res;

    }
};