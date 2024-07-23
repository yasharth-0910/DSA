//Iterative Binary Search
    
    class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int n = nums.size();
            int low =0;
            int high = n-1;

            while(low <= high){
                int mid = low + (high - low)/2;

                if(nums[mid] == target){
                    return mid;
                }
                else if(nums[mid] < target){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }

            return -1;
        }
    };

//Recursive Binary Search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return binarySearch(nums, 0, n-1, target);
    }

    int binarySearch(vector<int>& nums, int low, int high, int target){
        if(low > high){
            return -1;
        }

        int mid = low + (high - low)/2;

        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] < target){
            return binarySearch(nums, mid+1, high, target);
        }
        else{
            return binarySearch(nums, low, mid-1, target);
        }
    }
};