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
       ListNode* faltuNode = node->next;
       node->val = faltuNode->val;
       node->next = faltuNode->next;
       faltuNode->next = NULL;
       delete faltuNode;
       
    }
};