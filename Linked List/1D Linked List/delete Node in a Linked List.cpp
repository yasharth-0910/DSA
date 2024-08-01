/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {        
        node->val = node->next->val;
        node->next = node->next->next;

        
    }

};

        // if(node == NULL) return;
        // if(node->next == NULL) return;


//void printList(ListNode* node) {
    //     while (node != NULL) {
    //         cout << node->val << " ";
    //         node = node->next;
    //     }
    //     cout << endl;
    // }