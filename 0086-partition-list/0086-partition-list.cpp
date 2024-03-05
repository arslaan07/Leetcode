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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy1 = new ListNode(0);
        ListNode* temp1 = dummy1;
        ListNode* dummy2 = new ListNode(0);
        ListNode* temp2 = dummy2;
        while(head != NULL) {
            if(head->val < x) {
                temp1->next = head;
                temp1 = temp1->next;
            }
            else {
                temp2->next = head;
                temp2 = temp2->next;
            }
            head = head->next;
        }
        temp2->next = NULL;
        temp1->next = dummy2->next;
        return dummy1->next;
    }
};