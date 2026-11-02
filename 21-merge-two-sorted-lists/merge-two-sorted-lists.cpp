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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*temp1=list1;
        ListNode*temp2=list2;
        if(temp1==NULL){
            return list2;
        }
        if(temp2==NULL){
            return list1;
        }
        ListNode*nw=new ListNode();
        
        if((temp1->val)<=(temp2->val)){
            nw=temp1;
            temp1=temp1->next;
        }
        else{
            nw=temp2;
            temp2=temp2->next;
        }
        ListNode*head=nw;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val <=temp2->val){
                
                nw->next=temp1;
                nw=temp1;
                temp1=temp1->next;
            }
            else{
                
                nw->next=temp2;
                nw=temp2;
                
                temp2=temp2->next;
            }

        }
        if(temp1!=NULL){
           
                nw->next=temp1;
                
        }
        if(temp2!=NULL){
             
                nw->next=temp2;
               
        }
        return head;
    }
};