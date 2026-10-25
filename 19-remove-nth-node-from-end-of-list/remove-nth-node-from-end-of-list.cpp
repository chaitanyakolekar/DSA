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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        int N=(count-n)+1;
        if(head->next==NULL && N==1){
            return NULL;
        }
        if( N==1){
            return head->next;
        }

        ListNode*temp1=head;
        while(N>2){
            temp1=temp1->next;
            N--;
        }

        ListNode*front=temp1->next;
        ListNode*last=front->next;
        
        temp1->next=NULL;
        front->next=NULL;
    
        temp1->next=last;
        delete front;
        return head;
    }
  
};