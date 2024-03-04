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
        ListNode* oddTemp = odd;
        ListNode* even = head->next;
        ListNode* evenTemp = even;
        while(oddTemp->next != NULL && evenTemp->next != NULL) {
            oddTemp->next = evenTemp->next;
            if(oddTemp->next != NULL)
            oddTemp = oddTemp->next;
            evenTemp->next = oddTemp->next;
            if(evenTemp->next != NULL)
            evenTemp = evenTemp->next;
        }
        oddTemp->next = even;
        return odd;
    }
};