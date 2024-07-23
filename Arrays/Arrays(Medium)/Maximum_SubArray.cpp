// Given an integer array nums, find the 
// subarray
//  with the largest sum, and return its sum.

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.
// Example 2:

// Input: nums = [1]
// Output: 1
// Explanation: The subarray [1] has the largest sum 1.
// Example 3:

// Input: nums = [5,4,-1,7,8]
// Output: 23
// Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maximum = INT_MIN;
        int sum = 0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            for(int j =i ; j<n ;j++){
                sum += nums[j];
                maximum = max(maximum,sum); 
            }
        }

        return maximum; // Add a return statement to return the maximum sum
    }
};

//Kadane's Algorithm (Optimal)

class Solution {

    public:
        int maxSubArray(vector<int>& nums){
            
    }

};