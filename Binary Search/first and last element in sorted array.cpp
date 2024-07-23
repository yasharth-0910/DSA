class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low =0;
        int high = n-1;
        vector<int> result;

        while( low <= high){
            int mid = (high + low)/2;

            if(nums[mid]== target){
                int start = mid;
                int end = mid;

                while(start >= 0 && nums[start] == target){
                    start--;
                }

                while(end < n && nums[end] == target){
                    end++;
                }

                result.push_back(start+1);
                result.push_back(end-1);
                return result;
            }
            else if(nums[mid] < target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }

        }

        result.push_back(-1);
        result.push_back(-1);

        return result;
    }
};