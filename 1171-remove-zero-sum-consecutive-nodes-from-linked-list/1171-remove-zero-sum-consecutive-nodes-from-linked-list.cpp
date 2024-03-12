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
    ListNode* removeZeroSumSublists(ListNode* head) {
        int prefixSum = 0;
        unordered_map<int, ListNode*> mpp;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        mpp[0] = dummy;
        while(head != NULL) {
            prefixSum += head->val;
            if(mpp.find(prefixSum) != mpp.end()) {
                ListNode* start = mpp[prefixSum];
                ListNode* temp = start;
                int pSum = prefixSum;
                while(temp != head) {
                    temp = temp->next;
                    pSum += temp->val;
                    if(temp != head) {
                        mpp.erase(pSum);
                    }
                }
                start->next = head->next;
            }
            else {
                mpp[prefixSum] = head;
            }
            head = head->next;
        }
        return dummy->next;
    }
};