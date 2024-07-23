class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int divisor =1;
        sort(nums.begin(), nums.end());
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());

        int sum;

        while(left <= right){
            int mid = (left + right)/2;
            sum =0;
            for(int i = 0; i < n; i++){
                sum += ceil((double)nums[i] / mid);
            }

            if(sum > threshold){
                left = mid + 1;
            }else{
                divisor = mid;
                right = mid - 1;
            }
        }

        return divisor;


    }

};

//TC = O(nlogn)
//SC = O(1)



//this solution better than the above one, and beats 94% of the solutions

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int i=1, j=INT_MAX;
        while(i<j){
            int mid=i+(j-i)/2;
            int cnt=0;
            for(auto it: nums){
                cnt+=(it/mid)+(it%mid!=0);
            }
            if(cnt>threshold){
                i=mid+1;
            }
            else{
                j=mid;
            }
        }
        return i;
    }
};