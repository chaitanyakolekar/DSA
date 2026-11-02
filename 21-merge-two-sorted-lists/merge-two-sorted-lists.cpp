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
       
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        ListNode*nw=new ListNode();
        
        if((list1->val)<=(list2->val)){
            nw=list1;
            list1=list1->next;
        }
        else{
            nw=list2;
            list2=list2->next;
        }
        ListNode*head=nw;
        while(list1!=NULL && list2!=NULL){
            if(list1->val <=list2->val){
                
                nw->next=list1;
                nw=list1;
                list1=list1->next;
            }
            else{
                
                nw->next=list2;
                nw=list2;
                
                list2=list2->next;
            }

        }
        if(list1!=NULL){
           
                nw->next=list1;
                
        }
        if(list2!=NULL){
             
                nw->next=list2;
               
        }
        return head;
    }
};