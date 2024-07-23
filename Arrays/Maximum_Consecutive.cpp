int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximum=0;
        int counter =0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]== 1){
                counter++;
                maximum = max(maximum,counter);
            }
            else{
                counter=0;
            }
        }

    return maximum;
}

//what fn we can perform on vectors

// 1. push_back() - O(1)
// 2. pop_back() - O(1)
// 3. insert() - O(n)
// 4. erase() - O(n)
// 5. clear() - O(n)
// 6. empty() - O(1)
// 7. size() - O(1)
// 8. front() - O(1)
// 9. back() - O(1)
// 10. begin() - O(1)
// 11. end() - O(1)
// 12. rbegin() - O(1)
// 13. rend() - O(1)
// 14. [] - O(1)
// 15. at() - O(1)
// 16. swap() - O(1)
// 17. emplace() - O(1)
// 18. emplace_back() - O(1)
// 19. resize() - O(n)
// 20. reserve() - O(n)