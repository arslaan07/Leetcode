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
class Solution {
public:
    ListNode* helper(ListNode* prev, ListNode* curr) {
        // base case
        if(curr == NULL) {
            return prev;
        }
        // recursive case
        ListNode* temp = curr->next;
        curr->next = prev;
        return helper(curr, temp);
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* revHead = helper(NULL, head);
        return revHead;
    }
};