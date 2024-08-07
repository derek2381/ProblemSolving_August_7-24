// problem link
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> arr;
        construct(head, arr);

       int size = arr.size();

       if(n == size){
        return head->next;
       }

       ListNode *temp = head, *prev = nullptr;

       for(int i = 0;i < arr.size();i++){
            if(n == arr.size()-i){
                prev->next = temp->next;
                break;
            }else{
                prev = temp;
                temp = temp->next;
            }
       }

       return head;
    }
};