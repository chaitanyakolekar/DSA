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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode*temp=head;
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        
        int count=1;
        while(temp->next){
            count++;
            temp=temp->next;
        }
        int y=k%count;
        ListNode*tail=temp;
        tail->next=head;
        temp=head;
        int x=count-y;
        while(x>1){
            temp=temp->next;
            x--;
        }
        ListNode*nwhead=temp->next;
        temp->next=nullptr;
        return nwhead;
    }
};