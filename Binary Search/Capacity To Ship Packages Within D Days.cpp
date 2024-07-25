//Brute Force

class Solution {
    public:
        int shipWithinDays(vector<int>& weights, int days) {
            
            //brute force

            int n = weights.size();
            int sum = 0;
            for(int i=0; i<n; i++){
                sum += weights[i];
            }


            int ans = INT_MAX;
            for(int i=1; i<=sum; i++){
                int temp = 0;
                int d = 1;
                for(int j=0; j<n; j++){
                    temp += weights[j];
                    if(temp > i){
                        d++;
                        temp = weights[j];
                    }
                }
                if(d <= days){
                    ans = min(ans, i);
                }
            }
        return ans;
    }      
};




class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int i = *max_element(weights.begin(), weights.end());
        int j = accumulate(weights.begin(), weights.end(), 0);

        while (i <= j) {
            int mid = i + (j - i) / 2;
            int noOfDays = function(weights, mid);

            if (noOfDays <= days) {
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        return i;
    }

    int function(vector<int>& weights, int mid) {
        int temp = 0;
        int days = 1;
        for (int i = 0; i < weights.size(); i++) {
            temp += weights[i];
            if (temp > mid) {
                days++;
                temp = weights[i];
            }
        }
        return days;
    }
};
