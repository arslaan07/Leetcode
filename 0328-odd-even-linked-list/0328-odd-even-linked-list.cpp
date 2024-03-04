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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenTemp = even;
        while(odd->next != NULL && evenTemp->next != NULL) {
            odd->next = evenTemp->next;
            evenTemp->next = odd->next->next;
            odd = odd->next;
            evenTemp = evenTemp->next;
        }
        odd->next = even;
        return head;
    }
};