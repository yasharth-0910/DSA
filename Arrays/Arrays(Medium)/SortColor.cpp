// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.

// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Example 2:

// Input: nums = [2,0,1]
// Output: [0,1,2]



class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;

        for(int i=0;i<=right;i++){
            if(nums[i] == 0){
                swap(nums[i],nums[left]);
                left++;
            }
            else if(nums[i] == 2){
                swap(nums[i],nums[right]);
                right--;
                i--;
            }
        }
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

// Dutch National Flag Algorithm

// The problem is a variation of Dutch National Flag problem. We can solve this problem using Dutch National Flag Algorithm that is used to sort an array of 0’s, 1’s, and 2’s. The algorithm follows the steps below:

// Initialize three pointers low, mid, and high. low and mid are initialized with 0 and high is initialized with n-1, where n is the size of the array.
// Iterate the array until mid is less than or equal to high.
// If the mid element is 0, swap the mid element with the low element and increment low and mid by 1.
// If the mid element is 1, increment mid by 1.
// If the mid element is 2, swap the mid element with the high element and decrement high by 1. Do not increment mid in this case as the swapped element is not processed yet.

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n-1;

        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

