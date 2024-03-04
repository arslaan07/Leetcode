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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr != NULL) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* temp = dummy;
        ListNode* l = head;
        int i=1;
        ListNode* beforeLeft;
        while(i < left) {
            beforeLeft = l;
            l= l->next;
            i++;
        }
        ListNode* r = l;
        int j = right-left;
        while(j--) {
            r = r->next;
        }
        ListNode* afterRight = r->next;
        r->next = NULL;
        ListNode* revHead = reverse(l);
        l->next = afterRight;
        beforeLeft->next = r;
        return dummy->next;
    }
};