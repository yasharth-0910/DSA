class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<double> combinedArray;

        int i = 0, j = 0;

        // merge the two arrays
        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] < nums2[j]) {
                combinedArray.push_back(nums1[i]);
                i++;
            } else {
                combinedArray.push_back(nums2[j]);
                j++;
            }
        }
        // if there are any elements left in the first array
        while(i < nums1.size()) {
            combinedArray.push_back(nums1[i]);
            i++;
        }
        // if there are any elements left in the second array
        while(j < nums2.size()) {
            combinedArray.push_back(nums2[j]);
            j++;
        }

       int n = combinedArray.size();  // num1 = {1, 3} num2 = {2} => combinedArray = {1, 2, 3} => n = 3
 
       if(n % 2 == 1) {
           return combinedArray[n/2];  // 3/2 = 1 => 2
       } else {
           return (combinedArray[n / 2 + 1] + combinedArray[n / 2]) / 2.0;
       }
    }
};