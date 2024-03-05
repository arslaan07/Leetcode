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
    int getLength(ListNode* head) {
        int cnt = 0;
        while(head != NULL) {
            head = head->next;
            cnt++;
        }
        return cnt;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n = getLength(head);
        if(head == NULL || n < k) {
            return head;
        }

        ListNode* prev = NULL;
        ListNode* curr = head;
        int j = 0;
        while(curr != NULL && j < k) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            j++;
        }
        ListNode* headFromMyFriend = reverseKGroup(curr, k);
        head->next = headFromMyFriend;
        return prev;
    }
};