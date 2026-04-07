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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        for(int i =1;i<a;i++) list1 = list1-> next;
        ListNode* as = list1;
        for(int i =0;i<b-a+2;i++){
            list1 = list1->next;
        }
        as->next = list2;
        while(list2->next !=NULL){
            list2 = list2->next;
        }
        ListNode* bs = list1;
        list2->next = bs;
        return temp;

    }
};