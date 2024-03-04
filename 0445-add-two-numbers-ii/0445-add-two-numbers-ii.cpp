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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1;
        stack<int> s2;
        vector<int> ans;
        ListNode* temp = l1;
        while(temp != NULL) {
            s1.push(temp->val);
            temp = temp->next;
        }
        temp = l2;
        while(temp != NULL) {
            s2.push(temp->val);
            temp = temp->next;
        }
        int carry = 0;
        while(!s1.empty() && !s2.empty()) {
            int sum = s1.top() + s2.top() + carry;
            ans.push_back(sum%10);
            carry = sum/10;
            s1.pop();
            s2.pop();   
        }
        while(!s1.empty()) {
            int sum = s1.top() + carry;
            ans.push_back(sum%10);
            carry = sum/10;
            s1.pop(); 
        }
        while(!s2.empty()) {
            int sum = s2.top() + carry;
            ans.push_back(sum%10);
            carry = sum/10;
            s2.pop(); 
        }
        if(carry) {
            ans.push_back(1);
        }
        ListNode* dummy = new ListNode(0);
        temp = dummy;
        for(int i=ans.size()-1; i>=0; i--) {
            temp->next = new ListNode(ans[i]);
            temp = temp->next;
        }
        return dummy->next;
    }
};