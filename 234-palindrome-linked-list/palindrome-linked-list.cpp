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
ListNode* reverse(ListNode*hed){
    if(hed->next==NULL){
        return hed;
    }
    ListNode*node=NULL;
    while(hed){
        ListNode*temp=hed->next;
        hed->next=node;
        node=hed;
        hed=temp;
    }
    return node;
}
    bool isPalindrome(ListNode* head) {
        if(head->next==nullptr || head==nullptr){
            return true;
        }
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*nwhead=reverse(slow->next);
        ListNode*temp1=head;
        ListNode*temp2=nwhead;

        while(temp2!=NULL){
            if(temp1->val != temp2->val){
                return false;
            }
            else{
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        return true;
    }
};