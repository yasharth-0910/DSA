class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();

        int low = 0;
        int high = n-1;
        int ans = INT_MAX;
        int index = -1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(nums[mid] < ans){
                ans = nums[mid];
                index = mid;
            }

            if(nums[low] <= nums[mid]){
                ans = min(ans, nums[low]);
                low = mid+1;
            }
            else{
                ans = min(ans, nums[mid]);
                high = mid-1;
            }
        }

        return ans;


    }
};