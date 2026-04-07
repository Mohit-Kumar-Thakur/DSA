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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while(head->next != NULL){
            ListNode* newnode = new ListNode(gcd(head->val,head->next->val));
            newnode->next = head->next;
            head->next = newnode;
            head = newnode->next;
        }
        return temp;
    }
};