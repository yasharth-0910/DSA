class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        //matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]]
        int n = matrix.size();  // 3
        int m = matrix[0].size(); // 4

        int left = 0;
        int right = n*m - 1; 

        while( left <= right){
            int mid = left + (right - left)/2; // 5 

            int midElement = matrix[mid/m][mid%m]; // 5/4 = 1, 5%4 = 1 => matrix[1][1] = 11

            if(midElement == target){
                return true;
            } else if(midElement < target){
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
};