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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        head = head->next;
        while(head!= NULL){
            int sum = 0;
            while(head->val!=0){
                sum += head->val;
                head = head->next;
            }
            tail->next = new ListNode(sum);
            tail = tail->next;
            head = head->next;
        }
        return dummy->next;
    }
};