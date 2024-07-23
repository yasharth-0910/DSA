class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> hash;
        vector<int> result;

        for(int i = 0; i < n; i++){
            hash[nums[i]]++;
        }

        for(auto it = hash.begin(); it != hash.end(); it++){
            if(it->second > n/3){
                result.push_back(it->first);
            }
        }

        return result;
    }
};
