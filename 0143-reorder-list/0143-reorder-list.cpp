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
    ListNode* reorderLL(ListNode* head) {
	if(head == NULL || head->next == NULL || head->next->next == NULL) {
		return head;
	}
	ListNode* newHead = head->next;
	ListNode* temp = head;
	while(temp->next->next != NULL) {
		temp = temp->next;
	}
	head->next = temp->next;
	temp->next = NULL;
	ListNode* headFromMyFriend = reorderLL(newHead);
	head->next->next = headFromMyFriend;
	return head;
}
    void reorderList(ListNode* head) {
        head = reorderLL(head);
        return;
    }
};