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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        stack<ListNode*> st;
        ListNode* temp = slow->next;
        slow->next = NULL;
        while(temp != NULL) {
            st.push(temp);
            temp = temp->next;
        }
        ListNode* curr = head;
        while(!st.empty()) {
            temp = curr->next;
            curr->next = st.top();
            st.pop();
            curr->next->next = temp;
            curr = temp;
        }
        return;
    }
};