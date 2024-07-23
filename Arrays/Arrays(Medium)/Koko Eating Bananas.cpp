class Solution {
public:

    int findMax(vector<int>& piles) {
        int max = 0;
        for (int i = 0; i < piles.size(); i++) {
            if (piles[i] > max) {
                max = piles[i];
            }
        }
        return max;
    }

    int CalculateHours(vector<int>& piles, int k) {
        int hours = 0;
        for (int i = 0; i < piles.size(); i++) {
            hours += ceil(piles[i] / k);
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = findMax(piles);
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (CalculateHours(piles, mid) > h) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return left;
    }


};