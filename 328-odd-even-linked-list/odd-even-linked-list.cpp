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
    ListNode* oddEvenList(ListNode* head) {
        ListNode*front1=NULL;
        ListNode*front2=NULL;
        ListNode*head1=NULL;
        ListNode*head2=NULL;
        ListNode*temp=head;
        int count=0;
        if(head==NULL){
            return NULL;
        }
        while(temp){
            count++;
            if(count%2!=0){
                ListNode*nw1=new ListNode(temp->val);
                if(count==1){
                    head1=nw1;
                    front1=nw1;
                    temp=temp->next;
                }
                else{
                    front1->next=nw1;
                    front1=nw1;
                    temp=temp->next;
                }
            }
            else{
               ListNode*nw2=new ListNode(temp->val);
               if(count==2){
                head2=nw2;
                front2=nw2;
                temp=temp->next;
               }
               else{
                front2->next=nw2;
                front2=nw2;
                temp=temp->next;
               }

            }
        }
        ListNode*temp1=head1;

        while(temp1->next){
            temp1=temp1->next;
        }
        temp1->next=head2;
        return head1;
    }
};