/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
      
         if(head==NULL){
            return false;
        }
        if(head->next==NULL ){
            return false;
        }
         ListNode*slow=head->next;
        ListNode*fast=head->next->next;
        while(slow!=fast){
            if(fast==NULL || fast->next==nullptr){
                return false;
            }
            slow=slow->next;
            fast=fast->next->next;

        }
        return true;
    }
};