//Better Approach: Using Hashing

string read(int n, vector<int> book, int target){
    map<int,int> mpp;

    for(int i =0;i<n;i++){
        int a = book[i];
        int more = target -a;
        if(mpp.find(more) != mapp.end()){
            return "Yes"
        }
        mpp[a]  = i;

    }

    return "NO"
}

//Optimal Approach --> Two pointer

string read(int n, vector<int> book, int target){
    sort(book.begin(),book.end());
    int left = 0;
    int right = n-1;

    while(left < right){
        int sum = book[left] + book[right];
        if(sum == target){
            return "Yes";
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }
    return "No";
}

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target) {
                return {left, right};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {};
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (mpp.find(complement) != mpp.end()) {
                return { mpp[complement], i };
            }
            mpp[nums[i]] = i;
        }

        return {};
    }
};


// Time Complexity: O(n)
// Space Complexity: O(n)

