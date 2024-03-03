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
    ListNode* getK(ListNode* head, int k) {
        ListNode* slow = head;
        ListNode* fast = head;
        int j = 1;
        while(fast != NULL && j <= k) {
            fast = fast->next;
            j++;
        }
        while(fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) {
            return head;
        }
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* k = getK(dummy, n+1);
        k->next = k->next->next;
        return dummy->next;
    }
};