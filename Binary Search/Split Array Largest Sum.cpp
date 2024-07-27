// Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.

// Return the minimized largest sum of the split.

// A subarray is a contiguous part of the array.

 

// Example 1:

// Input: nums = [7,2,5,10,8], k = 2
// Output: 18
// Explanation: There are four ways to split nums into two subarrays.
// The best way is to split it into [7,2,5] and [10,8], where the largest sum among the two subarrays is only 18.
// Example 2:

// Input: nums = [1,2,3,4,5], k = 2
// Output: 9
// Explanation: There are four ways to split nums into two subarrays.
// The best way is to split it into [1,2,3] and [4,5], where the largest sum among the two subarrays is only 9.
 


//dont make any functions, just write the code in the class
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        
        int left = 0;
        int right = 0;

        for( int i =0 ; i< nums.size(); i++){
            left = *max_element(nums.begin(), nums.end());
            right = accumulate(nums.begin(), nums.end(), 0); // 
        } // nums = [7,2,5,10,8], k = 2 // left = 10, right = 32 => how will array look => 

        while(left <= right){
            int mid = left+ (right - left)/2;

            

        }
    }
};
