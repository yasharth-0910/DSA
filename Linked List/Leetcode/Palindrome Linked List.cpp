// 234. Palindrome Linked List
// Easy
// Topics
// Companies
// Given the head of a singly linked list, return true if it is a 
// palindrome
//  or false otherwise.

 

// Example 1:


// Input: head = [1,2,2,1]
// Output: true
// Example 2:


// Input: head = [1,2]
// Output: false
 

// Constraints:

// The number of nodes in the list is in the range [1, 105].
// 0 <= Node.val <= 9
 

// Follow up: Could you do it in O(n) time and O(1) space?


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

//Approach 1: Array Approach
class Solution {
public:
    bool isPalindrome(ListNode* head) {

        vector<int> arr;

        while(head != NULL){
            arr.push_back(head -> val);
            head = head -> next;
        }

        int i = 0;

        int j = arr.size() - 1;

        while(i < j){
            if(arr[i] != arr[j]){
                return false;
            }
            i++;
            j--;
        }

        return true;


    }
};

//TC: O(N)
//SC: O(N)

//Approach 2: Reversing the second half of the linked list

//TC: O(N)
//SC: O(1)

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        if(head == NULL || head -> next == NULL){
            return true;
        }
        // Find the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast -> next != NULL && fast -> next -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        // Reverse the second half of the linked list
        slow -> next = reverse(slow -> next);
        
        slow = slow -> next;
        
        fast = head;
        
        while(slow != NULL){
            if(fast -> val != slow -> val){
                return false;
            }
            fast = fast -> next;
            slow = slow -> next;
        }
        
        return true;
        
    }
    
    ListNode* reverse(ListNode* head){
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* fast = head -> next;
        
        while(fast != NULL){
            curr -> next = prev;
            prev = curr;
            curr = fast;
            fast = fast -> next;
        }
        
        curr -> next = prev;
        
        return curr;
    }
};
