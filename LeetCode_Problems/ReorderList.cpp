// problem link
// https://leetcode.com/problems/reorder-list/description/


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
    void construct(ListNode* temp, vector<int>& arr){
        if(temp == nullptr){
            return ;
        }

        while(temp != nullptr){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        return ;
    }
    void reorderList(ListNode* head) {
        vector<int> res;
        // ListNode* temp = head;
        construct(head, res);

        int t1 = 0, t2 = res.size()-1;
        ListNode* temp = head;

        while(t1 < t2){
            temp->val = res[t1];
            temp = temp->next;
            temp->val = res[t2];
            temp = temp->next;

            t1++;
            t2--;
        }

        if(res.size()%2 == 1 && t1 == t2){
            temp->val = res[t1];
        }
        return;
    }
};