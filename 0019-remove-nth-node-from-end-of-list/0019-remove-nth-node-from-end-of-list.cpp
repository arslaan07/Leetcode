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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) {
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        int j = 1;
        while(fast != NULL && j <= n) {
            fast = fast->next;
            j++;
        }
        if(fast == NULL) {
            return head->next;
        }
        while(fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};