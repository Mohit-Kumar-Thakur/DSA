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
    int pairSum(ListNode* head) {
        vector<int> data;
        int max_sum = 0;
        while(head){
            data.push_back(head->val);
            head = head->next;
        }
        for(int i =0;i<data.size();i++){
            int sum = data[i]+data[data.size()-i-1];
            max_sum = max(max_sum,sum);
        }
        return max_sum;
    }
};