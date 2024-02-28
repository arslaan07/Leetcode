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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = head;
        while(curr != NULL) {
            ListNode* currNext = curr->next;
            ListNode* temp = dummy;
            while(temp->next != NULL && temp->next->val < curr->val) {
                temp = temp->next;
            }
            curr->next = temp->next;
            temp->next = curr;
            curr = currNext;
        }
        return dummy->next;
    }
};