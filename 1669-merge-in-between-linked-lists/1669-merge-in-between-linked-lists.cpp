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
    ListNode* getNode(ListNode* head, int k) {
        int j = 0;
        while(j < k) {
            head = head->next;
            j++;
        }
        return head;
    }
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* nodeBeforeA = getNode(list1, a-1);
        ListNode* nodeAfterB = getNode(nodeBeforeA, (b+1)-(a-1));
        nodeBeforeA->next = list2;
        while(list2->next != NULL) {
            list2 = list2->next;
        }
        list2->next = nodeAfterB;
        return list1;
    }
};